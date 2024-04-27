//
// The PGN (Portable Game Notation) specification for chess games:
//
//   http://www.saremba.de/chessgml/standards/pgn/pgn-complete.htm
//
// commonly-used extensions:
//
//   https://www.enpassant.dk/chess/palview/enhancedpgn.htm
//
// commonly-used annotation glyphs:
//
//   https://en.wikipedia.org/wiki/Numeric_Annotation_Glyphs
//
// Throughout, this grammar is more liberal than the specification.
//

///
/// constants
///

// Canonical character first
//
// We take the effort to rescue numerous HTML entities because the semicolon
// which closes the entity would otherwise introduce a rest-of-line PGN comment,
// throwing off the parse.
const confusables = {
  o: choice('O', '0', 'o'),
  dash: choice(
    '-', html_entity('-'),
    '−', html_entity('−', 'minus'),
    '‐', html_entity('‐', ['hyphen', 'dash']),
    '‑', html_entity('‑'),
    '‒', html_entity('‒'),
    '–', html_entity('–', 'ndash'),
    '—', html_entity('—', 'mdash'),
    '➖', html_entity('➖'),
  ),
  slash: choice(
    '/', html_entity('/', 'sol'),
    '∕', html_entity('∕'),
    '⁄', html_entity('⁄'),
    '⟋', html_entity('⟋'),
    '⧸', html_entity('⧸'),
  ),
  asterisk: choice(
    '*', html_entity('*', ['ast', 'midast']),
    '∗', html_entity('∗', 'lowast'),
    '✱', html_entity('✱'),
    '⁎', html_entity('⁎'),
    '٭', html_entity('٭'),
  ),
  plus: choice(
    '+', html_entity('+', 'plus'),
    '➕', html_entity('➕'),
    '᛭', html_entity('᛭'),
  ),
  half: choice(
    '½', html_entity('½', ['frac12', 'half']),
  ),
};

///
/// grammar
///

