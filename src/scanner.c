#include "tree_sitter/parser.h"

enum TokenType {
    FULL_LINE_COMMENT_DELIMITER_BOL_ASSERTION,
    NOVELTY_GLYPH_BEFORE_PUNCTUATION,
};

void *tree_sitter_pgn_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_pgn_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_pgn_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_pgn_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

bool tree_sitter_pgn_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (valid_symbols[FULL_LINE_COMMENT_DELIMITER_BOL_ASSERTION]) {
        // It's not really clear from the doc why we have to advance over whitespace, but we do.
        // eof is not really needed in this form, but does no harm.
        // If we must scan whitespace, it would be more consistent to include Unicode like grammar.js.
        while (!lexer->eof(lexer) &&
               (lexer->lookahead == '\n' ||
                lexer->lookahead == '\r' ||
                lexer->lookahead == '\t' ||
                lexer->lookahead == ' ')) {
            lexer->advance(lexer, true);
        }
        if (lexer->lookahead == '%' && lexer->get_column(lexer) == 0) {
            lexer->result_symbol = FULL_LINE_COMMENT_DELIMITER_BOL_ASSERTION;
            return true;
        }
    }
    if (valid_symbols[NOVELTY_GLYPH_BEFORE_PUNCTUATION]) {
        if (lexer->lookahead == 'N') {
            lexer->advance(lexer, false);
            // The close parenthesis lookahead is strictly needed; the others are for lenience.
            if (lexer->lookahead == ')' ||
                lexer->lookahead == '(' ||
                lexer->lookahead == '{') {
                lexer->result_symbol = NOVELTY_GLYPH_BEFORE_PUNCTUATION;
                return true;
            }
        }
    }
    return false;
}
