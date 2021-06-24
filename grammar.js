//
// The PGN (Portable Game Notation) specification for chess games:
//
//   http://www.saremba.de/chessgml/standards/pgn/pgn-complete.htm
//
// commonly-used extensions:
//
//   https://www.enpassant.dk/chess/palview/enhancedpgn.htm
//
// Throughout, this grammar is more liberal than the specification.
//

///
/// constants
///

// Canonical character first
// Limitation: Only lower-case entities are recognized
// Limitation: Only hex entities are included
const confusables = {
  o: choice('O', '0', 'o'),
  dash: choice('-', '−', '‐', '–', '—', '&#x2d;', '&minus;', '&#x2010;', '&ndash;', '&mdash;'),
  slash: choice( '/', '∕', '&sol;', '&#x2f;', '&#x2215;'),
  asterisk: choice( '*', '∗', '✱', '&midast;', '&#x2a;', '&lowast;', '&#x2731;'),
  plus: choice('+', '➕', '&plus;', '&#x2b;', '&#x2795;'),
  half: choice('½', '&half;', '&#xbd;'),
};

module.exports = grammar({
  name: 'pgn',

  rules: {

    ///
    /// file or stream
    ///

    series_of_games: $ => seq(
      repeat(
        seq(
          optional(field('freestanding_comment', $.freestanding_comment)),
          field('game', $.game),
      )),
      optional(field('freestanding_comment', $.freestanding_comment)),
    ),

    ///
    /// game
    ///

    game: $ => seq(

      field('header', $.header),

      optional($._empty_line),

      choice(
        seq(
          field('movetext', $.movetext),
          field('result_code', $.result_code),
        ),
        field('movetext', $.movetext),
        field('result_code', $.result_code),
      ),

      optional($._empty_line),
    ),

    _empty_line: $ => /\r?\n\r?\n/,

    ///
    /// free-standing comment
    ///

    freestanding_comment: $ => prec(1,
      repeat1(
        choice(
          $.rest_of_line_comment,
          $.old_style_twic_section_comment,
        ))),

    // Bug: The PGN spec requires that "%" only introduces a comment when placed
    // at the first column of a line.  However,
    //  1) the "%" construct is rarely seen in the wild
    //  2) we are arguably merely "liberal in what we accept"
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
    /// header
    ///

    header: $ => repeat1(
      field('tagpair', $.tagpair),
    ),

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
      )),

    ///
    /// movetext
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
      field('annotation', $.annotation),
      field('comment', $.inline_comment),
      field('comment', $.rest_of_line_comment),
      $.variation,
    ),

    // Repeated to give variation moves their own field name
    _variation_movetext_element: $ => choice(
      field('variation_move_number', $.move_number),
      field('variation_san_move', $.san_move),
      field('variation_annotation', $.annotation),
      field('variation_comment', $.inline_comment),
      field('variation_comment', $.rest_of_line_comment),
      $.variation,
    ),

    variation: $ => seq(
      field('variation_delimiter', $.variation_delimiter_open),
      field('variation_content', optional($.variation_movetext)),
      field('variation_delimiter', $.variation_delimiter_close),
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

    // [AaBb] is for bughouse
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

    _san_file: $ => token(
      choice(
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
      )),

    _san_rank: $ => token.immediate(
      choice(
        '1', '2', '3', '4', '5', '6', '7', '8',
      )),

    _san_promotable_piece: $ => token.immediate(
      choice(
        'R', 'N', 'B', 'Q',
      )),

    _san_major_or_minor_piece: $ => token(
      choice(
        'R', 'N', 'B', 'Q', 'K',
      )),

    // Todo: Consider supporting colon as a postfix capture notation (very obscure).
    // It would occur after the move, but before promotion.
    _san_capture_symbol: $ => token.immediate(
      choice(
        'x', 'X', ':',
      )),

    _san_promotion_symbol: $ => token.immediate('='),

    _san_destination: $ => seq(
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
      $._san_destination,
      optional($._san_promotion),
    ),

    // Limitation: Pawn drops are illegal in the player's respective
    // promotion ranks, but accepted here
    _san_drop_pawn: $ => seq(
      optional('P'),
      '@',
      $._san_destination,
    ),

    _san_move_major_or_minor_piece: $ => prec.right(-1,
      seq(
        $._san_major_or_minor_piece,
        optional($._san_file),
        optional($._san_rank),
        optional($._san_capture_symbol),
        $._san_destination,
      )),

    // Limitation: King drops are illegal, but accepted here
    _san_drop_major_or_minor_piece: $ => prec.right(-1,
      seq(
        $._san_major_or_minor_piece,
        '@',
        $._san_destination,
      )),

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
        '+', '++', '#',
      )),

    // Limitation: whitespace is required around "N" annotations to disambiguate cases
    // such as "2. d4 N g6".  For syntax highlighting it should not matter that the
    // annotation span includes whitespace.  In other situations the span may need to
    // be trimmed.
    //
    // Limitation: Only lower-case entities are recognized
    //
    // Limitation: Only hex entities are included
    //
    // Todo: Consider differentiating the subset of annotations which can occur without
    // intervening whitespace, such as "!"
    annotation: $ => token(
      choice(
        /\$\d+/,
        confusables.dash,
        seq(confusables.plus, token.immediate(confusables.dash)),
        seq(confusables.plus, token.immediate(confusables.slash), token.immediate(confusables.dash)),
        seq(confusables.dash, token.immediate(confusables.plus)),
        seq(confusables.dash, token.immediate(confusables.slash), token.immediate(confusables.plus)),
        '=', '==', '<=', '≤', '!!', '??', '!?', '?!', '!', '?', '‼', '⁇', '⁉', '⁈',
        '□', '∞', '⩲', '⩱', '±', '∓', '⨀', '○', '⟳', '↑', '→', '⇆', '⨁', '∆',
        '∇', '⌓', '⬒', '⬓', '⇔', '⇗', '⊞', '⟫', '⟪', '✕', '⊥', '♂', '└', '◺', '┘',
        '◿', /\sN\s/, 'TN', 'RR',

        '&quest;&quest;', '&excl;&excl;', '&excl;&quest;', '&quest;&excl;',
        '&quest;', '&excl;', '&equals;&equals;', '&equals;', '&nvlt;&equals;',
        '&#3f;&#3f;', '&#21;&#21;', '&#21;&#3f;', '&#3f;&#21;',
        '&#3f;', '&#21;', '&#3d;&#3d;', '&#3d;', '&#3c;&#3d;',

        '&boxplus;', '&cir;', '&eplus;', '&harr;', '&infin;', '&lang;',
        '&le;', '&lrarr;', '&mnplus;', '&nabla;', '&nearr;', '&perp;',
        '&pluse;', '&plusmn;', '&pm;', '&profsurf;', '&rang;', '&rarr;',
        '&square;', '&uarr;', '&xodot;', '&xoplus;', '&#x203c;', '&#x2047;',
        '&#x2048;', '&#x2049;', '&#x21c6;', '&#x21d7;', '&#x2206;',
        '&#x2213;', '&#x229e;', '&#x2313;', '&#x2514;', '&#x2518;',
        '&#x25a1;', '&#x25cb;', '&#x25fa;', '&#x25ff;', '&#x2642;',
        '&#x2715;', '&#x27ea;', '&#x27eb;', '&#x27f3;', '&#x2a00;',
        '&#x2a01;', '&#x2a71;', '&#x2a72;', '&#x2b12;', '&#x2b13;',
      )),

    ///
    /// result code
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
