#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 290
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 50

enum ts_symbol_identifiers {
  sym__empty_line = 1,
  anon_sym_SEMI = 2,
  anon_sym_PERCENT = 3,
  aux_sym_rest_of_line_comment_token1 = 4,
  sym_rest_of_line_comment_text = 5,
  sym_old_style_twic_section_comment = 6,
  sym_tagpair_delimiter_open = 7,
  sym_tagpair_delimiter_close = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_double_quote_token1 = 10,
  anon_sym_uff02 = 11,
  aux_sym_double_quote_token2 = 12,
  anon_sym_u201c = 13,
  aux_sym_double_quote_token3 = 14,
  anon_sym_u201d = 15,
  aux_sym_double_quote_token4 = 16,
  anon_sym_u201f = 17,
  aux_sym_double_quote_token5 = 18,
  anon_sym_u2033 = 19,
  aux_sym_double_quote_token6 = 20,
  anon_sym_u2036 = 21,
  aux_sym_double_quote_token7 = 22,
  anon_sym_u3003 = 23,
  aux_sym_double_quote_token8 = 24,
  anon_sym_u05f4 = 25,
  aux_sym_double_quote_token9 = 26,
  anon_sym_u02dd = 27,
  aux_sym_double_quote_token10 = 28,
  anon_sym_u02ba = 29,
  aux_sym_double_quote_token11 = 30,
  anon_sym_u02f6 = 31,
  aux_sym_double_quote_token12 = 32,
  anon_sym_u02ee = 33,
  aux_sym_double_quote_token13 = 34,
  anon_sym_u05f2 = 35,
  aux_sym_double_quote_token14 = 36,
  sym_tagpair_key = 37,
  aux_sym_tagpair_value_contents_token1 = 38,
  sym_variation_delimiter_open = 39,
  anon_sym_RPAREN = 40,
  anon_sym_LBRACE = 41,
  anon_sym_RBRACE = 42,
  aux_sym_inline_comment_text_token1 = 43,
  sym_move_number = 44,
  sym__misc_punctuation = 45,
  sym__san_file = 46,
  sym__san_rank = 47,
  sym__san_promotable_piece = 48,
  sym__san_major_or_minor_piece = 49,
  sym__san_capture_symbol = 50,
  sym__san_promotion_symbol = 51,
  anon_sym_P = 52,
  anon_sym_u2659 = 53,
  anon_sym_u265fufe0e = 54,
  anon_sym_AT = 55,
  aux_sym__lan_move_by_coordinates_token1 = 56,
  sym__san_move_castle = 57,
  sym__san_null_move = 58,
  sym_check_or_mate_condition = 59,
  sym_annotation = 60,
  anon_sym_1 = 61,
  anon_sym_DASH = 62,
  aux_sym_result_code_token1 = 63,
  anon_sym_u2212 = 64,
  aux_sym_result_code_token2 = 65,
  anon_sym_u2010 = 66,
  aux_sym_result_code_token3 = 67,
  anon_sym_u2011 = 68,
  aux_sym_result_code_token4 = 69,
  anon_sym_u2012 = 70,
  aux_sym_result_code_token5 = 71,
  anon_sym_u2013 = 72,
  aux_sym_result_code_token6 = 73,
  anon_sym_u2014 = 74,
  aux_sym_result_code_token7 = 75,
  anon_sym_u2796 = 76,
  aux_sym_result_code_token8 = 77,
  anon_sym_O = 78,
  anon_sym_0 = 79,
  anon_sym_o = 80,
  anon_sym_SLASH = 81,
  aux_sym_result_code_token9 = 82,
  anon_sym_u2215 = 83,
  aux_sym_result_code_token10 = 84,
  anon_sym_u2044 = 85,
  aux_sym_result_code_token11 = 86,
  anon_sym_u27cb = 87,
  aux_sym_result_code_token12 = 88,
  anon_sym_u29f8 = 89,
  aux_sym_result_code_token13 = 90,
  anon_sym_2 = 91,
  anon_sym_u00bd = 92,
  aux_sym_result_code_token14 = 93,
  anon_sym_STAR = 94,
  aux_sym_result_code_token15 = 95,
  anon_sym_u2217 = 96,
  aux_sym_result_code_token16 = 97,
  anon_sym_u2731 = 98,
  aux_sym_result_code_token17 = 99,
  anon_sym_u204e = 100,
  aux_sym_result_code_token18 = 101,
  anon_sym_u066d = 102,
  aux_sym_result_code_token19 = 103,
  aux_sym_result_code_token20 = 104,
  aux_sym_result_code_token21 = 105,
  aux_sym_result_code_token22 = 106,
  aux_sym_result_code_token23 = 107,
  sym__full_line_comment_delimiter_bol_assertion = 108,
  sym_series_of_games = 109,
  sym_game = 110,
  sym_freestanding_comment = 111,
  sym_rest_of_line_comment_delimiter_open = 112,
  sym_rest_of_line_comment = 113,
  sym_header = 114,
  sym_double_quote = 115,
  sym_tagpair = 116,
  sym__tagpair_value = 117,
  sym_tagpair_value_contents = 118,
  sym_movetext = 119,
  sym_variation_movetext = 120,
  sym_variation_delimiter_close = 121,
  sym_inline_comment_delimiter_open = 122,
  sym_inline_comment_delimiter_close = 123,
  sym__recursive_inline_comment_delimiter_open = 124,
  sym__recursive_inline_comment_delimiter_close = 125,
  sym_trailing_garbage = 126,
  sym__movetext_element = 127,
  sym__variation_movetext_element = 128,
  sym_variation = 129,
  sym_recursive_variation = 130,
  sym_inline_comment = 131,
  sym__recursive_inline_comment = 132,
  sym_inline_comment_text = 133,
  aux_sym__recursive_inline_comment_text = 134,
  sym__san_move = 135,
  sym__variation_san_move = 136,
  sym_san_move = 137,
  sym__san_move_piece = 138,
  sym__lan_move = 139,
  sym__variation_lan_move = 140,
  sym_lan_move = 141,
  sym__san_square = 142,
  sym__san_promotion = 143,
  sym__san_move_pawn = 144,
  sym__san_drop_pawn = 145,
  sym__san_move_major_or_minor_piece = 146,
  sym__san_drop_major_or_minor_piece = 147,
  sym__lan_move_by_coordinates = 148,
  sym__annotation = 149,
  sym__variation_annotation = 150,
  sym_result_code = 151,
  aux_sym_series_of_games_repeat1 = 152,
  aux_sym_freestanding_comment_repeat1 = 153,
  aux_sym_header_repeat1 = 154,
  aux_sym_tagpair_value_contents_repeat1 = 155,
  aux_sym_movetext_repeat1 = 156,
  aux_sym_variation_movetext_repeat1 = 157,
  aux_sym_trailing_garbage_repeat1 = 158,
  aux_sym_inline_comment_text_repeat1 = 159,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__empty_line] = "_empty_line",
  [anon_sym_SEMI] = ";",
  [anon_sym_PERCENT] = "%",
  [aux_sym_rest_of_line_comment_token1] = "rest_of_line_comment_token1",
  [sym_rest_of_line_comment_text] = "rest_of_line_comment_text",
  [sym_old_style_twic_section_comment] = "old_style_twic_section_comment",
  [sym_tagpair_delimiter_open] = "tagpair_delimiter_open",
  [sym_tagpair_delimiter_close] = "tagpair_delimiter_close",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_token1] = "double_quote_token1",
  [anon_sym_uff02] = "\uff02",
  [aux_sym_double_quote_token2] = "double_quote_token2",
  [anon_sym_u201c] = "\u201c",
  [aux_sym_double_quote_token3] = "double_quote_token3",
  [anon_sym_u201d] = "\u201d",
  [aux_sym_double_quote_token4] = "double_quote_token4",
  [anon_sym_u201f] = "\u201f",
  [aux_sym_double_quote_token5] = "double_quote_token5",
  [anon_sym_u2033] = "\u2033",
  [aux_sym_double_quote_token6] = "double_quote_token6",
  [anon_sym_u2036] = "\u2036",
  [aux_sym_double_quote_token7] = "double_quote_token7",
  [anon_sym_u3003] = "\u3003",
  [aux_sym_double_quote_token8] = "double_quote_token8",
  [anon_sym_u05f4] = "\u05f4",
  [aux_sym_double_quote_token9] = "double_quote_token9",
  [anon_sym_u02dd] = "\u02dd",
  [aux_sym_double_quote_token10] = "double_quote_token10",
  [anon_sym_u02ba] = "\u02ba",
  [aux_sym_double_quote_token11] = "double_quote_token11",
  [anon_sym_u02f6] = "\u02f6",
  [aux_sym_double_quote_token12] = "double_quote_token12",
  [anon_sym_u02ee] = "\u02ee",
  [aux_sym_double_quote_token13] = "double_quote_token13",
  [anon_sym_u05f2] = "\u05f2",
  [aux_sym_double_quote_token14] = "double_quote_token14",
  [sym_tagpair_key] = "tagpair_key",
  [aux_sym_tagpair_value_contents_token1] = "tagpair_value_contents_token1",
  [sym_variation_delimiter_open] = "variation_delimiter_open",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_inline_comment_text_token1] = "inline_comment_text_token1",
  [sym_move_number] = "move_number",
  [sym__misc_punctuation] = "_misc_punctuation",
  [sym__san_file] = "_san_file",
  [sym__san_rank] = "_san_rank",
  [sym__san_promotable_piece] = "_san_promotable_piece",
  [sym__san_major_or_minor_piece] = "_san_major_or_minor_piece",
  [sym__san_capture_symbol] = "_san_capture_symbol",
  [sym__san_promotion_symbol] = "_san_promotion_symbol",
  [anon_sym_P] = "P",
  [anon_sym_u2659] = "\u2659",
  [anon_sym_u265fufe0e] = "\u265f\ufe0e",
  [anon_sym_AT] = "@",
  [aux_sym__lan_move_by_coordinates_token1] = "_lan_move_by_coordinates_token1",
  [sym__san_move_castle] = "_san_move_castle",
  [sym__san_null_move] = "_san_null_move",
  [sym_check_or_mate_condition] = "check_or_mate_condition",
  [sym_annotation] = "annotation",
  [anon_sym_1] = "1",
  [anon_sym_DASH] = "-",
  [aux_sym_result_code_token1] = "result_code_token1",
  [anon_sym_u2212] = "\u2212",
  [aux_sym_result_code_token2] = "result_code_token2",
  [anon_sym_u2010] = "\u2010",
  [aux_sym_result_code_token3] = "result_code_token3",
  [anon_sym_u2011] = "\u2011",
  [aux_sym_result_code_token4] = "result_code_token4",
  [anon_sym_u2012] = "\u2012",
  [aux_sym_result_code_token5] = "result_code_token5",
  [anon_sym_u2013] = "\u2013",
  [aux_sym_result_code_token6] = "result_code_token6",
  [anon_sym_u2014] = "\u2014",
  [aux_sym_result_code_token7] = "result_code_token7",
  [anon_sym_u2796] = "\u2796",
  [aux_sym_result_code_token8] = "result_code_token8",
  [anon_sym_O] = "O",
  [anon_sym_0] = "0",
  [anon_sym_o] = "o",
  [anon_sym_SLASH] = "/",
  [aux_sym_result_code_token9] = "result_code_token9",
  [anon_sym_u2215] = "\u2215",
  [aux_sym_result_code_token10] = "result_code_token10",
  [anon_sym_u2044] = "\u2044",
  [aux_sym_result_code_token11] = "result_code_token11",
  [anon_sym_u27cb] = "\u27cb",
  [aux_sym_result_code_token12] = "result_code_token12",
  [anon_sym_u29f8] = "\u29f8",
  [aux_sym_result_code_token13] = "result_code_token13",
  [anon_sym_2] = "2",
  [anon_sym_u00bd] = "\u00bd",
  [aux_sym_result_code_token14] = "result_code_token14",
  [anon_sym_STAR] = "*",
  [aux_sym_result_code_token15] = "result_code_token15",
  [anon_sym_u2217] = "\u2217",
  [aux_sym_result_code_token16] = "result_code_token16",
  [anon_sym_u2731] = "\u2731",
  [aux_sym_result_code_token17] = "result_code_token17",
  [anon_sym_u204e] = "\u204e",
  [aux_sym_result_code_token18] = "result_code_token18",
  [anon_sym_u066d] = "\u066d",
  [aux_sym_result_code_token19] = "result_code_token19",
  [aux_sym_result_code_token20] = "result_code_token20",
  [aux_sym_result_code_token21] = "result_code_token21",
  [aux_sym_result_code_token22] = "result_code_token22",
  [aux_sym_result_code_token23] = "result_code_token23",
  [sym__full_line_comment_delimiter_bol_assertion] = "_full_line_comment_delimiter_bol_assertion",
  [sym_series_of_games] = "series_of_games",
  [sym_game] = "game",
  [sym_freestanding_comment] = "freestanding_comment",
  [sym_rest_of_line_comment_delimiter_open] = "rest_of_line_comment_delimiter_open",
  [sym_rest_of_line_comment] = "rest_of_line_comment",
  [sym_header] = "header",
  [sym_double_quote] = "double_quote",
  [sym_tagpair] = "tagpair",
  [sym__tagpair_value] = "_tagpair_value",
  [sym_tagpair_value_contents] = "tagpair_value_contents",
  [sym_movetext] = "movetext",
  [sym_variation_movetext] = "variation_movetext",
  [sym_variation_delimiter_close] = "variation_delimiter_close",
  [sym_inline_comment_delimiter_open] = "inline_comment_delimiter_open",
  [sym_inline_comment_delimiter_close] = "inline_comment_delimiter_close",
  [sym__recursive_inline_comment_delimiter_open] = "_recursive_inline_comment_delimiter_open",
  [sym__recursive_inline_comment_delimiter_close] = "_recursive_inline_comment_delimiter_close",
  [sym_trailing_garbage] = "trailing_garbage",
  [sym__movetext_element] = "_movetext_element",
  [sym__variation_movetext_element] = "_variation_movetext_element",
  [sym_variation] = "variation",
  [sym_recursive_variation] = "recursive_variation",
  [sym_inline_comment] = "inline_comment",
  [sym__recursive_inline_comment] = "_recursive_inline_comment",
  [sym_inline_comment_text] = "inline_comment_text",
  [aux_sym__recursive_inline_comment_text] = "_recursive_inline_comment_text",
  [sym__san_move] = "_san_move",
  [sym__variation_san_move] = "_variation_san_move",
  [sym_san_move] = "san_move",
  [sym__san_move_piece] = "_san_move_piece",
  [sym__lan_move] = "_lan_move",
  [sym__variation_lan_move] = "_variation_lan_move",
  [sym_lan_move] = "lan_move",
  [sym__san_square] = "_san_square",
  [sym__san_promotion] = "_san_promotion",
  [sym__san_move_pawn] = "_san_move_pawn",
  [sym__san_drop_pawn] = "_san_drop_pawn",
  [sym__san_move_major_or_minor_piece] = "_san_move_major_or_minor_piece",
  [sym__san_drop_major_or_minor_piece] = "_san_drop_major_or_minor_piece",
  [sym__lan_move_by_coordinates] = "_lan_move_by_coordinates",
  [sym__annotation] = "_annotation",
  [sym__variation_annotation] = "_variation_annotation",
  [sym_result_code] = "result_code",
  [aux_sym_series_of_games_repeat1] = "series_of_games_repeat1",
  [aux_sym_freestanding_comment_repeat1] = "freestanding_comment_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_tagpair_value_contents_repeat1] = "tagpair_value_contents_repeat1",
  [aux_sym_movetext_repeat1] = "movetext_repeat1",
  [aux_sym_variation_movetext_repeat1] = "variation_movetext_repeat1",
  [aux_sym_trailing_garbage_repeat1] = "trailing_garbage_repeat1",
  [aux_sym_inline_comment_text_repeat1] = "inline_comment_text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__empty_line] = sym__empty_line,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_rest_of_line_comment_token1] = aux_sym_rest_of_line_comment_token1,
  [sym_rest_of_line_comment_text] = sym_rest_of_line_comment_text,
  [sym_old_style_twic_section_comment] = sym_old_style_twic_section_comment,
  [sym_tagpair_delimiter_open] = sym_tagpair_delimiter_open,
  [sym_tagpair_delimiter_close] = sym_tagpair_delimiter_close,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_token1] = aux_sym_double_quote_token1,
  [anon_sym_uff02] = anon_sym_uff02,
  [aux_sym_double_quote_token2] = aux_sym_double_quote_token2,
  [anon_sym_u201c] = anon_sym_u201c,
  [aux_sym_double_quote_token3] = aux_sym_double_quote_token3,
  [anon_sym_u201d] = anon_sym_u201d,
  [aux_sym_double_quote_token4] = aux_sym_double_quote_token4,
  [anon_sym_u201f] = anon_sym_u201f,
  [aux_sym_double_quote_token5] = aux_sym_double_quote_token5,
  [anon_sym_u2033] = anon_sym_u2033,
  [aux_sym_double_quote_token6] = aux_sym_double_quote_token6,
  [anon_sym_u2036] = anon_sym_u2036,
  [aux_sym_double_quote_token7] = aux_sym_double_quote_token7,
  [anon_sym_u3003] = anon_sym_u3003,
  [aux_sym_double_quote_token8] = aux_sym_double_quote_token8,
  [anon_sym_u05f4] = anon_sym_u05f4,
  [aux_sym_double_quote_token9] = aux_sym_double_quote_token9,
  [anon_sym_u02dd] = anon_sym_u02dd,
  [aux_sym_double_quote_token10] = aux_sym_double_quote_token10,
  [anon_sym_u02ba] = anon_sym_u02ba,
  [aux_sym_double_quote_token11] = aux_sym_double_quote_token11,
  [anon_sym_u02f6] = anon_sym_u02f6,
  [aux_sym_double_quote_token12] = aux_sym_double_quote_token12,
  [anon_sym_u02ee] = anon_sym_u02ee,
  [aux_sym_double_quote_token13] = aux_sym_double_quote_token13,
  [anon_sym_u05f2] = anon_sym_u05f2,
  [aux_sym_double_quote_token14] = aux_sym_double_quote_token14,
  [sym_tagpair_key] = sym_tagpair_key,
  [aux_sym_tagpair_value_contents_token1] = aux_sym_tagpair_value_contents_token1,
  [sym_variation_delimiter_open] = sym_variation_delimiter_open,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_inline_comment_text_token1] = aux_sym_inline_comment_text_token1,
  [sym_move_number] = sym_move_number,
  [sym__misc_punctuation] = sym__misc_punctuation,
  [sym__san_file] = sym__san_file,
  [sym__san_rank] = sym__san_rank,
  [sym__san_promotable_piece] = sym__san_promotable_piece,
  [sym__san_major_or_minor_piece] = sym__san_major_or_minor_piece,
  [sym__san_capture_symbol] = sym__san_capture_symbol,
  [sym__san_promotion_symbol] = sym__san_promotion_symbol,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_u2659] = anon_sym_u2659,
  [anon_sym_u265fufe0e] = anon_sym_u265fufe0e,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__lan_move_by_coordinates_token1] = aux_sym__lan_move_by_coordinates_token1,
  [sym__san_move_castle] = sym__san_move_castle,
  [sym__san_null_move] = sym__san_null_move,
  [sym_check_or_mate_condition] = sym_check_or_mate_condition,
  [sym_annotation] = sym_annotation,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_result_code_token1] = aux_sym_result_code_token1,
  [anon_sym_u2212] = anon_sym_u2212,
  [aux_sym_result_code_token2] = aux_sym_result_code_token2,
  [anon_sym_u2010] = anon_sym_u2010,
  [aux_sym_result_code_token3] = aux_sym_result_code_token3,
  [anon_sym_u2011] = anon_sym_u2011,
  [aux_sym_result_code_token4] = aux_sym_result_code_token4,
  [anon_sym_u2012] = anon_sym_u2012,
  [aux_sym_result_code_token5] = aux_sym_result_code_token5,
  [anon_sym_u2013] = anon_sym_u2013,
  [aux_sym_result_code_token6] = aux_sym_result_code_token6,
  [anon_sym_u2014] = anon_sym_u2014,
  [aux_sym_result_code_token7] = aux_sym_result_code_token7,
  [anon_sym_u2796] = anon_sym_u2796,
  [aux_sym_result_code_token8] = aux_sym_result_code_token8,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_result_code_token9] = aux_sym_result_code_token9,
  [anon_sym_u2215] = anon_sym_u2215,
  [aux_sym_result_code_token10] = aux_sym_result_code_token10,
  [anon_sym_u2044] = anon_sym_u2044,
  [aux_sym_result_code_token11] = aux_sym_result_code_token11,
  [anon_sym_u27cb] = anon_sym_u27cb,
  [aux_sym_result_code_token12] = aux_sym_result_code_token12,
  [anon_sym_u29f8] = anon_sym_u29f8,
  [aux_sym_result_code_token13] = aux_sym_result_code_token13,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_u00bd] = anon_sym_u00bd,
  [aux_sym_result_code_token14] = aux_sym_result_code_token14,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_result_code_token15] = aux_sym_result_code_token15,
  [anon_sym_u2217] = anon_sym_u2217,
  [aux_sym_result_code_token16] = aux_sym_result_code_token16,
  [anon_sym_u2731] = anon_sym_u2731,
  [aux_sym_result_code_token17] = aux_sym_result_code_token17,
  [anon_sym_u204e] = anon_sym_u204e,
  [aux_sym_result_code_token18] = aux_sym_result_code_token18,
  [anon_sym_u066d] = anon_sym_u066d,
  [aux_sym_result_code_token19] = aux_sym_result_code_token19,
  [aux_sym_result_code_token20] = aux_sym_result_code_token20,
  [aux_sym_result_code_token21] = aux_sym_result_code_token21,
  [aux_sym_result_code_token22] = aux_sym_result_code_token22,
  [aux_sym_result_code_token23] = aux_sym_result_code_token23,
  [sym__full_line_comment_delimiter_bol_assertion] = sym__full_line_comment_delimiter_bol_assertion,
  [sym_series_of_games] = sym_series_of_games,
  [sym_game] = sym_game,
  [sym_freestanding_comment] = sym_freestanding_comment,
  [sym_rest_of_line_comment_delimiter_open] = sym_rest_of_line_comment_delimiter_open,
  [sym_rest_of_line_comment] = sym_rest_of_line_comment,
  [sym_header] = sym_header,
  [sym_double_quote] = sym_double_quote,
  [sym_tagpair] = sym_tagpair,
  [sym__tagpair_value] = sym__tagpair_value,
  [sym_tagpair_value_contents] = sym_tagpair_value_contents,
  [sym_movetext] = sym_movetext,
  [sym_variation_movetext] = sym_variation_movetext,
  [sym_variation_delimiter_close] = sym_variation_delimiter_close,
  [sym_inline_comment_delimiter_open] = sym_inline_comment_delimiter_open,
  [sym_inline_comment_delimiter_close] = sym_inline_comment_delimiter_close,
  [sym__recursive_inline_comment_delimiter_open] = sym__recursive_inline_comment_delimiter_open,
  [sym__recursive_inline_comment_delimiter_close] = sym__recursive_inline_comment_delimiter_close,
  [sym_trailing_garbage] = sym_trailing_garbage,
  [sym__movetext_element] = sym__movetext_element,
  [sym__variation_movetext_element] = sym__variation_movetext_element,
  [sym_variation] = sym_variation,
  [sym_recursive_variation] = sym_recursive_variation,
  [sym_inline_comment] = sym_inline_comment,
  [sym__recursive_inline_comment] = sym__recursive_inline_comment,
  [sym_inline_comment_text] = sym_inline_comment_text,
  [aux_sym__recursive_inline_comment_text] = aux_sym__recursive_inline_comment_text,
  [sym__san_move] = sym__san_move,
  [sym__variation_san_move] = sym__variation_san_move,
  [sym_san_move] = sym_san_move,
  [sym__san_move_piece] = sym__san_move_piece,
  [sym__lan_move] = sym__lan_move,
  [sym__variation_lan_move] = sym__variation_lan_move,
  [sym_lan_move] = sym_lan_move,
  [sym__san_square] = sym__san_square,
  [sym__san_promotion] = sym__san_promotion,
  [sym__san_move_pawn] = sym__san_move_pawn,
  [sym__san_drop_pawn] = sym__san_drop_pawn,
  [sym__san_move_major_or_minor_piece] = sym__san_move_major_or_minor_piece,
  [sym__san_drop_major_or_minor_piece] = sym__san_drop_major_or_minor_piece,
  [sym__lan_move_by_coordinates] = sym__lan_move_by_coordinates,
  [sym__annotation] = sym__annotation,
  [sym__variation_annotation] = sym__variation_annotation,
  [sym_result_code] = sym_result_code,
  [aux_sym_series_of_games_repeat1] = aux_sym_series_of_games_repeat1,
  [aux_sym_freestanding_comment_repeat1] = aux_sym_freestanding_comment_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_tagpair_value_contents_repeat1] = aux_sym_tagpair_value_contents_repeat1,
  [aux_sym_movetext_repeat1] = aux_sym_movetext_repeat1,
  [aux_sym_variation_movetext_repeat1] = aux_sym_variation_movetext_repeat1,
  [aux_sym_trailing_garbage_repeat1] = aux_sym_trailing_garbage_repeat1,
  [aux_sym_inline_comment_text_repeat1] = aux_sym_inline_comment_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rest_of_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rest_of_line_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_old_style_twic_section_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_uff02] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u201c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u201d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u201f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2033] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2036] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u3003] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u05f4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u02dd] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u02ba] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u02f6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u02ee] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token13] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u05f2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token14] = {
    .visible = false,
    .named = false,
  },
  [sym_tagpair_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tagpair_value_contents_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variation_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inline_comment_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_move_number] = {
    .visible = true,
    .named = true,
  },
  [sym__misc_punctuation] = {
    .visible = false,
    .named = true,
  },
  [sym__san_file] = {
    .visible = false,
    .named = true,
  },
  [sym__san_rank] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotable_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_capture_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotion_symbol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2659] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u265fufe0e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__lan_move_by_coordinates_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__san_move_castle] = {
    .visible = false,
    .named = true,
  },
  [sym__san_null_move] = {
    .visible = false,
    .named = true,
  },
  [sym_check_or_mate_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2212] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2010] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2011] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2012] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2013] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2014] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2796] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2215] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2044] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u27cb] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u29f8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token13] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u00bd] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token14] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token15] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2217] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token16] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2731] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token17] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u204e] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token18] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u066d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token23] = {
    .visible = false,
    .named = false,
  },
  [sym__full_line_comment_delimiter_bol_assertion] = {
    .visible = false,
    .named = true,
  },
  [sym_series_of_games] = {
    .visible = true,
    .named = true,
  },
  [sym_game] = {
    .visible = true,
    .named = true,
  },
  [sym_freestanding_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair] = {
    .visible = true,
    .named = true,
  },
  [sym__tagpair_value] = {
    .visible = false,
    .named = true,
  },
  [sym_tagpair_value_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_movetext] = {
    .visible = true,
    .named = true,
  },
  [sym_variation_movetext] = {
    .visible = true,
    .named = true,
  },
  [sym_variation_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym__recursive_inline_comment_delimiter_open] = {
    .visible = false,
    .named = true,
  },
  [sym__recursive_inline_comment_delimiter_close] = {
    .visible = false,
    .named = true,
  },
  [sym_trailing_garbage] = {
    .visible = true,
    .named = true,
  },
  [sym__movetext_element] = {
    .visible = false,
    .named = true,
  },
  [sym__variation_movetext_element] = {
    .visible = false,
    .named = true,
  },
  [sym_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_recursive_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__recursive_inline_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_comment_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__recursive_inline_comment_text] = {
    .visible = false,
    .named = false,
  },
  [sym__san_move] = {
    .visible = false,
    .named = true,
  },
  [sym__variation_san_move] = {
    .visible = false,
    .named = true,
  },
  [sym_san_move] = {
    .visible = true,
    .named = true,
  },
  [sym__san_move_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__lan_move] = {
    .visible = false,
    .named = true,
  },
  [sym__variation_lan_move] = {
    .visible = false,
    .named = true,
  },
  [sym_lan_move] = {
    .visible = true,
    .named = true,
  },
  [sym__san_square] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotion] = {
    .visible = false,
    .named = true,
  },
  [sym__san_move_pawn] = {
    .visible = false,
    .named = true,
  },
  [sym__san_drop_pawn] = {
    .visible = false,
    .named = true,
  },
  [sym__san_move_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_drop_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__lan_move_by_coordinates] = {
    .visible = false,
    .named = true,
  },
  [sym__annotation] = {
    .visible = false,
    .named = true,
  },
  [sym__variation_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_result_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_series_of_games_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_freestanding_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tagpair_value_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_movetext_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variation_movetext_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trailing_garbage_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_comment_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_annotation = 1,
  field_comment = 2,
  field_comment_content = 3,
  field_comment_delimiter = 4,
  field_freestanding_comment = 5,
  field_game = 6,
  field_header = 7,
  field_lan_move = 8,
  field_move_number = 9,
  field_movetext = 10,
  field_recursive_variation_content = 11,
  field_recursive_variation_delimiter = 12,
  field_result_code = 13,
  field_san_move = 14,
  field_tagpair = 15,
  field_tagpair_delimiter = 16,
  field_tagpair_key = 17,
  field_tagpair_value_contents = 18,
  field_tagpair_value_delimiter = 19,
  field_variation_annotation = 20,
  field_variation_comment = 21,
  field_variation_content = 22,
  field_variation_delimiter = 23,
  field_variation_lan_move = 24,
  field_variation_move_number = 25,
  field_variation_san_move = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_annotation] = "annotation",
  [field_comment] = "comment",
  [field_comment_content] = "comment_content",
  [field_comment_delimiter] = "comment_delimiter",
  [field_freestanding_comment] = "freestanding_comment",
  [field_game] = "game",
  [field_header] = "header",
  [field_lan_move] = "lan_move",
  [field_move_number] = "move_number",
  [field_movetext] = "movetext",
  [field_recursive_variation_content] = "recursive_variation_content",
  [field_recursive_variation_delimiter] = "recursive_variation_delimiter",
  [field_result_code] = "result_code",
  [field_san_move] = "san_move",
  [field_tagpair] = "tagpair",
  [field_tagpair_delimiter] = "tagpair_delimiter",
  [field_tagpair_key] = "tagpair_key",
  [field_tagpair_value_contents] = "tagpair_value_contents",
  [field_tagpair_value_delimiter] = "tagpair_value_delimiter",
  [field_variation_annotation] = "variation_annotation",
  [field_variation_comment] = "variation_comment",
  [field_variation_content] = "variation_content",
  [field_variation_delimiter] = "variation_delimiter",
  [field_variation_lan_move] = "variation_lan_move",
  [field_variation_move_number] = "variation_move_number",
  [field_variation_san_move] = "variation_san_move",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 5},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 1},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 5},
  [19] = {.index = 28, .length = 1},
  [20] = {.index = 29, .length = 1},
  [21] = {.index = 30, .length = 1},
  [22] = {.index = 31, .length = 1},
  [23] = {.index = 32, .length = 1},
  [24] = {.index = 33, .length = 2},
  [25] = {.index = 35, .length = 2},
  [26] = {.index = 37, .length = 2},
  [27] = {.index = 39, .length = 2},
  [28] = {.index = 41, .length = 3},
  [29] = {.index = 44, .length = 2},
  [30] = {.index = 46, .length = 2},
  [31] = {.index = 48, .length = 3},
  [32] = {.index = 51, .length = 4},
  [33] = {.index = 55, .length = 10},
  [34] = {.index = 65, .length = 2},
  [35] = {.index = 67, .length = 3},
  [36] = {.index = 70, .length = 10},
  [37] = {.index = 80, .length = 2},
  [38] = {.index = 82, .length = 2},
  [39] = {.index = 84, .length = 3},
  [40] = {.index = 87, .length = 4},
  [41] = {.index = 91, .length = 2},
  [42] = {.index = 93, .length = 3},
  [43] = {.index = 96, .length = 2},
  [44] = {.index = 98, .length = 5},
  [45] = {.index = 103, .length = 3},
  [46] = {.index = 106, .length = 3},
  [47] = {.index = 109, .length = 3},
  [48] = {.index = 112, .length = 3},
  [49] = {.index = 115, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_move_number, 0},
  [1] =
    {field_annotation, 0},
  [2] =
    {field_game, 0},
  [3] =
    {field_freestanding_comment, 0},
  [4] =
    {field_comment, 0},
  [5] =
    {field_tagpair, 0},
  [6] =
    {field_annotation, 0, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_lan_move, 0, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_san_move, 0, .inherited = true},
  [11] =
    {field_san_move, 0, .inherited = true},
  [12] =
    {field_san_move, 0},
  [13] =
    {field_lan_move, 0, .inherited = true},
  [14] =
    {field_lan_move, 0},
  [15] =
    {field_annotation, 0, .inherited = true},
  [16] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_game, 0, .inherited = true},
  [18] =
    {field_variation_move_number, 0},
  [19] =
    {field_variation_annotation, 0},
  [20] =
    {field_variation_comment, 0},
  [21] =
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [23] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
  [28] =
    {field_variation_san_move, 0, .inherited = true},
  [29] =
    {field_variation_san_move, 0},
  [30] =
    {field_variation_lan_move, 0, .inherited = true},
  [31] =
    {field_variation_lan_move, 0},
  [32] =
    {field_variation_annotation, 0, .inherited = true},
  [33] =
    {field_freestanding_comment, 0},
    {field_game, 1},
  [35] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
  [37] =
    {field_header, 0},
    {field_movetext, 1},
  [39] =
    {field_header, 0},
    {field_result_code, 1},
  [41] =
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0},
    {field_tagpair, 1, .inherited = true},
  [44] =
    {field_movetext, 0},
    {field_result_code, 1},
  [46] =
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 1},
  [48] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1},
    {field_game, 0, .inherited = true},
  [51] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
  [55] =
    {field_annotation, 0, .inherited = true},
    {field_annotation, 1, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_lan_move, 0, .inherited = true},
    {field_lan_move, 1, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_move_number, 1, .inherited = true},
    {field_san_move, 0, .inherited = true},
    {field_san_move, 1, .inherited = true},
  [65] =
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 1},
  [67] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [70] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_annotation, 1, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_comment, 1, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_lan_move, 1, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_move_number, 1, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
    {field_variation_san_move, 1, .inherited = true},
  [80] =
    {field_header, 0},
    {field_movetext, 2},
  [82] =
    {field_header, 0},
    {field_result_code, 2},
  [84] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 2},
  [87] =
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [91] =
    {field_movetext, 0},
    {field_result_code, 2},
  [93] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [96] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [98] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [103] =
    {field_recursive_variation_content, 1},
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 2},
  [106] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [109] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 3},
  [112] =
    {field_tagpair_value_contents, 1},
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 2},
  [115] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 8,
  [16] = 16,
  [17] = 9,
  [18] = 9,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 9,
  [25] = 25,
  [26] = 26,
  [27] = 10,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 12,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 11,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 9,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 14,
  [49] = 49,
  [50] = 50,
  [51] = 39,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 21,
  [71] = 69,
  [72] = 32,
  [73] = 9,
  [74] = 26,
  [75] = 35,
  [76] = 25,
  [77] = 34,
  [78] = 78,
  [79] = 23,
  [80] = 33,
  [81] = 59,
  [82] = 38,
  [83] = 30,
  [84] = 29,
  [85] = 28,
  [86] = 37,
  [87] = 22,
  [88] = 39,
  [89] = 43,
  [90] = 40,
  [91] = 39,
  [92] = 42,
  [93] = 45,
  [94] = 41,
  [95] = 95,
  [96] = 58,
  [97] = 97,
  [98] = 62,
  [99] = 56,
  [100] = 97,
  [101] = 101,
  [102] = 53,
  [103] = 64,
  [104] = 104,
  [105] = 65,
  [106] = 68,
  [107] = 69,
  [108] = 61,
  [109] = 57,
  [110] = 69,
  [111] = 67,
  [112] = 55,
  [113] = 66,
  [114] = 63,
  [115] = 60,
  [116] = 50,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 8,
  [132] = 132,
  [133] = 9,
  [134] = 134,
  [135] = 135,
  [136] = 12,
  [137] = 10,
  [138] = 11,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 14,
  [143] = 9,
  [144] = 140,
  [145] = 39,
  [146] = 69,
  [147] = 26,
  [148] = 148,
  [149] = 37,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 39,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 33,
  [163] = 9,
  [164] = 164,
  [165] = 30,
  [166] = 38,
  [167] = 21,
  [168] = 32,
  [169] = 35,
  [170] = 25,
  [171] = 34,
  [172] = 23,
  [173] = 28,
  [174] = 29,
  [175] = 22,
  [176] = 176,
  [177] = 43,
  [178] = 39,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 42,
  [184] = 69,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 65,
  [194] = 64,
  [195] = 195,
  [196] = 196,
  [197] = 69,
  [198] = 61,
  [199] = 199,
  [200] = 58,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 203,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 211,
  [213] = 211,
  [214] = 214,
  [215] = 215,
  [216] = 215,
  [217] = 215,
  [218] = 214,
  [219] = 214,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 223,
  [226] = 223,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 227,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 231,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 227,
  [240] = 228,
  [241] = 241,
  [242] = 234,
  [243] = 243,
  [244] = 232,
  [245] = 237,
  [246] = 228,
  [247] = 229,
  [248] = 233,
  [249] = 231,
  [250] = 233,
  [251] = 232,
  [252] = 234,
  [253] = 241,
  [254] = 237,
  [255] = 241,
  [256] = 229,
  [257] = 243,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 258,
  [263] = 260,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 125,
  [268] = 261,
  [269] = 269,
  [270] = 260,
  [271] = 271,
  [272] = 272,
  [273] = 261,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 258,
  [279] = 279,
  [280] = 280,
  [281] = 261,
  [282] = 260,
  [283] = 261,
  [284] = 260,
  [285] = 261,
  [286] = 260,
  [287] = 261,
  [288] = 279,
  [289] = 279,
};

static TSCharacterRange sym_tagpair_key_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, '!'}, {'#', '$'}, {'&', ':'}, {'<', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x2b9}, {0x2bb, 0x2dc}, {0x2de, 0x2ed}, {0x2ef, 0x2f5}, {0x2f7, 0x5f1}, {0x5f3, 0x5f3}, {0x5f5, 0x201b},
  {0x201e, 0x201e}, {0x2020, 0x2032}, {0x2034, 0x2035}, {0x2037, 0x3002}, {0x3004, 0xff01}, {0xff03, 0x10ffff},
};

static TSCharacterRange aux_sym_tagpair_value_contents_token1_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, '!'}, {'#', 0x2b9}, {0x2bb, 0x2dc}, {0x2de, 0x2ed}, {0x2ef, 0x2f5}, {0x2f7, 0x5f1},
  {0x5f3, 0x5f3}, {0x5f5, 0x201b}, {0x201e, 0x201e}, {0x2020, 0x2032}, {0x2034, 0x2035}, {0x2037, 0x3002}, {0x3004, 0xff01}, {0xff03, 0x10ffff},
};

static TSCharacterRange sym_move_number_character_set_2[] = {
  {'\t', '\r'}, {' ', ' '}, {'.', '.'}, {0x660, 0x660}, {0x6f0, 0x6f0}, {0x701, 0x702}, {0x200e, 0x200e}, {0x2024, 0x2024},
  {0xa4f8, 0xa4f8}, {0xa60e, 0xa60e}, {0x1d16d, 0x1d16d},
};

static TSCharacterRange sym__misc_punctuation_character_set_1[] = {
  {',', ','}, {'.', '.'}, {0x660, 0x660}, {0x6f0, 0x6f0}, {0x701, 0x702}, {0x200e, 0x200e}, {0x2024, 0x2024}, {0xa4f8, 0xa4f8},
  {0xa60e, 0xa60e}, {0x1d16d, 0x1d16d},
};

static TSCharacterRange sym_annotation_character_set_6[] = {
  {'\t', '\r'}, {' ', '!'}, {'$', '$'}, {'&', '&'}, {'+', '+'}, {'-', '-'}, {'<', '='}, {'?', '?'},
  {'N', 'N'}, {'R', 'R'}, {'T', 'T'}, {'e', 'e'}, {0xb1, 0xb1}, {0xd8, 0xd8}, {0xf8, 0xf8}, {0x16ed, 0x16ed},
  {0x2010, 0x2014}, {0x203c, 0x203d}, {0x2047, 0x2049}, {0x2191, 0x2192}, {0x21c6, 0x21c6}, {0x21d4, 0x21d4}, {0x21d7, 0x21d7}, {0x2206, 0x2207},
  {0x2212, 0x2213}, {0x221e, 0x221e}, {0x2264, 0x2264}, {0x2295, 0x2295}, {0x2299, 0x2299}, {0x229e, 0x229e}, {0x22a5, 0x22a5}, {0x2313, 0x2313},
  {0x2514, 0x2514}, {0x2518, 0x2518}, {0x25a1, 0x25a1}, {0x25cb, 0x25cb}, {0x25fa, 0x25fa}, {0x25ff, 0x25ff}, {0x2612, 0x2612}, {0x2642, 0x2642},
  {0x2715, 0x2715}, {0x2795, 0x2796}, {0x27ea, 0x27eb}, {0x27f3, 0x27f3}, {0x2a00, 0x2a01}, {0x2a71, 0x2a72}, {0x2b12, 0x2b13}, {0x2e40, 0x2e40},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '"', 2275,
        '#', 2410,
        '%', 2262,
        '&', 1143,
        '(', 2343,
        ')', 2345,
        '*', 2486,
        '-', 2440,
        '/', 2469,
        '0', 2463,
        '1', 2436,
        '2', 2479,
        ';', 2260,
        '@', 2398,
        'O', 2459,
        'P', 2391,
        '[', 2271,
        ']', 2273,
        'o', 2468,
        '{', 2347,
        '}', 2349,
        0xbd, 2482,
        0x2ba, 2295,
        0x2dd, 2293,
        0x2ee, 2299,
        0x2f6, 2297,
        0x5f2, 2301,
        0x5f4, 2291,
        0x66d, 2502,
        0x2010, 2444,
        0x2011, 2446,
        0x2012, 2448,
        0x2013, 2450,
        0x2014, 2452,
        0x201c, 2279,
        0x201d, 2281,
        0x201f, 2283,
        0x2033, 2285,
        0x2036, 2287,
        0x2044, 2473,
        0x204e, 2498,
        0x2212, 2442,
        0x2215, 2471,
        0x2217, 2490,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2796, 2454,
        0x27cb, 2475,
        0x29f8, 2477,
        0x3003, 2289,
        0xff02, 2277,
        '=', 2384,
        0x2e40, 2384,
        '+', 2413,
        0x16ed, 2413,
        0x2795, 2413,
        ':', 2382,
        'X', 2382,
        'x', 2382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2256);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(2371);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2372);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1198);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(856);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 145,
        'D', 582,
        'L', 522,
        'M', 639,
        'O', 742,
        'P', 647,
        'R', 523,
        'S', 613,
        'U', 703,
        'b', 638,
        'c', 636,
        'd', 521,
        'e', 709,
        'h', 526,
        'i', 668,
        'l', 580,
        'm', 532,
        'n', 519,
        'o', 559,
        'p', 583,
        'q', 782,
        'r', 524,
        's', 646,
        'u', 525,
        'x', 691,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead == 'h') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 151,
        'd', 541,
        'e', 721,
        'h', 807,
        'm', 561,
        'n', 562,
        's', 699,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(428);
      if (lookahead == 'i') ADVANCE(690);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == 'q') ADVANCE(802);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(735);
      if (lookahead == 'h') ADVANCE(539);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 157,
        'D', 582,
        'L', 522,
        'M', 639,
        'O', 742,
        'P', 647,
        'R', 523,
        'S', 613,
        'U', 703,
        'a', 759,
        'b', 638,
        'c', 636,
        'd', 521,
        'e', 709,
        'f', 730,
        'h', 529,
        'i', 668,
        'l', 579,
        'm', 531,
        'n', 519,
        'o', 559,
        'p', 584,
        'q', 782,
        'r', 524,
        's', 646,
        'u', 525,
        'x', 691,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 198,
        'd', 547,
        'h', 809,
        'm', 567,
        'n', 568,
        'p', 662,
        's', 700,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 221,
        'd', 541,
        'e', 721,
        'h', 807,
        'm', 561,
        'n', 562,
        'p', 664,
        's', 699,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 227,
        'd', 550,
        'h', 812,
        'm', 573,
        'n', 574,
        's', 701,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'h') ADVANCE(807);
      if (lookahead == 'm') ADVANCE(561);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 233,
        'D', 582,
        'L', 522,
        'M', 639,
        'O', 742,
        'P', 647,
        'R', 523,
        'S', 613,
        'U', 703,
        'a', 759,
        'b', 638,
        'c', 636,
        'd', 521,
        'e', 709,
        'f', 730,
        'h', 529,
        'i', 668,
        'l', 579,
        'm', 531,
        'n', 519,
        'o', 559,
        'p', 583,
        'q', 782,
        'r', 524,
        's', 646,
        'u', 525,
        'x', 691,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 235,
        'D', 582,
        'L', 522,
        'M', 639,
        'O', 742,
        'P', 647,
        'R', 523,
        'S', 613,
        'U', 703,
        'a', 759,
        'b', 638,
        'c', 636,
        'd', 553,
        'e', 710,
        'f', 730,
        'h', 530,
        'i', 668,
        'l', 579,
        'm', 533,
        'n', 520,
        'o', 559,
        'p', 584,
        'q', 782,
        'r', 524,
        's', 646,
        'u', 525,
        'x', 691,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '#', 237,
        'D', 582,
        'L', 522,
        'M', 639,
        'O', 742,
        'P', 647,
        'R', 523,
        'S', 613,
        'U', 703,
        'a', 759,
        'b', 638,
        'c', 636,
        'd', 521,
        'e', 710,
        'f', 730,
        'h', 529,
        'i', 668,
        'l', 579,
        'm', 531,
        'n', 519,
        'o', 559,
        'p', 584,
        'q', 782,
        'r', 524,
        's', 646,
        'u', 525,
        'x', 691,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(810);
      if (lookahead == 'm') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == 's') ADVANCE(702);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == 'h') ADVANCE(811);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(551);
      if (lookahead == 'h') ADVANCE(813);
      if (lookahead == 'm') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead == 'h') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(854);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 13,
        '/', 41,
        0x2044, 41,
        0x2215, 41,
        0x27cb, 41,
        0x29f8, 41,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == 0x221e) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == 0xbd) ADVANCE(2513);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 31,
        '/', 7,
        0x2044, 7,
        0x2215, 7,
        0x27cb, 7,
        0x29f8, 7,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(34);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(8);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(1102);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '7') ADVANCE(413);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(427);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == '5') ADVANCE(239);
      if (lookahead == '6') ADVANCE(308);
      if (lookahead == '7') ADVANCE(104);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(427);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == '5') ADVANCE(239);
      if (lookahead == '6') ADVANCE(308);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 56:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 152,
        '1', 459,
        '2', 58,
        '3', 195,
        '5', 154,
        '6', 190,
        '7', 179,
        'A', 64,
        'a', 64,
        'B', 164,
        'b', 164,
        'D', 474,
        'd', 474,
        'E', 346,
        'e', 346,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(155);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 58:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 389,
        '1', 263,
        '6', 343,
        '9', 372,
        'A', 373,
        'a', 373,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 389,
        '1', 261,
        '6', 343,
        '9', 372,
        'A', 373,
        'a', 373,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 60:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 389,
        '1', 285,
        '6', 343,
        '9', 372,
        'A', 373,
        'a', 373,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '6') ADVANCE(363);
      if (lookahead == '7') ADVANCE(413);
      if (lookahead == '8') ADVANCE(462);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '6') ADVANCE(363);
      if (lookahead == '7') ADVANCE(413);
      if (lookahead == '8') ADVANCE(462);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '7') ADVANCE(146);
      if (lookahead == ';') ADVANCE(2489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '7') ADVANCE(146);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(423);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(423);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(317);
      if (lookahead == '2') ADVANCE(166);
      if (lookahead == '7') ADVANCE(374);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(334);
      if (lookahead == '2') ADVANCE(166);
      if (lookahead == '7') ADVANCE(374);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(335);
      if (lookahead == '2') ADVANCE(166);
      if (lookahead == '7') ADVANCE(374);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 70:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 153,
        '1', 459,
        '2', 59,
        '3', 195,
        '5', 154,
        '6', 190,
        '7', 177,
        'A', 63,
        'a', 63,
        'B', 165,
        'b', 165,
        'D', 474,
        'd', 474,
        'E', 346,
        'e', 346,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 71:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 153,
        '1', 459,
        '2', 59,
        '3', 195,
        '5', 154,
        '6', 190,
        '7', 177,
        'A', 63,
        'a', 63,
        'B', 165,
        'b', 165,
        'D', 474,
        'd', 474,
        'E', 366,
        'e', 366,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 72:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 153,
        '1', 459,
        '2', 59,
        '3', 195,
        '5', 154,
        '6', 190,
        '7', 176,
        'A', 63,
        'a', 63,
        'B', 164,
        'b', 164,
        'D', 474,
        'd', 474,
        'E', 346,
        'e', 346,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(183);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 167,
        '2', 156,
        '7', 450,
        '9', 847,
        'D', 479,
        'd', 479,
        'E', 347,
        'e', 347,
        'F', 500,
        'f', 500,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 75:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 167,
        '2', 156,
        '7', 458,
        '9', 847,
        'B', 486,
        'b', 486,
        'D', 479,
        'd', 479,
        'E', 347,
        'e', 347,
        'F', 500,
        'f', 500,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(373);
      if (lookahead == '3') ADVANCE(328);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(373);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(251);
      if (lookahead == '8') ADVANCE(346);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(251);
      if (lookahead == '8') ADVANCE(366);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(343);
      if (lookahead == '5') ADVANCE(312);
      if (lookahead == '6') ADVANCE(243);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 208,
        '2', 170,
        '7', 457,
        '9', 848,
        'B', 479,
        'b', 479,
        'D', 482,
        'd', 482,
        'F', 483,
        'f', 483,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(474);
      if (lookahead == '1') ADVANCE(474);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == '4') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(474);
      if (lookahead == '1') ADVANCE(474);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '1') ADVANCE(317);
      if (lookahead == '2') ADVANCE(166);
      if (lookahead == '7') ADVANCE(374);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 361,
        '2', 207,
        '7', 455,
        '9', 845,
        'B', 479,
        'b', 479,
        'F', 480,
        'f', 480,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(485);
      if (lookahead == '1') ADVANCE(499);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(485);
      if (lookahead == '1') ADVANCE(503);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(197);
      if (lookahead == '2') ADVANCE(192);
      if (lookahead == '7') ADVANCE(460);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(501);
      if (lookahead == '1') ADVANCE(501);
      if (lookahead == '2') ADVANCE(501);
      if (lookahead == '3') ADVANCE(501);
      if (lookahead == '4') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(501);
      if (lookahead == '1') ADVANCE(501);
      if (lookahead == '2') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(480);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(481);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(482);
      if (lookahead == '1') ADVANCE(482);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == '4') ADVANCE(482);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(482);
      if (lookahead == '1') ADVANCE(482);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(186);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(483);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '2') ADVANCE(191);
      if (lookahead == '7') ADVANCE(451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(471);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(504);
      if (lookahead == '1') ADVANCE(504);
      if (lookahead == '2') ADVANCE(504);
      if (lookahead == '3') ADVANCE(504);
      if (lookahead == '4') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(504);
      if (lookahead == '1') ADVANCE(504);
      if (lookahead == '2') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(489);
      if (lookahead == '1') ADVANCE(489);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead == '4') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(489);
      if (lookahead == '1') ADVANCE(489);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(505);
      if (lookahead == '1') ADVANCE(505);
      if (lookahead == '2') ADVANCE(505);
      if (lookahead == '3') ADVANCE(505);
      if (lookahead == '4') ADVANCE(505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(505);
      if (lookahead == '1') ADVANCE(505);
      if (lookahead == '2') ADVANCE(505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(502);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(506);
      if (lookahead == '1') ADVANCE(506);
      if (lookahead == '2') ADVANCE(506);
      if (lookahead == '3') ADVANCE(506);
      if (lookahead == '4') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(506);
      if (lookahead == '1') ADVANCE(506);
      if (lookahead == '2') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(498);
      if (lookahead == '1') ADVANCE(498);
      if (lookahead == '2') ADVANCE(498);
      if (lookahead == '3') ADVANCE(498);
      if (lookahead == '4') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(498);
      if (lookahead == '1') ADVANCE(498);
      if (lookahead == '2') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(497);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(169);
      if (lookahead == '1') ADVANCE(441);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 117:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 220,
        '1', 459,
        '2', 60,
        '3', 195,
        '5', 154,
        '6', 190,
        '7', 178,
        'A', 63,
        'a', 63,
        'B', 165,
        'b', 165,
        'D', 498,
        'd', 498,
        'E', 366,
        'e', 366,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(507);
      if (lookahead == '1') ADVANCE(507);
      if (lookahead == '2') ADVANCE(507);
      if (lookahead == '3') ADVANCE(507);
      if (lookahead == '4') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(507);
      if (lookahead == '1') ADVANCE(507);
      if (lookahead == '2') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(508);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(433);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '6') ADVANCE(99);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(181);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(435);
      if (lookahead == '1') ADVANCE(103);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == '1') ADVANCE(441);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(436);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(187);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(437);
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '6') ADVANCE(109);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(439);
      if (lookahead == '1') ADVANCE(111);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(443);
      if (lookahead == '1') ADVANCE(119);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(440);
      if (lookahead == '1') ADVANCE(113);
      if (lookahead == '5') ADVANCE(239);
      if (lookahead == '6') ADVANCE(308);
      if (lookahead == '7') ADVANCE(104);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '6') ADVANCE(363);
      if (lookahead == '7') ADVANCE(413);
      if (lookahead == '8') ADVANCE(462);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(204);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(222);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 134:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 215,
        '2', 199,
        '7', 467,
        '9', 849,
        'D', 505,
        'd', 505,
        'F', 502,
        'f', 502,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 135:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 362,
        '2', 210,
        '7', 830,
        '9', 846,
        'F', 481,
        'f', 481,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == '2') ADVANCE(193);
      if (lookahead == '7') ADVANCE(465);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(228);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(213);
      if (lookahead == '2') ADVANCE(209);
      if (lookahead == '7') ADVANCE(466);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(217);
      if (lookahead == '2') ADVANCE(212);
      if (lookahead == '7') ADVANCE(468);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(231);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(218);
      if (lookahead == '2') ADVANCE(216);
      if (lookahead == '7') ADVANCE(469);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 143:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '0', 368,
        '2', 219,
        '7', 831,
        '9', 850,
        'F', 508,
        'f', 508,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '6') ADVANCE(363);
      if (lookahead == '7') ADVANCE(413);
      if (lookahead == '8') ADVANCE(462);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 145:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 53,
        '2', 149,
        '3', 316,
        '4', 319,
        '5', 425,
        '6', 87,
        '8', 245,
        '9', 345,
        'X', 173,
        'x', 173,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(492);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(390);
      if (lookahead == '4') ADVANCE(424);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '4') ADVANCE(376);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(247);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 151:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 116,
        '4', 371,
        '6', 148,
        '8', 249,
        'X', 250,
        'x', 250,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(827);
      if (lookahead == '4') ADVANCE(412);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(827);
      if (lookahead == '4') ADVANCE(411);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 342,
        'A', 148,
        'a', 148,
        'C', 819,
        'c', 819,
        'F', 818,
        'f', 818,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(331);
      if (lookahead == '7') ADVANCE(361);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(240);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 157:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 61,
        '2', 149,
        '3', 316,
        '4', 278,
        '5', 445,
        '6', 87,
        '8', 253,
        '9', 345,
        'X', 223,
        'x', 223,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(2509);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 159:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 57,
        '4', 313,
        '5', 442,
        '6', 148,
        '8', 266,
        'X', 200,
        'x', 200,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 160:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 57,
        '4', 313,
        '5', 442,
        '8', 266,
        'X', 201,
        'x', 201,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == '2') ADVANCE(262);
      if (lookahead == '3') ADVANCE(353);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead == '3') ADVANCE(353);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == '2') ADVANCE(286);
      if (lookahead == '3') ADVANCE(353);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(239);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(239);
      if (lookahead == ';') ADVANCE(2411);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(423);
      if (lookahead == '2') ADVANCE(413);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '4') ADVANCE(351);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(320);
      if (lookahead == '7') ADVANCE(364);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(273);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(333);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(441);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 173:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 392,
        '2', 56,
        '3', 828,
        'B', 148,
        'b', 148,
        'D', 424,
        'd', 424,
        'F', 424,
        'f', 424,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 174:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 392,
        '2', 72,
        '3', 828,
        '6', 402,
        'B', 147,
        'b', 147,
        'D', 424,
        'd', 424,
        'F', 424,
        'f', 424,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '4') ADVANCE(418);
      if (lookahead == '8') ADVANCE(303);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 176:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 373,
        '3', 194,
        '9', 375,
        'E', 817,
        'e', 817,
        'F', 314,
        'f', 314,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 177:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 373,
        '3', 194,
        '9', 380,
        'E', 817,
        'e', 817,
        'F', 314,
        'f', 314,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 178:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 373,
        '3', 194,
        '9', 381,
        'E', 817,
        'e', 817,
        'F', 314,
        'f', 314,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 179:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 373,
        '9', 375,
        'E', 817,
        'e', 817,
        'F', 314,
        'f', 314,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(838);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '7') ADVANCE(365);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(426);
      if (lookahead == '7') ADVANCE(362);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(172);
      if (lookahead == '6') ADVANCE(148);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(323);
      if (lookahead == '7') ADVANCE(364);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(332);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(338);
      if (lookahead == '7') ADVANCE(367);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(447);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(826);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(244);
      if (lookahead == '4') ADVANCE(244);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(244);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(269);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(276);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(496);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(314);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '4') ADVANCE(373);
      if (lookahead == '8') ADVANCE(265);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(257);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(90);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 198:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 122,
        '4', 311,
        '5', 442,
        '8', 258,
        'X', 202,
        'x', 202,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(401);
      if (lookahead == '2') ADVANCE(86);
      if (lookahead == '3') ADVANCE(832);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(401);
      if (lookahead == '2') ADVANCE(86);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(401);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(401);
      if (lookahead == '2') ADVANCE(416);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(448);
      if (lookahead == '7') ADVANCE(368);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(280);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '4') ADVANCE(314);
      if (lookahead == '5') ADVANCE(442);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(203);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(377);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(96);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(281);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(378);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(283);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(105);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(284);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == '4') ADVANCE(357);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(291);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(110);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(118);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(388);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '3') ADVANCE(827);
      if (lookahead == '4') ADVANCE(411);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 221:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 124,
        '4', 327,
        '5', 446,
        '6', 148,
        '8', 249,
        'X', 229,
        'x', 229,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(336);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 223:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 409,
        '2', 70,
        '3', 828,
        '6', 402,
        'B', 147,
        'b', 147,
        'D', 424,
        'd', 424,
        'F', 424,
        'f', 424,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 224:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 409,
        '2', 117,
        '3', 829,
        '6', 402,
        'B', 147,
        'b', 147,
        'D', 424,
        'd', 424,
        'F', 424,
        'f', 424,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 225:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 409,
        '2', 71,
        '3', 829,
        '6', 402,
        'B', 147,
        'b', 147,
        'D', 424,
        'd', 424,
        'F', 424,
        'f', 424,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(132);
      if (lookahead == '4') ADVANCE(422);
      if (lookahead == '8') ADVANCE(305);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(288);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == '4') ADVANCE(385);
      if (lookahead == '8') ADVANCE(301);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(254);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(337);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(410);
      if (lookahead == '2') ADVANCE(75);
      if (lookahead == '3') ADVANCE(832);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(339);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(340);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '4') ADVANCE(379);
      if (lookahead == '8') ADVANCE(302);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(287);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 233:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 131,
        '2', 149,
        '3', 316,
        '4', 277,
        '5', 425,
        '6', 87,
        '8', 253,
        '9', 345,
        'X', 174,
        'x', 174,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '4') ADVANCE(384);
      if (lookahead == '8') ADVANCE(304);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(293);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 235:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 144,
        '2', 149,
        '3', 316,
        '4', 279,
        '5', 445,
        '6', 88,
        '8', 289,
        '9', 345,
        'X', 224,
        'x', 224,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(139);
      if (lookahead == '4') ADVANCE(386);
      if (lookahead == '8') ADVANCE(306);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(296);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 237:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '1', 62,
        '2', 149,
        '3', 316,
        '4', 278,
        '5', 445,
        '6', 88,
        '8', 253,
        '9', 345,
        'X', 225,
        'x', 225,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(141);
      if (lookahead == '4') ADVANCE(387);
      if (lookahead == '8') ADVANCE(307);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(298);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '5') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '7') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '9') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 245:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '2', 55,
        '5', 452,
        '6', 344,
        '7', 162,
        '8', 81,
        '9', 415,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(148);
      if (lookahead == '3') ADVANCE(844);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(89);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '7') ADVANCE(252);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(74);
      if (lookahead == '3') ADVANCE(832);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(389);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(240);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 253:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '2', 54,
        '5', 452,
        '6', 344,
        '7', 161,
        '8', 81,
        '9', 415,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(134);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(2511);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(841);
      if (lookahead == '3') ADVANCE(832);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(100);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(121);
      if (lookahead == '7') ADVANCE(259);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(273);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == '7') ADVANCE(271);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '7') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '7') ADVANCE(495);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(66);
      if (lookahead == '7') ADVANCE(270);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '7') ADVANCE(292);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(242);
      if (lookahead == '4') ADVANCE(390);
      if (lookahead == '9') ADVANCE(343);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(244);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(269);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(275);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead == '5') ADVANCE(483);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(276);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(490);
      if (lookahead == '3') ADVANCE(473);
      if (lookahead == '5') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(490);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '5') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(490);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '5') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(492);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(505);
      if (lookahead == '5') ADVANCE(502);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(491);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(498);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '7') ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(498);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '7') ADVANCE(495);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(136);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(143);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 289:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '2', 130,
        '5', 452,
        '6', 344,
        '7', 163,
        '8', 81,
        '9', 415,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(377);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(138);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(281);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(378);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(140);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(283);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(291);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(388);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(127);
      if (lookahead == '7') ADVANCE(290);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(123);
      if (lookahead == '7') ADVANCE(274);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(406);
      if (lookahead == '7') ADVANCE(295);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(125);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '7') ADVANCE(300);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '7') ADVANCE(297);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(129);
      if (lookahead == '7') ADVANCE(299);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '4') ADVANCE(482);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '5') ADVANCE(482);
      if (lookahead == '7') ADVANCE(483);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '7') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '7') ADVANCE(480);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(832);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(318);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(473);
      if (lookahead == '4') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(473);
      if (lookahead == '5') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(343);
      if (lookahead == '8') ADVANCE(419);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(343);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(310);
      if (lookahead == '8') ADVANCE(420);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(326);
      if (lookahead == '8') ADVANCE(419);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '4') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '4') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(486);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(486);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '7') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(496);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(314);
      if (lookahead == '6') ADVANCE(314);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(246);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(314);
      if (lookahead == '7') ADVANCE(373);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(314);
      if (lookahead == '8') ADVANCE(417);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(314);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(348);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(324);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(325);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(355);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(356);
      if (lookahead == '8') ADVANCE(421);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(358);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(359);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead == '7') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead == '8') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(390);
      if (lookahead == '6') ADVANCE(51);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(453);
      if (lookahead == '6') ADVANCE(330);
      if (lookahead == '7') ADVANCE(267);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(101);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(52);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(480);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(481);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(483);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(470);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(502);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(508);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(349);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(350);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(383);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(351);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(114);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(357);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(360);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '6') ADVANCE(482);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '7') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '9') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(239);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(473);
      if (lookahead == '6') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(480);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(481);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(488);
      if (lookahead == '6') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(488);
      if (lookahead == '6') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(486);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(493);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(505);
      if (lookahead == '7') ADVANCE(502);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(508);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead == '7') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(148);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(315);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(840);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(369);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(454);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(449);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(839);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(836);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(92);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(461);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(93);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(463);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(120);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(842);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(843);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(479);
      if (lookahead == '8') ADVANCE(479);
      if (lookahead == '9') ADVANCE(479);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(479);
      if (lookahead == '8') ADVANCE(479);
      if (lookahead == '9') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(321);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(449);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(456);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(480);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(481);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(483);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(502);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(508);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(479);
      if (lookahead == '9') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(394);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(418);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(474);
      if (lookahead == '9') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(414);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(272);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(501);
      if (lookahead == '9') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(480);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(481);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(482);
      if (lookahead == '9') ADVANCE(482);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(483);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(504);
      if (lookahead == '9') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(489);
      if (lookahead == '9') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(505);
      if (lookahead == '9') ADVANCE(505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(502);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(506);
      if (lookahead == '9') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(498);
      if (lookahead == '9') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(347);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(395);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(507);
      if (lookahead == '9') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(508);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(404);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(407);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(464);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(422);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(390);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(822);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(390);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(309);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(241);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(473);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(820);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(373);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(370);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(823);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(822);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 459:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '9', 146,
        ';', 2421,
        'C', 390,
        'c', 390,
        'D', 341,
        'd', 341,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(396);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(488);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(492);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(486);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(491);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(397);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(398);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(399);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(824);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(400);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(405);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2426);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2417);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(479);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == 'm') ADVANCE(667);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2420);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2425);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2425);
      if (lookahead == 'f') ADVANCE(772);
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2425);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2425);
      if (lookahead == 't') ADVANCE(692);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(866);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2409);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2421);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2412);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2411);
      if (lookahead == 'b') ADVANCE(479);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == 'm') ADVANCE(667);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2411);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2513);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2484);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2493);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2497);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2385);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2401);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2422);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(854);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2387);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(855);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(733);
      if (lookahead == 'R') ADVANCE(635);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(733);
      if (lookahead == 'T') ADVANCE(585);
      if (lookahead == 'p') ADVANCE(588);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(733);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(589);
      if (lookahead == 'R') ADVANCE(635);
      if (lookahead == 'U') ADVANCE(708);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(643);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(662);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(635);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'v') ADVANCE(650);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'v') ADVANCE(650);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == 'i') ADVANCE(611);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == 'p') ADVANCE(535);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == 'y') ADVANCE(706);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'y') ADVANCE(706);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'y') ADVANCE(720);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead == 'n') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 'n') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(733);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(733);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(660);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(766);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(767);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(649);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(648);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(696);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == 's') ADVANCE(665);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(696);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'n') ADVANCE(788);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'n') ADVANCE(801);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead == 'i') ADVANCE(683);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(547);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(548);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(687);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(551);
      if (lookahead == 'i') ADVANCE(688);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(551);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(729);
      if (lookahead == 'l') ADVANCE(785);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(729);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(674);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(773);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(746);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(640);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(641);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(691);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(616);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(619);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(695);
      if (lookahead == 'q') ADVANCE(797);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(773);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(587);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(780);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(482);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(592);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(593);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(594);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(595);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(596);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(598);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(770);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(673);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(667);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(611);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == 'q') ADVANCE(781);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(776);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(581);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == 'r') ADVANCE(723);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(736);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(747);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(787);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(795);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(786);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(787);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(788);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(789);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(792);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(796);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(798);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(799);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(800);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(666);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(769);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(655);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(617);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(535);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == 'q') ADVANCE(784);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == 'q') ADVANCE(803);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(644);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(627);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(628);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(629);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(630);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(632);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(633);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(794);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(723);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(704);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(693);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(731);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(725);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(472);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(665);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(612);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(769);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(790);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(775);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(618);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(778);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(779);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(622);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == 'x') ADVANCE(711);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(726);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(737);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(537);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 787:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 788:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(743);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 789:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 790:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 791:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 792:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(751);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 793:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(741);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 794:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(538);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 795:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(752);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 796:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(753);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 797:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(536);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 798:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(754);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 799:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 800:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(760);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 801:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(756);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 802:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(591);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 803:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 804:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 805:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(546);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 806:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(555);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 807:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(707);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 808:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(713);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 809:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(714);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 810:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(715);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 811:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(716);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 812:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(717);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 813:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(718);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 814:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(719);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 815:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 0xfe0e) ADVANCE(2397);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 816:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 817:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 818:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 819:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 820:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(480);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 821:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(481);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 822:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(500);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 823:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(483);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 824:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(502);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 825:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(508);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 826:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(837);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 827:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(479);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 828:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        'C', 485,
        'c', 485,
        'D', 499,
        'd', 499,
        'F', 484,
        'f', 484,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 829:
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        'C', 485,
        'c', 485,
        'D', 503,
        'd', 503,
        'F', 484,
        'f', 484,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 830:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(821);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 831:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(825);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 832:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 833:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 834:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(488);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 835:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(486);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 836:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(493);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 837:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(491);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 838:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 839:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 840:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 841:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 842:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 843:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 844:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(479);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 845:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(430);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 846:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(431);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 847:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(432);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 848:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(434);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 849:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(438);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 850:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(444);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 851:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2409);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 852:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(851);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 853:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2409);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 854:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2404);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 855:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2405);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 856:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2507);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 857:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2424);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 858:
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 859:
      ADVANCE_MAP(
        '\n', 2361,
        '\r', 2356,
        '&', 11,
        '\t', 2355,
        0x0b, 2355,
        '\f', 2355,
        ' ', 2355,
        'A', 861,
        'B', 861,
        'a', 861,
        'b', 861,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(854);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 860:
      if (lookahead == '\n') ADVANCE(2361);
      if (lookahead == '\r') ADVANCE(2356);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2355);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(861);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 861:
      if (lookahead == '\n') ADVANCE(2361);
      if (lookahead == '\r') ADVANCE(2356);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2355);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 862:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 863,
        '&', 22,
        '\t', 862,
        0x0b, 862,
        '\f', 862,
        ' ', 862,
        '/', 866,
        0x2044, 866,
        0x2215, 866,
        0x27cb, 866,
        0x29f8, 866,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 863:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '&') ADVANCE(1157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1181);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1183);
      END_STATE();
    case 864:
      ADVANCE_MAP(
        '\n', 1127,
        '\r', 1128,
        '!', 2423,
        '$', 857,
        '&', 10,
        '(', 2344,
        '0', 859,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'p', 816,
        '{', 2348,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2e40, 2417,
        'O', 35,
        'o', 35,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 865,
        0x0b, 865,
        '\f', 865,
        ' ', 865,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 865:
      ADVANCE_MAP(
        '\n', 1127,
        '\r', 864,
        '!', 2423,
        '$', 857,
        '&', 10,
        '(', 2344,
        '0', 859,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'p', 816,
        '{', 2348,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2e40, 2417,
        'O', 35,
        'o', 35,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 865,
        0x0b, 865,
        '\f', 865,
        ' ', 865,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 866:
      ADVANCE_MAP(
        '\n', 1182,
        '\r', 867,
        '&', 15,
        '=', 2425,
        0x2e40, 2425,
        '\t', 866,
        0x0b, 866,
        '\f', 866,
        ' ', 866,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 867:
      if (lookahead == '\n') ADVANCE(1182);
      if (lookahead == '&') ADVANCE(1148);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2415);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1183);
      END_STATE();
    case 868:
      if (lookahead == '\n') ADVANCE(2269);
      END_STATE();
    case 869:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      END_STATE();
    case 870:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(869);
      END_STATE();
    case 871:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(870);
      END_STATE();
    case 872:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 873:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 874:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 875:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(874);
      END_STATE();
    case 876:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(875);
      END_STATE();
    case 877:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(876);
      END_STATE();
    case 878:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(877);
      END_STATE();
    case 879:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(878);
      END_STATE();
    case 880:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 881:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(880);
      END_STATE();
    case 882:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(881);
      END_STATE();
    case 883:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(882);
      END_STATE();
    case 884:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(883);
      END_STATE();
    case 885:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(884);
      END_STATE();
    case 886:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 887:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(886);
      END_STATE();
    case 888:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(887);
      END_STATE();
    case 889:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(888);
      END_STATE();
    case 890:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 891:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(890);
      END_STATE();
    case 892:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(891);
      END_STATE();
    case 893:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(892);
      END_STATE();
    case 894:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(893);
      END_STATE();
    case 895:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(894);
      END_STATE();
    case 896:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(895);
      END_STATE();
    case 897:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(896);
      END_STATE();
    case 898:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(897);
      END_STATE();
    case 899:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(898);
      END_STATE();
    case 900:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(899);
      END_STATE();
    case 901:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(900);
      END_STATE();
    case 902:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(901);
      END_STATE();
    case 903:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(902);
      END_STATE();
    case 904:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(903);
      END_STATE();
    case 905:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(904);
      END_STATE();
    case 906:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(905);
      END_STATE();
    case 907:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(906);
      END_STATE();
    case 908:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(907);
      END_STATE();
    case 909:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(908);
      END_STATE();
    case 910:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(909);
      END_STATE();
    case 911:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(910);
      END_STATE();
    case 912:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(911);
      END_STATE();
    case 913:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(912);
      END_STATE();
    case 914:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(913);
      END_STATE();
    case 915:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(914);
      END_STATE();
    case 916:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(915);
      END_STATE();
    case 917:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(916);
      END_STATE();
    case 918:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(917);
      END_STATE();
    case 919:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(918);
      END_STATE();
    case 920:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(919);
      END_STATE();
    case 921:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(920);
      END_STATE();
    case 922:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(921);
      END_STATE();
    case 923:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(922);
      END_STATE();
    case 924:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(923);
      END_STATE();
    case 925:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(924);
      END_STATE();
    case 926:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(925);
      END_STATE();
    case 927:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(926);
      END_STATE();
    case 928:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(927);
      END_STATE();
    case 929:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(928);
      END_STATE();
    case 930:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(929);
      END_STATE();
    case 931:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(930);
      END_STATE();
    case 932:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(931);
      END_STATE();
    case 933:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(932);
      END_STATE();
    case 934:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(933);
      END_STATE();
    case 935:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(934);
      END_STATE();
    case 936:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(935);
      END_STATE();
    case 937:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(936);
      END_STATE();
    case 938:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(937);
      END_STATE();
    case 939:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(938);
      END_STATE();
    case 940:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(939);
      END_STATE();
    case 941:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(940);
      END_STATE();
    case 942:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(941);
      END_STATE();
    case 943:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(942);
      END_STATE();
    case 944:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(943);
      END_STATE();
    case 945:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(944);
      END_STATE();
    case 946:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(945);
      END_STATE();
    case 947:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(946);
      END_STATE();
    case 948:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(947);
      END_STATE();
    case 949:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(948);
      END_STATE();
    case 950:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(949);
      END_STATE();
    case 951:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(950);
      END_STATE();
    case 952:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(951);
      END_STATE();
    case 953:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(952);
      END_STATE();
    case 954:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(953);
      END_STATE();
    case 955:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(954);
      END_STATE();
    case 956:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(955);
      END_STATE();
    case 957:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(956);
      END_STATE();
    case 958:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(957);
      END_STATE();
    case 959:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(958);
      END_STATE();
    case 960:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(959);
      END_STATE();
    case 961:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(960);
      END_STATE();
    case 962:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(961);
      END_STATE();
    case 963:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(962);
      END_STATE();
    case 964:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(963);
      END_STATE();
    case 965:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(964);
      END_STATE();
    case 966:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(965);
      END_STATE();
    case 967:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(966);
      END_STATE();
    case 968:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(967);
      END_STATE();
    case 969:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(968);
      END_STATE();
    case 970:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(969);
      END_STATE();
    case 971:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(970);
      END_STATE();
    case 972:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(971);
      END_STATE();
    case 973:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(972);
      END_STATE();
    case 974:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(973);
      END_STATE();
    case 975:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(974);
      END_STATE();
    case 976:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(975);
      END_STATE();
    case 977:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(976);
      END_STATE();
    case 978:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(977);
      END_STATE();
    case 979:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(978);
      END_STATE();
    case 980:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(979);
      END_STATE();
    case 981:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(980);
      END_STATE();
    case 982:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(981);
      END_STATE();
    case 983:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(982);
      END_STATE();
    case 984:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(983);
      END_STATE();
    case 985:
      if (lookahead == '\n') ADVANCE(2269);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '-') ADVANCE(984);
      END_STATE();
    case 986:
      if (lookahead == '\n') ADVANCE(2270);
      END_STATE();
    case 987:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1103);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 988:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(987);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 989:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 990:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 991:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(990);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 992:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(991);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 993:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 994:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 995:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 996:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(995);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 997:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 998:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(997);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 999:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(998);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1000:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(999);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1001:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1002:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1003:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1004:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1005:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1004);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1006:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1005);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1007:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1006);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1008:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1009:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1010:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1011:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1010);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1012:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1011);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1013:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1014:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1015:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1014);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1016:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1017:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1018:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1019:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1018);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1020:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1021:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1022:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1023:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1022);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1024:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1023);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1025:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1026:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1025);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1027:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1028:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1027);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1029:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1028);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1030:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1029);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1031:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1032:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1031);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1033:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1032);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1034:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1035:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1034);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1036:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1035);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1037:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1036);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1038:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1037);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1039:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1038);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1040:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1039);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1041:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1040);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1042:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1043:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1042);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1044:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1043);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1045:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1044);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1046:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1045);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1047:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1046);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1048:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1047);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1049:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1048);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1050:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1049);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1051:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1050);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1052:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1051);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1053:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1052);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1054:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1053);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1055:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1054);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1056:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1055);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1057:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1056);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1058:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1057);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1059:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1058);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1060:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1059);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1061:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1060);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1062:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1061);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1063:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1062);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1064:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1063);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1065:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1064);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1066:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1065);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1067:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1066);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1068:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1069:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1068);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1070:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1069);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1071:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1072:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1071);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1073:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1072);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1074:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1073);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1075:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1074);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1076:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1077:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1076);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1078:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1077);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1079:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1078);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1080:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1079);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1081:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1080);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1082:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1081);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1083:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1082);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1084:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1083);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1085:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1084);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1086:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1087:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1086);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1088:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1087);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1089:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1088);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1090:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1089);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1091:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1090);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1092:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1091);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1093:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1092);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1094:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1093);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1095:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1094);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1096:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1095);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1097:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1096);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1098:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1097);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1099:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1098);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1100:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1099);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1101:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1100);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1102:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead == '-') ADVANCE(1101);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1103:
      if (lookahead == '\n') ADVANCE(2270);
      if (lookahead == '\r') ADVANCE(986);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1104:
      ADVANCE_MAP(
        '\n', 1129,
        '\r', 1130,
        '!', 2423,
        '$', 857,
        '&', 27,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'O', 2457,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2417,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1105,
        0x0b, 1105,
        '\f', 1105,
        ' ', 1105,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2366);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1105:
      ADVANCE_MAP(
        '\n', 1129,
        '\r', 1104,
        '!', 2423,
        '$', 857,
        '&', 27,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'O', 2457,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2417,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1105,
        0x0b, 1105,
        '\f', 1105,
        ' ', 1105,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2366);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1106:
      ADVANCE_MAP(
        '\n', 1109,
        '\r', 1106,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1106,
        0x0b, 1106,
        '\f', 1106,
        ' ', 1106,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1107:
      ADVANCE_MAP(
        '\n', 1109,
        '\r', 1106,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1106,
        0x0b, 1106,
        '\f', 1106,
        ' ', 1106,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1108:
      ADVANCE_MAP(
        '\n', 2258,
        '\r', 1106,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1106,
        0x0b, 1106,
        '\f', 1106,
        ' ', 1106,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1109:
      ADVANCE_MAP(
        '\n', 2258,
        '\r', 1108,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1106,
        0x0b, 1106,
        '\f', 1106,
        ' ', 1106,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1110:
      ADVANCE_MAP(
        '\n', 2263,
        '\r', 1110,
        '!', 2423,
        '$', 857,
        '&', 27,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'O', 2457,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2417,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1110,
        0x0b, 1110,
        '\f', 1110,
        ' ', 1110,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1111:
      ADVANCE_MAP(
        '\n', 2264,
        '\r', 1111,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        ')', 2345,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        '}', 2349,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1111,
        0x0b, 1111,
        '\f', 1111,
        ' ', 1111,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1112:
      ADVANCE_MAP(
        '\n', 2264,
        '\r', 1111,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        ')', 2345,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        '}', 2349,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1111,
        0x0b, 1111,
        '\f', 1111,
        ' ', 1111,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1113:
      ADVANCE_MAP(
        '\n', 2267,
        '\r', 1113,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1114:
      ADVANCE_MAP(
        '\n', 2267,
        '\r', 1113,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1115:
      ADVANCE_MAP(
        '\n', 2265,
        '\r', 1115,
        '!', 2423,
        '$', 857,
        '&', 10,
        '(', 2344,
        '0', 859,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'p', 816,
        '{', 2348,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2e40, 2417,
        'O', 35,
        'o', 35,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1115,
        0x0b, 1115,
        '\f', 1115,
        ' ', 1115,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1116:
      ADVANCE_MAP(
        '\n', 2266,
        '\r', 1116,
        '!', 2434,
        '$', 2248,
        '&', 1164,
        '(', 2343,
        ')', 2345,
        '0', 1177,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        'e', 2370,
        'p', 2194,
        '{', 2347,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2e40, 2428,
        'O', 1178,
        'o', 1178,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1116,
        0x0b, 1116,
        '\f', 1116,
        ' ', 1116,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1117:
      ADVANCE_MAP(
        '\n', 2266,
        '\r', 1116,
        '!', 2434,
        '$', 2248,
        '&', 1164,
        '(', 2343,
        ')', 2345,
        '0', 1177,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        'e', 2370,
        'p', 2194,
        '{', 2347,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2e40, 2428,
        'O', 1178,
        'o', 1178,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1116,
        0x0b, 1116,
        '\f', 1116,
        ' ', 1116,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1118:
      ADVANCE_MAP(
        '\n', 2259,
        '\r', 1113,
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1119:
      if (lookahead == ' ') ADVANCE(1340);
      END_STATE();
    case 1120:
      if (lookahead == ' ') ADVANCE(1179);
      END_STATE();
    case 1121:
      if (lookahead == ' ') ADVANCE(1191);
      END_STATE();
    case 1122:
      if (lookahead == ' ') ADVANCE(2245);
      END_STATE();
    case 1123:
      if (lookahead == ' ') ADVANCE(1492);
      END_STATE();
    case 1124:
      if (lookahead == ' ') ADVANCE(1362);
      END_STATE();
    case 1125:
      if (lookahead == ' ') ADVANCE(1475);
      END_STATE();
    case 1126:
      if (lookahead == ' ') ADVANCE(1194);
      END_STATE();
    case 1127:
      ADVANCE_MAP(
        '!', 2423,
        '$', 857,
        '&', 10,
        '(', 2344,
        '-', 2419,
        '0', 859,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'p', 816,
        '{', 2348,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2e40, 2417,
        '\n', 1128,
        '\r', 1128,
        'O', 35,
        'o', 35,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 865,
        0x0b, 865,
        '\f', 865,
        ' ', 865,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1128:
      ADVANCE_MAP(
        '!', 2423,
        '$', 857,
        '&', 10,
        '(', 2344,
        '0', 859,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'p', 816,
        '{', 2348,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2e40, 2417,
        '\n', 1128,
        '\r', 1128,
        'O', 35,
        'o', 35,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 865,
        0x0b, 865,
        '\f', 865,
        ' ', 865,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1129:
      ADVANCE_MAP(
        '!', 2423,
        '$', 857,
        '&', 27,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '-', 2419,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'O', 2457,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2417,
        '\n', 1130,
        '\r', 1130,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1105,
        0x0b, 1105,
        '\f', 1105,
        ' ', 1105,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2366);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1130:
      ADVANCE_MAP(
        '!', 2423,
        '$', 857,
        '&', 27,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'N', 2379,
        'O', 2457,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2417,
        '\n', 1130,
        '\r', 1130,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1105,
        0x0b, 1105,
        '\f', 1105,
        ' ', 1105,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2366);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 1131:
      ADVANCE_MAP(
        '!', 2434,
        '#', 2410,
        '$', 2248,
        '&', 1162,
        '(', 2343,
        ')', 2345,
        '0', 1177,
        ';', 2260,
        '<', 1832,
        '=', 2389,
        '?', 2434,
        '@', 2398,
        'P', 2393,
        'R', 2375,
        'T', 1838,
        'e', 2370,
        'p', 2194,
        '{', 2347,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2e40, 2388,
        'O', 1178,
        'o', 1178,
        'Z', 2244,
        'z', 2244,
        '+', 2414,
        0x16ed, 2414,
        0x2795, 2414,
        ':', 2382,
        'X', 2382,
        'x', 2382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1137);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2402);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2372);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1132:
      ADVANCE_MAP(
        '!', 2434,
        '#', 2410,
        '$', 2248,
        '&', 1166,
        '(', 2343,
        ')', 2345,
        '0', 1177,
        ';', 2260,
        '<', 1832,
        '=', 2389,
        '?', 2434,
        '@', 2398,
        'P', 2393,
        'R', 2375,
        'T', 1838,
        'e', 2370,
        'p', 2194,
        '{', 2347,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2e40, 2388,
        'O', 1178,
        'o', 1178,
        'Z', 2244,
        'z', 2244,
        '+', 2414,
        0x16ed, 2414,
        0x2795, 2414,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1137);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2372);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1133:
      ADVANCE_MAP(
        '!', 2434,
        '#', 2410,
        '$', 2248,
        '&', 1169,
        '(', 2343,
        ')', 2345,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        '}', 2349,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 2414,
        0x16ed, 2414,
        0x2795, 2414,
        ':', 2382,
        'X', 2382,
        'x', 2382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1136);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1134:
      ADVANCE_MAP(
        '!', 2434,
        '#', 2410,
        '$', 2248,
        '&', 1172,
        '(', 2343,
        ')', 2345,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2389,
        '?', 2434,
        '@', 2398,
        'O', 2459,
        'P', 2393,
        'R', 2375,
        'T', 1838,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        '}', 2349,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2388,
        'Z', 2244,
        'z', 2244,
        '+', 2414,
        0x16ed, 2414,
        0x2795, 2414,
        ':', 2382,
        'X', 2382,
        'x', 2382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1136);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2402);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2372);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1135:
      ADVANCE_MAP(
        '!', 2434,
        '#', 2410,
        '$', 2248,
        '&', 1174,
        '(', 2343,
        ')', 2345,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2389,
        '?', 2434,
        '@', 2398,
        'O', 2459,
        'P', 2393,
        'R', 2375,
        'T', 1838,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        '}', 2349,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2388,
        'Z', 2244,
        'z', 2244,
        '+', 2414,
        0x16ed, 2414,
        0x2795, 2414,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1136);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2372);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1136:
      ADVANCE_MAP(
        '!', 2434,
        '$', 2248,
        '&', 1149,
        '(', 2343,
        ')', 2345,
        '*', 2486,
        '0', 2464,
        '1', 2438,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'O', 2459,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        'e', 2370,
        'o', 2468,
        'p', 2194,
        '{', 2347,
        '}', 2349,
        0xbd, 2482,
        0x66d, 2502,
        0x204e, 2498,
        0x2217, 2490,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2e40, 2428,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1136);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1137:
      ADVANCE_MAP(
        '!', 2434,
        '$', 2248,
        '&', 1164,
        '(', 2343,
        ')', 2345,
        '0', 1177,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        'e', 2370,
        'p', 2194,
        '{', 2347,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2e40, 2428,
        'O', 1178,
        'o', 1178,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1137);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1138:
      ADVANCE_MAP(
        '!', 2434,
        '$', 2248,
        '&', 1165,
        '(', 2343,
        ')', 2345,
        '0', 1177,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'N', 2381,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'p', 2194,
        '{', 2347,
        0xbd, 2480,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2e40, 2428,
        'O', 1178,
        'o', 1178,
        'Z', 2244,
        'z', 2244,
        '+', 1184,
        0x16ed, 1184,
        0x2795, 1184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1138);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 1139:
      ADVANCE_MAP(
        '"', 2275,
        '&', 2305,
        ']', 2274,
        0x2ba, 2295,
        0x2dd, 2293,
        0x2ee, 2299,
        0x2f6, 2297,
        0x5f2, 2301,
        0x5f4, 2291,
        0x201c, 2279,
        0x201d, 2281,
        0x201f, 2283,
        0x2033, 2285,
        0x2036, 2287,
        0x3003, 2289,
        0xff02, 2277,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1141);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2306);
      if (lookahead != 0) ADVANCE(2342);
      END_STATE();
    case 1140:
      ADVANCE_MAP(
        '"', 2275,
        '&', 2305,
        0x2ba, 2295,
        0x2dd, 2293,
        0x2ee, 2299,
        0x2f6, 2297,
        0x5f2, 2301,
        0x5f4, 2291,
        0x201c, 2279,
        0x201d, 2281,
        0x201f, 2283,
        0x2033, 2285,
        0x2036, 2287,
        0x3003, 2289,
        0xff02, 2277,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1142);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2307);
      if (lookahead != 0) ADVANCE(2342);
      END_STATE();
    case 1141:
      ADVANCE_MAP(
        '"', 2275,
        '&', 1156,
        ']', 2273,
        0x2ba, 2295,
        0x2dd, 2293,
        0x2ee, 2299,
        0x2f6, 2297,
        0x5f2, 2301,
        0x5f4, 2291,
        0x201c, 2279,
        0x201d, 2281,
        0x201f, 2283,
        0x2033, 2285,
        0x2036, 2287,
        0x3003, 2289,
        0xff02, 2277,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1141);
      END_STATE();
    case 1142:
      ADVANCE_MAP(
        '"', 2275,
        '&', 1156,
        0x2ba, 2295,
        0x2dd, 2293,
        0x2ee, 2299,
        0x2f6, 2297,
        0x5f2, 2301,
        0x5f4, 2291,
        0x201c, 2279,
        0x201d, 2281,
        0x201f, 2283,
        0x2033, 2285,
        0x2036, 2287,
        0x3003, 2289,
        0xff02, 2277,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1142);
      END_STATE();
    case 1143:
      ADVANCE_MAP(
        '#', 1337,
        'a', 2100,
        'd', 1847,
        'e', 2083,
        'f', 2087,
        'h', 1848,
        'l', 2049,
        'm', 1895,
        'n', 1894,
        'p', 1996,
        's', 2053,
      );
      END_STATE();
    case 1144:
      if (lookahead == '#') ADVANCE(1338);
      if (lookahead == 'd') ADVANCE(1867);
      if (lookahead == 'h') ADVANCE(2183);
      if (lookahead == 'm') ADVANCE(1899);
      if (lookahead == 'n') ADVANCE(1898);
      END_STATE();
    case 1145:
      if (lookahead == '#') ADVANCE(1376);
      if (lookahead == 'p') ADVANCE(2018);
      END_STATE();
    case 1146:
      ADVANCE_MAP(
        '#', 1339,
        'a', 2100,
        'd', 1870,
        'f', 2087,
        'h', 1849,
        'l', 2049,
        'm', 1908,
        'n', 1909,
        's', 2053,
      );
      END_STATE();
    case 1147:
      if (lookahead == '#') ADVANCE(1360);
      if (lookahead == 'f') ADVANCE(2098);
      if (lookahead == 'h') ADVANCE(1868);
      END_STATE();
    case 1148:
      if (lookahead == '#') ADVANCE(1365);
      if (lookahead == 'e') ADVANCE(2084);
      END_STATE();
    case 1149:
      ADVANCE_MAP(
        '#', 1343,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'a', 2100,
        'b', 1987,
        'c', 1986,
        'd', 1876,
        'e', 2080,
        'f', 2087,
        'h', 1843,
        'i', 2022,
        'l', 1920,
        'm', 1860,
        'n', 1845,
        'o', 1897,
        'p', 1923,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1150:
      if (lookahead == '#') ADVANCE(1367);
      if (lookahead == 'p') ADVANCE(2019);
      if (lookahead == 's') ADVANCE(2058);
      END_STATE();
    case 1151:
      if (lookahead == '#') ADVANCE(1350);
      if (lookahead == 'd') ADVANCE(1877);
      if (lookahead == 'e') ADVANCE(2084);
      if (lookahead == 'h') ADVANCE(2187);
      if (lookahead == 'm') ADVANCE(1913);
      if (lookahead == 'n') ADVANCE(1912);
      if (lookahead == 's') ADVANCE(2059);
      END_STATE();
    case 1152:
      if (lookahead == '#') ADVANCE(1702);
      if (lookahead == 'i') ADVANCE(2048);
      END_STATE();
    case 1153:
      if (lookahead == '#') ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(2182);
      if (lookahead == 'q') ADVANCE(2177);
      END_STATE();
    case 1154:
      if (lookahead == '#') ADVANCE(1676);
      if (lookahead == 'e') ADVANCE(2084);
      END_STATE();
    case 1155:
      if (lookahead == '#') ADVANCE(1366);
      if (lookahead == 'e') ADVANCE(2084);
      if (lookahead == 'p') ADVANCE(2019);
      if (lookahead == 's') ADVANCE(2058);
      END_STATE();
    case 1156:
      if (lookahead == '#') ADVANCE(1351);
      END_STATE();
    case 1157:
      if (lookahead == '#') ADVANCE(1364);
      if (lookahead == 's') ADVANCE(2056);
      END_STATE();
    case 1158:
      ADVANCE_MAP(
        '#', 1346,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'b', 1987,
        'c', 1986,
        'd', 1876,
        'e', 2080,
        'f', 2099,
        'h', 1866,
        'i', 2022,
        'l', 1921,
        'm', 1861,
        'n', 1845,
        'o', 1897,
        'p', 1924,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1159:
      if (lookahead == '#') ADVANCE(1368);
      if (lookahead == 'd') ADVANCE(1878);
      if (lookahead == 'h') ADVANCE(2188);
      if (lookahead == 'm') ADVANCE(1915);
      if (lookahead == 'n') ADVANCE(1914);
      if (lookahead == 'p') ADVANCE(2019);
      if (lookahead == 's') ADVANCE(2060);
      END_STATE();
    case 1160:
      ADVANCE_MAP(
        '#', 1383,
        'd', 1877,
        'e', 2084,
        'h', 2187,
        'm', 1913,
        'n', 1912,
        'p', 2018,
        's', 2059,
      );
      END_STATE();
    case 1161:
      if (lookahead == '#') ADVANCE(1369);
      if (lookahead == 'd') ADVANCE(1879);
      if (lookahead == 'h') ADVANCE(2189);
      if (lookahead == 'm') ADVANCE(1917);
      if (lookahead == 'n') ADVANCE(1916);
      if (lookahead == 's') ADVANCE(2061);
      END_STATE();
    case 1162:
      ADVANCE_MAP(
        '#', 1348,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'b', 1987,
        'c', 1986,
        'd', 1881,
        'e', 2081,
        'h', 1854,
        'i', 2022,
        'l', 1921,
        'm', 1863,
        'n', 1846,
        'o', 1897,
        'p', 1924,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1163:
      ADVANCE_MAP(
        '#', 1347,
        'a', 2100,
        'd', 1870,
        'f', 2087,
        'h', 1849,
        'l', 2049,
        'm', 1908,
        'n', 1909,
        's', 2053,
      );
      END_STATE();
    case 1164:
      ADVANCE_MAP(
        '#', 1458,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'b', 1987,
        'c', 1986,
        'd', 1876,
        'e', 2080,
        'h', 1853,
        'i', 2022,
        'l', 1921,
        'm', 1861,
        'n', 1845,
        'o', 1897,
        'p', 1923,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1165:
      ADVANCE_MAP(
        '#', 1457,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'b', 1987,
        'c', 1986,
        'd', 1876,
        'e', 2080,
        'f', 2099,
        'h', 1866,
        'i', 2022,
        'l', 1921,
        'm', 1861,
        'n', 1845,
        'o', 1897,
        'p', 1923,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1166:
      ADVANCE_MAP(
        '#', 1460,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'b', 1987,
        'c', 1986,
        'd', 1876,
        'e', 2081,
        'h', 1853,
        'i', 2022,
        'l', 1921,
        'm', 1861,
        'n', 1845,
        'o', 1897,
        'p', 1924,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1167:
      if (lookahead == '#') ADVANCE(1448);
      if (lookahead == 'd') ADVANCE(1871);
      if (lookahead == 'h') ADVANCE(2184);
      if (lookahead == 'm') ADVANCE(1905);
      if (lookahead == 'n') ADVANCE(1904);
      END_STATE();
    case 1168:
      if (lookahead == '#') ADVANCE(1451);
      if (lookahead == 'p') ADVANCE(2019);
      END_STATE();
    case 1169:
      ADVANCE_MAP(
        '#', 1456,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'a', 2100,
        'b', 1987,
        'c', 1986,
        'd', 1876,
        'e', 2080,
        'f', 2087,
        'h', 1843,
        'i', 2022,
        'l', 1920,
        'm', 1860,
        'n', 1845,
        'o', 1897,
        'p', 1924,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1170:
      if (lookahead == '#') ADVANCE(1450);
      if (lookahead == 's') ADVANCE(2062);
      END_STATE();
    case 1171:
      if (lookahead == '#') ADVANCE(1452);
      if (lookahead == 'd') ADVANCE(1872);
      if (lookahead == 'h') ADVANCE(2185);
      if (lookahead == 'm') ADVANCE(1907);
      if (lookahead == 'n') ADVANCE(1906);
      END_STATE();
    case 1172:
      ADVANCE_MAP(
        '#', 1459,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'a', 2100,
        'b', 1987,
        'c', 1986,
        'd', 1881,
        'e', 2081,
        'f', 2087,
        'h', 1844,
        'i', 2022,
        'l', 1920,
        'm', 1862,
        'n', 1846,
        'o', 1897,
        'p', 1924,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1173:
      if (lookahead == '#') ADVANCE(1453);
      if (lookahead == 'd') ADVANCE(1875);
      if (lookahead == 'h') ADVANCE(2186);
      if (lookahead == 'm') ADVANCE(1911);
      if (lookahead == 'n') ADVANCE(1910);
      END_STATE();
    case 1174:
      ADVANCE_MAP(
        '#', 1461,
        'D', 1931,
        'L', 1856,
        'M', 1991,
        'O', 2108,
        'P', 2010,
        'R', 1857,
        'S', 1957,
        'U', 2063,
        'a', 2100,
        'b', 1987,
        'c', 1986,
        'd', 1876,
        'e', 2081,
        'f', 2087,
        'h', 1843,
        'i', 2022,
        'l', 1920,
        'm', 1860,
        'n', 1845,
        'o', 1897,
        'p', 1924,
        'q', 2156,
        'r', 1851,
        's', 1998,
        'u', 1852,
        'x', 2050,
      );
      END_STATE();
    case 1175:
      if (lookahead == '#') ADVANCE(1454);
      if (lookahead == 'd') ADVANCE(1877);
      if (lookahead == 'h') ADVANCE(2187);
      if (lookahead == 'm') ADVANCE(1913);
      if (lookahead == 'n') ADVANCE(1912);
      END_STATE();
    case 1176:
      if (lookahead == '#') ADVANCE(1455);
      if (lookahead == 'd') ADVANCE(1880);
      if (lookahead == 'h') ADVANCE(2190);
      if (lookahead == 'm') ADVANCE(1919);
      if (lookahead == 'n') ADVANCE(1918);
      END_STATE();
    case 1177:
      if (lookahead == '&') ADVANCE(1144);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2363);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2242);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      END_STATE();
    case 1178:
      if (lookahead == '&') ADVANCE(1144);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2242);
      END_STATE();
    case 1179:
      if (lookahead == '&') ADVANCE(1147);
      if (lookahead == 0xbd) ADVANCE(2512);
      END_STATE();
    case 1180:
      if (lookahead == '&') ADVANCE(1157);
      if (lookahead == '-') ADVANCE(1197);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1181);
      END_STATE();
    case 1181:
      if (lookahead == '&') ADVANCE(1157);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1181);
      END_STATE();
    case 1182:
      if (lookahead == '&') ADVANCE(1148);
      if (lookahead == '-') ADVANCE(1197);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2415);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1183);
      END_STATE();
    case 1183:
      if (lookahead == '&') ADVANCE(1148);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2415);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1183);
      END_STATE();
    case 1184:
      if (lookahead == '&') ADVANCE(1151);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1193);
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2415);
      END_STATE();
    case 1185:
      if (lookahead == '&') ADVANCE(1161);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1123);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1122);
      END_STATE();
    case 1186:
      if (lookahead == '&') ADVANCE(1152);
      if (lookahead == 0x221e) ADVANCE(2415);
      END_STATE();
    case 1187:
      ADVANCE_MAP(
        '&', 1163,
        ')', 2345,
        '*', 2486,
        '-', 2440,
        '/', 2469,
        '0', 2462,
        '1', 2439,
        '2', 2479,
        'O', 2458,
        'o', 2467,
        '}', 2349,
        0xbd, 2482,
        0x66d, 2502,
        0x2010, 2444,
        0x2011, 2446,
        0x2012, 2448,
        0x2013, 2450,
        0x2014, 2452,
        0x2044, 2473,
        0x204e, 2498,
        0x2212, 2442,
        0x2215, 2471,
        0x2217, 2490,
        0x2731, 2494,
        0x2796, 2454,
        0x27cb, 2475,
        0x29f8, 2477,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1187);
      END_STATE();
    case 1188:
      if (lookahead == '&') ADVANCE(1154);
      END_STATE();
    case 1189:
      if (lookahead == '&') ADVANCE(1167);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1119);
      END_STATE();
    case 1190:
      if (lookahead == '&') ADVANCE(1168);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2415);
      END_STATE();
    case 1191:
      if (lookahead == '&') ADVANCE(1170);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1125);
      END_STATE();
    case 1192:
      if (lookahead == '&') ADVANCE(1171);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1120);
      END_STATE();
    case 1193:
      if (lookahead == '&') ADVANCE(1175);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2415);
      END_STATE();
    case 1194:
      if (lookahead == '&') ADVANCE(1176);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1124);
      END_STATE();
    case 1195:
      if (lookahead == '-') ADVANCE(985);
      END_STATE();
    case 1196:
      if (lookahead == '-') ADVANCE(1195);
      END_STATE();
    case 1197:
      if (lookahead == '-') ADVANCE(1196);
      END_STATE();
    case 1198:
      if (lookahead == '-') ADVANCE(1197);
      END_STATE();
    case 1199:
      if (lookahead == '.') ADVANCE(2415);
      END_STATE();
    case 1200:
      if (lookahead == '0') ADVANCE(1215);
      if (lookahead == '1') ADVANCE(1703);
      if (lookahead == '2') ADVANCE(1480);
      if (lookahead == '5') ADVANCE(1464);
      if (lookahead == '6') ADVANCE(1622);
      if (lookahead == '8') ADVANCE(1739);
      END_STATE();
    case 1201:
      if (lookahead == '0') ADVANCE(1704);
      if (lookahead == '1') ADVANCE(1234);
      if (lookahead == '2') ADVANCE(1250);
      if (lookahead == '4') ADVANCE(1562);
      if (lookahead == '6') ADVANCE(1251);
      if (lookahead == '7') ADVANCE(1252);
      END_STATE();
    case 1202:
      ADVANCE_MAP(
        '0', 1341,
        '2', 1377,
        '7', 1580,
        '9', 2233,
        'A', 1766,
        'a', 1766,
        'B', 1762,
        'b', 1762,
        'D', 1768,
        'd', 1768,
        'E', 1626,
        'e', 1626,
        'F', 1662,
        'f', 1662,
      );
      END_STATE();
    case 1203:
      if (lookahead == '0') ADVANCE(1361);
      END_STATE();
    case 1204:
      if (lookahead == '0') ADVANCE(1205);
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '6') ADVANCE(1622);
      if (lookahead == '7') ADVANCE(1690);
      if (lookahead == '8') ADVANCE(1739);
      END_STATE();
    case 1205:
      if (lookahead == '0') ADVANCE(1303);
      if (lookahead == '1') ADVANCE(1584);
      if (lookahead == '2') ADVANCE(1410);
      if (lookahead == '7') ADVANCE(1639);
      if (lookahead == '8') ADVANCE(1673);
      END_STATE();
    case 1206:
      if (lookahead == '0') ADVANCE(1303);
      if (lookahead == '1') ADVANCE(1588);
      if (lookahead == '2') ADVANCE(1410);
      if (lookahead == '7') ADVANCE(1639);
      if (lookahead == '8') ADVANCE(1673);
      END_STATE();
    case 1207:
      if (lookahead == '0') ADVANCE(1303);
      if (lookahead == '1') ADVANCE(1597);
      if (lookahead == '2') ADVANCE(1410);
      if (lookahead == '7') ADVANCE(1639);
      if (lookahead == '8') ADVANCE(1673);
      END_STATE();
    case 1208:
      if (lookahead == '0') ADVANCE(1669);
      if (lookahead == '1') ADVANCE(1513);
      if (lookahead == '6') ADVANCE(1612);
      if (lookahead == '9') ADVANCE(1652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1648);
      END_STATE();
    case 1209:
      if (lookahead == '0') ADVANCE(1669);
      if (lookahead == '1') ADVANCE(1514);
      if (lookahead == '6') ADVANCE(1612);
      if (lookahead == '9') ADVANCE(1652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1648);
      END_STATE();
    case 1210:
      if (lookahead == '0') ADVANCE(1669);
      if (lookahead == '1') ADVANCE(1519);
      if (lookahead == '6') ADVANCE(1612);
      if (lookahead == '9') ADVANCE(1652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1648);
      END_STATE();
    case 1211:
      if (lookahead == '0') ADVANCE(1669);
      if (lookahead == '1') ADVANCE(1520);
      if (lookahead == '6') ADVANCE(1612);
      if (lookahead == '9') ADVANCE(1652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1648);
      END_STATE();
    case 1212:
      ADVANCE_MAP(
        '0', 1388,
        '2', 1765,
        'B', 2195,
        'b', 2195,
        'D', 2215,
        'd', 2215,
        'E', 2222,
        'e', 2222,
        'F', 1661,
        'f', 1661,
      );
      END_STATE();
    case 1213:
      if (lookahead == '0') ADVANCE(2460);
      if (lookahead == '@') ADVANCE(2398);
      if (lookahead == 'O') ADVANCE(2456);
      if (lookahead == 'o') ADVANCE(2465);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1214);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(2371);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      END_STATE();
    case 1214:
      if (lookahead == '0') ADVANCE(2460);
      if (lookahead == '@') ADVANCE(2398);
      if (lookahead == 'O') ADVANCE(2456);
      if (lookahead == 'o') ADVANCE(2465);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1214);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      END_STATE();
    case 1215:
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1556);
      if (lookahead == '7') ADVANCE(1621);
      END_STATE();
    case 1216:
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1585);
      if (lookahead == '7') ADVANCE(1621);
      END_STATE();
    case 1217:
      ADVANCE_MAP(
        '0', 1393,
        '1', 1738,
        '2', 1208,
        '3', 1396,
        '5', 1344,
        '6', 1413,
        '7', 1404,
        'A', 1230,
        'a', 1230,
        'B', 1358,
        'b', 1358,
        'D', 1812,
        'd', 1812,
        'E', 1628,
        'e', 1628,
      );
      END_STATE();
    case 1218:
      ADVANCE_MAP(
        '0', 1393,
        '1', 1738,
        '2', 1208,
        '3', 1396,
        '5', 1344,
        '6', 1413,
        '7', 1405,
        'A', 1230,
        'a', 1230,
        'B', 1359,
        'b', 1359,
        'D', 1812,
        'd', 1812,
        'E', 1628,
        'e', 1628,
      );
      END_STATE();
    case 1219:
      ADVANCE_MAP(
        '0', 1393,
        '1', 1738,
        '2', 1208,
        '3', 1396,
        '5', 1344,
        '6', 1413,
        '7', 1405,
        'A', 1230,
        'a', 1230,
        'B', 1359,
        'b', 1359,
        'D', 1812,
        'd', 1812,
        'E', 1633,
        'e', 1633,
      );
      END_STATE();
    case 1220:
      if (lookahead == '0') ADVANCE(1353);
      END_STATE();
    case 1221:
      if (lookahead == '0') ADVANCE(1244);
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '7') ADVANCE(1690);
      if (lookahead == '8') ADVANCE(1745);
      END_STATE();
    case 1222:
      if (lookahead == '0') ADVANCE(1244);
      if (lookahead == '1') ADVANCE(1247);
      if (lookahead == '7') ADVANCE(1690);
      END_STATE();
    case 1223:
      if (lookahead == '0') ADVANCE(1352);
      END_STATE();
    case 1224:
      if (lookahead == '0') ADVANCE(1294);
      END_STATE();
    case 1225:
      if (lookahead == '0') ADVANCE(1294);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1760);
      END_STATE();
    case 1226:
      ADVANCE_MAP(
        '0', 1394,
        '1', 1738,
        '2', 1209,
        '3', 1396,
        '5', 1344,
        '6', 1413,
        '7', 1408,
        'A', 1229,
        'a', 1229,
        'B', 1359,
        'b', 1359,
        'D', 1812,
        'd', 1812,
        'E', 1628,
        'e', 1628,
      );
      END_STATE();
    case 1227:
      ADVANCE_MAP(
        '0', 1394,
        '1', 1738,
        '2', 1209,
        '3', 1396,
        '5', 1344,
        '6', 1413,
        '7', 1408,
        'A', 1229,
        'a', 1229,
        'B', 1359,
        'b', 1359,
        'D', 1812,
        'd', 1812,
        'E', 1633,
        'e', 1633,
      );
      END_STATE();
    case 1228:
      ADVANCE_MAP(
        '0', 1394,
        '1', 1738,
        '2', 1209,
        '3', 1396,
        '5', 1344,
        '6', 1413,
        '7', 1407,
        'A', 1229,
        'a', 1229,
        'B', 1358,
        'b', 1358,
        'D', 1812,
        'd', 1812,
        'E', 1628,
        'e', 1628,
      );
      END_STATE();
    case 1229:
      if (lookahead == '0') ADVANCE(1264);
      if (lookahead == '7') ADVANCE(1373);
      END_STATE();
    case 1230:
      if (lookahead == '0') ADVANCE(1264);
      if (lookahead == '7') ADVANCE(1373);
      if (lookahead == ';') ADVANCE(2488);
      END_STATE();
    case 1231:
      if (lookahead == '0') ADVANCE(1381);
      if (lookahead == '1') ADVANCE(1730);
      END_STATE();
    case 1232:
      ADVANCE_MAP(
        '0', 1398,
        '2', 1345,
        '7', 1754,
        '9', 2236,
        'D', 1803,
        'd', 1803,
        'E', 1627,
        'e', 1627,
        'F', 1823,
        'f', 1823,
      );
      END_STATE();
    case 1233:
      ADVANCE_MAP(
        '0', 1398,
        '2', 1345,
        '7', 1752,
        '9', 2236,
        'B', 1759,
        'b', 1759,
        'D', 1803,
        'd', 1803,
        'E', 1627,
        'e', 1627,
        'F', 1823,
        'f', 1823,
      );
      END_STATE();
    case 1234:
      if (lookahead == '0') ADVANCE(1767);
      if (lookahead == '1') ADVANCE(1767);
      if (lookahead == '2') ADVANCE(1767);
      END_STATE();
    case 1235:
      ADVANCE_MAP(
        '0', 1767,
        '1', 1767,
        '2', 1767,
        '3', 1767,
        '4', 1767,
        'C', 1781,
        'c', 1781,
        'D', 1782,
        'd', 1782,
        'F', 1783,
        'f', 1783,
      );
      END_STATE();
    case 1236:
      if (lookahead == '0') ADVANCE(1425);
      END_STATE();
    case 1237:
      if (lookahead == '0') ADVANCE(1422);
      END_STATE();
    case 1238:
      ADVANCE_MAP(
        '0', 1421,
        '2', 1385,
        '7', 1581,
        '9', 2233,
        'A', 1766,
        'a', 1766,
        'D', 1776,
        'd', 1776,
        'F', 1769,
        'f', 1769,
      );
      END_STATE();
    case 1239:
      if (lookahead == '0') ADVANCE(1760);
      END_STATE();
    case 1240:
      if (lookahead == '0') ADVANCE(1342);
      if (lookahead == '2') ADVANCE(1390);
      if (lookahead == '7') ADVANCE(1736);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1763);
      END_STATE();
    case 1241:
      if (lookahead == '0') ADVANCE(1501);
      END_STATE();
    case 1242:
      if (lookahead == '0') ADVANCE(1774);
      if (lookahead == '8') ADVANCE(1775);
      END_STATE();
    case 1243:
      if (lookahead == '0') ADVANCE(1302);
      if (lookahead == '1') ADVANCE(1584);
      if (lookahead == '2') ADVANCE(1410);
      if (lookahead == '7') ADVANCE(1639);
      if (lookahead == '8') ADVANCE(1673);
      END_STATE();
    case 1244:
      if (lookahead == '0') ADVANCE(1302);
      if (lookahead == '1') ADVANCE(1588);
      if (lookahead == '2') ADVANCE(1410);
      if (lookahead == '7') ADVANCE(1639);
      if (lookahead == '8') ADVANCE(1673);
      END_STATE();
    case 1245:
      if (lookahead == '0') ADVANCE(1302);
      if (lookahead == '1') ADVANCE(1597);
      if (lookahead == '2') ADVANCE(1410);
      if (lookahead == '7') ADVANCE(1639);
      if (lookahead == '8') ADVANCE(1673);
      END_STATE();
    case 1246:
      if (lookahead == '0') ADVANCE(1472);
      if (lookahead == '8') ADVANCE(1628);
      END_STATE();
    case 1247:
      if (lookahead == '0') ADVANCE(1472);
      if (lookahead == '8') ADVANCE(1633);
      END_STATE();
    case 1248:
      if (lookahead == '0') ADVANCE(1763);
      if (lookahead == '1') ADVANCE(1763);
      if (lookahead == '2') ADVANCE(1763);
      END_STATE();
    case 1249:
      if (lookahead == '0') ADVANCE(1763);
      if (lookahead == '1') ADVANCE(1763);
      if (lookahead == '2') ADVANCE(1763);
      if (lookahead == '3') ADVANCE(1763);
      if (lookahead == '4') ADVANCE(1763);
      END_STATE();
    case 1250:
      if (lookahead == '0') ADVANCE(1781);
      if (lookahead == '1') ADVANCE(1782);
      if (lookahead == '3') ADVANCE(1783);
      END_STATE();
    case 1251:
      if (lookahead == '0') ADVANCE(1786);
      END_STATE();
    case 1252:
      if (lookahead == '0') ADVANCE(1787);
      END_STATE();
    case 1253:
      if (lookahead == '0') ADVANCE(1764);
      if (lookahead == '1') ADVANCE(1764);
      if (lookahead == '2') ADVANCE(1764);
      END_STATE();
    case 1254:
      if (lookahead == '0') ADVANCE(1764);
      if (lookahead == '1') ADVANCE(1764);
      if (lookahead == '2') ADVANCE(1764);
      if (lookahead == '3') ADVANCE(1764);
      if (lookahead == '4') ADVANCE(1764);
      END_STATE();
    case 1255:
      if (lookahead == '0') ADVANCE(1825);
      if (lookahead == '1') ADVANCE(1825);
      if (lookahead == '2') ADVANCE(1825);
      END_STATE();
    case 1256:
      if (lookahead == '0') ADVANCE(1825);
      if (lookahead == '1') ADVANCE(1825);
      if (lookahead == '2') ADVANCE(1825);
      if (lookahead == '3') ADVANCE(1825);
      if (lookahead == '4') ADVANCE(1825);
      END_STATE();
    case 1257:
      if (lookahead == '0') ADVANCE(1790);
      if (lookahead == '1') ADVANCE(1796);
      if (lookahead == '2') ADVANCE(1797);
      if (lookahead == '3') ADVANCE(1798);
      if (lookahead == '4') ADVANCE(1799);
      END_STATE();
    case 1258:
      ADVANCE_MAP(
        '0', 1790,
        '1', 1796,
        '2', 1797,
        '3', 1798,
        '4', 1799,
        'C', 1781,
        'c', 1781,
        'D', 1782,
        'd', 1782,
        'F', 1783,
        'f', 1783,
      );
      END_STATE();
    case 1259:
      if (lookahead == '0') ADVANCE(1824);
      if (lookahead == '1') ADVANCE(1824);
      if (lookahead == '2') ADVANCE(1824);
      END_STATE();
    case 1260:
      if (lookahead == '0') ADVANCE(1824);
      if (lookahead == '1') ADVANCE(1824);
      if (lookahead == '2') ADVANCE(1824);
      if (lookahead == '3') ADVANCE(1824);
      if (lookahead == '4') ADVANCE(1824);
      END_STATE();
    case 1261:
      if (lookahead == '0') ADVANCE(1797);
      if (lookahead == '1') ADVANCE(1798);
      if (lookahead == '2') ADVANCE(1799);
      END_STATE();
    case 1262:
      if (lookahead == '0') ADVANCE(1802);
      END_STATE();
    case 1263:
      if (lookahead == '0') ADVANCE(1803);
      END_STATE();
    case 1264:
      if (lookahead == '0') ADVANCE(1803);
      if (lookahead == '1') ADVANCE(1803);
      END_STATE();
    case 1265:
      if (lookahead == '0') ADVANCE(1803);
      if (lookahead == '1') ADVANCE(1803);
      if (lookahead == '2') ADVANCE(1803);
      END_STATE();
    case 1266:
      if (lookahead == '0') ADVANCE(1803);
      if (lookahead == '1') ADVANCE(1803);
      if (lookahead == '2') ADVANCE(1803);
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '4') ADVANCE(1803);
      END_STATE();
    case 1267:
      if (lookahead == '0') ADVANCE(1803);
      if (lookahead == '3') ADVANCE(1803);
      END_STATE();
    case 1268:
      if (lookahead == '0') ADVANCE(1812);
      if (lookahead == '1') ADVANCE(1812);
      if (lookahead == '2') ADVANCE(1812);
      END_STATE();
    case 1269:
      if (lookahead == '0') ADVANCE(1812);
      if (lookahead == '1') ADVANCE(1812);
      if (lookahead == '2') ADVANCE(1812);
      if (lookahead == '3') ADVANCE(1812);
      if (lookahead == '4') ADVANCE(1812);
      END_STATE();
    case 1270:
      if (lookahead == '0') ADVANCE(1817);
      if (lookahead == '1') ADVANCE(1826);
      if (lookahead == '3') ADVANCE(1816);
      END_STATE();
    case 1271:
      if (lookahead == '0') ADVANCE(1817);
      if (lookahead == '1') ADVANCE(1827);
      if (lookahead == '3') ADVANCE(1816);
      END_STATE();
    case 1272:
      if (lookahead == '0') ADVANCE(1813);
      END_STATE();
    case 1273:
      if (lookahead == '0') ADVANCE(1823);
      END_STATE();
    case 1274:
      if (lookahead == '0') ADVANCE(1814);
      if (lookahead == '1') ADVANCE(1814);
      if (lookahead == '2') ADVANCE(1814);
      END_STATE();
    case 1275:
      if (lookahead == '0') ADVANCE(1814);
      if (lookahead == '1') ADVANCE(1814);
      if (lookahead == '2') ADVANCE(1814);
      if (lookahead == '3') ADVANCE(1814);
      if (lookahead == '4') ADVANCE(1814);
      END_STATE();
    case 1276:
      if (lookahead == '0') ADVANCE(1815);
      END_STATE();
    case 1277:
      if (lookahead == '0') ADVANCE(1829);
      if (lookahead == '1') ADVANCE(1829);
      if (lookahead == '2') ADVANCE(1829);
      END_STATE();
    case 1278:
      if (lookahead == '0') ADVANCE(1829);
      if (lookahead == '1') ADVANCE(1829);
      if (lookahead == '2') ADVANCE(1829);
      if (lookahead == '3') ADVANCE(1829);
      if (lookahead == '4') ADVANCE(1829);
      END_STATE();
    case 1279:
      if (lookahead == '0') ADVANCE(1828);
      END_STATE();
    case 1280:
      if (lookahead == '0') ADVANCE(1809);
      END_STATE();
    case 1281:
      if (lookahead == '0') ADVANCE(1821);
      if (lookahead == '1') ADVANCE(1821);
      if (lookahead == '2') ADVANCE(1821);
      END_STATE();
    case 1282:
      if (lookahead == '0') ADVANCE(1821);
      if (lookahead == '1') ADVANCE(1821);
      if (lookahead == '2') ADVANCE(1821);
      if (lookahead == '3') ADVANCE(1821);
      if (lookahead == '4') ADVANCE(1821);
      END_STATE();
    case 1283:
      if (lookahead == '0') ADVANCE(1820);
      END_STATE();
    case 1284:
      if (lookahead == '0') ADVANCE(1216);
      if (lookahead == '2') ADVANCE(1480);
      if (lookahead == '5') ADVANCE(1464);
      if (lookahead == '6') ADVANCE(1622);
      if (lookahead == '8') ADVANCE(1739);
      END_STATE();
    case 1285:
      if (lookahead == '0') ADVANCE(1216);
      if (lookahead == '6') ADVANCE(1622);
      if (lookahead == '8') ADVANCE(1739);
      END_STATE();
    case 1286:
      if (lookahead == '0') ADVANCE(1707);
      if (lookahead == '1') ADVANCE(1248);
      END_STATE();
    case 1287:
      if (lookahead == '0') ADVANCE(1379);
      if (lookahead == '2') ADVANCE(1392);
      if (lookahead == '7') ADVANCE(1747);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1764);
      END_STATE();
    case 1288:
      if (lookahead == '0') ADVANCE(1830);
      if (lookahead == '1') ADVANCE(1830);
      if (lookahead == '2') ADVANCE(1830);
      END_STATE();
    case 1289:
      if (lookahead == '0') ADVANCE(1830);
      if (lookahead == '1') ADVANCE(1830);
      if (lookahead == '2') ADVANCE(1830);
      if (lookahead == '3') ADVANCE(1830);
      if (lookahead == '4') ADVANCE(1830);
      END_STATE();
    case 1290:
      if (lookahead == '0') ADVANCE(1831);
      END_STATE();
    case 1291:
      if (lookahead == '0') ADVANCE(1710);
      if (lookahead == '1') ADVANCE(1261);
      if (lookahead == '2') ADVANCE(1250);
      if (lookahead == '4') ADVANCE(1562);
      if (lookahead == '6') ADVANCE(1251);
      if (lookahead == '7') ADVANCE(1252);
      END_STATE();
    case 1292:
      if (lookahead == '0') ADVANCE(1710);
      if (lookahead == '1') ADVANCE(1261);
      if (lookahead == '6') ADVANCE(1251);
      if (lookahead == '7') ADVANCE(1252);
      END_STATE();
    case 1293:
      if (lookahead == '0') ADVANCE(1387);
      if (lookahead == '2') ADVANCE(1395);
      if (lookahead == '7') ADVANCE(1749);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1825);
      END_STATE();
    case 1294:
      if (lookahead == '0') ADVANCE(1564);
      END_STATE();
    case 1295:
      if (lookahead == '0') ADVANCE(1708);
      if (lookahead == '1') ADVANCE(1253);
      END_STATE();
    case 1296:
      if (lookahead == '0') ADVANCE(1391);
      if (lookahead == '2') ADVANCE(1400);
      if (lookahead == '7') ADVANCE(1750);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1824);
      END_STATE();
    case 1297:
      if (lookahead == '0') ADVANCE(1709);
      if (lookahead == '1') ADVANCE(1255);
      END_STATE();
    case 1298:
      if (lookahead == '0') ADVANCE(1397);
      if (lookahead == '2') ADVANCE(1412);
      if (lookahead == '7') ADVANCE(1753);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1803);
      END_STATE();
    case 1299:
      if (lookahead == '0') ADVANCE(1712);
      if (lookahead == '1') ADVANCE(1259);
      END_STATE();
    case 1300:
      if (lookahead == '0') ADVANCE(1716);
      if (lookahead == '1') ADVANCE(1268);
      if (lookahead == '5') ADVANCE(1506);
      if (lookahead == '6') ADVANCE(1567);
      END_STATE();
    case 1301:
      if (lookahead == '0') ADVANCE(1716);
      if (lookahead == '1') ADVANCE(1268);
      if (lookahead == '5') ADVANCE(1506);
      if (lookahead == '6') ADVANCE(1567);
      if (lookahead == '7') ADVANCE(1252);
      END_STATE();
    case 1302:
      if (lookahead == '0') ADVANCE(1648);
      END_STATE();
    case 1303:
      if (lookahead == '0') ADVANCE(1648);
      if (lookahead == '3') ADVANCE(1563);
      END_STATE();
    case 1304:
      if (lookahead == '0') ADVANCE(1715);
      if (lookahead == '1') ADVANCE(1265);
      END_STATE();
    case 1305:
      if (lookahead == '0') ADVANCE(1715);
      if (lookahead == '1') ADVANCE(1265);
      if (lookahead == '6') ADVANCE(1273);
      END_STATE();
    case 1306:
      if (lookahead == '0') ADVANCE(1719);
      if (lookahead == '1') ADVANCE(1274);
      if (lookahead == '6') ADVANCE(1276);
      END_STATE();
    case 1307:
      if (lookahead == '0') ADVANCE(1612);
      if (lookahead == '5') ADVANCE(1570);
      if (lookahead == '6') ADVANCE(1510);
      END_STATE();
    case 1308:
      if (lookahead == '0') ADVANCE(1721);
      if (lookahead == '1') ADVANCE(1277);
      if (lookahead == '6') ADVANCE(1279);
      END_STATE();
    case 1309:
      if (lookahead == '0') ADVANCE(1725);
      if (lookahead == '1') ADVANCE(1288);
      END_STATE();
    case 1310:
      if (lookahead == '0') ADVANCE(1723);
      if (lookahead == '1') ADVANCE(1281);
      if (lookahead == '5') ADVANCE(1506);
      if (lookahead == '6') ADVANCE(1567);
      END_STATE();
    case 1311:
      if (lookahead == '0') ADVANCE(1723);
      if (lookahead == '1') ADVANCE(1281);
      if (lookahead == '5') ADVANCE(1506);
      if (lookahead == '6') ADVANCE(1567);
      if (lookahead == '7') ADVANCE(1252);
      END_STATE();
    case 1312:
      ADVANCE_MAP(
        '0', 1378,
        '2', 1386,
        '7', 1581,
        '9', 2233,
        'A', 1766,
        'a', 1766,
        'B', 2195,
        'b', 2195,
        'D', 1777,
        'd', 1777,
        'E', 2222,
        'e', 2222,
        'F', 1662,
        'f', 1662,
      );
      END_STATE();
    case 1313:
      ADVANCE_MAP(
        '0', 1417,
        '1', 1738,
        '2', 1210,
        '3', 1396,
        '5', 1344,
        '6', 1413,
        '7', 1406,
        'A', 1230,
        'a', 1230,
        'B', 1359,
        'b', 1359,
        'D', 1821,
        'd', 1821,
        'E', 1633,
        'e', 1633,
      );
      END_STATE();
    case 1314:
      if (lookahead == '0') ADVANCE(1630);
      if (lookahead == '2') ADVANCE(1401);
      if (lookahead == '7') ADVANCE(2211);
      if (lookahead == '9') ADVANCE(2234);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1802);
      END_STATE();
    case 1315:
      if (lookahead == '0') ADVANCE(1426);
      END_STATE();
    case 1316:
      ADVANCE_MAP(
        '0', 1418,
        '1', 1738,
        '2', 1211,
        '3', 1396,
        '5', 1344,
        '6', 1413,
        '7', 1409,
        'A', 1229,
        'a', 1229,
        'B', 1359,
        'b', 1359,
        'D', 1821,
        'd', 1821,
        'E', 1633,
        'e', 1633,
      );
      END_STATE();
    case 1317:
      ADVANCE_MAP(
        '0', 1402,
        '2', 1380,
        '7', 1748,
        '9', 2237,
        'B', 1803,
        'b', 1803,
        'D', 1814,
        'd', 1814,
        'F', 1815,
        'f', 1815,
      );
      END_STATE();
    case 1318:
      if (lookahead == '0') ADVANCE(1415);
      if (lookahead == '2') ADVANCE(1416);
      if (lookahead == '7') ADVANCE(1758);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1830);
      END_STATE();
    case 1319:
      ADVANCE_MAP(
        '0', 1631,
        '2', 1414,
        '7', 1757,
        '9', 2235,
        'B', 1803,
        'b', 1803,
        'F', 1813,
        'f', 1813,
      );
      END_STATE();
    case 1320:
      if (lookahead == '0') ADVANCE(1434);
      END_STATE();
    case 1321:
      ADVANCE_MAP(
        '0', 1411,
        '2', 1389,
        '7', 1755,
        '9', 2238,
        'D', 1829,
        'd', 1829,
        'F', 1828,
        'f', 1828,
      );
      END_STATE();
    case 1322:
      if (lookahead == '0') ADVANCE(1439);
      END_STATE();
    case 1323:
      if (lookahead == '0') ADVANCE(1446);
      END_STATE();
    case 1324:
      if (lookahead == '0') ADVANCE(1447);
      END_STATE();
    case 1325:
      if (lookahead == '0') ADVANCE(1636);
      if (lookahead == '2') ADVANCE(1420);
      if (lookahead == '7') ADVANCE(2212);
      if (lookahead == '9') ADVANCE(2239);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1831);
      END_STATE();
    case 1326:
      if (lookahead == '0') ADVANCE(1427);
      END_STATE();
    case 1327:
      if (lookahead == '0') ADVANCE(1206);
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '6') ADVANCE(1622);
      if (lookahead == '7') ADVANCE(1690);
      if (lookahead == '8') ADVANCE(1739);
      END_STATE();
    case 1328:
      if (lookahead == '0') ADVANCE(1206);
      if (lookahead == '1') ADVANCE(1247);
      if (lookahead == '6') ADVANCE(1622);
      if (lookahead == '7') ADVANCE(1690);
      if (lookahead == '8') ADVANCE(1739);
      END_STATE();
    case 1329:
      if (lookahead == '0') ADVANCE(1243);
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '7') ADVANCE(1690);
      END_STATE();
    case 1330:
      if (lookahead == '0') ADVANCE(1243);
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '7') ADVANCE(1690);
      if (lookahead == '8') ADVANCE(1745);
      END_STATE();
    case 1331:
      if (lookahead == '0') ADVANCE(1428);
      END_STATE();
    case 1332:
      if (lookahead == '0') ADVANCE(1433);
      END_STATE();
    case 1333:
      if (lookahead == '0') ADVANCE(1429);
      if (lookahead == '1') ADVANCE(1730);
      END_STATE();
    case 1334:
      if (lookahead == '0') ADVANCE(1207);
      if (lookahead == '1') ADVANCE(1247);
      if (lookahead == '6') ADVANCE(1622);
      if (lookahead == '7') ADVANCE(1690);
      if (lookahead == '8') ADVANCE(1739);
      END_STATE();
    case 1335:
      if (lookahead == '0') ADVANCE(1245);
      if (lookahead == '1') ADVANCE(1247);
      if (lookahead == '7') ADVANCE(1690);
      END_STATE();
    case 1336:
      if (lookahead == '1') ADVANCE(2436);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1336);
      END_STATE();
    case 1337:
      ADVANCE_MAP(
        '1', 1200,
        '3', 1602,
        '4', 1481,
        '5', 1701,
        '6', 1363,
        '7', 1555,
        '8', 1463,
        'X', 1349,
        'x', 1349,
      );
      END_STATE();
    case 1338:
      if (lookahead == '1') ADVANCE(1223);
      if (lookahead == '4') ADVANCE(1640);
      if (lookahead == '8') ADVANCE(1466);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1467);
      END_STATE();
    case 1339:
      ADVANCE_MAP(
        '1', 1284,
        '3', 1602,
        '4', 1485,
        '6', 1637,
        '7', 1555,
        '8', 1543,
        'X', 1486,
        'x', 1486,
      );
      END_STATE();
    case 1340:
      if (lookahead == '1') ADVANCE(2508);
      END_STATE();
    case 1341:
      if (lookahead == '1') ADVANCE(1235);
      if (lookahead == '3') ADVANCE(1562);
      if (lookahead == '4') ADVANCE(1605);
      END_STATE();
    case 1342:
      if (lookahead == '1') ADVANCE(1249);
      END_STATE();
    case 1343:
      ADVANCE_MAP(
        '1', 1204,
        '2', 1399,
        '3', 1572,
        '4', 1482,
        '5', 1731,
        '6', 1270,
        '8', 1469,
        '9', 1603,
        'X', 1430,
        'x', 1430,
      );
      END_STATE();
    case 1344:
      if (lookahead == '1') ADVANCE(1614);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1372);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2200);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2197);
      END_STATE();
    case 1345:
      if (lookahead == '1') ADVANCE(1507);
      END_STATE();
    case 1346:
      ADVANCE_MAP(
        '1', 1221,
        '2', 1399,
        '3', 1572,
        '4', 1577,
        '5', 1733,
        '6', 1270,
        '8', 1476,
        '9', 1603,
        'X', 1440,
        'x', 1440,
      );
      END_STATE();
    case 1347:
      if (lookahead == '1') ADVANCE(1285);
      if (lookahead == '4') ADVANCE(1485);
      if (lookahead == '8') ADVANCE(1478);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1479);
      END_STATE();
    case 1348:
      ADVANCE_MAP(
        '1', 1335,
        '2', 1399,
        '3', 1572,
        '4', 1578,
        '5', 1733,
        '6', 1271,
        '8', 1547,
        '9', 1603,
        'X', 1442,
        'x', 1442,
      );
      END_STATE();
    case 1349:
      ADVANCE_MAP(
        '1', 1660,
        '2', 1202,
        '3', 1225,
        '5', 2230,
        '6', 1672,
        'B', 2214,
        'b', 2214,
        'F', 2231,
        'f', 2231,
      );
      END_STATE();
    case 1350:
      if (lookahead == '1') ADVANCE(1231);
      if (lookahead == '4') ADVANCE(1651);
      if (lookahead == '6') ADVANCE(1372);
      if (lookahead == '8') ADVANCE(1470);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1471);
      END_STATE();
    case 1351:
      if (lookahead == '1') ADVANCE(1462);
      if (lookahead == '3') ADVANCE(1602);
      if (lookahead == '6') ADVANCE(1637);
      if (lookahead == '7') ADVANCE(1555);
      if (lookahead == '8') ADVANCE(1487);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1477);
      END_STATE();
    case 1352:
      if (lookahead == '1') ADVANCE(1582);
      END_STATE();
    case 1353:
      if (lookahead == '1') ADVANCE(1593);
      if (lookahead == '7') ADVANCE(1631);
      END_STATE();
    case 1354:
      if (lookahead == '1') ADVANCE(1264);
      if (lookahead == '2') ADVANCE(1512);
      if (lookahead == '3') ADVANCE(1618);
      END_STATE();
    case 1355:
      if (lookahead == '1') ADVANCE(1264);
      if (lookahead == '2') ADVANCE(1518);
      if (lookahead == '3') ADVANCE(1618);
      END_STATE();
    case 1356:
      if (lookahead == '1') ADVANCE(1264);
      if (lookahead == '2') ADVANCE(1511);
      if (lookahead == '3') ADVANCE(1618);
      END_STATE();
    case 1357:
      if (lookahead == '1') ADVANCE(1264);
      if (lookahead == '2') ADVANCE(1517);
      if (lookahead == '3') ADVANCE(1618);
      END_STATE();
    case 1358:
      if (lookahead == '1') ADVANCE(1506);
      if (lookahead == ';') ADVANCE(1184);
      END_STATE();
    case 1359:
      if (lookahead == '1') ADVANCE(1506);
      if (lookahead == ';') ADVANCE(2414);
      END_STATE();
    case 1360:
      if (lookahead == '1') ADVANCE(1727);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2206);
      END_STATE();
    case 1361:
      if (lookahead == '1') ADVANCE(1724);
      if (lookahead == '7') ADVANCE(1630);
      END_STATE();
    case 1362:
      if (lookahead == '1') ADVANCE(1121);
      END_STATE();
    case 1363:
      if (lookahead == '1') ADVANCE(1760);
      if (lookahead == '5') ADVANCE(1489);
      if (lookahead == '9') ADVANCE(1706);
      END_STATE();
    case 1364:
      if (lookahead == '1') ADVANCE(1203);
      if (lookahead == '4') ADVANCE(1689);
      if (lookahead == '8') ADVANCE(1493);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1468);
      END_STATE();
    case 1365:
      if (lookahead == '1') ADVANCE(1449);
      if (lookahead == '6') ADVANCE(1372);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1488);
      END_STATE();
    case 1366:
      if (lookahead == '1') ADVANCE(1220);
      if (lookahead == '4') ADVANCE(1571);
      if (lookahead == '5') ADVANCE(1732);
      if (lookahead == '6') ADVANCE(1372);
      if (lookahead == '8') ADVANCE(1548);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1436);
      END_STATE();
    case 1367:
      if (lookahead == '1') ADVANCE(1220);
      if (lookahead == '4') ADVANCE(1571);
      if (lookahead == '5') ADVANCE(1732);
      if (lookahead == '8') ADVANCE(1548);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1435);
      END_STATE();
    case 1368:
      if (lookahead == '1') ADVANCE(1237);
      if (lookahead == '4') ADVANCE(1569);
      if (lookahead == '5') ADVANCE(1732);
      if (lookahead == '8') ADVANCE(1546);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1437);
      END_STATE();
    case 1369:
      if (lookahead == '1') ADVANCE(1331);
      if (lookahead == '4') ADVANCE(1655);
      if (lookahead == '8') ADVANCE(1550);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1473);
      END_STATE();
    case 1370:
      if (lookahead == '1') ADVANCE(1791);
      END_STATE();
    case 1371:
      if (lookahead == '1') ADVANCE(1794);
      END_STATE();
    case 1372:
      if (lookahead == '1') ADVANCE(1803);
      END_STATE();
    case 1373:
      if (lookahead == '1') ADVANCE(1803);
      if (lookahead == '2') ADVANCE(1803);
      END_STATE();
    case 1374:
      if (lookahead == '1') ADVANCE(1803);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1771);
      END_STATE();
    case 1375:
      if (lookahead == '1') ADVANCE(1803);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1822);
      END_STATE();
    case 1376:
      if (lookahead == '1') ADVANCE(1236);
      if (lookahead == '4') ADVANCE(1559);
      if (lookahead == '5') ADVANCE(1729);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1423);
      END_STATE();
    case 1377:
      if (lookahead == '1') ADVANCE(1490);
      if (lookahead == ';') ADVANCE(2276);
      END_STATE();
    case 1378:
      if (lookahead == '1') ADVANCE(1258);
      if (lookahead == '3') ADVANCE(1562);
      if (lookahead == '4') ADVANCE(1605);
      END_STATE();
    case 1379:
      if (lookahead == '1') ADVANCE(1254);
      END_STATE();
    case 1380:
      if (lookahead == '1') ADVANCE(1515);
      END_STATE();
    case 1381:
      if (lookahead == '1') ADVANCE(1599);
      if (lookahead == '7') ADVANCE(1632);
      END_STATE();
    case 1382:
      if (lookahead == '1') ADVANCE(2223);
      END_STATE();
    case 1383:
      if (lookahead == '1') ADVANCE(1333);
      if (lookahead == '4') ADVANCE(1561);
      if (lookahead == '5') ADVANCE(1729);
      if (lookahead == '6') ADVANCE(1372);
      if (lookahead == '8') ADVANCE(1470);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1424);
      END_STATE();
    case 1384:
      if (lookahead == '1') ADVANCE(1494);
      END_STATE();
    case 1385:
      if (lookahead == '1') ADVANCE(1503);
      END_STATE();
    case 1386:
      if (lookahead == '1') ADVANCE(1503);
      if (lookahead == ';') ADVANCE(2276);
      END_STATE();
    case 1387:
      if (lookahead == '1') ADVANCE(1256);
      END_STATE();
    case 1388:
      if (lookahead == '1') ADVANCE(2207);
      if (lookahead == '3') ADVANCE(1562);
      END_STATE();
    case 1389:
      if (lookahead == '1') ADVANCE(1516);
      END_STATE();
    case 1390:
      if (lookahead == '1') ADVANCE(1496);
      END_STATE();
    case 1391:
      if (lookahead == '1') ADVANCE(1260);
      END_STATE();
    case 1392:
      if (lookahead == '1') ADVANCE(1499);
      END_STATE();
    case 1393:
      if (lookahead == '1') ADVANCE(1269);
      if (lookahead == '3') ADVANCE(2208);
      if (lookahead == '4') ADVANCE(1692);
      END_STATE();
    case 1394:
      if (lookahead == '1') ADVANCE(1269);
      if (lookahead == '3') ADVANCE(2208);
      if (lookahead == '4') ADVANCE(1691);
      END_STATE();
    case 1395:
      if (lookahead == '1') ADVANCE(1500);
      END_STATE();
    case 1396:
      if (lookahead == '1') ADVANCE(1565);
      END_STATE();
    case 1397:
      if (lookahead == '1') ADVANCE(1266);
      END_STATE();
    case 1398:
      if (lookahead == '1') ADVANCE(1266);
      if (lookahead == '4') ADVANCE(1616);
      END_STATE();
    case 1399:
      if (lookahead == '1') ADVANCE(1668);
      if (lookahead == '4') ADVANCE(1714);
      END_STATE();
    case 1400:
      if (lookahead == '1') ADVANCE(1502);
      END_STATE();
    case 1401:
      if (lookahead == '1') ADVANCE(1647);
      END_STATE();
    case 1402:
      if (lookahead == '1') ADVANCE(1275);
      if (lookahead == '4') ADVANCE(1617);
      END_STATE();
    case 1403:
      if (lookahead == '1') ADVANCE(1504);
      END_STATE();
    case 1404:
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == '3') ADVANCE(1370);
      if (lookahead == '9') ADVANCE(1653);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2196);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1565);
      END_STATE();
    case 1405:
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == '3') ADVANCE(1370);
      if (lookahead == '9') ADVANCE(1656);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2196);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1565);
      END_STATE();
    case 1406:
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == '3') ADVANCE(1370);
      if (lookahead == '9') ADVANCE(1657);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2196);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1565);
      END_STATE();
    case 1407:
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == '9') ADVANCE(1653);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2196);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1565);
      END_STATE();
    case 1408:
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == '9') ADVANCE(1656);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2196);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1565);
      END_STATE();
    case 1409:
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == '9') ADVANCE(1657);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2196);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1565);
      END_STATE();
    case 1410:
      if (lookahead == '1') ADVANCE(1715);
      if (lookahead == '2') ADVANCE(1690);
      END_STATE();
    case 1411:
      if (lookahead == '1') ADVANCE(1278);
      if (lookahead == '4') ADVANCE(1620);
      END_STATE();
    case 1412:
      if (lookahead == '1') ADVANCE(1505);
      END_STATE();
    case 1413:
      if (lookahead == '1') ADVANCE(1505);
      if (lookahead == '4') ADVANCE(1505);
      END_STATE();
    case 1414:
      if (lookahead == '1') ADVANCE(1654);
      END_STATE();
    case 1415:
      if (lookahead == '1') ADVANCE(1289);
      END_STATE();
    case 1416:
      if (lookahead == '1') ADVANCE(1526);
      END_STATE();
    case 1417:
      if (lookahead == '1') ADVANCE(1282);
      if (lookahead == '3') ADVANCE(2208);
      if (lookahead == '4') ADVANCE(1692);
      END_STATE();
    case 1418:
      if (lookahead == '1') ADVANCE(1282);
      if (lookahead == '3') ADVANCE(2208);
      if (lookahead == '4') ADVANCE(1691);
      END_STATE();
    case 1419:
      if (lookahead == '1') ADVANCE(1521);
      END_STATE();
    case 1420:
      if (lookahead == '1') ADVANCE(1659);
      END_STATE();
    case 1421:
      if (lookahead == '1') ADVANCE(1257);
      if (lookahead == '4') ADVANCE(1605);
      END_STATE();
    case 1422:
      if (lookahead == '1') ADVANCE(1586);
      if (lookahead == '7') ADVANCE(1634);
      END_STATE();
    case 1423:
      if (lookahead == '1') ADVANCE(1683);
      if (lookahead == '2') ADVANCE(1687);
      END_STATE();
    case 1424:
      if (lookahead == '1') ADVANCE(1683);
      if (lookahead == '2') ADVANCE(1233);
      if (lookahead == '3') ADVANCE(2219);
      END_STATE();
    case 1425:
      if (lookahead == '1') ADVANCE(1579);
      END_STATE();
    case 1426:
      if (lookahead == '1') ADVANCE(1587);
      END_STATE();
    case 1427:
      if (lookahead == '1') ADVANCE(1728);
      if (lookahead == '7') ADVANCE(1636);
      END_STATE();
    case 1428:
      if (lookahead == '1') ADVANCE(1600);
      if (lookahead == '7') ADVANCE(1635);
      END_STATE();
    case 1429:
      if (lookahead == '1') ADVANCE(1595);
      if (lookahead == '7') ADVANCE(1632);
      END_STATE();
    case 1430:
      ADVANCE_MAP(
        '1', 1684,
        '2', 1217,
        '3', 2209,
        '6', 1672,
        'B', 1374,
        'b', 1374,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1431:
      ADVANCE_MAP(
        '1', 1684,
        '2', 1228,
        '3', 2209,
        'B', 1375,
        'b', 1375,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1432:
      ADVANCE_MAP(
        '1', 1684,
        '2', 1228,
        '3', 2209,
        'B', 1372,
        'b', 1372,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1433:
      if (lookahead == '1') ADVANCE(1590);
      END_STATE();
    case 1434:
      if (lookahead == '1') ADVANCE(1589);
      END_STATE();
    case 1435:
      if (lookahead == '1') ADVANCE(1685);
      if (lookahead == '2') ADVANCE(1319);
      END_STATE();
    case 1436:
      if (lookahead == '1') ADVANCE(1685);
      if (lookahead == '2') ADVANCE(1319);
      if (lookahead == '3') ADVANCE(2219);
      END_STATE();
    case 1437:
      if (lookahead == '1') ADVANCE(1685);
      if (lookahead == '2') ADVANCE(1317);
      END_STATE();
    case 1438:
      if (lookahead == '1') ADVANCE(1685);
      if (lookahead == '2') ADVANCE(1699);
      END_STATE();
    case 1439:
      if (lookahead == '1') ADVANCE(1596);
      END_STATE();
    case 1440:
      ADVANCE_MAP(
        '1', 1686,
        '2', 1226,
        '3', 2209,
        'B', 1375,
        'b', 1375,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1441:
      ADVANCE_MAP(
        '1', 1686,
        '2', 1218,
        '3', 2209,
        '6', 1672,
        'B', 1374,
        'b', 1374,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1442:
      ADVANCE_MAP(
        '1', 1686,
        '2', 1316,
        '3', 2210,
        'B', 1372,
        'b', 1372,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1443:
      ADVANCE_MAP(
        '1', 1686,
        '2', 1313,
        '3', 2210,
        '6', 1672,
        'B', 1374,
        'b', 1374,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1444:
      ADVANCE_MAP(
        '1', 1686,
        '2', 1227,
        '3', 2210,
        'B', 1372,
        'b', 1372,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1445:
      ADVANCE_MAP(
        '1', 1686,
        '2', 1219,
        '3', 2210,
        '6', 1672,
        'B', 1374,
        'b', 1374,
        'D', 1714,
        'd', 1714,
        'F', 1714,
        'f', 1714,
      );
      END_STATE();
    case 1446:
      if (lookahead == '1') ADVANCE(1598);
      END_STATE();
    case 1447:
      if (lookahead == '1') ADVANCE(1601);
      END_STATE();
    case 1448:
      if (lookahead == '1') ADVANCE(1315);
      if (lookahead == '4') ADVANCE(1644);
      if (lookahead == '8') ADVANCE(1544);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1523);
      END_STATE();
    case 1449:
      if (lookahead == '1') ADVANCE(1730);
      END_STATE();
    case 1450:
      if (lookahead == '1') ADVANCE(1326);
      if (lookahead == '4') ADVANCE(1697);
      if (lookahead == '8') ADVANCE(1551);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1524);
      END_STATE();
    case 1451:
      if (lookahead == '1') ADVANCE(1332);
      if (lookahead == '4') ADVANCE(1565);
      if (lookahead == '5') ADVANCE(1732);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1438);
      END_STATE();
    case 1452:
      if (lookahead == '1') ADVANCE(1320);
      if (lookahead == '4') ADVANCE(1645);
      if (lookahead == '8') ADVANCE(1549);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1528);
      END_STATE();
    case 1453:
      if (lookahead == '1') ADVANCE(1322);
      if (lookahead == '4') ADVANCE(1646);
      if (lookahead == '8') ADVANCE(1552);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1532);
      END_STATE();
    case 1454:
      if (lookahead == '1') ADVANCE(1323);
      if (lookahead == '4') ADVANCE(1648);
      if (lookahead == '8') ADVANCE(1553);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1534);
      END_STATE();
    case 1455:
      if (lookahead == '1') ADVANCE(1324);
      if (lookahead == '4') ADVANCE(1658);
      if (lookahead == '8') ADVANCE(1554);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1536);
      END_STATE();
    case 1456:
      ADVANCE_MAP(
        '1', 1327,
        '2', 1399,
        '3', 1572,
        '4', 1483,
        '5', 1733,
        '6', 1270,
        '8', 1469,
        '9', 1603,
        'X', 1441,
        'x', 1441,
      );
      END_STATE();
    case 1457:
      ADVANCE_MAP(
        '1', 1330,
        '2', 1399,
        '3', 1572,
        '4', 1574,
        '5', 1731,
        '6', 1270,
        '8', 1476,
        '9', 1603,
        'X', 1431,
        'x', 1431,
      );
      END_STATE();
    case 1458:
      ADVANCE_MAP(
        '1', 1329,
        '2', 1399,
        '3', 1572,
        '4', 1574,
        '5', 1731,
        '6', 1270,
        '8', 1476,
        '9', 1603,
        'X', 1432,
        'x', 1432,
      );
      END_STATE();
    case 1459:
      ADVANCE_MAP(
        '1', 1334,
        '2', 1399,
        '3', 1572,
        '4', 1484,
        '5', 1733,
        '6', 1271,
        '8', 1545,
        '9', 1603,
        'X', 1443,
        'x', 1443,
      );
      END_STATE();
    case 1460:
      ADVANCE_MAP(
        '1', 1222,
        '2', 1399,
        '3', 1572,
        '4', 1577,
        '5', 1733,
        '6', 1271,
        '8', 1476,
        '9', 1603,
        'X', 1444,
        'x', 1444,
      );
      END_STATE();
    case 1461:
      ADVANCE_MAP(
        '1', 1328,
        '2', 1399,
        '3', 1572,
        '4', 1483,
        '5', 1733,
        '6', 1271,
        '8', 1469,
        '9', 1603,
        'X', 1445,
        'x', 1445,
      );
      END_STATE();
    case 1462:
      if (lookahead == '2') ADVANCE(1480);
      if (lookahead == '5') ADVANCE(1464);
      END_STATE();
    case 1463:
      if (lookahead == '2') ADVANCE(1201);
      if (lookahead == '7') ADVANCE(1522);
      END_STATE();
    case 1464:
      if (lookahead == '2') ADVANCE(1498);
      END_STATE();
    case 1465:
      if (lookahead == '2') ADVANCE(1250);
      if (lookahead == '4') ADVANCE(1562);
      END_STATE();
    case 1466:
      if (lookahead == '2') ADVANCE(1286);
      if (lookahead == '7') ADVANCE(1531);
      END_STATE();
    case 1467:
      if (lookahead == '2') ADVANCE(1240);
      END_STATE();
    case 1468:
      if (lookahead == '2') ADVANCE(1314);
      END_STATE();
    case 1469:
      if (lookahead == '2') ADVANCE(1301);
      if (lookahead == '5') ADVANCE(1746);
      if (lookahead == '6') ADVANCE(1629);
      if (lookahead == '7') ADVANCE(1354);
      if (lookahead == '8') ADVANCE(1307);
      if (lookahead == '9') ADVANCE(1698);
      END_STATE();
    case 1470:
      if (lookahead == '2') ADVANCE(1305);
      if (lookahead == '7') ADVANCE(1474);
      END_STATE();
    case 1471:
      if (lookahead == '2') ADVANCE(1232);
      if (lookahead == '3') ADVANCE(2219);
      END_STATE();
    case 1472:
      if (lookahead == '2') ADVANCE(1669);
      END_STATE();
    case 1473:
      if (lookahead == '2') ADVANCE(1321);
      END_STATE();
    case 1474:
      if (lookahead == '2') ADVANCE(1507);
      END_STATE();
    case 1475:
      if (lookahead == '2') ADVANCE(2510);
      END_STATE();
    case 1476:
      if (lookahead == '2') ADVANCE(1300);
      if (lookahead == '5') ADVANCE(1746);
      if (lookahead == '6') ADVANCE(1629);
      if (lookahead == '7') ADVANCE(1356);
      if (lookahead == '8') ADVANCE(1307);
      if (lookahead == '9') ADVANCE(1698);
      END_STATE();
    case 1477:
      if (lookahead == '2') ADVANCE(1212);
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '5') ADVANCE(2230);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2231);
      END_STATE();
    case 1478:
      if (lookahead == '2') ADVANCE(1292);
      if (lookahead == '7') ADVANCE(1527);
      END_STATE();
    case 1479:
      if (lookahead == '2') ADVANCE(1238);
      if (lookahead == '6') ADVANCE(1672);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2214);
      END_STATE();
    case 1480:
      if (lookahead == '2') ADVANCE(1737);
      END_STATE();
    case 1481:
      if (lookahead == '2') ADVANCE(1766);
      if (lookahead == '3') ADVANCE(1761);
      if (lookahead == '5') ADVANCE(1767);
      if (lookahead == '7') ADVANCE(1769);
      END_STATE();
    case 1482:
      if (lookahead == '2') ADVANCE(1766);
      if (lookahead == '3') ADVANCE(1810);
      if (lookahead == '5') ADVANCE(1812);
      END_STATE();
    case 1483:
      if (lookahead == '2') ADVANCE(1766);
      if (lookahead == '3') ADVANCE(1818);
      if (lookahead == '5') ADVANCE(1812);
      END_STATE();
    case 1484:
      if (lookahead == '2') ADVANCE(1766);
      if (lookahead == '3') ADVANCE(1818);
      if (lookahead == '5') ADVANCE(1821);
      END_STATE();
    case 1485:
      if (lookahead == '2') ADVANCE(1766);
      if (lookahead == '5') ADVANCE(1776);
      if (lookahead == '7') ADVANCE(1769);
      END_STATE();
    case 1486:
      ADVANCE_MAP(
        '2', 1312,
        '3', 1224,
        '5', 2230,
        '6', 1672,
        'B', 2214,
        'b', 2214,
        'F', 2231,
        'f', 2231,
      );
      END_STATE();
    case 1487:
      if (lookahead == '2') ADVANCE(1465);
      END_STATE();
    case 1488:
      if (lookahead == '2') ADVANCE(2229);
      if (lookahead == '3') ADVANCE(2219);
      END_STATE();
    case 1489:
      if (lookahead == '2') ADVANCE(1705);
      END_STATE();
    case 1490:
      if (lookahead == '2') ADVANCE(1767);
      if (lookahead == '5') ADVANCE(1788);
      if (lookahead == '7') ADVANCE(1789);
      END_STATE();
    case 1491:
      if (lookahead == '2') ADVANCE(1509);
      if (lookahead == '4') ADVANCE(1668);
      if (lookahead == '9') ADVANCE(1612);
      END_STATE();
    case 1492:
      if (lookahead == '2') ADVANCE(1126);
      END_STATE();
    case 1493:
      if (lookahead == '2') ADVANCE(1677);
      if (lookahead == '7') ADVANCE(1538);
      END_STATE();
    case 1494:
      if (lookahead == '2') ADVANCE(1771);
      END_STATE();
    case 1495:
      if (lookahead == '2') ADVANCE(1382);
      END_STATE();
    case 1496:
      if (lookahead == '2') ADVANCE(1763);
      END_STATE();
    case 1497:
      if (lookahead == '2') ADVANCE(1495);
      END_STATE();
    case 1498:
      if (lookahead == '2') ADVANCE(1778);
      if (lookahead == '4') ADVANCE(1779);
      END_STATE();
    case 1499:
      if (lookahead == '2') ADVANCE(1764);
      END_STATE();
    case 1500:
      if (lookahead == '2') ADVANCE(1825);
      END_STATE();
    case 1501:
      if (lookahead == '2') ADVANCE(1795);
      END_STATE();
    case 1502:
      if (lookahead == '2') ADVANCE(1824);
      END_STATE();
    case 1503:
      if (lookahead == '2') ADVANCE(1800);
      if (lookahead == '5') ADVANCE(1788);
      if (lookahead == '7') ADVANCE(1789);
      END_STATE();
    case 1504:
      if (lookahead == '2') ADVANCE(1770);
      END_STATE();
    case 1505:
      if (lookahead == '2') ADVANCE(1803);
      END_STATE();
    case 1506:
      if (lookahead == '2') ADVANCE(1803);
      if (lookahead == '3') ADVANCE(1803);
      END_STATE();
    case 1507:
      if (lookahead == '2') ADVANCE(1803);
      if (lookahead == '5') ADVANCE(1823);
      END_STATE();
    case 1508:
      if (lookahead == '2') ADVANCE(1803);
      if (lookahead == '6') ADVANCE(1803);
      END_STATE();
    case 1509:
      if (lookahead == '2') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1510:
      if (lookahead == '2') ADVANCE(1803);
      if (lookahead == '9') ADVANCE(1803);
      END_STATE();
    case 1511:
      if (lookahead == '2') ADVANCE(1812);
      if (lookahead == '3') ADVANCE(1803);
      END_STATE();
    case 1512:
      if (lookahead == '2') ADVANCE(1812);
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1789);
      END_STATE();
    case 1513:
      if (lookahead == '2') ADVANCE(1812);
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1789);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1808);
      END_STATE();
    case 1514:
      if (lookahead == '2') ADVANCE(1812);
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1808);
      END_STATE();
    case 1515:
      if (lookahead == '2') ADVANCE(1814);
      if (lookahead == '5') ADVANCE(1815);
      END_STATE();
    case 1516:
      if (lookahead == '2') ADVANCE(1829);
      if (lookahead == '5') ADVANCE(1828);
      END_STATE();
    case 1517:
      if (lookahead == '2') ADVANCE(1821);
      if (lookahead == '3') ADVANCE(1803);
      END_STATE();
    case 1518:
      if (lookahead == '2') ADVANCE(1821);
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1789);
      END_STATE();
    case 1519:
      if (lookahead == '2') ADVANCE(1821);
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1789);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1808);
      END_STATE();
    case 1520:
      if (lookahead == '2') ADVANCE(1821);
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1808);
      END_STATE();
    case 1521:
      if (lookahead == '2') ADVANCE(1822);
      END_STATE();
    case 1522:
      if (lookahead == '2') ADVANCE(1490);
      END_STATE();
    case 1523:
      if (lookahead == '2') ADVANCE(1287);
      END_STATE();
    case 1524:
      if (lookahead == '2') ADVANCE(1325);
      END_STATE();
    case 1525:
      if (lookahead == '2') ADVANCE(1515);
      END_STATE();
    case 1526:
      if (lookahead == '2') ADVANCE(1830);
      END_STATE();
    case 1527:
      if (lookahead == '2') ADVANCE(1503);
      END_STATE();
    case 1528:
      if (lookahead == '2') ADVANCE(1293);
      END_STATE();
    case 1529:
      if (lookahead == '2') ADVANCE(1516);
      END_STATE();
    case 1530:
      if (lookahead == '2') ADVANCE(1372);
      if (lookahead == '3') ADVANCE(2232);
      END_STATE();
    case 1531:
      if (lookahead == '2') ADVANCE(1496);
      END_STATE();
    case 1532:
      if (lookahead == '2') ADVANCE(1296);
      END_STATE();
    case 1533:
      if (lookahead == '2') ADVANCE(1499);
      END_STATE();
    case 1534:
      if (lookahead == '2') ADVANCE(1298);
      END_STATE();
    case 1535:
      if (lookahead == '2') ADVANCE(1500);
      END_STATE();
    case 1536:
      if (lookahead == '2') ADVANCE(1318);
      END_STATE();
    case 1537:
      if (lookahead == '2') ADVANCE(1502);
      END_STATE();
    case 1538:
      if (lookahead == '2') ADVANCE(1647);
      END_STATE();
    case 1539:
      if (lookahead == '2') ADVANCE(1505);
      END_STATE();
    case 1540:
      if (lookahead == '2') ADVANCE(1654);
      END_STATE();
    case 1541:
      if (lookahead == '2') ADVANCE(1526);
      END_STATE();
    case 1542:
      if (lookahead == '2') ADVANCE(1659);
      END_STATE();
    case 1543:
      if (lookahead == '2') ADVANCE(1291);
      if (lookahead == '7') ADVANCE(1527);
      END_STATE();
    case 1544:
      if (lookahead == '2') ADVANCE(1295);
      if (lookahead == '7') ADVANCE(1533);
      END_STATE();
    case 1545:
      if (lookahead == '2') ADVANCE(1311);
      if (lookahead == '5') ADVANCE(1746);
      if (lookahead == '6') ADVANCE(1629);
      if (lookahead == '7') ADVANCE(1355);
      if (lookahead == '8') ADVANCE(1307);
      if (lookahead == '9') ADVANCE(1698);
      END_STATE();
    case 1546:
      if (lookahead == '2') ADVANCE(1306);
      if (lookahead == '7') ADVANCE(1525);
      END_STATE();
    case 1547:
      if (lookahead == '2') ADVANCE(1310);
      if (lookahead == '5') ADVANCE(1746);
      if (lookahead == '6') ADVANCE(1629);
      if (lookahead == '7') ADVANCE(1357);
      if (lookahead == '8') ADVANCE(1307);
      if (lookahead == '9') ADVANCE(1698);
      END_STATE();
    case 1548:
      if (lookahead == '2') ADVANCE(1681);
      if (lookahead == '7') ADVANCE(1540);
      END_STATE();
    case 1549:
      if (lookahead == '2') ADVANCE(1297);
      if (lookahead == '7') ADVANCE(1535);
      END_STATE();
    case 1550:
      if (lookahead == '2') ADVANCE(1308);
      if (lookahead == '7') ADVANCE(1529);
      END_STATE();
    case 1551:
      if (lookahead == '2') ADVANCE(1682);
      if (lookahead == '7') ADVANCE(1542);
      END_STATE();
    case 1552:
      if (lookahead == '2') ADVANCE(1299);
      if (lookahead == '7') ADVANCE(1537);
      END_STATE();
    case 1553:
      if (lookahead == '2') ADVANCE(1304);
      if (lookahead == '7') ADVANCE(1539);
      END_STATE();
    case 1554:
      if (lookahead == '2') ADVANCE(1309);
      if (lookahead == '7') ADVANCE(1541);
      END_STATE();
    case 1555:
      if (lookahead == '3') ADVANCE(1558);
      if (lookahead == '5') ADVANCE(1242);
      END_STATE();
    case 1556:
      if (lookahead == '3') ADVANCE(1557);
      if (lookahead == '8') ADVANCE(1688);
      END_STATE();
    case 1557:
      if (lookahead == '3') ADVANCE(1761);
      if (lookahead == '4') ADVANCE(1767);
      END_STATE();
    case 1558:
      if (lookahead == '3') ADVANCE(1773);
      END_STATE();
    case 1559:
      if (lookahead == '3') ADVANCE(1759);
      END_STATE();
    case 1560:
      if (lookahead == '3') ADVANCE(1759);
      if (lookahead == '4') ADVANCE(1803);
      END_STATE();
    case 1561:
      if (lookahead == '3') ADVANCE(1759);
      if (lookahead == '5') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1823);
      END_STATE();
    case 1562:
      if (lookahead == '3') ADVANCE(1784);
      if (lookahead == '6') ADVANCE(1785);
      END_STATE();
    case 1563:
      if (lookahead == '3') ADVANCE(1791);
      END_STATE();
    case 1564:
      if (lookahead == '3') ADVANCE(1794);
      END_STATE();
    case 1565:
      if (lookahead == '3') ADVANCE(1803);
      END_STATE();
    case 1566:
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '4') ADVANCE(1803);
      END_STATE();
    case 1567:
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '4') ADVANCE(1803);
      if (lookahead == '5') ADVANCE(1803);
      END_STATE();
    case 1568:
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '4') ADVANCE(1814);
      END_STATE();
    case 1569:
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '5') ADVANCE(1814);
      if (lookahead == '7') ADVANCE(1815);
      END_STATE();
    case 1570:
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1571:
      if (lookahead == '3') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1813);
      END_STATE();
    case 1572:
      if (lookahead == '3') ADVANCE(1816);
      END_STATE();
    case 1573:
      if (lookahead == '3') ADVANCE(1810);
      if (lookahead == '4') ADVANCE(1812);
      END_STATE();
    case 1574:
      if (lookahead == '3') ADVANCE(1810);
      if (lookahead == '5') ADVANCE(1812);
      END_STATE();
    case 1575:
      if (lookahead == '3') ADVANCE(1818);
      if (lookahead == '4') ADVANCE(1812);
      END_STATE();
    case 1576:
      if (lookahead == '3') ADVANCE(1818);
      if (lookahead == '4') ADVANCE(1821);
      END_STATE();
    case 1577:
      if (lookahead == '3') ADVANCE(1818);
      if (lookahead == '5') ADVANCE(1812);
      END_STATE();
    case 1578:
      if (lookahead == '3') ADVANCE(1818);
      if (lookahead == '5') ADVANCE(1821);
      END_STATE();
    case 1579:
      if (lookahead == '3') ADVANCE(1559);
      END_STATE();
    case 1580:
      if (lookahead == '3') ADVANCE(1370);
      if (lookahead == '9') ADVANCE(1638);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2198);
      END_STATE();
    case 1581:
      if (lookahead == '3') ADVANCE(1370);
      if (lookahead == '9') ADVANCE(1667);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2198);
      END_STATE();
    case 1582:
      if (lookahead == '3') ADVANCE(1604);
      END_STATE();
    case 1583:
      if (lookahead == '3') ADVANCE(1563);
      END_STATE();
    case 1584:
      if (lookahead == '3') ADVANCE(1573);
      END_STATE();
    case 1585:
      if (lookahead == '3') ADVANCE(1610);
      if (lookahead == '8') ADVANCE(1688);
      END_STATE();
    case 1586:
      if (lookahead == '3') ADVANCE(1568);
      if (lookahead == '8') ADVANCE(1695);
      END_STATE();
    case 1587:
      if (lookahead == '3') ADVANCE(1606);
      END_STATE();
    case 1588:
      if (lookahead == '3') ADVANCE(1575);
      END_STATE();
    case 1589:
      if (lookahead == '3') ADVANCE(1607);
      END_STATE();
    case 1590:
      if (lookahead == '3') ADVANCE(1565);
      END_STATE();
    case 1591:
      if (lookahead == '3') ADVANCE(1565);
      if (lookahead == '6') ADVANCE(1565);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1530);
      END_STATE();
    case 1592:
      if (lookahead == '3') ADVANCE(1565);
      if (lookahead == '7') ADVANCE(1648);
      END_STATE();
    case 1593:
      if (lookahead == '3') ADVANCE(1565);
      if (lookahead == '8') ADVANCE(1693);
      END_STATE();
    case 1594:
      if (lookahead == '3') ADVANCE(2219);
      END_STATE();
    case 1595:
      if (lookahead == '3') ADVANCE(1560);
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1596:
      if (lookahead == '3') ADVANCE(1609);
      END_STATE();
    case 1597:
      if (lookahead == '3') ADVANCE(1576);
      END_STATE();
    case 1598:
      if (lookahead == '3') ADVANCE(1612);
      END_STATE();
    case 1599:
      if (lookahead == '3') ADVANCE(1612);
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1600:
      if (lookahead == '3') ADVANCE(1619);
      if (lookahead == '8') ADVANCE(1696);
      END_STATE();
    case 1601:
      if (lookahead == '3') ADVANCE(1623);
      END_STATE();
    case 1602:
      if (lookahead == '4') ADVANCE(1765);
      END_STATE();
    case 1603:
      if (lookahead == '4') ADVANCE(1734);
      if (lookahead == '6') ADVANCE(1592);
      if (lookahead == '7') ADVANCE(1491);
      END_STATE();
    case 1604:
      if (lookahead == '4') ADVANCE(1763);
      END_STATE();
    case 1605:
      if (lookahead == '4') ADVANCE(1786);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1787);
      END_STATE();
    case 1606:
      if (lookahead == '4') ADVANCE(1764);
      END_STATE();
    case 1607:
      if (lookahead == '4') ADVANCE(1825);
      END_STATE();
    case 1608:
      if (lookahead == '4') ADVANCE(1793);
      END_STATE();
    case 1609:
      if (lookahead == '4') ADVANCE(1824);
      END_STATE();
    case 1610:
      if (lookahead == '4') ADVANCE(1801);
      END_STATE();
    case 1611:
      if (lookahead == '4') ADVANCE(1802);
      END_STATE();
    case 1612:
      if (lookahead == '4') ADVANCE(1803);
      END_STATE();
    case 1613:
      if (lookahead == '4') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1614:
      if (lookahead == '4') ADVANCE(1803);
      if (lookahead == '8') ADVANCE(1803);
      END_STATE();
    case 1615:
      if (lookahead == '4') ADVANCE(1813);
      END_STATE();
    case 1616:
      if (lookahead == '4') ADVANCE(1823);
      END_STATE();
    case 1617:
      if (lookahead == '4') ADVANCE(1815);
      END_STATE();
    case 1618:
      if (lookahead == '4') ADVANCE(1808);
      END_STATE();
    case 1619:
      if (lookahead == '4') ADVANCE(1829);
      END_STATE();
    case 1620:
      if (lookahead == '4') ADVANCE(1828);
      END_STATE();
    case 1621:
      if (lookahead == '4') ADVANCE(1608);
      END_STATE();
    case 1622:
      if (lookahead == '4') ADVANCE(1643);
      END_STATE();
    case 1623:
      if (lookahead == '4') ADVANCE(1830);
      END_STATE();
    case 1624:
      if (lookahead == '4') ADVANCE(1831);
      END_STATE();
    case 1625:
      if (lookahead == '4') ADVANCE(1239);
      END_STATE();
    case 1626:
      if (lookahead == '4') ADVANCE(1239);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 1627:
      if (lookahead == '4') ADVANCE(1263);
      END_STATE();
    case 1628:
      if (lookahead == '4') ADVANCE(1280);
      END_STATE();
    case 1629:
      if (lookahead == '4') ADVANCE(1668);
      if (lookahead == '6') ADVANCE(1267);
      END_STATE();
    case 1630:
      if (lookahead == '4') ADVANCE(1611);
      END_STATE();
    case 1631:
      if (lookahead == '4') ADVANCE(1615);
      END_STATE();
    case 1632:
      if (lookahead == '4') ADVANCE(1616);
      END_STATE();
    case 1633:
      if (lookahead == '4') ADVANCE(1283);
      END_STATE();
    case 1634:
      if (lookahead == '4') ADVANCE(1617);
      END_STATE();
    case 1635:
      if (lookahead == '4') ADVANCE(1620);
      END_STATE();
    case 1636:
      if (lookahead == '4') ADVANCE(1624);
      END_STATE();
    case 1637:
      if (lookahead == '5') ADVANCE(1489);
      if (lookahead == '9') ADVANCE(1706);
      END_STATE();
    case 1638:
      if (lookahead == '5') ADVANCE(1761);
      if (lookahead == '6') ADVANCE(1767);
      END_STATE();
    case 1639:
      if (lookahead == '5') ADVANCE(1506);
      END_STATE();
    case 1640:
      if (lookahead == '5') ADVANCE(1763);
      END_STATE();
    case 1641:
      if (lookahead == '5') ADVANCE(1759);
      END_STATE();
    case 1642:
      if (lookahead == '5') ADVANCE(1759);
      if (lookahead == '6') ADVANCE(1803);
      END_STATE();
    case 1643:
      if (lookahead == '5') ADVANCE(1780);
      END_STATE();
    case 1644:
      if (lookahead == '5') ADVANCE(1764);
      END_STATE();
    case 1645:
      if (lookahead == '5') ADVANCE(1825);
      END_STATE();
    case 1646:
      if (lookahead == '5') ADVANCE(1824);
      END_STATE();
    case 1647:
      if (lookahead == '5') ADVANCE(1802);
      END_STATE();
    case 1648:
      if (lookahead == '5') ADVANCE(1803);
      END_STATE();
    case 1649:
      if (lookahead == '5') ADVANCE(1803);
      if (lookahead == '6') ADVANCE(1803);
      END_STATE();
    case 1650:
      if (lookahead == '5') ADVANCE(1803);
      if (lookahead == '6') ADVANCE(1814);
      END_STATE();
    case 1651:
      if (lookahead == '5') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1823);
      END_STATE();
    case 1652:
      if (lookahead == '5') ADVANCE(1803);
      if (lookahead == '9') ADVANCE(1803);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1803);
      END_STATE();
    case 1653:
      if (lookahead == '5') ADVANCE(1810);
      if (lookahead == '6') ADVANCE(1812);
      END_STATE();
    case 1654:
      if (lookahead == '5') ADVANCE(1813);
      END_STATE();
    case 1655:
      if (lookahead == '5') ADVANCE(1829);
      if (lookahead == '7') ADVANCE(1828);
      END_STATE();
    case 1656:
      if (lookahead == '5') ADVANCE(1818);
      if (lookahead == '6') ADVANCE(1812);
      END_STATE();
    case 1657:
      if (lookahead == '5') ADVANCE(1818);
      if (lookahead == '6') ADVANCE(1821);
      END_STATE();
    case 1658:
      if (lookahead == '5') ADVANCE(1830);
      END_STATE();
    case 1659:
      if (lookahead == '5') ADVANCE(1831);
      END_STATE();
    case 1660:
      if (lookahead == '6') ADVANCE(2224);
      END_STATE();
    case 1661:
      if (lookahead == '6') ADVANCE(1775);
      END_STATE();
    case 1662:
      if (lookahead == '6') ADVANCE(1775);
      if (lookahead == ';') ADVANCE(2470);
      END_STATE();
    case 1663:
      if (lookahead == '6') ADVANCE(1763);
      END_STATE();
    case 1664:
      if (lookahead == '6') ADVANCE(1764);
      END_STATE();
    case 1665:
      if (lookahead == '6') ADVANCE(1825);
      END_STATE();
    case 1666:
      if (lookahead == '6') ADVANCE(1824);
      END_STATE();
    case 1667:
      if (lookahead == '6') ADVANCE(1801);
      END_STATE();
    case 1668:
      if (lookahead == '6') ADVANCE(1803);
      END_STATE();
    case 1669:
      if (lookahead == '6') ADVANCE(1803);
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1670:
      if (lookahead == '6') ADVANCE(1829);
      END_STATE();
    case 1671:
      if (lookahead == '6') ADVANCE(1735);
      END_STATE();
    case 1672:
      if (lookahead == '6') ADVANCE(2217);
      END_STATE();
    case 1673:
      if (lookahead == '6') ADVANCE(1649);
      END_STATE();
    case 1674:
      if (lookahead == '6') ADVANCE(1830);
      END_STATE();
    case 1675:
      if (lookahead == '6') ADVANCE(1740);
      END_STATE();
    case 1676:
      if (lookahead == '6') ADVANCE(1372);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1594);
      END_STATE();
    case 1677:
      if (lookahead == '6') ADVANCE(1262);
      END_STATE();
    case 1678:
      if (lookahead == '6') ADVANCE(1743);
      END_STATE();
    case 1679:
      if (lookahead == '6') ADVANCE(1742);
      END_STATE();
    case 1680:
      if (lookahead == '6') ADVANCE(1744);
      END_STATE();
    case 1681:
      if (lookahead == '6') ADVANCE(1272);
      END_STATE();
    case 1682:
      if (lookahead == '6') ADVANCE(1290);
      END_STATE();
    case 1683:
      if (lookahead == '6') ADVANCE(2225);
      END_STATE();
    case 1684:
      if (lookahead == '6') ADVANCE(2227);
      END_STATE();
    case 1685:
      if (lookahead == '6') ADVANCE(2226);
      END_STATE();
    case 1686:
      if (lookahead == '6') ADVANCE(2228);
      END_STATE();
    case 1687:
      if (lookahead == '7') ADVANCE(1751);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1759);
      END_STATE();
    case 1688:
      if (lookahead == '7') ADVANCE(1792);
      END_STATE();
    case 1689:
      if (lookahead == '7') ADVANCE(1802);
      END_STATE();
    case 1690:
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1691:
      if (lookahead == '7') ADVANCE(1803);
      if (lookahead == '8') ADVANCE(1803);
      if (lookahead == '9') ADVANCE(1803);
      END_STATE();
    case 1692:
      if (lookahead == '7') ADVANCE(1803);
      if (lookahead == '8') ADVANCE(1803);
      if (lookahead == '9') ADVANCE(1803);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1787);
      END_STATE();
    case 1693:
      if (lookahead == '7') ADVANCE(1813);
      END_STATE();
    case 1694:
      if (lookahead == '7') ADVANCE(1823);
      END_STATE();
    case 1695:
      if (lookahead == '7') ADVANCE(1815);
      END_STATE();
    case 1696:
      if (lookahead == '7') ADVANCE(1828);
      END_STATE();
    case 1697:
      if (lookahead == '7') ADVANCE(1831);
      END_STATE();
    case 1698:
      if (lookahead == '7') ADVANCE(1742);
      END_STATE();
    case 1699:
      if (lookahead == '7') ADVANCE(1756);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1803);
      END_STATE();
    case 1700:
      if (lookahead == '7') ADVANCE(1598);
      END_STATE();
    case 1701:
      if (lookahead == '8') ADVANCE(1671);
      END_STATE();
    case 1702:
      if (lookahead == '8') ADVANCE(1700);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1497);
      END_STATE();
    case 1703:
      if (lookahead == '8') ADVANCE(1625);
      END_STATE();
    case 1704:
      if (lookahead == '8') ADVANCE(1767);
      if (lookahead == '9') ADVANCE(1767);
      END_STATE();
    case 1705:
      if (lookahead == '8') ADVANCE(1501);
      END_STATE();
    case 1706:
      if (lookahead == '8') ADVANCE(1772);
      END_STATE();
    case 1707:
      if (lookahead == '8') ADVANCE(1763);
      if (lookahead == '9') ADVANCE(1763);
      END_STATE();
    case 1708:
      if (lookahead == '8') ADVANCE(1764);
      if (lookahead == '9') ADVANCE(1764);
      END_STATE();
    case 1709:
      if (lookahead == '8') ADVANCE(1825);
      if (lookahead == '9') ADVANCE(1825);
      END_STATE();
    case 1710:
      if (lookahead == '8') ADVANCE(1790);
      if (lookahead == '9') ADVANCE(1796);
      END_STATE();
    case 1711:
      if (lookahead == '8') ADVANCE(1793);
      END_STATE();
    case 1712:
      if (lookahead == '8') ADVANCE(1824);
      if (lookahead == '9') ADVANCE(1824);
      END_STATE();
    case 1713:
      if (lookahead == '8') ADVANCE(1802);
      END_STATE();
    case 1714:
      if (lookahead == '8') ADVANCE(1803);
      END_STATE();
    case 1715:
      if (lookahead == '8') ADVANCE(1803);
      if (lookahead == '9') ADVANCE(1803);
      END_STATE();
    case 1716:
      if (lookahead == '8') ADVANCE(1812);
      if (lookahead == '9') ADVANCE(1812);
      END_STATE();
    case 1717:
      if (lookahead == '8') ADVANCE(1813);
      END_STATE();
    case 1718:
      if (lookahead == '8') ADVANCE(1823);
      END_STATE();
    case 1719:
      if (lookahead == '8') ADVANCE(1814);
      if (lookahead == '9') ADVANCE(1814);
      END_STATE();
    case 1720:
      if (lookahead == '8') ADVANCE(1815);
      END_STATE();
    case 1721:
      if (lookahead == '8') ADVANCE(1829);
      if (lookahead == '9') ADVANCE(1829);
      END_STATE();
    case 1722:
      if (lookahead == '8') ADVANCE(1828);
      END_STATE();
    case 1723:
      if (lookahead == '8') ADVANCE(1821);
      if (lookahead == '9') ADVANCE(1821);
      END_STATE();
    case 1724:
      if (lookahead == '8') ADVANCE(1689);
      END_STATE();
    case 1725:
      if (lookahead == '8') ADVANCE(1830);
      if (lookahead == '9') ADVANCE(1830);
      END_STATE();
    case 1726:
      if (lookahead == '8') ADVANCE(1831);
      END_STATE();
    case 1727:
      if (lookahead == '8') ADVANCE(1741);
      END_STATE();
    case 1728:
      if (lookahead == '8') ADVANCE(1697);
      END_STATE();
    case 1729:
      if (lookahead == '8') ADVANCE(1675);
      END_STATE();
    case 1730:
      if (lookahead == '8') ADVANCE(1627);
      END_STATE();
    case 1731:
      if (lookahead == '8') ADVANCE(1678);
      END_STATE();
    case 1732:
      if (lookahead == '8') ADVANCE(1679);
      END_STATE();
    case 1733:
      if (lookahead == '8') ADVANCE(1680);
      END_STATE();
    case 1734:
      if (lookahead == '9') ADVANCE(1508);
      END_STATE();
    case 1735:
      if (lookahead == '9') ADVANCE(1761);
      END_STATE();
    case 1736:
      if (lookahead == '9') ADVANCE(1663);
      END_STATE();
    case 1737:
      if (lookahead == '9') ADVANCE(1371);
      END_STATE();
    case 1738:
      if (lookahead == '9') ADVANCE(1373);
      if (lookahead == ';') ADVANCE(2431);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1668);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1613);
      END_STATE();
    case 1739:
      if (lookahead == '9') ADVANCE(1771);
      END_STATE();
    case 1740:
      if (lookahead == '9') ADVANCE(1759);
      END_STATE();
    case 1741:
      if (lookahead == '9') ADVANCE(1770);
      END_STATE();
    case 1742:
      if (lookahead == '9') ADVANCE(1803);
      END_STATE();
    case 1743:
      if (lookahead == '9') ADVANCE(1810);
      END_STATE();
    case 1744:
      if (lookahead == '9') ADVANCE(1818);
      END_STATE();
    case 1745:
      if (lookahead == '9') ADVANCE(1822);
      END_STATE();
    case 1746:
      if (lookahead == '9') ADVANCE(1566);
      END_STATE();
    case 1747:
      if (lookahead == '9') ADVANCE(1664);
      END_STATE();
    case 1748:
      if (lookahead == '9') ADVANCE(1650);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2203);
      END_STATE();
    case 1749:
      if (lookahead == '9') ADVANCE(1665);
      END_STATE();
    case 1750:
      if (lookahead == '9') ADVANCE(1666);
      END_STATE();
    case 1751:
      if (lookahead == '9') ADVANCE(1641);
      END_STATE();
    case 1752:
      if (lookahead == '9') ADVANCE(1642);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2202);
      END_STATE();
    case 1753:
      if (lookahead == '9') ADVANCE(1668);
      END_STATE();
    case 1754:
      if (lookahead == '9') ADVANCE(1668);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2202);
      END_STATE();
    case 1755:
      if (lookahead == '9') ADVANCE(1670);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2204);
      END_STATE();
    case 1756:
      if (lookahead == '9') ADVANCE(1648);
      END_STATE();
    case 1757:
      if (lookahead == '9') ADVANCE(1648);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2201);
      END_STATE();
    case 1758:
      if (lookahead == '9') ADVANCE(1674);
      END_STATE();
    case 1759:
      if (lookahead == ';') ADVANCE(2410);
      END_STATE();
    case 1760:
      if (lookahead == ';') ADVANCE(2384);
      END_STATE();
    case 1761:
      if (lookahead == ';') ADVANCE(2413);
      END_STATE();
    case 1762:
      if (lookahead == ';') ADVANCE(2413);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1772);
      END_STATE();
    case 1763:
      if (lookahead == ';') ADVANCE(2242);
      END_STATE();
    case 1764:
      if (lookahead == ';') ADVANCE(1119);
      END_STATE();
    case 1765:
      if (lookahead == ';') ADVANCE(2276);
      END_STATE();
    case 1766:
      if (lookahead == ';') ADVANCE(2488);
      END_STATE();
    case 1767:
      if (lookahead == ';') ADVANCE(2400);
      END_STATE();
    case 1768:
      if (lookahead == ';') ADVANCE(2400);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1773);
      END_STATE();
    case 1769:
      if (lookahead == ';') ADVANCE(2470);
      END_STATE();
    case 1770:
      if (lookahead == ';') ADVANCE(2512);
      END_STATE();
    case 1771:
      if (lookahead == ';') ADVANCE(2485);
      END_STATE();
    case 1772:
      if (lookahead == ';') ADVANCE(2296);
      END_STATE();
    case 1773:
      if (lookahead == ';') ADVANCE(2294);
      END_STATE();
    case 1774:
      if (lookahead == ';') ADVANCE(2300);
      END_STATE();
    case 1775:
      if (lookahead == ';') ADVANCE(2298);
      END_STATE();
    case 1776:
      if (lookahead == ';') ADVANCE(2441);
      END_STATE();
    case 1777:
      if (lookahead == ';') ADVANCE(2441);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1773);
      END_STATE();
    case 1778:
      if (lookahead == ';') ADVANCE(2302);
      END_STATE();
    case 1779:
      if (lookahead == ';') ADVANCE(2292);
      END_STATE();
    case 1780:
      if (lookahead == ';') ADVANCE(2504);
      END_STATE();
    case 1781:
      if (lookahead == ';') ADVANCE(2280);
      END_STATE();
    case 1782:
      if (lookahead == ';') ADVANCE(2282);
      END_STATE();
    case 1783:
      if (lookahead == ';') ADVANCE(2284);
      END_STATE();
    case 1784:
      if (lookahead == ';') ADVANCE(2286);
      END_STATE();
    case 1785:
      if (lookahead == ';') ADVANCE(2288);
      END_STATE();
    case 1786:
      if (lookahead == ';') ADVANCE(2474);
      END_STATE();
    case 1787:
      if (lookahead == ';') ADVANCE(2500);
      END_STATE();
    case 1788:
      if (lookahead == ';') ADVANCE(2472);
      END_STATE();
    case 1789:
      if (lookahead == ';') ADVANCE(2492);
      END_STATE();
    case 1790:
      if (lookahead == ';') ADVANCE(2445);
      END_STATE();
    case 1791:
      if (lookahead == ';') ADVANCE(2496);
      END_STATE();
    case 1792:
      if (lookahead == ';') ADVANCE(2476);
      END_STATE();
    case 1793:
      if (lookahead == ';') ADVANCE(2478);
      END_STATE();
    case 1794:
      if (lookahead == ';') ADVANCE(2290);
      END_STATE();
    case 1795:
      if (lookahead == ';') ADVANCE(2278);
      END_STATE();
    case 1796:
      if (lookahead == ';') ADVANCE(2447);
      END_STATE();
    case 1797:
      if (lookahead == ';') ADVANCE(2449);
      END_STATE();
    case 1798:
      if (lookahead == ';') ADVANCE(2451);
      END_STATE();
    case 1799:
      if (lookahead == ';') ADVANCE(2453);
      END_STATE();
    case 1800:
      if (lookahead == ';') ADVANCE(2443);
      END_STATE();
    case 1801:
      if (lookahead == ';') ADVANCE(2455);
      END_STATE();
    case 1802:
      if (lookahead == ';') ADVANCE(1183);
      END_STATE();
    case 1803:
      if (lookahead == ';') ADVANCE(2415);
      END_STATE();
    case 1804:
      if (lookahead == ';') ADVANCE(2415);
      if (lookahead == 'a') ADVANCE(2092);
      END_STATE();
    case 1805:
      if (lookahead == ';') ADVANCE(2415);
      if (lookahead == 'f') ADVANCE(2143);
      if (lookahead == 'q') ADVANCE(1803);
      END_STATE();
    case 1806:
      if (lookahead == ';') ADVANCE(2415);
      if (lookahead == 'o') ADVANCE(2181);
      END_STATE();
    case 1807:
      if (lookahead == ';') ADVANCE(2415);
      if (lookahead == 't') ADVANCE(2051);
      END_STATE();
    case 1808:
      if (lookahead == ';') ADVANCE(2427);
      END_STATE();
    case 1809:
      if (lookahead == ';') ADVANCE(2428);
      END_STATE();
    case 1810:
      if (lookahead == ';') ADVANCE(1184);
      END_STATE();
    case 1811:
      if (lookahead == ';') ADVANCE(1184);
      if (lookahead == 'b') ADVANCE(1803);
      if (lookahead == 'e') ADVANCE(1803);
      if (lookahead == 'm') ADVANCE(2030);
      END_STATE();
    case 1812:
      if (lookahead == ';') ADVANCE(2430);
      END_STATE();
    case 1813:
      if (lookahead == ';') ADVANCE(1186);
      END_STATE();
    case 1814:
      if (lookahead == ';') ADVANCE(2407);
      END_STATE();
    case 1815:
      if (lookahead == ';') ADVANCE(1190);
      END_STATE();
    case 1816:
      if (lookahead == ';') ADVANCE(2431);
      END_STATE();
    case 1817:
      if (lookahead == ';') ADVANCE(1188);
      END_STATE();
    case 1818:
      if (lookahead == ';') ADVANCE(2414);
      END_STATE();
    case 1819:
      if (lookahead == ';') ADVANCE(2414);
      if (lookahead == 'b') ADVANCE(1803);
      if (lookahead == 'e') ADVANCE(1803);
      if (lookahead == 'm') ADVANCE(2030);
      END_STATE();
    case 1820:
      if (lookahead == ';') ADVANCE(2388);
      END_STATE();
    case 1821:
      if (lookahead == ';') ADVANCE(2402);
      END_STATE();
    case 1822:
      if (lookahead == ';') ADVANCE(2483);
      END_STATE();
    case 1823:
      if (lookahead == ';') ADVANCE(1193);
      END_STATE();
    case 1824:
      if (lookahead == ';') ADVANCE(2243);
      END_STATE();
    case 1825:
      if (lookahead == ';') ADVANCE(1120);
      END_STATE();
    case 1826:
      if (lookahead == ';') ADVANCE(2432);
      END_STATE();
    case 1827:
      if (lookahead == ';') ADVANCE(2390);
      END_STATE();
    case 1828:
      if (lookahead == ';') ADVANCE(1123);
      END_STATE();
    case 1829:
      if (lookahead == ';') ADVANCE(1122);
      END_STATE();
    case 1830:
      if (lookahead == ';') ADVANCE(1124);
      END_STATE();
    case 1831:
      if (lookahead == ';') ADVANCE(1125);
      END_STATE();
    case 1832:
      if (lookahead == '=') ADVANCE(2415);
      END_STATE();
    case 1833:
      if (lookahead == 'A') ADVANCE(2093);
      END_STATE();
    case 1834:
      if (lookahead == 'A') ADVANCE(2093);
      if (lookahead == 'R') ADVANCE(1985);
      END_STATE();
    case 1835:
      if (lookahead == 'A') ADVANCE(2093);
      if (lookahead == 'T') ADVANCE(1925);
      if (lookahead == 'p') ADVANCE(1926);
      END_STATE();
    case 1836:
      if (lookahead == 'L') ADVANCE(1928);
      if (lookahead == 'R') ADVANCE(1985);
      if (lookahead == 'U') ADVANCE(2067);
      END_STATE();
    case 1837:
      if (lookahead == 'M') ADVANCE(1993);
      END_STATE();
    case 1838:
      if (lookahead == 'N') ADVANCE(2415);
      END_STATE();
    case 1839:
      if (lookahead == 'P') ADVANCE(2019);
      END_STATE();
    case 1840:
      if (lookahead == 'R') ADVANCE(1985);
      END_STATE();
    case 1841:
      if (lookahead == 'a') ADVANCE(2100);
      END_STATE();
    case 1842:
      if (lookahead == 'a') ADVANCE(1889);
      END_STATE();
    case 1843:
      if (lookahead == 'a') ADVANCE(1995);
      if (lookahead == 'y') ADVANCE(2073);
      END_STATE();
    case 1844:
      if (lookahead == 'a') ADVANCE(1995);
      if (lookahead == 'y') ADVANCE(2078);
      END_STATE();
    case 1845:
      if (lookahead == 'a') ADVANCE(1888);
      if (lookahead == 'd') ADVANCE(1876);
      if (lookahead == 'e') ADVANCE(1869);
      if (lookahead == 'v') ADVANCE(2012);
      END_STATE();
    case 1846:
      if (lookahead == 'a') ADVANCE(1888);
      if (lookahead == 'd') ADVANCE(1881);
      if (lookahead == 'e') ADVANCE(1869);
      if (lookahead == 'v') ADVANCE(2012);
      END_STATE();
    case 1847:
      if (lookahead == 'a') ADVANCE(2101);
      END_STATE();
    case 1848:
      if (lookahead == 'a') ADVANCE(1994);
      if (lookahead == 'y') ADVANCE(2065);
      END_STATE();
    case 1849:
      if (lookahead == 'a') ADVANCE(1994);
      if (lookahead == 'y') ADVANCE(2069);
      END_STATE();
    case 1850:
      if (lookahead == 'a') ADVANCE(2088);
      END_STATE();
    case 1851:
      if (lookahead == 'a') ADVANCE(2088);
      if (lookahead == 'i') ADVANCE(1955);
      END_STATE();
    case 1852:
      if (lookahead == 'a') ADVANCE(2088);
      if (lookahead == 'p') ADVANCE(1858);
      END_STATE();
    case 1853:
      if (lookahead == 'a') ADVANCE(2088);
      if (lookahead == 'y') ADVANCE(2073);
      END_STATE();
    case 1854:
      if (lookahead == 'a') ADVANCE(2088);
      if (lookahead == 'y') ADVANCE(2078);
      END_STATE();
    case 1855:
      if (lookahead == 'a') ADVANCE(2014);
      END_STATE();
    case 1856:
      if (lookahead == 'a') ADVANCE(2023);
      if (lookahead == 'e') ADVANCE(1943);
      END_STATE();
    case 1857:
      if (lookahead == 'a') ADVANCE(2023);
      if (lookahead == 'i') ADVANCE(1953);
      END_STATE();
    case 1858:
      if (lookahead == 'a') ADVANCE(2093);
      END_STATE();
    case 1859:
      if (lookahead == 'a') ADVANCE(2093);
      if (lookahead == 'r') ADVANCE(1992);
      END_STATE();
    case 1860:
      if (lookahead == 'a') ADVANCE(1999);
      if (lookahead == 'd') ADVANCE(1876);
      if (lookahead == 'i') ADVANCE(1902);
      if (lookahead == 'n') ADVANCE(2079);
      if (lookahead == 'p') ADVANCE(1803);
      END_STATE();
    case 1861:
      if (lookahead == 'a') ADVANCE(1999);
      if (lookahead == 'd') ADVANCE(1876);
      if (lookahead == 'i') ADVANCE(2043);
      if (lookahead == 'n') ADVANCE(2079);
      if (lookahead == 'p') ADVANCE(1803);
      END_STATE();
    case 1862:
      if (lookahead == 'a') ADVANCE(1999);
      if (lookahead == 'd') ADVANCE(1881);
      if (lookahead == 'i') ADVANCE(1903);
      if (lookahead == 'n') ADVANCE(2079);
      if (lookahead == 'p') ADVANCE(1803);
      END_STATE();
    case 1863:
      if (lookahead == 'a') ADVANCE(1999);
      if (lookahead == 'd') ADVANCE(1881);
      if (lookahead == 'i') ADVANCE(2047);
      if (lookahead == 'n') ADVANCE(2079);
      if (lookahead == 'p') ADVANCE(1803);
      END_STATE();
    case 1864:
      if (lookahead == 'a') ADVANCE(2092);
      END_STATE();
    case 1865:
      if (lookahead == 'a') ADVANCE(1803);
      END_STATE();
    case 1866:
      if (lookahead == 'a') ADVANCE(2013);
      if (lookahead == 'y') ADVANCE(2073);
      END_STATE();
    case 1867:
      if (lookahead == 'a') ADVANCE(2125);
      END_STATE();
    case 1868:
      if (lookahead == 'a') ADVANCE(2009);
      END_STATE();
    case 1869:
      if (lookahead == 'a') ADVANCE(2094);
      END_STATE();
    case 1870:
      if (lookahead == 'a') ADVANCE(2127);
      END_STATE();
    case 1871:
      if (lookahead == 'a') ADVANCE(2129);
      END_STATE();
    case 1872:
      if (lookahead == 'a') ADVANCE(2131);
      END_STATE();
    case 1873:
      if (lookahead == 'a') ADVANCE(2132);
      END_STATE();
    case 1874:
      if (lookahead == 'a') ADVANCE(2133);
      END_STATE();
    case 1875:
      if (lookahead == 'a') ADVANCE(2134);
      END_STATE();
    case 1876:
      if (lookahead == 'a') ADVANCE(2135);
      END_STATE();
    case 1877:
      if (lookahead == 'a') ADVANCE(2136);
      END_STATE();
    case 1878:
      if (lookahead == 'a') ADVANCE(2137);
      END_STATE();
    case 1879:
      if (lookahead == 'a') ADVANCE(2138);
      END_STATE();
    case 1880:
      if (lookahead == 'a') ADVANCE(2139);
      END_STATE();
    case 1881:
      if (lookahead == 'a') ADVANCE(2140);
      END_STATE();
    case 1882:
      if (lookahead == 'a') ADVANCE(2124);
      END_STATE();
    case 1883:
      if (lookahead == 'a') ADVANCE(2015);
      END_STATE();
    case 1884:
      if (lookahead == 'a') ADVANCE(2016);
      END_STATE();
    case 1885:
      if (lookahead == 'a') ADVANCE(2017);
      END_STATE();
    case 1886:
      if (lookahead == 'a') ADVANCE(1892);
      END_STATE();
    case 1887:
      if (lookahead == 'a') ADVANCE(1893);
      END_STATE();
    case 1888:
      if (lookahead == 'b') ADVANCE(2000);
      END_STATE();
    case 1889:
      if (lookahead == 'c') ADVANCE(1384);
      END_STATE();
    case 1890:
      if (lookahead == 'c') ADVANCE(2002);
      END_STATE();
    case 1891:
      if (lookahead == 'c') ADVANCE(2004);
      END_STATE();
    case 1892:
      if (lookahead == 'c') ADVANCE(1403);
      END_STATE();
    case 1893:
      if (lookahead == 'c') ADVANCE(1419);
      END_STATE();
    case 1894:
      if (lookahead == 'd') ADVANCE(1847);
      END_STATE();
    case 1895:
      if (lookahead == 'd') ADVANCE(1847);
      if (lookahead == 'i') ADVANCE(1900);
      END_STATE();
    case 1896:
      if (lookahead == 'd') ADVANCE(2057);
      if (lookahead == 'p') ADVANCE(2019);
      END_STATE();
    case 1897:
      if (lookahead == 'd') ADVANCE(2057);
      if (lookahead == 'p') ADVANCE(2019);
      if (lookahead == 's') ADVANCE(2020);
      END_STATE();
    case 1898:
      if (lookahead == 'd') ADVANCE(1867);
      END_STATE();
    case 1899:
      if (lookahead == 'd') ADVANCE(1867);
      if (lookahead == 'i') ADVANCE(2038);
      END_STATE();
    case 1900:
      if (lookahead == 'd') ADVANCE(1841);
      if (lookahead == 'n') ADVANCE(2163);
      END_STATE();
    case 1901:
      if (lookahead == 'd') ADVANCE(1841);
      if (lookahead == 'n') ADVANCE(2166);
      END_STATE();
    case 1902:
      if (lookahead == 'd') ADVANCE(1841);
      if (lookahead == 'n') ADVANCE(2171);
      END_STATE();
    case 1903:
      if (lookahead == 'd') ADVANCE(1841);
      if (lookahead == 'n') ADVANCE(2175);
      END_STATE();
    case 1904:
      if (lookahead == 'd') ADVANCE(1871);
      END_STATE();
    case 1905:
      if (lookahead == 'd') ADVANCE(1871);
      if (lookahead == 'i') ADVANCE(2039);
      END_STATE();
    case 1906:
      if (lookahead == 'd') ADVANCE(1872);
      END_STATE();
    case 1907:
      if (lookahead == 'd') ADVANCE(1872);
      if (lookahead == 'i') ADVANCE(2040);
      END_STATE();
    case 1908:
      if (lookahead == 'd') ADVANCE(1873);
      if (lookahead == 'i') ADVANCE(1901);
      END_STATE();
    case 1909:
      if (lookahead == 'd') ADVANCE(1874);
      END_STATE();
    case 1910:
      if (lookahead == 'd') ADVANCE(1875);
      END_STATE();
    case 1911:
      if (lookahead == 'd') ADVANCE(1875);
      if (lookahead == 'i') ADVANCE(2041);
      END_STATE();
    case 1912:
      if (lookahead == 'd') ADVANCE(1877);
      END_STATE();
    case 1913:
      if (lookahead == 'd') ADVANCE(1877);
      if (lookahead == 'i') ADVANCE(2042);
      END_STATE();
    case 1914:
      if (lookahead == 'd') ADVANCE(1878);
      END_STATE();
    case 1915:
      if (lookahead == 'd') ADVANCE(1878);
      if (lookahead == 'i') ADVANCE(2044);
      END_STATE();
    case 1916:
      if (lookahead == 'd') ADVANCE(1879);
      END_STATE();
    case 1917:
      if (lookahead == 'd') ADVANCE(1879);
      if (lookahead == 'i') ADVANCE(2045);
      END_STATE();
    case 1918:
      if (lookahead == 'd') ADVANCE(1880);
      END_STATE();
    case 1919:
      if (lookahead == 'd') ADVANCE(1880);
      if (lookahead == 'i') ADVANCE(2046);
      END_STATE();
    case 1920:
      if (lookahead == 'e') ADVANCE(1805);
      if (lookahead == 'l') ADVANCE(2147);
      if (lookahead == 'o') ADVANCE(2180);
      if (lookahead == 'r') ADVANCE(1850);
      END_STATE();
    case 1921:
      if (lookahead == 'e') ADVANCE(1805);
      if (lookahead == 'l') ADVANCE(2147);
      if (lookahead == 'r') ADVANCE(1850);
      END_STATE();
    case 1922:
      if (lookahead == 'e') ADVANCE(2024);
      END_STATE();
    case 1923:
      if (lookahead == 'e') ADVANCE(2090);
      if (lookahead == 'l') ADVANCE(2158);
      if (lookahead == 'm') ADVANCE(1803);
      if (lookahead == 'r') ADVANCE(2054);
      END_STATE();
    case 1924:
      if (lookahead == 'e') ADVANCE(2090);
      if (lookahead == 'l') ADVANCE(2161);
      if (lookahead == 'm') ADVANCE(1803);
      if (lookahead == 'r') ADVANCE(2054);
      END_STATE();
    case 1925:
      if (lookahead == 'e') ADVANCE(1927);
      END_STATE();
    case 1926:
      if (lookahead == 'e') ADVANCE(2085);
      END_STATE();
    case 1927:
      if (lookahead == 'e') ADVANCE(1803);
      END_STATE();
    case 1928:
      if (lookahead == 'e') ADVANCE(1945);
      END_STATE();
    case 1929:
      if (lookahead == 'e') ADVANCE(2025);
      END_STATE();
    case 1930:
      if (lookahead == 'e') ADVANCE(2028);
      END_STATE();
    case 1931:
      if (lookahead == 'e') ADVANCE(2002);
      END_STATE();
    case 1932:
      if (lookahead == 'e') ADVANCE(2026);
      END_STATE();
    case 1933:
      if (lookahead == 'e') ADVANCE(2027);
      END_STATE();
    case 1934:
      if (lookahead == 'e') ADVANCE(2029);
      END_STATE();
    case 1935:
      if (lookahead == 'e') ADVANCE(2031);
      END_STATE();
    case 1936:
      if (lookahead == 'e') ADVANCE(2030);
      END_STATE();
    case 1937:
      if (lookahead == 'e') ADVANCE(2032);
      END_STATE();
    case 1938:
      if (lookahead == 'e') ADVANCE(2034);
      END_STATE();
    case 1939:
      if (lookahead == 'e') ADVANCE(2036);
      END_STATE();
    case 1940:
      if (lookahead == 'e') ADVANCE(2035);
      END_STATE();
    case 1941:
      if (lookahead == 'e') ADVANCE(2130);
      END_STATE();
    case 1942:
      if (lookahead == 'e') ADVANCE(2128);
      END_STATE();
    case 1943:
      if (lookahead == 'f') ADVANCE(2142);
      END_STATE();
    case 1944:
      if (lookahead == 'f') ADVANCE(1989);
      END_STATE();
    case 1945:
      if (lookahead == 'f') ADVANCE(2144);
      END_STATE();
    case 1946:
      if (lookahead == 'f') ADVANCE(1771);
      END_STATE();
    case 1947:
      if (lookahead == 'f') ADVANCE(2109);
      END_STATE();
    case 1948:
      if (lookahead == 'f') ADVANCE(1770);
      END_STATE();
    case 1949:
      if (lookahead == 'f') ADVANCE(1803);
      END_STATE();
    case 1950:
      if (lookahead == 'f') ADVANCE(1822);
      END_STATE();
    case 1951:
      if (lookahead == 'f') ADVANCE(1990);
      END_STATE();
    case 1952:
      if (lookahead == 'g') ADVANCE(2050);
      END_STATE();
    case 1953:
      if (lookahead == 'g') ADVANCE(1959);
      END_STATE();
    case 1954:
      if (lookahead == 'g') ADVANCE(1803);
      END_STATE();
    case 1955:
      if (lookahead == 'g') ADVANCE(1960);
      END_STATE();
    case 1956:
      if (lookahead == 'h') ADVANCE(1922);
      END_STATE();
    case 1957:
      if (lookahead == 'h') ADVANCE(2055);
      if (lookahead == 'q') ADVANCE(2160);
      END_STATE();
    case 1958:
      if (lookahead == 'h') ADVANCE(1767);
      END_STATE();
    case 1959:
      if (lookahead == 'h') ADVANCE(2144);
      END_STATE();
    case 1960:
      if (lookahead == 'h') ADVANCE(2152);
      END_STATE();
    case 1961:
      if (lookahead == 'h') ADVANCE(1763);
      END_STATE();
    case 1962:
      if (lookahead == 'h') ADVANCE(1764);
      END_STATE();
    case 1963:
      if (lookahead == 'h') ADVANCE(1825);
      END_STATE();
    case 1964:
      if (lookahead == 'h') ADVANCE(1790);
      END_STATE();
    case 1965:
      if (lookahead == 'h') ADVANCE(1824);
      END_STATE();
    case 1966:
      if (lookahead == 'h') ADVANCE(1798);
      END_STATE();
    case 1967:
      if (lookahead == 'h') ADVANCE(1799);
      END_STATE();
    case 1968:
      if (lookahead == 'h') ADVANCE(1803);
      END_STATE();
    case 1969:
      if (lookahead == 'h') ADVANCE(1812);
      END_STATE();
    case 1970:
      if (lookahead == 'h') ADVANCE(1814);
      END_STATE();
    case 1971:
      if (lookahead == 'h') ADVANCE(1829);
      END_STATE();
    case 1972:
      if (lookahead == 'h') ADVANCE(1821);
      END_STATE();
    case 1973:
      if (lookahead == 'h') ADVANCE(1830);
      END_STATE();
    case 1974:
      if (lookahead == 'h') ADVANCE(1929);
      END_STATE();
    case 1975:
      if (lookahead == 'h') ADVANCE(1930);
      END_STATE();
    case 1976:
      if (lookahead == 'h') ADVANCE(1932);
      END_STATE();
    case 1977:
      if (lookahead == 'h') ADVANCE(1933);
      END_STATE();
    case 1978:
      if (lookahead == 'h') ADVANCE(1934);
      END_STATE();
    case 1979:
      if (lookahead == 'h') ADVANCE(1935);
      END_STATE();
    case 1980:
      if (lookahead == 'h') ADVANCE(1936);
      END_STATE();
    case 1981:
      if (lookahead == 'h') ADVANCE(1937);
      END_STATE();
    case 1982:
      if (lookahead == 'h') ADVANCE(1938);
      END_STATE();
    case 1983:
      if (lookahead == 'h') ADVANCE(1939);
      END_STATE();
    case 1984:
      if (lookahead == 'h') ADVANCE(1940);
      END_STATE();
    case 1985:
      if (lookahead == 'i') ADVANCE(1953);
      END_STATE();
    case 1986:
      if (lookahead == 'i') ADVANCE(2095);
      END_STATE();
    case 1987:
      if (lookahead == 'i') ADVANCE(1952);
      if (lookahead == 'o') ADVANCE(2141);
      END_STATE();
    case 1988:
      if (lookahead == 'i') ADVANCE(1803);
      END_STATE();
    case 1989:
      if (lookahead == 'i') ADVANCE(2033);
      END_STATE();
    case 1990:
      if (lookahead == 'i') ADVANCE(2030);
      END_STATE();
    case 1991:
      if (lookahead == 'i') ADVANCE(2037);
      END_STATE();
    case 1992:
      if (lookahead == 'i') ADVANCE(1955);
      END_STATE();
    case 1993:
      if (lookahead == 'i') ADVANCE(2042);
      END_STATE();
    case 1994:
      if (lookahead == 'l') ADVANCE(1946);
      END_STATE();
    case 1995:
      if (lookahead == 'l') ADVANCE(1946);
      if (lookahead == 'r') ADVANCE(2095);
      END_STATE();
    case 1996:
      if (lookahead == 'l') ADVANCE(2154);
      END_STATE();
    case 1997:
      if (lookahead == 'l') ADVANCE(1769);
      END_STATE();
    case 1998:
      if (lookahead == 'l') ADVANCE(1850);
      if (lookahead == 'q') ADVANCE(2153);
      if (lookahead == 'r') ADVANCE(1850);
      END_STATE();
    case 1999:
      if (lookahead == 'l') ADVANCE(1927);
      END_STATE();
    case 2000:
      if (lookahead == 'l') ADVANCE(1865);
      END_STATE();
    case 2001:
      if (lookahead == 'l') ADVANCE(1802);
      END_STATE();
    case 2002:
      if (lookahead == 'l') ADVANCE(1803);
      END_STATE();
    case 2003:
      if (lookahead == 'l') ADVANCE(1803);
      if (lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 2004:
      if (lookahead == 'l') ADVANCE(1816);
      END_STATE();
    case 2005:
      if (lookahead == 'l') ADVANCE(1813);
      END_STATE();
    case 2006:
      if (lookahead == 'l') ADVANCE(1823);
      END_STATE();
    case 2007:
      if (lookahead == 'l') ADVANCE(1815);
      END_STATE();
    case 2008:
      if (lookahead == 'l') ADVANCE(1828);
      END_STATE();
    case 2009:
      if (lookahead == 'l') ADVANCE(1948);
      END_STATE();
    case 2010:
      if (lookahead == 'l') ADVANCE(2157);
      END_STATE();
    case 2011:
      if (lookahead == 'l') ADVANCE(1831);
      END_STATE();
    case 2012:
      if (lookahead == 'l') ADVANCE(2151);
      END_STATE();
    case 2013:
      if (lookahead == 'l') ADVANCE(1950);
      if (lookahead == 'r') ADVANCE(2095);
      END_STATE();
    case 2014:
      if (lookahead == 'l') ADVANCE(2110);
      END_STATE();
    case 2015:
      if (lookahead == 'l') ADVANCE(2117);
      END_STATE();
    case 2016:
      if (lookahead == 'l') ADVANCE(2119);
      END_STATE();
    case 2017:
      if (lookahead == 'l') ADVANCE(2123);
      END_STATE();
    case 2018:
      if (lookahead == 'l') ADVANCE(2164);
      END_STATE();
    case 2019:
      if (lookahead == 'l') ADVANCE(2170);
      END_STATE();
    case 2020:
      if (lookahead == 'l') ADVANCE(1877);
      END_STATE();
    case 2021:
      if (lookahead == 'm') ADVANCE(1803);
      END_STATE();
    case 2022:
      if (lookahead == 'n') ADVANCE(1944);
      END_STATE();
    case 2023:
      if (lookahead == 'n') ADVANCE(1954);
      END_STATE();
    case 2024:
      if (lookahead == 'n') ADVANCE(1767);
      END_STATE();
    case 2025:
      if (lookahead == 'n') ADVANCE(1763);
      END_STATE();
    case 2026:
      if (lookahead == 'n') ADVANCE(1764);
      END_STATE();
    case 2027:
      if (lookahead == 'n') ADVANCE(1825);
      END_STATE();
    case 2028:
      if (lookahead == 'n') ADVANCE(1790);
      END_STATE();
    case 2029:
      if (lookahead == 'n') ADVANCE(1824);
      END_STATE();
    case 2030:
      if (lookahead == 'n') ADVANCE(1803);
      END_STATE();
    case 2031:
      if (lookahead == 'n') ADVANCE(1812);
      END_STATE();
    case 2032:
      if (lookahead == 'n') ADVANCE(1814);
      END_STATE();
    case 2033:
      if (lookahead == 'n') ADVANCE(1808);
      END_STATE();
    case 2034:
      if (lookahead == 'n') ADVANCE(1829);
      END_STATE();
    case 2035:
      if (lookahead == 'n') ADVANCE(1821);
      END_STATE();
    case 2036:
      if (lookahead == 'n') ADVANCE(1830);
      END_STATE();
    case 2037:
      if (lookahead == 'n') ADVANCE(2159);
      END_STATE();
    case 2038:
      if (lookahead == 'n') ADVANCE(2165);
      END_STATE();
    case 2039:
      if (lookahead == 'n') ADVANCE(2167);
      END_STATE();
    case 2040:
      if (lookahead == 'n') ADVANCE(2168);
      END_STATE();
    case 2041:
      if (lookahead == 'n') ADVANCE(2169);
      END_STATE();
    case 2042:
      if (lookahead == 'n') ADVANCE(2170);
      END_STATE();
    case 2043:
      if (lookahead == 'n') ADVANCE(2171);
      END_STATE();
    case 2044:
      if (lookahead == 'n') ADVANCE(2172);
      END_STATE();
    case 2045:
      if (lookahead == 'n') ADVANCE(2173);
      END_STATE();
    case 2046:
      if (lookahead == 'n') ADVANCE(2174);
      END_STATE();
    case 2047:
      if (lookahead == 'n') ADVANCE(2175);
      END_STATE();
    case 2048:
      if (lookahead == 'n') ADVANCE(1951);
      END_STATE();
    case 2049:
      if (lookahead == 'o') ADVANCE(2180);
      END_STATE();
    case 2050:
      if (lookahead == 'o') ADVANCE(1896);
      END_STATE();
    case 2051:
      if (lookahead == 'o') ADVANCE(2021);
      END_STATE();
    case 2052:
      if (lookahead == 'o') ADVANCE(2181);
      END_STATE();
    case 2053:
      if (lookahead == 'o') ADVANCE(1997);
      END_STATE();
    case 2054:
      if (lookahead == 'o') ADVANCE(1947);
      END_STATE();
    case 2055:
      if (lookahead == 'o') ADVANCE(2091);
      END_STATE();
    case 2056:
      if (lookahead == 'o') ADVANCE(2001);
      END_STATE();
    case 2057:
      if (lookahead == 'o') ADVANCE(2149);
      END_STATE();
    case 2058:
      if (lookahead == 'o') ADVANCE(2005);
      END_STATE();
    case 2059:
      if (lookahead == 'o') ADVANCE(2006);
      END_STATE();
    case 2060:
      if (lookahead == 'o') ADVANCE(2007);
      END_STATE();
    case 2061:
      if (lookahead == 'o') ADVANCE(2008);
      END_STATE();
    case 2062:
      if (lookahead == 'o') ADVANCE(2011);
      END_STATE();
    case 2063:
      if (lookahead == 'p') ADVANCE(1835);
      END_STATE();
    case 2064:
      if (lookahead == 'p') ADVANCE(1199);
      END_STATE();
    case 2065:
      if (lookahead == 'p') ADVANCE(1956);
      END_STATE();
    case 2066:
      if (lookahead == 'p') ADVANCE(1803);
      END_STATE();
    case 2067:
      if (lookahead == 'p') ADVANCE(1858);
      END_STATE();
    case 2068:
      if (lookahead == 'p') ADVANCE(1974);
      END_STATE();
    case 2069:
      if (lookahead == 'p') ADVANCE(1975);
      END_STATE();
    case 2070:
      if (lookahead == 'p') ADVANCE(1976);
      END_STATE();
    case 2071:
      if (lookahead == 'p') ADVANCE(1977);
      END_STATE();
    case 2072:
      if (lookahead == 'p') ADVANCE(1978);
      END_STATE();
    case 2073:
      if (lookahead == 'p') ADVANCE(1979);
      END_STATE();
    case 2074:
      if (lookahead == 'p') ADVANCE(1980);
      END_STATE();
    case 2075:
      if (lookahead == 'p') ADVANCE(1981);
      END_STATE();
    case 2076:
      if (lookahead == 'p') ADVANCE(1982);
      END_STATE();
    case 2077:
      if (lookahead == 'p') ADVANCE(1983);
      END_STATE();
    case 2078:
      if (lookahead == 'p') ADVANCE(1984);
      END_STATE();
    case 2079:
      if (lookahead == 'p') ADVANCE(2019);
      END_STATE();
    case 2080:
      if (lookahead == 'p') ADVANCE(2019);
      if (lookahead == 'q') ADVANCE(2178);
      if (lookahead == 'x') ADVANCE(1891);
      END_STATE();
    case 2081:
      if (lookahead == 'p') ADVANCE(2019);
      if (lookahead == 'q') ADVANCE(2179);
      if (lookahead == 'x') ADVANCE(1891);
      END_STATE();
    case 2082:
      if (lookahead == 'p') ADVANCE(2019);
      if (lookahead == 'u') ADVANCE(2003);
      END_STATE();
    case 2083:
      if (lookahead == 'q') ADVANCE(2155);
      END_STATE();
    case 2084:
      if (lookahead == 'q') ADVANCE(2176);
      END_STATE();
    case 2085:
      if (lookahead == 'r') ADVANCE(1840);
      END_STATE();
    case 2086:
      if (lookahead == 'r') ADVANCE(1806);
      END_STATE();
    case 2087:
      if (lookahead == 'r') ADVANCE(1842);
      END_STATE();
    case 2088:
      if (lookahead == 'r') ADVANCE(2095);
      END_STATE();
    case 2089:
      if (lookahead == 'r') ADVANCE(1988);
      END_STATE();
    case 2090:
      if (lookahead == 'r') ADVANCE(2066);
      END_STATE();
    case 2091:
      if (lookahead == 'r') ADVANCE(2145);
      END_STATE();
    case 2092:
      if (lookahead == 'r') ADVANCE(1927);
      END_STATE();
    case 2093:
      if (lookahead == 'r') ADVANCE(2096);
      END_STATE();
    case 2094:
      if (lookahead == 'r') ADVANCE(2086);
      END_STATE();
    case 2095:
      if (lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 2096:
      if (lookahead == 'r') ADVANCE(2052);
      END_STATE();
    case 2097:
      if (lookahead == 'r') ADVANCE(1949);
      END_STATE();
    case 2098:
      if (lookahead == 'r') ADVANCE(1886);
      END_STATE();
    case 2099:
      if (lookahead == 'r') ADVANCE(1887);
      END_STATE();
    case 2100:
      if (lookahead == 's') ADVANCE(2146);
      END_STATE();
    case 2101:
      if (lookahead == 's') ADVANCE(1958);
      END_STATE();
    case 2102:
      if (lookahead == 's') ADVANCE(1837);
      END_STATE();
    case 2103:
      if (lookahead == 's') ADVANCE(1811);
      END_STATE();
    case 2104:
      if (lookahead == 's') ADVANCE(1839);
      END_STATE();
    case 2105:
      if (lookahead == 's') ADVANCE(1819);
      END_STATE();
    case 2106:
      if (lookahead == 's') ADVANCE(1761);
      END_STATE();
    case 2107:
      if (lookahead == 's') ADVANCE(1767);
      END_STATE();
    case 2108:
      if (lookahead == 's') ADVANCE(2020);
      END_STATE();
    case 2109:
      if (lookahead == 's') ADVANCE(2162);
      END_STATE();
    case 2110:
      if (lookahead == 's') ADVANCE(1760);
      END_STATE();
    case 2111:
      if (lookahead == 's') ADVANCE(1763);
      END_STATE();
    case 2112:
      if (lookahead == 's') ADVANCE(1759);
      END_STATE();
    case 2113:
      if (lookahead == 's') ADVANCE(1764);
      END_STATE();
    case 2114:
      if (lookahead == 's') ADVANCE(1825);
      END_STATE();
    case 2115:
      if (lookahead == 's') ADVANCE(1824);
      END_STATE();
    case 2116:
      if (lookahead == 's') ADVANCE(1800);
      END_STATE();
    case 2117:
      if (lookahead == 's') ADVANCE(1803);
      END_STATE();
    case 2118:
      if (lookahead == 's') ADVANCE(1812);
      END_STATE();
    case 2119:
      if (lookahead == 's') ADVANCE(1826);
      END_STATE();
    case 2120:
      if (lookahead == 's') ADVANCE(1814);
      END_STATE();
    case 2121:
      if (lookahead == 's') ADVANCE(1829);
      END_STATE();
    case 2122:
      if (lookahead == 's') ADVANCE(1821);
      END_STATE();
    case 2123:
      if (lookahead == 's') ADVANCE(1827);
      END_STATE();
    case 2124:
      if (lookahead == 's') ADVANCE(2148);
      END_STATE();
    case 2125:
      if (lookahead == 's') ADVANCE(1961);
      END_STATE();
    case 2126:
      if (lookahead == 's') ADVANCE(1830);
      END_STATE();
    case 2127:
      if (lookahead == 's') ADVANCE(1964);
      END_STATE();
    case 2128:
      if (lookahead == 's') ADVANCE(2149);
      END_STATE();
    case 2129:
      if (lookahead == 's') ADVANCE(1962);
      END_STATE();
    case 2130:
      if (lookahead == 's') ADVANCE(2150);
      END_STATE();
    case 2131:
      if (lookahead == 's') ADVANCE(1963);
      END_STATE();
    case 2132:
      if (lookahead == 's') ADVANCE(1967);
      END_STATE();
    case 2133:
      if (lookahead == 's') ADVANCE(1966);
      END_STATE();
    case 2134:
      if (lookahead == 's') ADVANCE(1965);
      END_STATE();
    case 2135:
      if (lookahead == 's') ADVANCE(1969);
      END_STATE();
    case 2136:
      if (lookahead == 's') ADVANCE(1968);
      END_STATE();
    case 2137:
      if (lookahead == 's') ADVANCE(1970);
      END_STATE();
    case 2138:
      if (lookahead == 's') ADVANCE(1971);
      END_STATE();
    case 2139:
      if (lookahead == 's') ADVANCE(1973);
      END_STATE();
    case 2140:
      if (lookahead == 's') ADVANCE(1972);
      END_STATE();
    case 2141:
      if (lookahead == 't') ADVANCE(1807);
      if (lookahead == 'x') ADVANCE(2082);
      END_STATE();
    case 2142:
      if (lookahead == 't') ADVANCE(1834);
      END_STATE();
    case 2143:
      if (lookahead == 't') ADVANCE(1859);
      END_STATE();
    case 2144:
      if (lookahead == 't') ADVANCE(1833);
      END_STATE();
    case 2145:
      if (lookahead == 't') ADVANCE(1836);
      END_STATE();
    case 2146:
      if (lookahead == 't') ADVANCE(1766);
      END_STATE();
    case 2147:
      if (lookahead == 't') ADVANCE(2089);
      END_STATE();
    case 2148:
      if (lookahead == 't') ADVANCE(1789);
      END_STATE();
    case 2149:
      if (lookahead == 't') ADVANCE(1803);
      END_STATE();
    case 2150:
      if (lookahead == 't') ADVANCE(1816);
      END_STATE();
    case 2151:
      if (lookahead == 't') ADVANCE(1817);
      END_STATE();
    case 2152:
      if (lookahead == 't') ADVANCE(1858);
      END_STATE();
    case 2153:
      if (lookahead == 'u') ADVANCE(1804);
      END_STATE();
    case 2154:
      if (lookahead == 'u') ADVANCE(2106);
      END_STATE();
    case 2155:
      if (lookahead == 'u') ADVANCE(1855);
      END_STATE();
    case 2156:
      if (lookahead == 'u') ADVANCE(1941);
      END_STATE();
    case 2157:
      if (lookahead == 'u') ADVANCE(2102);
      END_STATE();
    case 2158:
      if (lookahead == 'u') ADVANCE(2103);
      END_STATE();
    case 2159:
      if (lookahead == 'u') ADVANCE(2104);
      END_STATE();
    case 2160:
      if (lookahead == 'u') ADVANCE(1864);
      END_STATE();
    case 2161:
      if (lookahead == 'u') ADVANCE(2105);
      END_STATE();
    case 2162:
      if (lookahead == 'u') ADVANCE(2097);
      END_STATE();
    case 2163:
      if (lookahead == 'u') ADVANCE(2107);
      END_STATE();
    case 2164:
      if (lookahead == 'u') ADVANCE(2112);
      END_STATE();
    case 2165:
      if (lookahead == 'u') ADVANCE(2111);
      END_STATE();
    case 2166:
      if (lookahead == 'u') ADVANCE(2116);
      END_STATE();
    case 2167:
      if (lookahead == 'u') ADVANCE(2113);
      END_STATE();
    case 2168:
      if (lookahead == 'u') ADVANCE(2114);
      END_STATE();
    case 2169:
      if (lookahead == 'u') ADVANCE(2115);
      END_STATE();
    case 2170:
      if (lookahead == 'u') ADVANCE(2117);
      END_STATE();
    case 2171:
      if (lookahead == 'u') ADVANCE(2118);
      END_STATE();
    case 2172:
      if (lookahead == 'u') ADVANCE(2120);
      END_STATE();
    case 2173:
      if (lookahead == 'u') ADVANCE(2121);
      END_STATE();
    case 2174:
      if (lookahead == 'u') ADVANCE(2126);
      END_STATE();
    case 2175:
      if (lookahead == 'u') ADVANCE(2122);
      END_STATE();
    case 2176:
      if (lookahead == 'u') ADVANCE(1883);
      END_STATE();
    case 2177:
      if (lookahead == 'u') ADVANCE(1942);
      END_STATE();
    case 2178:
      if (lookahead == 'u') ADVANCE(1884);
      END_STATE();
    case 2179:
      if (lookahead == 'u') ADVANCE(1885);
      END_STATE();
    case 2180:
      if (lookahead == 'w') ADVANCE(1882);
      END_STATE();
    case 2181:
      if (lookahead == 'w') ADVANCE(1803);
      END_STATE();
    case 2182:
      if (lookahead == 'x') ADVANCE(1890);
      END_STATE();
    case 2183:
      if (lookahead == 'y') ADVANCE(2068);
      END_STATE();
    case 2184:
      if (lookahead == 'y') ADVANCE(2070);
      END_STATE();
    case 2185:
      if (lookahead == 'y') ADVANCE(2071);
      END_STATE();
    case 2186:
      if (lookahead == 'y') ADVANCE(2072);
      END_STATE();
    case 2187:
      if (lookahead == 'y') ADVANCE(2074);
      END_STATE();
    case 2188:
      if (lookahead == 'y') ADVANCE(2075);
      END_STATE();
    case 2189:
      if (lookahead == 'y') ADVANCE(2076);
      END_STATE();
    case 2190:
      if (lookahead == 'y') ADVANCE(2077);
      END_STATE();
    case 2191:
      if (lookahead == '{') ADVANCE(2347);
      if (lookahead == '}') ADVANCE(2349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2351);
      if (lookahead != 0) ADVANCE(2352);
      END_STATE();
    case 2192:
      if (lookahead == 0xfe0e) ADVANCE(2396);
      END_STATE();
    case 2193:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2193);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2303);
      if ((!eof && set_contains(sym_tagpair_key_character_set_1, 22, lookahead))) ADVANCE(2304);
      END_STATE();
    case 2194:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2241);
      END_STATE();
    case 2195:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1772);
      END_STATE();
    case 2196:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1803);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1803);
      END_STATE();
    case 2197:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1803);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1803);
      END_STATE();
    case 2198:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1792);
      END_STATE();
    case 2199:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1802);
      END_STATE();
    case 2200:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1803);
      END_STATE();
    case 2201:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1813);
      END_STATE();
    case 2202:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1823);
      END_STATE();
    case 2203:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1815);
      END_STATE();
    case 2204:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1828);
      END_STATE();
    case 2205:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1831);
      END_STATE();
    case 2206:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2218);
      END_STATE();
    case 2207:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1781);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1782);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1783);
      END_STATE();
    case 2208:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1803);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1803);
      END_STATE();
    case 2209:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1817);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1826);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1816);
      END_STATE();
    case 2210:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1817);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1827);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1816);
      END_STATE();
    case 2211:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2199);
      END_STATE();
    case 2212:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2205);
      END_STATE();
    case 2213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1761);
      END_STATE();
    case 2214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1771);
      END_STATE();
    case 2215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1773);
      END_STATE();
    case 2216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1759);
      END_STATE();
    case 2217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1780);
      END_STATE();
    case 2218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1770);
      END_STATE();
    case 2219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1803);
      END_STATE();
    case 2220:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1810);
      END_STATE();
    case 2221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1818);
      END_STATE();
    case 2222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 2223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1803);
      END_STATE();
    case 2224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2213);
      END_STATE();
    case 2225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2216);
      END_STATE();
    case 2226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2219);
      END_STATE();
    case 2227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2220);
      END_STATE();
    case 2228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2221);
      END_STATE();
    case 2229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1627);
      END_STATE();
    case 2230:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1498);
      END_STATE();
    case 2231:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1241);
      END_STATE();
    case 2232:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1803);
      END_STATE();
    case 2233:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1711);
      END_STATE();
    case 2234:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1713);
      END_STATE();
    case 2235:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1717);
      END_STATE();
    case 2236:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1718);
      END_STATE();
    case 2237:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1720);
      END_STATE();
    case 2238:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1722);
      END_STATE();
    case 2239:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1726);
      END_STATE();
    case 2240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2407);
      END_STATE();
    case 2241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2240);
      END_STATE();
    case 2242:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2406);
      END_STATE();
    case 2243:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2403);
      END_STATE();
    case 2244:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2407);
      END_STATE();
    case 2245:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2506);
      END_STATE();
    case 2246:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2363);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      END_STATE();
    case 2247:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2363);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2435);
      END_STATE();
    case 2249:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '\n', 2263,
        '\r', 1110,
        '!', 2423,
        '$', 857,
        '&', 27,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'O', 2457,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2417,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1110,
        0x0b, 1110,
        '\f', 1110,
        ' ', 1110,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2250:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '\n', 2265,
        '\r', 1115,
        '!', 2423,
        '$', 857,
        '&', 10,
        '(', 2344,
        '0', 859,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'p', 816,
        '{', 2348,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2e40, 2417,
        'O', 35,
        'o', 35,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1115,
        0x0b, 1115,
        '\f', 1115,
        ' ', 1115,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2251:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '!', 2423,
        '#', 2412,
        '$', 857,
        '&', 21,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'O', 2457,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2417,
        '\n', 1130,
        '\r', 1130,
        'Z', 853,
        'z', 853,
        '+', 2411,
        0x16ed, 2411,
        0x2795, 2411,
        ':', 2383,
        'X', 2383,
        'x', 2383,
        '\t', 1105,
        0x0b, 1105,
        '\f', 1105,
        ' ', 1105,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2366);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2252:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '!', 2423,
        '#', 2412,
        '$', 857,
        '&', 28,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2386,
        '?', 2423,
        '@', 2399,
        'O', 2457,
        'P', 2392,
        'R', 2373,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2385,
        '\n', 1130,
        '\r', 1130,
        'Z', 853,
        'z', 853,
        '+', 2411,
        0x16ed, 2411,
        0x2795, 2411,
        ':', 2383,
        'X', 2383,
        'x', 2383,
        '\t', 1105,
        0x0b, 1105,
        '\f', 1105,
        ' ', 1105,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2401);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2366);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2374);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2253:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '!', 2423,
        '#', 2412,
        '$', 857,
        '&', 29,
        '(', 2344,
        ')', 2346,
        '*', 2487,
        '0', 2461,
        '1', 2437,
        ';', 2261,
        '<', 509,
        '=', 2386,
        '?', 2423,
        '@', 2399,
        'O', 2457,
        'P', 2392,
        'R', 2373,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'o', 2466,
        'p', 816,
        '{', 2348,
        '}', 2350,
        0xbd, 2481,
        0x66d, 2503,
        0x204e, 2499,
        0x2217, 2491,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2731, 2495,
        0x2e40, 2385,
        '\n', 1130,
        '\r', 1130,
        'Z', 853,
        'z', 853,
        '+', 2411,
        0x16ed, 2411,
        0x2795, 2411,
        '\t', 1105,
        0x0b, 1105,
        '\f', 1105,
        ' ', 1105,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2366);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2374);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2254:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '!', 2423,
        '$', 857,
        '&', 10,
        '(', 2344,
        '0', 859,
        ';', 2261,
        '<', 509,
        '=', 2418,
        '?', 2423,
        '@', 2399,
        'P', 2392,
        'R', 2377,
        'T', 515,
        '[', 2272,
        'e', 2368,
        'p', 816,
        '{', 2348,
        0x221e, 2426,
        0x2659, 2395,
        0x265f, 815,
        0x2e40, 2417,
        '\n', 1128,
        '\r', 1128,
        'O', 35,
        'o', 35,
        'Z', 853,
        'z', 853,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 865,
        0x0b, 865,
        '\f', 865,
        ' ', 865,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2369);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2378);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2255:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '!', 2434,
        '#', 2410,
        '$', 2248,
        '&', 1158,
        '(', 2343,
        ')', 2345,
        '0', 1177,
        ';', 2260,
        '<', 1832,
        '=', 2429,
        '?', 2434,
        '@', 2398,
        'P', 2393,
        'R', 2380,
        'T', 1838,
        '[', 2271,
        'e', 2370,
        'p', 2194,
        '{', 2347,
        0xbd, 2480,
        0x221e, 2427,
        0x2659, 2394,
        0x265f, 2192,
        0x2e40, 2428,
        'O', 1178,
        'o', 1178,
        'Z', 2244,
        'z', 2244,
        '+', 2414,
        0x16ed, 2414,
        0x2795, 2414,
        ':', 2382,
        'X', 2382,
        'x', 2382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1138);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2430);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2415);
      END_STATE();
    case 2256:
      if (eof) ADVANCE(2257);
      ADVANCE_MAP(
        '"', 2275,
        '%', 2262,
        '&', 1146,
        '(', 2343,
        ')', 2345,
        '*', 2486,
        '-', 2440,
        '/', 2469,
        '0', 2463,
        '1', 2436,
        '2', 2479,
        ';', 2260,
        '@', 2398,
        'O', 2459,
        'P', 2391,
        '[', 2271,
        ']', 2273,
        'o', 2468,
        '{', 2347,
        '}', 2349,
        0xbd, 2482,
        0x2ba, 2295,
        0x2dd, 2293,
        0x2ee, 2299,
        0x2f6, 2297,
        0x5f2, 2301,
        0x5f4, 2291,
        0x66d, 2502,
        0x2010, 2444,
        0x2011, 2446,
        0x2012, 2448,
        0x2013, 2450,
        0x2014, 2452,
        0x201c, 2279,
        0x201d, 2281,
        0x201f, 2283,
        0x2033, 2285,
        0x2036, 2287,
        0x2044, 2473,
        0x204e, 2498,
        0x2212, 2442,
        0x2215, 2471,
        0x2217, 2490,
        0x2659, 2394,
        0x265f, 2192,
        0x2731, 2494,
        0x2796, 2454,
        0x27cb, 2475,
        0x29f8, 2477,
        0x3003, 2289,
        0xff02, 2277,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2256);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2367);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2365);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2376);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2258);
      if (lookahead == '\r') ADVANCE(1108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1106);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2259);
      if (lookahead == '\r') ADVANCE(1118);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1113);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2263);
      if (lookahead == '\r') ADVANCE(1110);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1110);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2264);
      if (lookahead == '\r') ADVANCE(1111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1111);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2265);
      if (lookahead == '\r') ADVANCE(1115);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1115);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2266);
      if (lookahead == '\r') ADVANCE(1116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2259);
      if (lookahead == '\r') ADVANCE(1118);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1113);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2268);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(1197);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(aux_sym_double_quote_token1);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(anon_sym_uff02);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(aux_sym_double_quote_token2);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(anon_sym_u201c);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(aux_sym_double_quote_token3);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(anon_sym_u201d);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(aux_sym_double_quote_token4);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(anon_sym_u201f);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(aux_sym_double_quote_token5);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(anon_sym_u2033);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(aux_sym_double_quote_token6);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(anon_sym_u2036);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(aux_sym_double_quote_token7);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(anon_sym_u3003);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(aux_sym_double_quote_token8);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(anon_sym_u05f4);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(aux_sym_double_quote_token9);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(anon_sym_u02dd);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(aux_sym_double_quote_token10);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(anon_sym_u02ba);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(aux_sym_double_quote_token11);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(anon_sym_u02f6);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(aux_sym_double_quote_token12);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(anon_sym_u02ee);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(aux_sym_double_quote_token13);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(anon_sym_u05f2);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(aux_sym_double_quote_token14);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2303);
      if ((!eof && set_contains(sym_tagpair_key_character_set_1, 22, lookahead))) ADVANCE(2304);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(sym_tagpair_key);
      if ((!eof && set_contains(sym_tagpair_key_character_set_1, 22, lookahead))) ADVANCE(2304);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '#') ADVANCE(2314);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2305);
      if (lookahead == ']') ADVANCE(2274);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2306);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2305);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2307);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2335);
      if (lookahead == '1') ADVANCE(2335);
      if (lookahead == '3') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2335);
      if (lookahead == '8') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2327);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      ADVANCE_MAP(
        '0', 2316,
        '2', 2335,
        'B', 2336,
        'b', 2336,
        'D', 2338,
        'd', 2338,
        'E', 2339,
        'e', 2339,
        'F', 2331,
        'f', 2331,
      );
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2310);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2318);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2323);
      if (lookahead == '3') ADVANCE(2329);
      if (lookahead == '6') ADVANCE(2330);
      if (lookahead == '7') ADVANCE(2328);
      if (lookahead == '8') ADVANCE(2319);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2320);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2337);
      if (lookahead == '3') ADVANCE(2326);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2335);
      if (lookahead == '4') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2322);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2311);
      if (lookahead == '3') ADVANCE(2312);
      if (lookahead == '5') ADVANCE(2340);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2341);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2334);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2308);
      if (lookahead == '4') ADVANCE(2326);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2321);
      if (lookahead == '5') ADVANCE(2325);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2333);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2317);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2335);
      if (lookahead == '6') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2327);
      if (lookahead == '5') ADVANCE(2309);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '4') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '5') ADVANCE(2324);
      if (lookahead == '9') ADVANCE(2332);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '6') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2318);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '9') ADVANCE(2315);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ';') ADVANCE(2342);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2335);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2335);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2335);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2317);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2313);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2342);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(aux_sym_inline_comment_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2351);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(2352);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(aux_sym_inline_comment_text_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(2352);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(sym_move_number);
      ADVANCE_MAP(
        '\n', 2361,
        '\r', 2356,
        '&', 25,
        '\t', 2355,
        0x0b, 2355,
        '\f', 2355,
        ' ', 2355,
        '/', 5,
        0x2044, 5,
        0x2215, 5,
        0x27cb, 5,
        0x29f8, 5,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(4);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2361);
      if (lookahead == '\r') ADVANCE(2356);
      if (lookahead == '&') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2355);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2361);
      if (lookahead == '\r') ADVANCE(2356);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2355);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2361);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2363);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2362);
      if (lookahead == '\r') ADVANCE(2358);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2362);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1161);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2363);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1122);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2363);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1119);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1197);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2363);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1197);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(sym_move_number);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2363);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(sym_move_number);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(sym__misc_punctuation);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(sym__misc_punctuation);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(705);
      if (lookahead == 'p') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(2064);
      if (lookahead == 'p') ADVANCE(2415);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(2415);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(2433);
      if (lookahead == '\r') ADVANCE(2416);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(2415);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2415);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 12,
        '+', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 12,
        '+', 2425,
        '=', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 19,
        '+', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '&', 1150,
        '+', 2415,
        0x16ed, 2415,
        0x2795, 2415,
        '/', 1186,
        0x2044, 1186,
        0x2215, 1186,
        0x27cb, 1186,
        0x29f8, 1186,
      );
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '&', 1150,
        '+', 2415,
        '=', 2415,
        0x16ed, 2415,
        0x2795, 2415,
        '/', 1186,
        0x2044, 1186,
        0x2215, 1186,
        0x27cb, 1186,
        0x29f8, 1186,
      );
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '&', 1155,
        '+', 2415,
        0x16ed, 2415,
        0x2795, 2415,
        '/', 1186,
        0x2044, 1186,
        0x2215, 1186,
        0x27cb, 1186,
        0x29f8, 1186,
      );
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2241);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(anon_sym_u2659);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(anon_sym_u2659);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 23,
        '+', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2409);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '&', 1159,
        '+', 2415,
        0x16ed, 2415,
        0x2795, 2415,
        '/', 1190,
        0x2044, 1190,
        0x2215, 1190,
        0x27cb, 1190,
        0x29f8, 1190,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2407);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(855);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(1173);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2243);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 24,
        '+', 2412,
        0x16ed, 2412,
        0x2795, 2412,
        '/', 41,
        0x2044, 41,
        0x2215, 41,
        0x27cb, 41,
        0x29f8, 41,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(1145);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2410);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '&', 1160,
        '+', 2410,
        0x16ed, 2410,
        0x2795, 2410,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2415);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1198);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 12,
        '+', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 12,
        '+', 2425,
        '=', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 23,
        '-', 2408,
        '+', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2409);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 23,
        '+', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2409);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(17);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1198,
        '\r', 1,
        '&', 19,
        '+', 2425,
        0x16ed, 2425,
        0x2795, 2425,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2425);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2424);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 863,
        '&', 22,
        '\t', 862,
        0x0b, 862,
        '\f', 862,
        ' ', 862,
        '/', 866,
        0x2044, 866,
        0x2215, 866,
        0x27cb, 866,
        0x29f8, 866,
      );
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1157);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1181);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1150,
        '+', 2415,
        0x16ed, 2415,
        0x2795, 2415,
        '/', 1186,
        0x2044, 1186,
        0x2215, 1186,
        0x27cb, 1186,
        0x29f8, 1186,
      );
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1150,
        '+', 2415,
        '=', 2415,
        0x16ed, 2415,
        0x2795, 2415,
        '/', 1186,
        0x2044, 1186,
        0x2215, 1186,
        0x27cb, 1186,
        0x29f8, 1186,
      );
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1159,
        '+', 2415,
        0x16ed, 2415,
        0x2795, 2415,
        '/', 1190,
        0x2044, 1190,
        0x2215, 1190,
        0x27cb, 1190,
        0x29f8, 1190,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2407);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1153);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1155,
        '+', 2415,
        0x16ed, 2415,
        0x2795, 2415,
        '/', 1186,
        0x2044, 1186,
        0x2215, 1186,
        0x27cb, 1186,
        0x29f8, 1186,
      );
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(1197);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2415);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2435);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(2361);
      if (lookahead == '\r') ADVANCE(2356);
      if (lookahead == ' ') ADVANCE(2353);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2355);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(861);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(2359);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2247);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2363);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(1185);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(anon_sym_u2212);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(anon_sym_u2010);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(anon_sym_u2011);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(anon_sym_u2012);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(anon_sym_u2013);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(anon_sym_u2014);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(anon_sym_u2796);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(854);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1189);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1189);
      if (lookahead == '&') ADVANCE(1144);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2242);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '\n', 2361,
        '\r', 2356,
        ' ', 2354,
        '&', 11,
        '\t', 2355,
        0x0b, 2355,
        '\f', 2355,
        'A', 861,
        'B', 861,
        'a', 861,
        'b', 861,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(854);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1189);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1189);
      if (lookahead == '&') ADVANCE(1144);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2242);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(2360);
      if (lookahead == '&') ADVANCE(1144);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2247);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2363);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2242);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2246);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(854);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1189);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1189);
      if (lookahead == '&') ADVANCE(1144);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2242);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(anon_sym_u2215);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(anon_sym_u2044);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(anon_sym_u27cb);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(anon_sym_u29f8);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(anon_sym_u00bd);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == ' ') ADVANCE(1192);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == ' ') ADVANCE(1192);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 2489:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2490:
      ACCEPT_TOKEN(anon_sym_u2217);
      END_STATE();
    case 2491:
      ACCEPT_TOKEN(anon_sym_u2217);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2492:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 2493:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2494:
      ACCEPT_TOKEN(anon_sym_u2731);
      END_STATE();
    case 2495:
      ACCEPT_TOKEN(anon_sym_u2731);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2496:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2498:
      ACCEPT_TOKEN(anon_sym_u204e);
      END_STATE();
    case 2499:
      ACCEPT_TOKEN(anon_sym_u204e);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2500:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 2501:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2502:
      ACCEPT_TOKEN(anon_sym_u066d);
      END_STATE();
    case 2503:
      ACCEPT_TOKEN(anon_sym_u066d);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2504:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 2505:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2506:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      END_STATE();
    case 2507:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2508:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      END_STATE();
    case 2509:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      END_STATE();
    case 2511:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      END_STATE();
    case 2513:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      if (lookahead == '\n') ADVANCE(1198);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2254, .external_lex_state = 1},
  [2] = {.lex_state = 2251, .external_lex_state = 1},
  [3] = {.lex_state = 2251, .external_lex_state = 1},
  [4] = {.lex_state = 1107, .external_lex_state = 1},
  [5] = {.lex_state = 1133, .external_lex_state = 1},
  [6] = {.lex_state = 1133, .external_lex_state = 1},
  [7] = {.lex_state = 1133, .external_lex_state = 1},
  [8] = {.lex_state = 2252, .external_lex_state = 1},
  [9] = {.lex_state = 2252, .external_lex_state = 1},
  [10] = {.lex_state = 2253, .external_lex_state = 1},
  [11] = {.lex_state = 2253, .external_lex_state = 1},
  [12] = {.lex_state = 2253, .external_lex_state = 1},
  [13] = {.lex_state = 2254, .external_lex_state = 1},
  [14] = {.lex_state = 2251, .external_lex_state = 1},
  [15] = {.lex_state = 1134, .external_lex_state = 1},
  [16] = {.lex_state = 2254, .external_lex_state = 1},
  [17] = {.lex_state = 2253, .external_lex_state = 1},
  [18] = {.lex_state = 1134, .external_lex_state = 1},
  [19] = {.lex_state = 2251, .external_lex_state = 1},
  [20] = {.lex_state = 2251, .external_lex_state = 1},
  [21] = {.lex_state = 2251, .external_lex_state = 1},
  [22] = {.lex_state = 2251, .external_lex_state = 1},
  [23] = {.lex_state = 2251, .external_lex_state = 1},
  [24] = {.lex_state = 2251, .external_lex_state = 1},
  [25] = {.lex_state = 2251, .external_lex_state = 1},
  [26] = {.lex_state = 2251, .external_lex_state = 1},
  [27] = {.lex_state = 1135, .external_lex_state = 1},
  [28] = {.lex_state = 2251, .external_lex_state = 1},
  [29] = {.lex_state = 2251, .external_lex_state = 1},
  [30] = {.lex_state = 2251, .external_lex_state = 1},
  [31] = {.lex_state = 1135, .external_lex_state = 1},
  [32] = {.lex_state = 2251, .external_lex_state = 1},
  [33] = {.lex_state = 2251, .external_lex_state = 1},
  [34] = {.lex_state = 2251, .external_lex_state = 1},
  [35] = {.lex_state = 2251, .external_lex_state = 1},
  [36] = {.lex_state = 1135, .external_lex_state = 1},
  [37] = {.lex_state = 2251, .external_lex_state = 1},
  [38] = {.lex_state = 2251, .external_lex_state = 1},
  [39] = {.lex_state = 2249, .external_lex_state = 1},
  [40] = {.lex_state = 2251, .external_lex_state = 1},
  [41] = {.lex_state = 2251, .external_lex_state = 1},
  [42] = {.lex_state = 2251, .external_lex_state = 1},
  [43] = {.lex_state = 2251, .external_lex_state = 1},
  [44] = {.lex_state = 1135, .external_lex_state = 1},
  [45] = {.lex_state = 2251, .external_lex_state = 1},
  [46] = {.lex_state = 1107, .external_lex_state = 1},
  [47] = {.lex_state = 1107, .external_lex_state = 1},
  [48] = {.lex_state = 1133, .external_lex_state = 1},
  [49] = {.lex_state = 1107, .external_lex_state = 1},
  [50] = {.lex_state = 2251, .external_lex_state = 1},
  [51] = {.lex_state = 2249, .external_lex_state = 1},
  [52] = {.lex_state = 2255, .external_lex_state = 1},
  [53] = {.lex_state = 2251, .external_lex_state = 1},
  [54] = {.lex_state = 2255, .external_lex_state = 1},
  [55] = {.lex_state = 2251, .external_lex_state = 1},
  [56] = {.lex_state = 2251, .external_lex_state = 1},
  [57] = {.lex_state = 2251, .external_lex_state = 1},
  [58] = {.lex_state = 2251, .external_lex_state = 1},
  [59] = {.lex_state = 2251, .external_lex_state = 1},
  [60] = {.lex_state = 2251, .external_lex_state = 1},
  [61] = {.lex_state = 2251, .external_lex_state = 1},
  [62] = {.lex_state = 2251, .external_lex_state = 1},
  [63] = {.lex_state = 2251, .external_lex_state = 1},
  [64] = {.lex_state = 2251, .external_lex_state = 1},
  [65] = {.lex_state = 2251, .external_lex_state = 1},
  [66] = {.lex_state = 2251, .external_lex_state = 1},
  [67] = {.lex_state = 2251, .external_lex_state = 1},
  [68] = {.lex_state = 2251, .external_lex_state = 1},
  [69] = {.lex_state = 2251, .external_lex_state = 1},
  [70] = {.lex_state = 1133, .external_lex_state = 1},
  [71] = {.lex_state = 2251, .external_lex_state = 1},
  [72] = {.lex_state = 1133, .external_lex_state = 1},
  [73] = {.lex_state = 1133, .external_lex_state = 1},
  [74] = {.lex_state = 1133, .external_lex_state = 1},
  [75] = {.lex_state = 1133, .external_lex_state = 1},
  [76] = {.lex_state = 1133, .external_lex_state = 1},
  [77] = {.lex_state = 1133, .external_lex_state = 1},
  [78] = {.lex_state = 2255, .external_lex_state = 1},
  [79] = {.lex_state = 1133, .external_lex_state = 1},
  [80] = {.lex_state = 1133, .external_lex_state = 1},
  [81] = {.lex_state = 2251, .external_lex_state = 1},
  [82] = {.lex_state = 1133, .external_lex_state = 1},
  [83] = {.lex_state = 1133, .external_lex_state = 1},
  [84] = {.lex_state = 1133, .external_lex_state = 1},
  [85] = {.lex_state = 1133, .external_lex_state = 1},
  [86] = {.lex_state = 1133, .external_lex_state = 1},
  [87] = {.lex_state = 1133, .external_lex_state = 1},
  [88] = {.lex_state = 1112, .external_lex_state = 1},
  [89] = {.lex_state = 1133, .external_lex_state = 1},
  [90] = {.lex_state = 1133, .external_lex_state = 1},
  [91] = {.lex_state = 1114, .external_lex_state = 1},
  [92] = {.lex_state = 1133, .external_lex_state = 1},
  [93] = {.lex_state = 1133, .external_lex_state = 1},
  [94] = {.lex_state = 1133, .external_lex_state = 1},
  [95] = {.lex_state = 1107, .external_lex_state = 1},
  [96] = {.lex_state = 1133, .external_lex_state = 1},
  [97] = {.lex_state = 2255, .external_lex_state = 1},
  [98] = {.lex_state = 1133, .external_lex_state = 1},
  [99] = {.lex_state = 1133, .external_lex_state = 1},
  [100] = {.lex_state = 2255, .external_lex_state = 1},
  [101] = {.lex_state = 1107, .external_lex_state = 1},
  [102] = {.lex_state = 1133, .external_lex_state = 1},
  [103] = {.lex_state = 1133, .external_lex_state = 1},
  [104] = {.lex_state = 1107, .external_lex_state = 1},
  [105] = {.lex_state = 1133, .external_lex_state = 1},
  [106] = {.lex_state = 1133, .external_lex_state = 1},
  [107] = {.lex_state = 1107, .external_lex_state = 1},
  [108] = {.lex_state = 1133, .external_lex_state = 1},
  [109] = {.lex_state = 1133, .external_lex_state = 1},
  [110] = {.lex_state = 1133, .external_lex_state = 1},
  [111] = {.lex_state = 1133, .external_lex_state = 1},
  [112] = {.lex_state = 1133, .external_lex_state = 1},
  [113] = {.lex_state = 1133, .external_lex_state = 1},
  [114] = {.lex_state = 1133, .external_lex_state = 1},
  [115] = {.lex_state = 1133, .external_lex_state = 1},
  [116] = {.lex_state = 1133, .external_lex_state = 1},
  [117] = {.lex_state = 2255, .external_lex_state = 1},
  [118] = {.lex_state = 2255, .external_lex_state = 1},
  [119] = {.lex_state = 2255, .external_lex_state = 1},
  [120] = {.lex_state = 1140},
  [121] = {.lex_state = 1140},
  [122] = {.lex_state = 1140},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1139},
  [125] = {.lex_state = 1140},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1187},
  [128] = {.lex_state = 1187},
  [129] = {.lex_state = 1187},
  [130] = {.lex_state = 1187},
  [131] = {.lex_state = 1131, .external_lex_state = 1},
  [132] = {.lex_state = 1187},
  [133] = {.lex_state = 1131, .external_lex_state = 1},
  [134] = {.lex_state = 1187},
  [135] = {.lex_state = 1187},
  [136] = {.lex_state = 1132, .external_lex_state = 1},
  [137] = {.lex_state = 1132, .external_lex_state = 1},
  [138] = {.lex_state = 1132, .external_lex_state = 1},
  [139] = {.lex_state = 2254, .external_lex_state = 1},
  [140] = {.lex_state = 2254, .external_lex_state = 1},
  [141] = {.lex_state = 2254, .external_lex_state = 1},
  [142] = {.lex_state = 2255, .external_lex_state = 1},
  [143] = {.lex_state = 1132, .external_lex_state = 1},
  [144] = {.lex_state = 2254, .external_lex_state = 1},
  [145] = {.lex_state = 2250, .external_lex_state = 1},
  [146] = {.lex_state = 2254, .external_lex_state = 1},
  [147] = {.lex_state = 2255, .external_lex_state = 1},
  [148] = {.lex_state = 2254, .external_lex_state = 1},
  [149] = {.lex_state = 2255, .external_lex_state = 1},
  [150] = {.lex_state = 2254, .external_lex_state = 1},
  [151] = {.lex_state = 2254, .external_lex_state = 1},
  [152] = {.lex_state = 2254, .external_lex_state = 1},
  [153] = {.lex_state = 2254, .external_lex_state = 1},
  [154] = {.lex_state = 2254, .external_lex_state = 1},
  [155] = {.lex_state = 2254, .external_lex_state = 1},
  [156] = {.lex_state = 2254, .external_lex_state = 1},
  [157] = {.lex_state = 2250, .external_lex_state = 1},
  [158] = {.lex_state = 2254, .external_lex_state = 1},
  [159] = {.lex_state = 2254, .external_lex_state = 1},
  [160] = {.lex_state = 2254, .external_lex_state = 1},
  [161] = {.lex_state = 2254, .external_lex_state = 1},
  [162] = {.lex_state = 2255, .external_lex_state = 1},
  [163] = {.lex_state = 2255, .external_lex_state = 1},
  [164] = {.lex_state = 2254, .external_lex_state = 1},
  [165] = {.lex_state = 2255, .external_lex_state = 1},
  [166] = {.lex_state = 2255, .external_lex_state = 1},
  [167] = {.lex_state = 2255, .external_lex_state = 1},
  [168] = {.lex_state = 2255, .external_lex_state = 1},
  [169] = {.lex_state = 2255, .external_lex_state = 1},
  [170] = {.lex_state = 2255, .external_lex_state = 1},
  [171] = {.lex_state = 2255, .external_lex_state = 1},
  [172] = {.lex_state = 2255, .external_lex_state = 1},
  [173] = {.lex_state = 2255, .external_lex_state = 1},
  [174] = {.lex_state = 2255, .external_lex_state = 1},
  [175] = {.lex_state = 2255, .external_lex_state = 1},
  [176] = {.lex_state = 2255, .external_lex_state = 1},
  [177] = {.lex_state = 2255, .external_lex_state = 1},
  [178] = {.lex_state = 1117, .external_lex_state = 1},
  [179] = {.lex_state = 1187},
  [180] = {.lex_state = 1187},
  [181] = {.lex_state = 2255, .external_lex_state = 1},
  [182] = {.lex_state = 2255, .external_lex_state = 1},
  [183] = {.lex_state = 2255, .external_lex_state = 1},
  [184] = {.lex_state = 2254, .external_lex_state = 1},
  [185] = {.lex_state = 1187},
  [186] = {.lex_state = 2255, .external_lex_state = 1},
  [187] = {.lex_state = 2255, .external_lex_state = 1},
  [188] = {.lex_state = 2255, .external_lex_state = 1},
  [189] = {.lex_state = 2255, .external_lex_state = 1},
  [190] = {.lex_state = 2255, .external_lex_state = 1},
  [191] = {.lex_state = 2255, .external_lex_state = 1},
  [192] = {.lex_state = 2255, .external_lex_state = 1},
  [193] = {.lex_state = 2255, .external_lex_state = 1},
  [194] = {.lex_state = 2255, .external_lex_state = 1},
  [195] = {.lex_state = 2255, .external_lex_state = 1},
  [196] = {.lex_state = 2255, .external_lex_state = 1},
  [197] = {.lex_state = 2255, .external_lex_state = 1},
  [198] = {.lex_state = 2255, .external_lex_state = 1},
  [199] = {.lex_state = 2255, .external_lex_state = 1},
  [200] = {.lex_state = 2255, .external_lex_state = 1},
  [201] = {.lex_state = 2255, .external_lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 2191},
  [204] = {.lex_state = 2191},
  [205] = {.lex_state = 2191},
  [206] = {.lex_state = 2191},
  [207] = {.lex_state = 2191},
  [208] = {.lex_state = 2191},
  [209] = {.lex_state = 2191},
  [210] = {.lex_state = 2191},
  [211] = {.lex_state = 1213},
  [212] = {.lex_state = 1213},
  [213] = {.lex_state = 1213},
  [214] = {.lex_state = 1213},
  [215] = {.lex_state = 1213},
  [216] = {.lex_state = 1213},
  [217] = {.lex_state = 1213},
  [218] = {.lex_state = 1213},
  [219] = {.lex_state = 1213},
  [220] = {.lex_state = 2191},
  [221] = {.lex_state = 2191},
  [222] = {.lex_state = 2191},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1213},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 2255},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 1336},
  [260] = {.lex_state = 1213},
  [261] = {.lex_state = 2268},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 1213},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2268},
  [266] = {.lex_state = 2193},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 2268},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 1213},
  [271] = {.lex_state = 1187},
  [272] = {.lex_state = 1187},
  [273] = {.lex_state = 2268},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 1336},
  [277] = {.lex_state = 2268},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 2268},
  [282] = {.lex_state = 1213},
  [283] = {.lex_state = 2268},
  [284] = {.lex_state = 1213},
  [285] = {.lex_state = 2268},
  [286] = {.lex_state = 1213},
  [287] = {.lex_state = 2268},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_tagpair_delimiter_open] = ACTIONS(1),
    [sym_tagpair_delimiter_close] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_double_quote_token1] = ACTIONS(1),
    [anon_sym_uff02] = ACTIONS(1),
    [aux_sym_double_quote_token2] = ACTIONS(1),
    [anon_sym_u201c] = ACTIONS(1),
    [aux_sym_double_quote_token3] = ACTIONS(1),
    [anon_sym_u201d] = ACTIONS(1),
    [aux_sym_double_quote_token4] = ACTIONS(1),
    [anon_sym_u201f] = ACTIONS(1),
    [aux_sym_double_quote_token5] = ACTIONS(1),
    [anon_sym_u2033] = ACTIONS(1),
    [aux_sym_double_quote_token6] = ACTIONS(1),
    [anon_sym_u2036] = ACTIONS(1),
    [aux_sym_double_quote_token7] = ACTIONS(1),
    [anon_sym_u3003] = ACTIONS(1),
    [aux_sym_double_quote_token8] = ACTIONS(1),
    [anon_sym_u05f4] = ACTIONS(1),
    [aux_sym_double_quote_token9] = ACTIONS(1),
    [anon_sym_u02dd] = ACTIONS(1),
    [aux_sym_double_quote_token10] = ACTIONS(1),
    [anon_sym_u02ba] = ACTIONS(1),
    [aux_sym_double_quote_token11] = ACTIONS(1),
    [anon_sym_u02f6] = ACTIONS(1),
    [aux_sym_double_quote_token12] = ACTIONS(1),
    [anon_sym_u02ee] = ACTIONS(1),
    [aux_sym_double_quote_token13] = ACTIONS(1),
    [anon_sym_u05f2] = ACTIONS(1),
    [aux_sym_double_quote_token14] = ACTIONS(1),
    [sym_variation_delimiter_open] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__misc_punctuation] = ACTIONS(1),
    [sym__san_file] = ACTIONS(1),
    [sym__san_rank] = ACTIONS(1),
    [sym__san_promotable_piece] = ACTIONS(1),
    [sym__san_major_or_minor_piece] = ACTIONS(1),
    [sym__san_capture_symbol] = ACTIONS(1),
    [sym__san_promotion_symbol] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_u2659] = ACTIONS(1),
    [anon_sym_u265fufe0e] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__lan_move_by_coordinates_token1] = ACTIONS(1),
    [sym__san_move_castle] = ACTIONS(1),
    [sym_check_or_mate_condition] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_result_code_token1] = ACTIONS(1),
    [anon_sym_u2212] = ACTIONS(1),
    [aux_sym_result_code_token2] = ACTIONS(1),
    [anon_sym_u2010] = ACTIONS(1),
    [aux_sym_result_code_token3] = ACTIONS(1),
    [anon_sym_u2011] = ACTIONS(1),
    [aux_sym_result_code_token4] = ACTIONS(1),
    [anon_sym_u2012] = ACTIONS(1),
    [aux_sym_result_code_token5] = ACTIONS(1),
    [anon_sym_u2013] = ACTIONS(1),
    [aux_sym_result_code_token6] = ACTIONS(1),
    [anon_sym_u2014] = ACTIONS(1),
    [aux_sym_result_code_token7] = ACTIONS(1),
    [anon_sym_u2796] = ACTIONS(1),
    [aux_sym_result_code_token8] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_result_code_token9] = ACTIONS(1),
    [anon_sym_u2215] = ACTIONS(1),
    [aux_sym_result_code_token10] = ACTIONS(1),
    [anon_sym_u2044] = ACTIONS(1),
    [aux_sym_result_code_token11] = ACTIONS(1),
    [anon_sym_u27cb] = ACTIONS(1),
    [aux_sym_result_code_token12] = ACTIONS(1),
    [anon_sym_u29f8] = ACTIONS(1),
    [aux_sym_result_code_token13] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_u00bd] = ACTIONS(1),
    [aux_sym_result_code_token14] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_result_code_token15] = ACTIONS(1),
    [anon_sym_u2217] = ACTIONS(1),
    [aux_sym_result_code_token16] = ACTIONS(1),
    [anon_sym_u2731] = ACTIONS(1),
    [aux_sym_result_code_token17] = ACTIONS(1),
    [anon_sym_u204e] = ACTIONS(1),
    [aux_sym_result_code_token18] = ACTIONS(1),
    [anon_sym_u066d] = ACTIONS(1),
    [aux_sym_result_code_token19] = ACTIONS(1),
    [aux_sym_result_code_token21] = ACTIONS(1),
    [aux_sym_result_code_token23] = ACTIONS(1),
    [sym__full_line_comment_delimiter_bol_assertion] = ACTIONS(1),
  },
  [1] = {
    [sym_series_of_games] = STATE(280),
    [sym_game] = STATE(151),
    [sym_freestanding_comment] = STATE(54),
    [sym_rest_of_line_comment_delimiter_open] = STATE(273),
    [sym_rest_of_line_comment] = STATE(59),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(47),
    [sym_movetext] = STATE(128),
    [sym_inline_comment_delimiter_open] = STATE(205),
    [sym__movetext_element] = STATE(111),
    [sym_variation] = STATE(111),
    [sym_inline_comment] = STATE(113),
    [sym__san_move] = STATE(114),
    [sym_san_move] = STATE(90),
    [sym__san_move_piece] = STATE(74),
    [sym__lan_move] = STATE(115),
    [sym_lan_move] = STATE(94),
    [sym__san_square] = STATE(15),
    [sym__san_move_pawn] = STATE(74),
    [sym__san_drop_pawn] = STATE(74),
    [sym__san_move_major_or_minor_piece] = STATE(74),
    [sym__san_drop_major_or_minor_piece] = STATE(74),
    [sym__lan_move_by_coordinates] = STATE(70),
    [sym__annotation] = STATE(116),
    [aux_sym_series_of_games_repeat1] = STATE(16),
    [aux_sym_freestanding_comment_repeat1] = STATE(140),
    [aux_sym_movetext_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_old_style_twic_section_comment] = ACTIONS(7),
    [sym_tagpair_delimiter_open] = ACTIONS(9),
    [sym_variation_delimiter_open] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_move_number] = ACTIONS(15),
    [sym__san_file] = ACTIONS(17),
    [sym__san_major_or_minor_piece] = ACTIONS(19),
    [anon_sym_P] = ACTIONS(21),
    [anon_sym_u2659] = ACTIONS(21),
    [anon_sym_u265fufe0e] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [sym__san_move_castle] = ACTIONS(25),
    [sym__san_null_move] = ACTIONS(25),
    [sym_annotation] = ACTIONS(27),
    [sym__full_line_comment_delimiter_bol_assertion] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(35), 1,
      sym_variation_delimiter_open,
    ACTIONS(37), 1,
      sym_move_number,
    ACTIONS(39), 1,
      sym__san_file,
    ACTIONS(41), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      sym_annotation,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(21), 1,
      sym__lan_move_by_coordinates,
    STATE(40), 1,
      sym_san_move,
    STATE(41), 1,
      sym_lan_move,
    STATE(50), 1,
      sym__annotation,
    STATE(60), 1,
      sym__lan_move,
    STATE(63), 1,
      sym__san_move,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(47), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(67), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(43), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(26), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(33), 23,
      sym_tagpair_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [111] = 26,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      sym_variation_delimiter_open,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym_move_number,
    ACTIONS(67), 1,
      sym__san_file,
    ACTIONS(70), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(76), 1,
      anon_sym_AT,
    ACTIONS(82), 1,
      sym_annotation,
    ACTIONS(85), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(21), 1,
      sym__lan_move_by_coordinates,
    STATE(40), 1,
      sym_san_move,
    STATE(41), 1,
      sym_lan_move,
    STATE(50), 1,
      sym__annotation,
    STATE(60), 1,
      sym__lan_move,
    STATE(63), 1,
      sym__san_move,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(79), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(67), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(73), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(26), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(56), 23,
      sym_tagpair_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [222] = 31,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(35), 1,
      sym_variation_delimiter_open,
    ACTIONS(37), 1,
      sym_move_number,
    ACTIONS(39), 1,
      sym__san_file,
    ACTIONS(41), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      sym_annotation,
    ACTIONS(88), 1,
      sym__empty_line,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(20), 1,
      sym_movetext,
    STATE(21), 1,
      sym__lan_move_by_coordinates,
    STATE(40), 1,
      sym_san_move,
    STATE(41), 1,
      sym_lan_move,
    STATE(50), 1,
      sym__annotation,
    STATE(60), 1,
      sym__lan_move,
    STATE(63), 1,
      sym__san_move,
    STATE(160), 1,
      sym_result_code,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(47), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(67), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(43), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(26), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(96), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [341] = 27,
    ACTIONS(85), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      sym_variation_delimiter_open,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_move_number,
    ACTIONS(110), 1,
      sym__san_file,
    ACTIONS(113), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(116), 1,
      anon_sym_P,
    ACTIONS(122), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      sym_annotation,
    STATE(5), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(70), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(114), 1,
      sym__san_move,
    STATE(115), 1,
      sym__lan_move,
    STATE(116), 1,
      sym__annotation,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(268), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(119), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(111), 2,
      sym__movetext_element,
      sym_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(74), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(56), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(51), 16,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [451] = 27,
    ACTIONS(15), 1,
      sym_move_number,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT,
    STATE(5), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(70), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(114), 1,
      sym__san_move,
    STATE(115), 1,
      sym__lan_move,
    STATE(116), 1,
      sym__annotation,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(268), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(137), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(111), 2,
      sym__movetext_element,
      sym_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(74), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(33), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(31), 16,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [561] = 31,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(37), 1,
      sym_move_number,
    ACTIONS(39), 1,
      sym__san_file,
    ACTIONS(41), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(43), 1,
      anon_sym_P,
    ACTIONS(49), 1,
      sym_annotation,
    ACTIONS(90), 1,
      anon_sym_1,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      sym_variation_delimiter_open,
    ACTIONS(147), 1,
      anon_sym_AT,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(19), 1,
      sym_movetext,
    STATE(21), 1,
      sym__lan_move_by_coordinates,
    STATE(40), 1,
      sym_san_move,
    STATE(41), 1,
      sym_lan_move,
    STATE(50), 1,
      sym__annotation,
    STATE(60), 1,
      sym__lan_move,
    STATE(63), 1,
      sym__san_move,
    STATE(152), 1,
      sym_result_code,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(145), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(149), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(67), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(26), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [679] = 6,
    ACTIONS(157), 1,
      sym__san_promotable_piece,
    ACTIONS(161), 1,
      sym__san_promotion_symbol,
    STATE(37), 1,
      sym__san_promotion,
    ACTIONS(159), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(153), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(155), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [738] = 2,
    ACTIONS(163), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(165), 42,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_capture_symbol,
      sym__san_promotion_symbol,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      aux_sym__lan_move_by_coordinates_token1,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [788] = 5,
    ACTIONS(161), 1,
      sym__san_promotion_symbol,
    ACTIONS(171), 1,
      sym__san_promotable_piece,
    STATE(35), 1,
      sym__san_promotion,
    ACTIONS(167), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(169), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [843] = 5,
    ACTIONS(161), 1,
      sym__san_promotion_symbol,
    ACTIONS(177), 1,
      sym__san_promotable_piece,
    STATE(33), 1,
      sym__san_promotion,
    ACTIONS(173), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(175), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [898] = 5,
    ACTIONS(161), 1,
      sym__san_promotion_symbol,
    ACTIONS(183), 1,
      sym__san_promotable_piece,
    STATE(34), 1,
      sym__san_promotion,
    ACTIONS(179), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(181), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [953] = 35,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(193), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(196), 1,
      sym_variation_delimiter_open,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_move_number,
    ACTIONS(205), 1,
      sym__san_file,
    ACTIONS(208), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(220), 1,
      sym_annotation,
    ACTIONS(223), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      aux_sym_series_of_games_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(47), 1,
      sym_tagpair,
    STATE(70), 1,
      sym__lan_move_by_coordinates,
    STATE(78), 1,
      sym_freestanding_comment,
    STATE(81), 1,
      sym_rest_of_line_comment,
    STATE(90), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(113), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym__san_move,
    STATE(115), 1,
      sym__lan_move,
    STATE(116), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(144), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(151), 1,
      sym_game,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(285), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(217), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(111), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(211), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(74), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1067] = 4,
    ACTIONS(226), 1,
      sym__san_capture_symbol,
    STATE(25), 1,
      sym__san_square,
    ACTIONS(163), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(165), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1119] = 7,
    ACTIONS(228), 1,
      sym__san_promotable_piece,
    ACTIONS(230), 1,
      sym__san_capture_symbol,
    ACTIONS(232), 1,
      sym__san_promotion_symbol,
    ACTIONS(234), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(86), 1,
      sym__san_promotion,
    ACTIONS(155), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(153), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1177] = 35,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(11), 1,
      sym_variation_delimiter_open,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_move_number,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      aux_sym_series_of_games_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(47), 1,
      sym_tagpair,
    STATE(52), 1,
      sym_freestanding_comment,
    STATE(59), 1,
      sym_rest_of_line_comment,
    STATE(70), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(113), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym__san_move,
    STATE(115), 1,
      sym__lan_move,
    STATE(116), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(140), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(151), 1,
      sym_game,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(25), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(111), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(21), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(74), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1291] = 2,
    ACTIONS(163), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(165), 40,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1339] = 2,
    ACTIONS(165), 15,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(163), 27,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      sym__san_capture_symbol,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1386] = 10,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(130), 1,
      aux_sym_trailing_garbage_repeat1,
    STATE(134), 1,
      sym_trailing_garbage,
    STATE(158), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(238), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(96), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
    ACTIONS(240), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1449] = 10,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(130), 1,
      aux_sym_trailing_garbage_repeat1,
    STATE(132), 1,
      sym_trailing_garbage,
    STATE(154), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(244), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(96), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
    ACTIONS(246), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1512] = 3,
    ACTIONS(252), 1,
      sym_check_or_mate_condition,
    ACTIONS(248), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(250), 37,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1560] = 2,
    ACTIONS(254), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(256), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1606] = 2,
    ACTIONS(258), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(260), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1652] = 2,
    ACTIONS(163), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(165), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1698] = 2,
    ACTIONS(262), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(264), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1744] = 3,
    ACTIONS(270), 1,
      sym_check_or_mate_condition,
    ACTIONS(266), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(268), 37,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1792] = 5,
    ACTIONS(232), 1,
      sym__san_promotion_symbol,
    ACTIONS(272), 1,
      sym__san_promotable_piece,
    STATE(75), 1,
      sym__san_promotion,
    ACTIONS(169), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(167), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1844] = 2,
    ACTIONS(274), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(276), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1890] = 2,
    ACTIONS(278), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(280), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1936] = 2,
    ACTIONS(282), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(284), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1982] = 5,
    ACTIONS(232), 1,
      sym__san_promotion_symbol,
    ACTIONS(286), 1,
      sym__san_promotable_piece,
    STATE(77), 1,
      sym__san_promotion,
    ACTIONS(181), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(179), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2034] = 2,
    ACTIONS(288), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(290), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2080] = 2,
    ACTIONS(179), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(181), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2126] = 2,
    ACTIONS(292), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(294), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2172] = 2,
    ACTIONS(296), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(298), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2218] = 5,
    ACTIONS(232), 1,
      sym__san_promotion_symbol,
    ACTIONS(300), 1,
      sym__san_promotable_piece,
    STATE(80), 1,
      sym__san_promotion,
    ACTIONS(175), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(173), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2270] = 2,
    ACTIONS(173), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(175), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2316] = 2,
    ACTIONS(302), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(304), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2362] = 3,
    ACTIONS(310), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(306), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(308), 37,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2409] = 3,
    ACTIONS(316), 1,
      sym__misc_punctuation,
    ACTIONS(312), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(314), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2456] = 3,
    ACTIONS(322), 1,
      sym__misc_punctuation,
    ACTIONS(318), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(320), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2503] = 2,
    ACTIONS(324), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(326), 37,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2548] = 2,
    ACTIONS(328), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(330), 37,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2593] = 2,
    ACTIONS(165), 14,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(163), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2638] = 3,
    ACTIONS(336), 1,
      sym__misc_punctuation,
    ACTIONS(332), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(334), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2685] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(338), 1,
      sym__empty_line,
    STATE(49), 1,
      aux_sym_header_repeat1,
    STATE(95), 1,
      sym_tagpair,
    STATE(101), 1,
      sym_rest_of_line_comment,
    STATE(281), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(340), 32,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2744] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(342), 1,
      sym__empty_line,
    STATE(46), 1,
      aux_sym_header_repeat1,
    STATE(95), 1,
      sym_tagpair,
    STATE(101), 1,
      sym_rest_of_line_comment,
    STATE(281), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(344), 32,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2803] = 4,
    ACTIONS(346), 1,
      sym__san_capture_symbol,
    STATE(76), 1,
      sym__san_square,
    ACTIONS(165), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(163), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2852] = 9,
    ACTIONS(348), 1,
      sym__empty_line,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(354), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(359), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(49), 1,
      aux_sym_header_repeat1,
    STATE(95), 1,
      sym_tagpair,
    STATE(101), 1,
      sym_rest_of_line_comment,
    STATE(281), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(357), 32,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2911] = 2,
    ACTIONS(362), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(364), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2955] = 3,
    ACTIONS(306), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(366), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(308), 37,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3001] = 31,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(372), 1,
      sym_move_number,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(47), 1,
      sym_tagpair,
    STATE(70), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(114), 1,
      sym__san_move,
    STATE(115), 1,
      sym__lan_move,
    STATE(116), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(164), 1,
      sym_game,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(268), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(137), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(111), 2,
      sym__movetext_element,
      sym_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(74), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3103] = 2,
    ACTIONS(374), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(376), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3147] = 31,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(372), 1,
      sym_move_number,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(47), 1,
      sym_tagpair,
    STATE(70), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(114), 1,
      sym__san_move,
    STATE(115), 1,
      sym__lan_move,
    STATE(116), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(164), 1,
      sym_game,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(268), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(137), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(111), 2,
      sym__movetext_element,
      sym_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(74), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3249] = 2,
    ACTIONS(380), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(382), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3293] = 2,
    ACTIONS(384), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(386), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3337] = 2,
    ACTIONS(388), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(390), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3381] = 2,
    ACTIONS(392), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(394), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3425] = 5,
    ACTIONS(401), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(405), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(398), 13,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
    ACTIONS(403), 22,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3475] = 2,
    ACTIONS(408), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(410), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3519] = 2,
    ACTIONS(412), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(414), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3563] = 2,
    ACTIONS(416), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(418), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3607] = 2,
    ACTIONS(420), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(422), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3651] = 2,
    ACTIONS(424), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(426), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3695] = 2,
    ACTIONS(428), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(430), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3739] = 2,
    ACTIONS(432), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(403), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3783] = 2,
    ACTIONS(434), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(436), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3827] = 2,
    ACTIONS(438), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(440), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3871] = 2,
    ACTIONS(442), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(444), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3915] = 3,
    ACTIONS(446), 1,
      sym_check_or_mate_condition,
    ACTIONS(250), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(248), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3960] = 2,
    ACTIONS(442), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(444), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4003] = 2,
    ACTIONS(290), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(288), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4046] = 2,
    ACTIONS(165), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(163), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4089] = 3,
    ACTIONS(448), 1,
      sym_check_or_mate_condition,
    ACTIONS(268), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(266), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4134] = 2,
    ACTIONS(298), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(296), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4177] = 2,
    ACTIONS(264), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(262), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4220] = 2,
    ACTIONS(294), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(292), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4263] = 30,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(372), 1,
      sym_move_number,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(47), 1,
      sym_tagpair,
    STATE(70), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(114), 1,
      sym__san_move,
    STATE(115), 1,
      sym__lan_move,
    STATE(116), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(164), 1,
      sym_game,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(268), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(137), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(111), 2,
      sym__movetext_element,
      sym_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(74), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4362] = 2,
    ACTIONS(260), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(258), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4405] = 2,
    ACTIONS(181), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(179), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4448] = 5,
    ACTIONS(396), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(401), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(405), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(398), 13,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
    ACTIONS(403), 22,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4497] = 2,
    ACTIONS(304), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(302), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4540] = 2,
    ACTIONS(284), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(282), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4583] = 2,
    ACTIONS(280), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(278), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4626] = 2,
    ACTIONS(276), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(274), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4669] = 2,
    ACTIONS(175), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(173), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4712] = 2,
    ACTIONS(256), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(254), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4755] = 3,
    ACTIONS(306), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(450), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(308), 35,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4799] = 2,
    ACTIONS(330), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(328), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4841] = 3,
    ACTIONS(452), 1,
      sym__misc_punctuation,
    ACTIONS(314), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(312), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4885] = 3,
    ACTIONS(306), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(454), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(308), 35,
      sym__empty_line,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4929] = 2,
    ACTIONS(326), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(324), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4971] = 3,
    ACTIONS(456), 1,
      sym__misc_punctuation,
    ACTIONS(334), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(332), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5015] = 3,
    ACTIONS(458), 1,
      sym__misc_punctuation,
    ACTIONS(320), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(318), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5059] = 2,
    ACTIONS(460), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(462), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5100] = 2,
    ACTIONS(394), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(392), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5141] = 28,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(464), 1,
      sym_variation_delimiter_open,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      sym_move_number,
    ACTIONS(470), 1,
      sym__san_file,
    ACTIONS(472), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(474), 1,
      anon_sym_P,
    ACTIONS(478), 1,
      anon_sym_AT,
    ACTIONS(482), 1,
      sym_annotation,
    STATE(55), 1,
      sym_variation_delimiter_close,
    STATE(118), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(131), 1,
      sym__san_square,
    STATE(167), 1,
      sym__lan_move_by_coordinates,
    STATE(176), 1,
      sym_lan_move,
    STATE(181), 1,
      sym_san_move,
    STATE(186), 1,
      sym__variation_lan_move,
    STATE(190), 1,
      sym__variation_annotation,
    STATE(191), 1,
      sym__variation_san_move,
    STATE(204), 1,
      sym_inline_comment_delimiter_open,
    STATE(257), 1,
      sym_variation_movetext,
    STATE(261), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(476), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(480), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(187), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(147), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5234] = 2,
    ACTIONS(418), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(416), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5275] = 2,
    ACTIONS(386), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(384), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5316] = 28,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(464), 1,
      sym_variation_delimiter_open,
    ACTIONS(468), 1,
      sym_move_number,
    ACTIONS(470), 1,
      sym__san_file,
    ACTIONS(472), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(474), 1,
      anon_sym_P,
    ACTIONS(478), 1,
      anon_sym_AT,
    ACTIONS(482), 1,
      sym_annotation,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_variation_delimiter_close,
    STATE(118), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(131), 1,
      sym__san_square,
    STATE(167), 1,
      sym__lan_move_by_coordinates,
    STATE(176), 1,
      sym_lan_move,
    STATE(181), 1,
      sym_san_move,
    STATE(186), 1,
      sym__variation_lan_move,
    STATE(190), 1,
      sym__variation_annotation,
    STATE(191), 1,
      sym__variation_san_move,
    STATE(204), 1,
      sym_inline_comment_delimiter_open,
    STATE(243), 1,
      sym_variation_movetext,
    STATE(261), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(476), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(480), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(187), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(147), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5409] = 2,
    ACTIONS(486), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(488), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5450] = 2,
    ACTIONS(376), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(374), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5491] = 2,
    ACTIONS(426), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(424), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5532] = 2,
    ACTIONS(490), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(492), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5573] = 2,
    ACTIONS(430), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(428), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5614] = 2,
    ACTIONS(440), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(438), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5655] = 2,
    ACTIONS(442), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(444), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5696] = 2,
    ACTIONS(414), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(412), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5737] = 2,
    ACTIONS(390), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(388), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5778] = 2,
    ACTIONS(444), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(442), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5819] = 2,
    ACTIONS(436), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(434), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5860] = 2,
    ACTIONS(382), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(380), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5901] = 2,
    ACTIONS(403), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(432), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5942] = 2,
    ACTIONS(422), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(420), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5983] = 2,
    ACTIONS(410), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(408), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6024] = 2,
    ACTIONS(364), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(362), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6065] = 28,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(464), 1,
      sym_variation_delimiter_open,
    ACTIONS(468), 1,
      sym_move_number,
    ACTIONS(470), 1,
      sym__san_file,
    ACTIONS(472), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(474), 1,
      anon_sym_P,
    ACTIONS(478), 1,
      anon_sym_AT,
    ACTIONS(482), 1,
      sym_annotation,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(131), 1,
      sym__san_square,
    STATE(167), 1,
      sym__lan_move_by_coordinates,
    STATE(176), 1,
      sym_lan_move,
    STATE(181), 1,
      sym_san_move,
    STATE(186), 1,
      sym__variation_lan_move,
    STATE(190), 1,
      sym__variation_annotation,
    STATE(191), 1,
      sym__variation_san_move,
    STATE(196), 1,
      sym_variation_delimiter_close,
    STATE(204), 1,
      sym_inline_comment_delimiter_open,
    STATE(238), 1,
      sym_variation_movetext,
    STATE(261), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(476), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(480), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(187), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(147), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [6158] = 26,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(464), 1,
      sym_variation_delimiter_open,
    ACTIONS(468), 1,
      sym_move_number,
    ACTIONS(470), 1,
      sym__san_file,
    ACTIONS(472), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(474), 1,
      anon_sym_P,
    ACTIONS(478), 1,
      anon_sym_AT,
    ACTIONS(482), 1,
      sym_annotation,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(131), 1,
      sym__san_square,
    STATE(167), 1,
      sym__lan_move_by_coordinates,
    STATE(176), 1,
      sym_lan_move,
    STATE(181), 1,
      sym_san_move,
    STATE(186), 1,
      sym__variation_lan_move,
    STATE(190), 1,
      sym__variation_annotation,
    STATE(191), 1,
      sym__variation_san_move,
    STATE(204), 1,
      sym_inline_comment_delimiter_open,
    STATE(261), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(476), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(480), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(187), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(147), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [6245] = 26,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(501), 1,
      sym_variation_delimiter_open,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      sym_move_number,
    ACTIONS(512), 1,
      sym__san_file,
    ACTIONS(515), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(518), 1,
      anon_sym_P,
    ACTIONS(524), 1,
      anon_sym_AT,
    ACTIONS(530), 1,
      sym_annotation,
    ACTIONS(533), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(119), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(131), 1,
      sym__san_square,
    STATE(167), 1,
      sym__lan_move_by_coordinates,
    STATE(176), 1,
      sym_lan_move,
    STATE(181), 1,
      sym_san_move,
    STATE(186), 1,
      sym__variation_lan_move,
    STATE(190), 1,
      sym__variation_annotation,
    STATE(191), 1,
      sym__variation_san_move,
    STATE(204), 1,
      sym_inline_comment_delimiter_open,
    STATE(261), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(521), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(527), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(187), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(147), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [6332] = 5,
    ACTIONS(538), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(122), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(126), 1,
      sym_tagpair_value_contents,
    STATE(264), 1,
      sym_double_quote,
    ACTIONS(536), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6375] = 3,
    ACTIONS(543), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(121), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(540), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6412] = 3,
    ACTIONS(549), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(121), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(546), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6449] = 3,
    STATE(120), 1,
      sym_double_quote,
    STATE(275), 1,
      sym__tagpair_value,
    ACTIONS(551), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6486] = 2,
    ACTIONS(553), 1,
      sym_tagpair_delimiter_close,
    ACTIONS(555), 29,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
      aux_sym_tagpair_value_contents_token1,
  [6521] = 2,
    ACTIONS(557), 1,
      aux_sym_tagpair_value_contents_token1,
    ACTIONS(553), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6555] = 2,
    STATE(274), 1,
      sym_double_quote,
    ACTIONS(559), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6589] = 2,
    ACTIONS(563), 10,
      anon_sym_SLASH,
      aux_sym_result_code_token9,
      anon_sym_u2215,
      aux_sym_result_code_token10,
      anon_sym_u2044,
      aux_sym_result_code_token11,
      anon_sym_u27cb,
      aux_sym_result_code_token12,
      anon_sym_u29f8,
      aux_sym_result_code_token13,
    ACTIONS(561), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [6620] = 8,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(130), 1,
      aux_sym_trailing_garbage_repeat1,
    STATE(135), 1,
      sym_trailing_garbage,
    STATE(153), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(565), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6662] = 4,
    STATE(129), 1,
      aux_sym_trailing_garbage_repeat1,
    ACTIONS(567), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(570), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(572), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6694] = 4,
    STATE(129), 1,
      aux_sym_trailing_garbage_repeat1,
    ACTIONS(574), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(576), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(578), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6726] = 7,
    ACTIONS(580), 1,
      sym__san_promotable_piece,
    ACTIONS(582), 1,
      sym__san_capture_symbol,
    ACTIONS(584), 1,
      sym__san_promotion_symbol,
    ACTIONS(586), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(149), 1,
      sym__san_promotion,
    ACTIONS(155), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(153), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6763] = 5,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(150), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6795] = 2,
    ACTIONS(165), 8,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(163), 13,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_capture_symbol,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6821] = 5,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(155), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6853] = 5,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(156), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6885] = 5,
    ACTIONS(584), 1,
      sym__san_promotion_symbol,
    ACTIONS(588), 1,
      sym__san_promotable_piece,
    STATE(171), 1,
      sym__san_promotion,
    ACTIONS(181), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(179), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6916] = 5,
    ACTIONS(584), 1,
      sym__san_promotion_symbol,
    ACTIONS(590), 1,
      sym__san_promotable_piece,
    STATE(169), 1,
      sym__san_promotion,
    ACTIONS(169), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(167), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6947] = 5,
    ACTIONS(584), 1,
      sym__san_promotion_symbol,
    ACTIONS(592), 1,
      sym__san_promotable_piece,
    STATE(162), 1,
      sym__san_promotion,
    ACTIONS(175), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(173), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6978] = 7,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    ACTIONS(599), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(604), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(283), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(139), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(602), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7013] = 7,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
    ACTIONS(609), 1,
      sym_old_style_twic_section_comment,
    STATE(283), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(139), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(611), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7048] = 6,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(613), 1,
      sym_old_style_twic_section_comment,
    STATE(287), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(141), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(602), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7080] = 4,
    ACTIONS(616), 1,
      sym__san_capture_symbol,
    STATE(170), 1,
      sym__san_square,
    ACTIONS(165), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(163), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7108] = 2,
    ACTIONS(165), 7,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(163), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7132] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(618), 1,
      sym_old_style_twic_section_comment,
    STATE(287), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(141), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(611), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7164] = 3,
    ACTIONS(620), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(306), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(308), 15,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7189] = 2,
    ACTIONS(442), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(444), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7211] = 3,
    ACTIONS(622), 1,
      sym_check_or_mate_condition,
    ACTIONS(268), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(266), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7235] = 2,
    ACTIONS(624), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(626), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7257] = 2,
    ACTIONS(175), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(173), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7279] = 2,
    ACTIONS(628), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(630), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7301] = 2,
    ACTIONS(632), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(634), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7323] = 2,
    ACTIONS(636), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(638), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7345] = 2,
    ACTIONS(640), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(642), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7367] = 2,
    ACTIONS(644), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(646), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7389] = 2,
    ACTIONS(648), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(650), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7411] = 2,
    ACTIONS(652), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(654), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7433] = 3,
    ACTIONS(306), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(656), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(308), 15,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7457] = 2,
    ACTIONS(658), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(660), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7479] = 2,
    ACTIONS(662), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(664), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7501] = 2,
    ACTIONS(666), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(668), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7523] = 2,
    ACTIONS(670), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(672), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7545] = 2,
    ACTIONS(181), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(179), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7567] = 2,
    ACTIONS(165), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(163), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7589] = 2,
    ACTIONS(674), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(676), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7611] = 2,
    ACTIONS(284), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(282), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7633] = 2,
    ACTIONS(304), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(302), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7655] = 3,
    ACTIONS(678), 1,
      sym_check_or_mate_condition,
    ACTIONS(250), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(248), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7679] = 2,
    ACTIONS(290), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(288), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7701] = 2,
    ACTIONS(298), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(296), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7723] = 2,
    ACTIONS(264), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(262), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7745] = 2,
    ACTIONS(294), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(292), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7767] = 2,
    ACTIONS(260), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(258), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7789] = 2,
    ACTIONS(276), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(274), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7811] = 2,
    ACTIONS(280), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(278), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7833] = 2,
    ACTIONS(256), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(254), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7855] = 3,
    ACTIONS(682), 1,
      sym__misc_punctuation,
    ACTIONS(684), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(680), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7878] = 2,
    ACTIONS(330), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(328), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7899] = 3,
    ACTIONS(306), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(686), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(308), 14,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7922] = 1,
    ACTIONS(688), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [7941] = 1,
    ACTIONS(690), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [7960] = 3,
    ACTIONS(694), 1,
      sym__misc_punctuation,
    ACTIONS(696), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(692), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7983] = 3,
    ACTIONS(700), 1,
      sym__misc_punctuation,
    ACTIONS(702), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(698), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8006] = 2,
    ACTIONS(326), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(324), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8027] = 2,
    ACTIONS(442), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(444), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [8048] = 1,
    ACTIONS(704), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [8067] = 2,
    ACTIONS(708), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(706), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8087] = 2,
    ACTIONS(712), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(710), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8107] = 2,
    ACTIONS(716), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(714), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8127] = 2,
    ACTIONS(720), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(718), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8147] = 2,
    ACTIONS(724), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(722), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8167] = 2,
    ACTIONS(728), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(726), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8187] = 2,
    ACTIONS(732), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(730), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8207] = 2,
    ACTIONS(430), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(428), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8227] = 2,
    ACTIONS(426), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(424), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8247] = 2,
    ACTIONS(736), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(734), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8267] = 2,
    ACTIONS(740), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(738), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8287] = 2,
    ACTIONS(444), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(442), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8307] = 2,
    ACTIONS(414), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(412), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8327] = 2,
    ACTIONS(744), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(742), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8347] = 2,
    ACTIONS(394), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(392), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8367] = 2,
    ACTIONS(748), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(746), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8387] = 1,
    ACTIONS(750), 10,
      anon_sym_SLASH,
      aux_sym_result_code_token9,
      anon_sym_u2215,
      aux_sym_result_code_token10,
      anon_sym_u2044,
      aux_sym_result_code_token11,
      anon_sym_u27cb,
      aux_sym_result_code_token12,
      anon_sym_u29f8,
      aux_sym_result_code_token13,
  [8400] = 7,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 1,
      aux_sym_inline_comment_text_token1,
    STATE(65), 1,
      sym_inline_comment_delimiter_close,
    STATE(206), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(230), 1,
      sym_inline_comment_text,
    STATE(208), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8423] = 7,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    ACTIONS(756), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_inline_comment_delimiter_close,
    STATE(206), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(227), 1,
      sym_inline_comment_text,
    STATE(208), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8446] = 7,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    ACTIONS(756), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_inline_comment_delimiter_close,
    STATE(206), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(239), 1,
      sym_inline_comment_text,
    STATE(208), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8469] = 6,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    ACTIONS(764), 1,
      aux_sym_inline_comment_text_token1,
    STATE(206), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(222), 1,
      sym__recursive_inline_comment_delimiter_close,
    STATE(207), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [8489] = 6,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    ACTIONS(768), 1,
      aux_sym_inline_comment_text_token1,
    STATE(206), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(221), 1,
      sym__recursive_inline_comment_delimiter_close,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [8509] = 5,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(772), 1,
      aux_sym_inline_comment_text_token1,
    STATE(206), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(209), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8526] = 5,
    ACTIONS(774), 1,
      anon_sym_LBRACE,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 1,
      aux_sym_inline_comment_text_token1,
    STATE(206), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(209), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8543] = 5,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    ACTIONS(787), 1,
      aux_sym_inline_comment_text_token1,
    STATE(206), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [8560] = 5,
    ACTIONS(790), 1,
      sym__san_file,
    ACTIONS(792), 1,
      sym__san_rank,
    ACTIONS(794), 1,
      sym__san_capture_symbol,
    ACTIONS(796), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__san_square,
  [8576] = 5,
    ACTIONS(798), 1,
      sym__san_file,
    ACTIONS(800), 1,
      sym__san_rank,
    ACTIONS(802), 1,
      sym__san_capture_symbol,
    ACTIONS(804), 1,
      anon_sym_AT,
    STATE(175), 1,
      sym__san_square,
  [8592] = 5,
    ACTIONS(806), 1,
      sym__san_file,
    ACTIONS(808), 1,
      sym__san_rank,
    ACTIONS(810), 1,
      sym__san_capture_symbol,
    ACTIONS(812), 1,
      anon_sym_AT,
    STATE(87), 1,
      sym__san_square,
  [8608] = 4,
    ACTIONS(814), 1,
      sym__san_file,
    ACTIONS(816), 1,
      sym__san_rank,
    ACTIONS(818), 1,
      sym__san_capture_symbol,
    STATE(11), 1,
      sym__san_square,
  [8621] = 4,
    ACTIONS(820), 1,
      sym__san_file,
    ACTIONS(822), 1,
      sym__san_rank,
    ACTIONS(824), 1,
      sym__san_capture_symbol,
    STATE(30), 1,
      sym__san_square,
  [8634] = 4,
    ACTIONS(826), 1,
      sym__san_file,
    ACTIONS(828), 1,
      sym__san_rank,
    ACTIONS(830), 1,
      sym__san_capture_symbol,
    STATE(165), 1,
      sym__san_square,
  [8647] = 4,
    ACTIONS(832), 1,
      sym__san_file,
    ACTIONS(834), 1,
      sym__san_rank,
    ACTIONS(836), 1,
      sym__san_capture_symbol,
    STATE(83), 1,
      sym__san_square,
  [8660] = 4,
    ACTIONS(838), 1,
      sym__san_file,
    ACTIONS(840), 1,
      sym__san_rank,
    ACTIONS(842), 1,
      sym__san_capture_symbol,
    STATE(36), 1,
      sym__san_square,
  [8673] = 4,
    ACTIONS(844), 1,
      sym__san_file,
    ACTIONS(846), 1,
      sym__san_rank,
    ACTIONS(848), 1,
      sym__san_capture_symbol,
    STATE(138), 1,
      sym__san_square,
  [8686] = 2,
    ACTIONS(852), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(850), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8694] = 2,
    ACTIONS(856), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(854), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8702] = 2,
    ACTIONS(860), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(858), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8710] = 3,
    ACTIONS(826), 1,
      sym__san_file,
    ACTIONS(830), 1,
      sym__san_capture_symbol,
    STATE(165), 1,
      sym__san_square,
  [8720] = 1,
    ACTIONS(862), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [8726] = 3,
    ACTIONS(820), 1,
      sym__san_file,
    ACTIONS(824), 1,
      sym__san_capture_symbol,
    STATE(30), 1,
      sym__san_square,
  [8736] = 3,
    ACTIONS(832), 1,
      sym__san_file,
    ACTIONS(836), 1,
      sym__san_capture_symbol,
    STATE(83), 1,
      sym__san_square,
  [8746] = 2,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_inline_comment_delimiter_close,
  [8753] = 2,
    ACTIONS(826), 1,
      sym__san_file,
    STATE(165), 1,
      sym__san_square,
  [8760] = 2,
    ACTIONS(820), 1,
      sym__san_file,
    STATE(32), 1,
      sym__san_square,
  [8767] = 2,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_inline_comment_delimiter_close,
  [8774] = 2,
    ACTIONS(820), 1,
      sym__san_file,
    STATE(25), 1,
      sym__san_square,
  [8781] = 2,
    ACTIONS(832), 1,
      sym__san_file,
    STATE(82), 1,
      sym__san_square,
  [8788] = 2,
    ACTIONS(814), 1,
      sym__san_file,
    STATE(10), 1,
      sym__san_square,
  [8795] = 2,
    ACTIONS(820), 1,
      sym__san_file,
    STATE(28), 1,
      sym__san_square,
  [8802] = 2,
    ACTIONS(832), 1,
      sym__san_file,
    STATE(76), 1,
      sym__san_square,
  [8809] = 1,
    ACTIONS(862), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
  [8814] = 2,
    ACTIONS(820), 1,
      sym__san_file,
    STATE(29), 1,
      sym__san_square,
  [8821] = 2,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_variation_delimiter_close,
  [8828] = 2,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_inline_comment_delimiter_close,
  [8835] = 2,
    ACTIONS(820), 1,
      sym__san_file,
    STATE(30), 1,
      sym__san_square,
  [8842] = 2,
    ACTIONS(814), 1,
      sym__san_file,
    STATE(12), 1,
      sym__san_square,
  [8849] = 2,
    ACTIONS(832), 1,
      sym__san_file,
    STATE(85), 1,
      sym__san_square,
  [8856] = 2,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_variation_delimiter_close,
  [8863] = 2,
    ACTIONS(820), 1,
      sym__san_file,
    STATE(38), 1,
      sym__san_square,
  [8870] = 2,
    ACTIONS(832), 1,
      sym__san_file,
    STATE(84), 1,
      sym__san_square,
  [8877] = 2,
    ACTIONS(832), 1,
      sym__san_file,
    STATE(83), 1,
      sym__san_square,
  [8884] = 2,
    ACTIONS(826), 1,
      sym__san_file,
    STATE(168), 1,
      sym__san_square,
  [8891] = 2,
    ACTIONS(838), 1,
      sym__san_file,
    STATE(27), 1,
      sym__san_square,
  [8898] = 2,
    ACTIONS(826), 1,
      sym__san_file,
    STATE(170), 1,
      sym__san_square,
  [8905] = 2,
    ACTIONS(844), 1,
      sym__san_file,
    STATE(137), 1,
      sym__san_square,
  [8912] = 2,
    ACTIONS(826), 1,
      sym__san_file,
    STATE(166), 1,
      sym__san_square,
  [8919] = 2,
    ACTIONS(826), 1,
      sym__san_file,
    STATE(173), 1,
      sym__san_square,
  [8926] = 2,
    ACTIONS(838), 1,
      sym__san_file,
    STATE(31), 1,
      sym__san_square,
  [8933] = 2,
    ACTIONS(826), 1,
      sym__san_file,
    STATE(174), 1,
      sym__san_square,
  [8940] = 2,
    ACTIONS(844), 1,
      sym__san_file,
    STATE(136), 1,
      sym__san_square,
  [8947] = 2,
    ACTIONS(832), 1,
      sym__san_file,
    STATE(72), 1,
      sym__san_square,
  [8954] = 2,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_variation_delimiter_close,
  [8961] = 1,
    ACTIONS(870), 1,
      sym__san_promotable_piece,
  [8965] = 1,
    ACTIONS(872), 1,
      anon_sym_1,
  [8969] = 1,
    ACTIONS(874), 1,
      sym__san_rank,
  [8973] = 1,
    ACTIONS(876), 1,
      sym_rest_of_line_comment_text,
  [8977] = 1,
    ACTIONS(878), 1,
      sym__san_promotable_piece,
  [8981] = 1,
    ACTIONS(880), 1,
      sym__san_rank,
  [8985] = 1,
    ACTIONS(882), 1,
      sym_tagpair_delimiter_close,
  [8989] = 1,
    ACTIONS(884), 1,
      sym_rest_of_line_comment_text,
  [8993] = 1,
    ACTIONS(886), 1,
      sym_tagpair_key,
  [8997] = 1,
    ACTIONS(557), 1,
      sym_tagpair_delimiter_close,
  [9001] = 1,
    ACTIONS(888), 1,
      sym_rest_of_line_comment_text,
  [9005] = 1,
    ACTIONS(890), 1,
      anon_sym_PERCENT,
  [9009] = 1,
    ACTIONS(892), 1,
      sym__san_rank,
  [9013] = 1,
    ACTIONS(894), 1,
      anon_sym_2,
  [9017] = 1,
    ACTIONS(896), 1,
      anon_sym_2,
  [9021] = 1,
    ACTIONS(898), 1,
      sym_rest_of_line_comment_text,
  [9025] = 1,
    ACTIONS(900), 1,
      sym_tagpair_delimiter_close,
  [9029] = 1,
    ACTIONS(902), 1,
      sym_tagpair_delimiter_close,
  [9033] = 1,
    ACTIONS(862), 1,
      anon_sym_1,
  [9037] = 1,
    ACTIONS(904), 1,
      sym_rest_of_line_comment_text,
  [9041] = 1,
    ACTIONS(906), 1,
      sym__san_promotable_piece,
  [9045] = 1,
    ACTIONS(908), 1,
      anon_sym_AT,
  [9049] = 1,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
  [9053] = 1,
    ACTIONS(912), 1,
      sym_rest_of_line_comment_text,
  [9057] = 1,
    ACTIONS(914), 1,
      sym__san_rank,
  [9061] = 1,
    ACTIONS(916), 1,
      sym_rest_of_line_comment_text,
  [9065] = 1,
    ACTIONS(918), 1,
      sym__san_rank,
  [9069] = 1,
    ACTIONS(920), 1,
      sym_rest_of_line_comment_text,
  [9073] = 1,
    ACTIONS(922), 1,
      sym__san_rank,
  [9077] = 1,
    ACTIONS(924), 1,
      sym_rest_of_line_comment_text,
  [9081] = 1,
    ACTIONS(926), 1,
      anon_sym_AT,
  [9085] = 1,
    ACTIONS(928), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 111,
  [SMALL_STATE(4)] = 222,
  [SMALL_STATE(5)] = 341,
  [SMALL_STATE(6)] = 451,
  [SMALL_STATE(7)] = 561,
  [SMALL_STATE(8)] = 679,
  [SMALL_STATE(9)] = 738,
  [SMALL_STATE(10)] = 788,
  [SMALL_STATE(11)] = 843,
  [SMALL_STATE(12)] = 898,
  [SMALL_STATE(13)] = 953,
  [SMALL_STATE(14)] = 1067,
  [SMALL_STATE(15)] = 1119,
  [SMALL_STATE(16)] = 1177,
  [SMALL_STATE(17)] = 1291,
  [SMALL_STATE(18)] = 1339,
  [SMALL_STATE(19)] = 1386,
  [SMALL_STATE(20)] = 1449,
  [SMALL_STATE(21)] = 1512,
  [SMALL_STATE(22)] = 1560,
  [SMALL_STATE(23)] = 1606,
  [SMALL_STATE(24)] = 1652,
  [SMALL_STATE(25)] = 1698,
  [SMALL_STATE(26)] = 1744,
  [SMALL_STATE(27)] = 1792,
  [SMALL_STATE(28)] = 1844,
  [SMALL_STATE(29)] = 1890,
  [SMALL_STATE(30)] = 1936,
  [SMALL_STATE(31)] = 1982,
  [SMALL_STATE(32)] = 2034,
  [SMALL_STATE(33)] = 2080,
  [SMALL_STATE(34)] = 2126,
  [SMALL_STATE(35)] = 2172,
  [SMALL_STATE(36)] = 2218,
  [SMALL_STATE(37)] = 2270,
  [SMALL_STATE(38)] = 2316,
  [SMALL_STATE(39)] = 2362,
  [SMALL_STATE(40)] = 2409,
  [SMALL_STATE(41)] = 2456,
  [SMALL_STATE(42)] = 2503,
  [SMALL_STATE(43)] = 2548,
  [SMALL_STATE(44)] = 2593,
  [SMALL_STATE(45)] = 2638,
  [SMALL_STATE(46)] = 2685,
  [SMALL_STATE(47)] = 2744,
  [SMALL_STATE(48)] = 2803,
  [SMALL_STATE(49)] = 2852,
  [SMALL_STATE(50)] = 2911,
  [SMALL_STATE(51)] = 2955,
  [SMALL_STATE(52)] = 3001,
  [SMALL_STATE(53)] = 3103,
  [SMALL_STATE(54)] = 3147,
  [SMALL_STATE(55)] = 3249,
  [SMALL_STATE(56)] = 3293,
  [SMALL_STATE(57)] = 3337,
  [SMALL_STATE(58)] = 3381,
  [SMALL_STATE(59)] = 3425,
  [SMALL_STATE(60)] = 3475,
  [SMALL_STATE(61)] = 3519,
  [SMALL_STATE(62)] = 3563,
  [SMALL_STATE(63)] = 3607,
  [SMALL_STATE(64)] = 3651,
  [SMALL_STATE(65)] = 3695,
  [SMALL_STATE(66)] = 3739,
  [SMALL_STATE(67)] = 3783,
  [SMALL_STATE(68)] = 3827,
  [SMALL_STATE(69)] = 3871,
  [SMALL_STATE(70)] = 3915,
  [SMALL_STATE(71)] = 3960,
  [SMALL_STATE(72)] = 4003,
  [SMALL_STATE(73)] = 4046,
  [SMALL_STATE(74)] = 4089,
  [SMALL_STATE(75)] = 4134,
  [SMALL_STATE(76)] = 4177,
  [SMALL_STATE(77)] = 4220,
  [SMALL_STATE(78)] = 4263,
  [SMALL_STATE(79)] = 4362,
  [SMALL_STATE(80)] = 4405,
  [SMALL_STATE(81)] = 4448,
  [SMALL_STATE(82)] = 4497,
  [SMALL_STATE(83)] = 4540,
  [SMALL_STATE(84)] = 4583,
  [SMALL_STATE(85)] = 4626,
  [SMALL_STATE(86)] = 4669,
  [SMALL_STATE(87)] = 4712,
  [SMALL_STATE(88)] = 4755,
  [SMALL_STATE(89)] = 4799,
  [SMALL_STATE(90)] = 4841,
  [SMALL_STATE(91)] = 4885,
  [SMALL_STATE(92)] = 4929,
  [SMALL_STATE(93)] = 4971,
  [SMALL_STATE(94)] = 5015,
  [SMALL_STATE(95)] = 5059,
  [SMALL_STATE(96)] = 5100,
  [SMALL_STATE(97)] = 5141,
  [SMALL_STATE(98)] = 5234,
  [SMALL_STATE(99)] = 5275,
  [SMALL_STATE(100)] = 5316,
  [SMALL_STATE(101)] = 5409,
  [SMALL_STATE(102)] = 5450,
  [SMALL_STATE(103)] = 5491,
  [SMALL_STATE(104)] = 5532,
  [SMALL_STATE(105)] = 5573,
  [SMALL_STATE(106)] = 5614,
  [SMALL_STATE(107)] = 5655,
  [SMALL_STATE(108)] = 5696,
  [SMALL_STATE(109)] = 5737,
  [SMALL_STATE(110)] = 5778,
  [SMALL_STATE(111)] = 5819,
  [SMALL_STATE(112)] = 5860,
  [SMALL_STATE(113)] = 5901,
  [SMALL_STATE(114)] = 5942,
  [SMALL_STATE(115)] = 5983,
  [SMALL_STATE(116)] = 6024,
  [SMALL_STATE(117)] = 6065,
  [SMALL_STATE(118)] = 6158,
  [SMALL_STATE(119)] = 6245,
  [SMALL_STATE(120)] = 6332,
  [SMALL_STATE(121)] = 6375,
  [SMALL_STATE(122)] = 6412,
  [SMALL_STATE(123)] = 6449,
  [SMALL_STATE(124)] = 6486,
  [SMALL_STATE(125)] = 6521,
  [SMALL_STATE(126)] = 6555,
  [SMALL_STATE(127)] = 6589,
  [SMALL_STATE(128)] = 6620,
  [SMALL_STATE(129)] = 6662,
  [SMALL_STATE(130)] = 6694,
  [SMALL_STATE(131)] = 6726,
  [SMALL_STATE(132)] = 6763,
  [SMALL_STATE(133)] = 6795,
  [SMALL_STATE(134)] = 6821,
  [SMALL_STATE(135)] = 6853,
  [SMALL_STATE(136)] = 6885,
  [SMALL_STATE(137)] = 6916,
  [SMALL_STATE(138)] = 6947,
  [SMALL_STATE(139)] = 6978,
  [SMALL_STATE(140)] = 7013,
  [SMALL_STATE(141)] = 7048,
  [SMALL_STATE(142)] = 7080,
  [SMALL_STATE(143)] = 7108,
  [SMALL_STATE(144)] = 7132,
  [SMALL_STATE(145)] = 7164,
  [SMALL_STATE(146)] = 7189,
  [SMALL_STATE(147)] = 7211,
  [SMALL_STATE(148)] = 7235,
  [SMALL_STATE(149)] = 7257,
  [SMALL_STATE(150)] = 7279,
  [SMALL_STATE(151)] = 7301,
  [SMALL_STATE(152)] = 7323,
  [SMALL_STATE(153)] = 7345,
  [SMALL_STATE(154)] = 7367,
  [SMALL_STATE(155)] = 7389,
  [SMALL_STATE(156)] = 7411,
  [SMALL_STATE(157)] = 7433,
  [SMALL_STATE(158)] = 7457,
  [SMALL_STATE(159)] = 7479,
  [SMALL_STATE(160)] = 7501,
  [SMALL_STATE(161)] = 7523,
  [SMALL_STATE(162)] = 7545,
  [SMALL_STATE(163)] = 7567,
  [SMALL_STATE(164)] = 7589,
  [SMALL_STATE(165)] = 7611,
  [SMALL_STATE(166)] = 7633,
  [SMALL_STATE(167)] = 7655,
  [SMALL_STATE(168)] = 7679,
  [SMALL_STATE(169)] = 7701,
  [SMALL_STATE(170)] = 7723,
  [SMALL_STATE(171)] = 7745,
  [SMALL_STATE(172)] = 7767,
  [SMALL_STATE(173)] = 7789,
  [SMALL_STATE(174)] = 7811,
  [SMALL_STATE(175)] = 7833,
  [SMALL_STATE(176)] = 7855,
  [SMALL_STATE(177)] = 7878,
  [SMALL_STATE(178)] = 7899,
  [SMALL_STATE(179)] = 7922,
  [SMALL_STATE(180)] = 7941,
  [SMALL_STATE(181)] = 7960,
  [SMALL_STATE(182)] = 7983,
  [SMALL_STATE(183)] = 8006,
  [SMALL_STATE(184)] = 8027,
  [SMALL_STATE(185)] = 8048,
  [SMALL_STATE(186)] = 8067,
  [SMALL_STATE(187)] = 8087,
  [SMALL_STATE(188)] = 8107,
  [SMALL_STATE(189)] = 8127,
  [SMALL_STATE(190)] = 8147,
  [SMALL_STATE(191)] = 8167,
  [SMALL_STATE(192)] = 8187,
  [SMALL_STATE(193)] = 8207,
  [SMALL_STATE(194)] = 8227,
  [SMALL_STATE(195)] = 8247,
  [SMALL_STATE(196)] = 8267,
  [SMALL_STATE(197)] = 8287,
  [SMALL_STATE(198)] = 8307,
  [SMALL_STATE(199)] = 8327,
  [SMALL_STATE(200)] = 8347,
  [SMALL_STATE(201)] = 8367,
  [SMALL_STATE(202)] = 8387,
  [SMALL_STATE(203)] = 8400,
  [SMALL_STATE(204)] = 8423,
  [SMALL_STATE(205)] = 8446,
  [SMALL_STATE(206)] = 8469,
  [SMALL_STATE(207)] = 8489,
  [SMALL_STATE(208)] = 8509,
  [SMALL_STATE(209)] = 8526,
  [SMALL_STATE(210)] = 8543,
  [SMALL_STATE(211)] = 8560,
  [SMALL_STATE(212)] = 8576,
  [SMALL_STATE(213)] = 8592,
  [SMALL_STATE(214)] = 8608,
  [SMALL_STATE(215)] = 8621,
  [SMALL_STATE(216)] = 8634,
  [SMALL_STATE(217)] = 8647,
  [SMALL_STATE(218)] = 8660,
  [SMALL_STATE(219)] = 8673,
  [SMALL_STATE(220)] = 8686,
  [SMALL_STATE(221)] = 8694,
  [SMALL_STATE(222)] = 8702,
  [SMALL_STATE(223)] = 8710,
  [SMALL_STATE(224)] = 8720,
  [SMALL_STATE(225)] = 8726,
  [SMALL_STATE(226)] = 8736,
  [SMALL_STATE(227)] = 8746,
  [SMALL_STATE(228)] = 8753,
  [SMALL_STATE(229)] = 8760,
  [SMALL_STATE(230)] = 8767,
  [SMALL_STATE(231)] = 8774,
  [SMALL_STATE(232)] = 8781,
  [SMALL_STATE(233)] = 8788,
  [SMALL_STATE(234)] = 8795,
  [SMALL_STATE(235)] = 8802,
  [SMALL_STATE(236)] = 8809,
  [SMALL_STATE(237)] = 8814,
  [SMALL_STATE(238)] = 8821,
  [SMALL_STATE(239)] = 8828,
  [SMALL_STATE(240)] = 8835,
  [SMALL_STATE(241)] = 8842,
  [SMALL_STATE(242)] = 8849,
  [SMALL_STATE(243)] = 8856,
  [SMALL_STATE(244)] = 8863,
  [SMALL_STATE(245)] = 8870,
  [SMALL_STATE(246)] = 8877,
  [SMALL_STATE(247)] = 8884,
  [SMALL_STATE(248)] = 8891,
  [SMALL_STATE(249)] = 8898,
  [SMALL_STATE(250)] = 8905,
  [SMALL_STATE(251)] = 8912,
  [SMALL_STATE(252)] = 8919,
  [SMALL_STATE(253)] = 8926,
  [SMALL_STATE(254)] = 8933,
  [SMALL_STATE(255)] = 8940,
  [SMALL_STATE(256)] = 8947,
  [SMALL_STATE(257)] = 8954,
  [SMALL_STATE(258)] = 8961,
  [SMALL_STATE(259)] = 8965,
  [SMALL_STATE(260)] = 8969,
  [SMALL_STATE(261)] = 8973,
  [SMALL_STATE(262)] = 8977,
  [SMALL_STATE(263)] = 8981,
  [SMALL_STATE(264)] = 8985,
  [SMALL_STATE(265)] = 8989,
  [SMALL_STATE(266)] = 8993,
  [SMALL_STATE(267)] = 8997,
  [SMALL_STATE(268)] = 9001,
  [SMALL_STATE(269)] = 9005,
  [SMALL_STATE(270)] = 9009,
  [SMALL_STATE(271)] = 9013,
  [SMALL_STATE(272)] = 9017,
  [SMALL_STATE(273)] = 9021,
  [SMALL_STATE(274)] = 9025,
  [SMALL_STATE(275)] = 9029,
  [SMALL_STATE(276)] = 9033,
  [SMALL_STATE(277)] = 9037,
  [SMALL_STATE(278)] = 9041,
  [SMALL_STATE(279)] = 9045,
  [SMALL_STATE(280)] = 9049,
  [SMALL_STATE(281)] = 9053,
  [SMALL_STATE(282)] = 9057,
  [SMALL_STATE(283)] = 9061,
  [SMALL_STATE(284)] = 9065,
  [SMALL_STATE(285)] = 9069,
  [SMALL_STATE(286)] = 9073,
  [SMALL_STATE(287)] = 9077,
  [SMALL_STATE(288)] = 9081,
  [SMALL_STATE(289)] = 9085,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, 0, 7),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, 0, 7),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(265),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(97),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(220),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(68),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(214),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(211),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(289),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(244),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(26),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(45),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(269),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(265),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(100),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(220),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(106),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(218),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(213),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(279),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(279),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(232),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(74),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(93),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(265),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(144),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(266),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(100),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(220),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(106),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(218),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(213),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(279),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(232),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(74),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(93),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(269),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 13),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 37),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 37),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 26),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 26),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, 0, 25),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, 0, 25),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move, 1, 0, 9),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move, 1, 0, 9),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move, 1, 0, 11),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move, 1, 0, 11),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation, 1, 0, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation, 1, 0, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 28),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, 0, 6),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(49),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(265),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(266),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(269),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 12),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 12),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, 0, 31),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation, 2, 0, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation, 2, 0, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, 0, 17),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, 0, 17),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move, 2, 0, 11),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move, 2, 0, 11),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, 0, 35),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, 0, 35),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_delimiter_close, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation_delimiter_close, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 10),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 10),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, 0, 42),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, 0, 42),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move, 2, 0, 9),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move, 2, 0, 9),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment_delimiter_close, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_delimiter_close, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 30),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 30),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, 0, 25),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, 0, 25),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, 0, 44),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, 0, 44),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, 0, 18),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(265),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(117),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(220),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(201),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(219),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(212),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(288),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(288),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(251),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(147),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(182),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(269),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1, 0, 0), SHIFT(121),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trailing_garbage_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trailing_garbage_repeat1, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trailing_garbage_repeat1, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trailing_garbage, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailing_garbage, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 47),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 47),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 38),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 38),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 29),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 29),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 39),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 39),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, 0, 49),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 5, 0, 49),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 41),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 41),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 46),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 46),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 27),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 27),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 24),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 24),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_lan_move, 1, 0, 22),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_lan_move, 1, 0, 22),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_san_move, 1, 0, 20),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_san_move, 1, 0, 20),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_annotation, 1, 0, 15),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_annotation, 1, 0, 15),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 21),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 21),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 16),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 16),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_annotation, 2, 0, 15),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_annotation, 2, 0, 15),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 18),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 18),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 23),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 23),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 19),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 19),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_san_move, 2, 0, 20),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_san_move, 2, 0, 20),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, 0, 45),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, 0, 45),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, 0, 34),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, 0, 34),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_lan_move, 2, 0, 22),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_lan_move, 2, 0, 22),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 14),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 14),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_text, 1, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0), SHIFT_REPEAT(206),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0), SHIFT_REPEAT(210),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_delimiter_open, 1, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment_delimiter_open, 1, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recursive_inline_comment, 3, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recursive_inline_comment, 3, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recursive_inline_comment, 2, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recursive_inline_comment, 2, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, 0, 43),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 1, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, 0, 48),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 2, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [910] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__full_line_comment_delimiter_bol_assertion = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__full_line_comment_delimiter_bol_assertion] = sym__full_line_comment_delimiter_bol_assertion,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__full_line_comment_delimiter_bol_assertion] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pgn_external_scanner_create(void);
void tree_sitter_pgn_external_scanner_destroy(void *);
bool tree_sitter_pgn_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pgn_external_scanner_serialize(void *, char *);
void tree_sitter_pgn_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pgn(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pgn_external_scanner_create,
      tree_sitter_pgn_external_scanner_destroy,
      tree_sitter_pgn_external_scanner_scan,
      tree_sitter_pgn_external_scanner_serialize,
      tree_sitter_pgn_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