module.exports = grammar({
  name: 'pgn',

  ///
  /// conflict rules
  ///

  conflicts: $ => [
    [$.freestanding_comment, $._movetext_element],
    [$.tagpair_value_contents],
  ],

  rules: {

    ///
    /// grammar: series of games
    ///

    // written awkwardly to ensure that at least one game is required to parse
    // a series_of_games, not just a freestanding comment.

    series_of_games: $ => seq(
      repeat(
        seq(
          optional(field('freestanding_comment', $.freestanding_comment)),
          field('game', $.game),
        )),
      optional(field('freestanding_comment', $.freestanding_comment)),
    ),

    ///
    /// grammar: game
    ///

    // http://www.saremba.de/chessgml/standards/pgn/pgn-complete.htm#c8.1
    // "The tag pair section is composed of a series of zero or more tag pairs."
    // which must be supported as it occurs in the wild as well
    //
    // http://www.saremba.de/chessgml/standards/pgn/pgn-complete.htm#c8.2.6
    // "Each movetext section has exactly one game termination marker"
    // which cannot be enforced as games without termination markers are
    // frequent in the wild.
    //
    // Therefore the below requires _either_ a header or a termination
    // marker/result_code.

    game: $ => choice(
      seq(
        field('header', $.header),
        optional($._empty_line),
        field('movetext', $.movetext),
        field('result_code', $.result_code),
      ),
      seq(
        field('header', $.header),
        optional($._empty_line),
        field('result_code', $.result_code),
      ),
      seq(
        field('header', $.header),
        optional($._empty_line),
        field('movetext', $.movetext),
      ),
      seq(
        field('movetext', $.movetext),
        field('result_code', $.result_code),
      )),

    _empty_line: $ => /\r?\n\r?\n/,

    ///
    /// grammar: free-standing comment
    ///

    freestanding_comment: $ => prec(-1,
      repeat1(
        choice(
          $.rest_of_line_comment,
          $.old_style_twic_section_comment,
        ))),

    // Bug: The PGN spec requires that "%" only introduces a comment when placed
    // at the first column of a line.  However,
    //  1) the "%" construct is rarely seen in the wild
    //  2) we are arguably merely "liberal in what we accept"
    // External scanners do have access to an experimental get_column function
    // which could be used to constrain the position of "%".
    rest_of_line_comment_delimiter_open: $ => token(
      choice(
        ';', '%',
      )),

    rest_of_line_comment: $ => seq(
      field('comment_delimiter', $.rest_of_line_comment_delimiter_open),
      field('comment_content', $.rest_of_line_comment_text),
      optional(/\r?\n/),
    ),

    rest_of_line_comment_text: $ => token.immediate(/[^\r\n]*/),

    // Definitely not in the spec, but occurs thousands of times in the most
    // important published collection of master chess games.  The Week in
    // Chess (TWIC) stopped using this markdown-like construct in 2009.
    // Surprisingly, this rule doesn't slow down the parser.
    old_style_twic_section_comment: $ => /[^\r\n]+\r?\n-{4,120}\r?\n/,

    ///
    /// grammar: header
    ///

    header: $ => prec.right(-1,
      seq(
        field('tagpair', $.tagpair),
        repeat(
          choice(
            field('tagpair', $.tagpair),
            field('comment', $.rest_of_line_comment),
            $._empty_line,
          )))),

    tagpair_delimiter_open: $ => '[',

    tagpair_delimiter_close: $ => ']',

    double_quote: $ => '"',

    tagpair: $ => seq(
      field('tagpair_delimiter', $.tagpair_delimiter_open),
      field('tagpair_key', $.tagpair_key),
      $._tagpair_value,
      field('tagpair_delimiter', $.tagpair_delimiter_close),
    ),

    tagpair_key: $ => token(/[^ ]+/),

    _tagpair_value: $ => choice(
      seq(
        field('tagpair_value_delimiter', $.double_quote),
        field('tagpair_value_delimiter', $.double_quote),
      ),
      seq(
        field('tagpair_value_delimiter', $.double_quote),
        field('tagpair_value_contents', $.tagpair_value_contents),
        field('tagpair_value_delimiter', $.double_quote),
      )),

    tagpair_value_contents: $ => repeat1(
      choice(
        token.immediate(/[^"\\\r\n]+/),
        token.immediate(/\\[^\r\n]/),
        '"',
      )),

    ///
    /// grammar: movetext
    ///

    movetext: $ => prec.right(-1,
      repeat1(
        $._movetext_element,
      )),

    variation_movetext: $ => repeat1(
      $._variation_movetext_element,
    ),

    variation_delimiter_open: $ => '(',

    variation_delimiter_close: $ => ')',

    inline_comment_delimiter_open: $ => '{',

    inline_comment_delimiter_close: $ => '}',

    // Todo: Consider enforcing <move_number> <white_move> <black_move> so
    // that <move_number> can appear only in one position.  Note: this would
    // be incompatible with handling crazyhouse and bughouse variants in the
    // same grammar.
    _movetext_element: $ => choice(
      field('move_number', $.move_number),
      field('san_move', $.san_move),
      field('lan_move', $.lan_move),
      field('annotation', $.annotation),
      field('comment', $.inline_comment),
      field('comment', $.rest_of_line_comment),
      $.variation,
    ),

    // Repeated code to give variation moves a distinct field name
    _variation_movetext_element: $ => choice(
      field('variation_move_number', $.move_number),
      field('variation_san_move', $.san_move),
      field('variation_lan_move', $.lan_move),
      field('variation_annotation', $.annotation),
      field('variation_comment', $.inline_comment),
      field('variation_comment', $.rest_of_line_comment),
      $.recursive_variation,
    ),

    variation: $ => seq(
      field('variation_delimiter', $.variation_delimiter_open),
      field('variation_content', optional($.variation_movetext)),
      field('variation_delimiter', $.variation_delimiter_close),
    ),

    recursive_variation: $ => seq(
      field('recursive_variation_delimiter', $.variation_delimiter_open),
      field('recursive_variation_content', optional($.variation_movetext)),
      field('recursive_variation_delimiter', $.variation_delimiter_close),
    ),

    inline_comment: $ => seq(
      field('comment_delimiter', $.inline_comment_delimiter_open),
      field('comment_content', $.inline_comment_text),
      field('comment_delimiter', $.inline_comment_delimiter_close),
    ),

    // We could easily permit backslash-escaped close-curly-brackets within
    // inline commentary, but the spec does not allow it.  Most GUIs convert
    // curly brackets within commentary to parentheses on save.
    inline_comment_text: $ => token.immediate(/[^\}]*/),

    // [AaBb] is for the bughouse variant
    move_number: $ => /\d+[AaBb]?\s*\.[\s\.]*/,

    san_move: $ => seq(
      $._san_move_piece,
      optional($.check_or_mate_condition),
    ),

    _san_move_piece: $ => choice(
      $._san_move_pawn,
      $._san_drop_pawn,
      $._san_move_major_or_minor_piece,
      $._san_drop_major_or_minor_piece,
      $._san_move_castle,
      $._san_null_move,
    ),

    lan_move: $ => seq(
      $._lan_move_by_coordinates,
      optional($.check_or_mate_condition),
    ),

    _san_file: $ => token(
      choice(
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
      )),

    _san_rank: $ => token.immediate(
      choice(
        '1', '2', '3', '4', '5', '6', '7', '8',
      )),

    // Antichess allows promotion to King
    _san_promotable_piece: $ => token.immediate(
      choice(
        'R', 'N', 'B', 'Q', 'K',
        '♖', '♘', '♗', '♕', '♔',
        '♜', '♞', '♝', '♛', '♚',
      )),

    _san_major_or_minor_piece: $ => token(
      choice(
        'R', 'N', 'B', 'Q', 'K',
        '♖', '♘', '♗', '♕', '♔',
        '♜', '♞', '♝', '♛', '♚',
      )),

    // Todo: Consider supporting colon as a postfix capture notation (very obscure).
    // It would occur after the move, but before promotion.
    _san_capture_symbol: $ => token.immediate(
      choice(
        'x', 'X', ':',
      )),

    _san_promotion_symbol: $ => token.immediate('='),

    _san_square: $ => seq(
      $._san_file,
      $._san_rank,
    ),

    _san_promotion: $ => seq(
      optional($._san_promotion_symbol),
      $._san_promotable_piece,
    ),

    _san_move_pawn: $ => seq(
      optional(
        seq(
          $._san_file,
          $._san_capture_symbol,
        )),
      $._san_square,
      optional($._san_promotion),
    ),

    // Limitation: Pawn drops are illegal in the players' respective
    // promotion ranks, but accepted here
    _san_drop_pawn: $ => seq(
      optional(choice('P','♙','♟︎')),
      '@',
      $._san_square,
    ),

    _san_move_major_or_minor_piece: $ => prec.right(-1,
      seq(
        $._san_major_or_minor_piece,
        optional($._san_file),
        optional($._san_rank),
        optional($._san_capture_symbol),
        $._san_square,
      )),

    // Limitation: King drops are illegal, but accepted here
    _san_drop_major_or_minor_piece: $ => prec.right(-1,
      seq(
        $._san_major_or_minor_piece,
        '@',
        $._san_square,
      )),

    _lan_move_by_coordinates: $ => seq(
      $._san_square,
      // Note: UCI LAN format elides the next character, but we don't expect UCI LAN in PGNs
      choice(
        token.immediate(confusables.dash),
        $._san_capture_symbol,
      ),
      $._san_square,
      optional($._san_promotion),
    ),

    _san_move_castle: $ => token(
      seq(
        confusables.o, token.immediate(confusables.dash), token.immediate(confusables.o),
        optional(
          seq(
            token.immediate(confusables.dash), token.immediate(confusables.o),
          )))),

    _san_null_move: $ => token(
      choice(
        seq(
          choice('Z', 'z'),
          token.immediate(confusables.o),
        ),
        seq(
          confusables.dash,
          token.immediate(confusables.dash),
        ),
        seq(
          choice('P', 'p'),
          token.immediate(choice('A', 'a')),
          token.immediate(choice('S', 's')),
          token.immediate(choice('S', 's')),
        ),
      )),

    check_or_mate_condition: $ => token.immediate(
      choice(
        confusables.plus,
        seq(confusables.plus, confusables.plus),
        '#',
      )),

    // Limitation: whitespace is required around "N" annotations to disambiguate cases
    // such as "2. d4 N g6".  For syntax highlighting it should not matter that the
    // annotation span includes whitespace.  In other situations the span may need to
    // be trimmed.
    //
    // Todo: Consider differentiating the subset of annotations which can occur without
    // intervening whitespace, such as "!".
    annotation: $ => token(
      choice(
        /\$\d+/,

        confusables.dash,
        seq(confusables.plus, token.immediate(confusables.dash)),
        seq(confusables.plus, token.immediate(confusables.slash), token.immediate(confusables.dash)),
        seq(confusables.dash, token.immediate(confusables.plus)),
        seq(confusables.dash, token.immediate(confusables.slash), token.immediate(confusables.plus)),

        /\sN\s/,
        'TN',
        'RR',
        'e.p.',
        'ep',

        '==', new RegExp('(' + html_entity('=', 'equals', true) + ')' + '(' + html_entity('=', 'equals', true) + ')'),
        '=', html_entity('=', 'equals'),
        '<=', new RegExp('(' + html_entity('<', 'nvlt',   true) + ')' + '(' + html_entity('=', 'equals', true) + ')'),
        '≤', html_entity('≤', ['le', 'leq']),
        '!!', new RegExp('(' + html_entity('!', 'excl',  true) + ')' + '(' + html_entity('!', 'excl',  true) + ')'),
        '??', new RegExp('(' + html_entity('?', 'quest', true) + ')' + '(' + html_entity('?', 'quest', true) + ')'),
        '!?', new RegExp('(' + html_entity('!', 'excl',  true) + ')' + '(' + html_entity('?', 'quest', true) + ')'),
        '?!', new RegExp('(' + html_entity('?', 'quest', true) + ')' + '(' + html_entity('!', 'excl',  true) + ')'),
        '‽', html_entity('‽'),
        '!', html_entity('!', 'excl'),
        '?', html_entity('?', 'quest'),
        '‼', html_entity('‼'),
        '⁇', html_entity('⁇'),
        '⁉', html_entity('⁉'),
        '⁈', html_entity('⁈'),
        '□', html_entity('□', ['squ', 'square', 'Square']),
        '∞', html_entity('∞', 'infin'),
        '⩲', html_entity('⩲', 'pluse'),
        '⩱', html_entity('⩱', 'eplus'),
        '±', html_entity('±', ['plusmn', 'pm', 'PlusMinus']),
        '∓', html_entity('∓', ['mnplus', 'mp', 'MinusPlus']),
        '⨀', html_entity('⨀', ['xodot', 'bigodot']),
        '○', html_entity('○', 'cir'),
        '⟳', html_entity('⟳'),
        '↑', html_entity('↑', ['uarr', 'uparrow', 'UpArrow', 'ShortUparrow']),
        '→', html_entity('→', ['rarr', 'rightarrow', 'RightArrow', 'srarr', 'ShortRightArrow']),
        '⇆', html_entity('⇆', ['lrarr', 'leftarrow', 'LeftArrow', 'slarr', 'ShortLeftArrow']),
        '⨁', html_entity('⨁', ['xoplus', 'bigoplus']),
        '∆', html_entity('∆'),
        '∇', html_entity('∇', ['nabla', 'Del']),
        '⌓', html_entity('⌓', 'profsurf'),
        '⬒', html_entity('⬒'),
        '⬓', html_entity('⬓'),
        '⇔', html_entity('⇔', ['harr', 'leftrightarrow', 'LeftRightArrow']),
        '⇗', html_entity('⇗', ['nearr', 'UpperRightArrow', 'nearrow']),
        '⊞', html_entity('⊞', ['plusb', 'boxplus']),
        '⟪', html_entity('⟪', 'Lang'),
        '⟫', html_entity('⟫', 'Rang'),
        '✕', html_entity('✕'),
        '⊥', html_entity('⊥', ['bottom', 'bot', 'perp', 'UpTee']),
        '♂', html_entity('♂', 'male'),
        '└', html_entity('└', 'boxur'),
        '◺', html_entity('◺', 'lltri'),
        '┘', html_entity('┘', 'boxul'),
        '◿', html_entity('◿'),
      )),

    ///
    /// grammar: result code
    ///

    result_code: $ => choice(
      seq('1', confusables.dash, confusables.o),
      seq(confusables.o, confusables.dash, '1'),
      seq('1', confusables.slash, '2', confusables.dash, '1', confusables.slash, '2'),
      seq(confusables.half, confusables.dash, confusables.half),
      confusables.asterisk,
    ),
  }
});

///
/// utility functions
///

function case_insensitive_regex(string, as_fragment=false) {
  let expression = '';

  for (const ch of string) {
    if (['\\', '(', ')', '[', ']', '{', '}', '.', '*', '+', '?'].includes(ch)) {
      expression = expression + '\\' + ch;
    } else if (ch.toLowerCase() === ch.toUpperCase()) {
      expression = expression + ch;
    } else {
      expression = expression + '[' + ch.toUpperCase() + ch.toLowerCase() + ']';
    }
  }

  if (as_fragment) {
    return expression;
  } else {
    return new RegExp(expression);
  }
}

function html_entity(literal, name=null, as_fragment=false) {
  let alternation = [];

  let decimal_codepoint = literal.codePointAt(0);

  if (typeof name === 'string') {
    name = [ name ];
  }

  if (Array.isArray(name)) {
    for (const nm of name) {
      alternation.push(`&${nm};`);
    }
  }

  alternation.push(`&#${decimal_codepoint};`);

  let hex_codepoint = case_insensitive_regex(decimal_codepoint.toString(16), true);
  alternation.push(`&#[Xx]${hex_codepoint};`);

  if (as_fragment) {
    return alternation.join('|');
  } else {
    return new RegExp(alternation.join('|'));
  }
}
