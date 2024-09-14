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
#define STATE_COUNT 279
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 47

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
  sym_variation_delimiter_close = 40,
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
  anon_sym_EQ = 51,
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
  sym_inline_comment_delimiter_open = 121,
  sym_inline_comment_delimiter_close = 122,
  sym__recursive_inline_comment_delimiter_open = 123,
  sym__recursive_inline_comment_delimiter_close = 124,
  sym__movetext_element = 125,
  sym__variation_movetext_element = 126,
  sym_variation = 127,
  sym_recursive_variation = 128,
  sym_inline_comment = 129,
  sym__recursive_inline_comment = 130,
  sym_inline_comment_text = 131,
  aux_sym__recursive_inline_comment_text = 132,
  sym__san_move = 133,
  sym__variation_san_move = 134,
  sym_san_move = 135,
  sym__san_move_piece = 136,
  sym__lan_move = 137,
  sym__variation_lan_move = 138,
  sym_lan_move = 139,
  sym__san_promotion_symbol = 140,
  sym__san_square = 141,
  sym__san_promotion = 142,
  sym__san_move_pawn = 143,
  sym__san_drop_pawn = 144,
  sym__san_move_major_or_minor_piece = 145,
  sym__san_drop_major_or_minor_piece = 146,
  sym__lan_move_by_coordinates = 147,
  sym__annotation = 148,
  sym__variation_annotation = 149,
  sym_result_code = 150,
  aux_sym_series_of_games_repeat1 = 151,
  aux_sym_freestanding_comment_repeat1 = 152,
  aux_sym_header_repeat1 = 153,
  aux_sym_tagpair_value_contents_repeat1 = 154,
  aux_sym_movetext_repeat1 = 155,
  aux_sym_variation_movetext_repeat1 = 156,
  aux_sym_inline_comment_text_repeat1 = 157,
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
  [sym_variation_delimiter_close] = "variation_delimiter_close",
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
  [anon_sym_EQ] = "=",
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
  [sym_inline_comment_delimiter_open] = "inline_comment_delimiter_open",
  [sym_inline_comment_delimiter_close] = "inline_comment_delimiter_close",
  [sym__recursive_inline_comment_delimiter_open] = "_recursive_inline_comment_delimiter_open",
  [sym__recursive_inline_comment_delimiter_close] = "_recursive_inline_comment_delimiter_close",
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
  [sym__san_promotion_symbol] = "_san_promotion_symbol",
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
  [sym_variation_delimiter_close] = sym_variation_delimiter_close,
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
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym_inline_comment_delimiter_open] = sym_inline_comment_delimiter_open,
  [sym_inline_comment_delimiter_close] = sym_inline_comment_delimiter_close,
  [sym__recursive_inline_comment_delimiter_open] = sym__recursive_inline_comment_delimiter_open,
  [sym__recursive_inline_comment_delimiter_close] = sym__recursive_inline_comment_delimiter_close,
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
  [sym__san_promotion_symbol] = sym__san_promotion_symbol,
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
  [sym_variation_delimiter_close] = {
    .visible = true,
    .named = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
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
  [sym__san_promotion_symbol] = {
    .visible = false,
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
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 1},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 1},
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
  [41] = {.index = 91, .length = 3},
  [42] = {.index = 94, .length = 2},
  [43] = {.index = 96, .length = 5},
  [44] = {.index = 101, .length = 3},
  [45] = {.index = 104, .length = 3},
  [46] = {.index = 107, .length = 3},
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
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [20] =
    {field_variation_move_number, 0},
  [21] =
    {field_variation_annotation, 0},
  [22] =
    {field_variation_comment, 0},
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
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [94] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [96] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [101] =
    {field_recursive_variation_content, 1},
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 2},
  [104] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [107] =
    {field_tagpair_value_contents, 1},
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 2},
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
  [5] = 5,
  [6] = 4,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 8,
  [16] = 12,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 13,
  [21] = 10,
  [22] = 22,
  [23] = 12,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 12,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 17,
  [46] = 46,
  [47] = 47,
  [48] = 12,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
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
  [70] = 52,
  [71] = 36,
  [72] = 29,
  [73] = 58,
  [74] = 67,
  [75] = 37,
  [76] = 58,
  [77] = 40,
  [78] = 35,
  [79] = 41,
  [80] = 26,
  [81] = 81,
  [82] = 12,
  [83] = 38,
  [84] = 84,
  [85] = 85,
  [86] = 30,
  [87] = 34,
  [88] = 33,
  [89] = 25,
  [90] = 39,
  [91] = 28,
  [92] = 50,
  [93] = 51,
  [94] = 94,
  [95] = 52,
  [96] = 47,
  [97] = 42,
  [98] = 94,
  [99] = 46,
  [100] = 100,
  [101] = 63,
  [102] = 58,
  [103] = 69,
  [104] = 66,
  [105] = 65,
  [106] = 68,
  [107] = 55,
  [108] = 56,
  [109] = 53,
  [110] = 110,
  [111] = 59,
  [112] = 62,
  [113] = 60,
  [114] = 61,
  [115] = 115,
  [116] = 64,
  [117] = 57,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 8,
  [127] = 13,
  [128] = 128,
  [129] = 12,
  [130] = 10,
  [131] = 14,
  [132] = 132,
  [133] = 133,
  [134] = 12,
  [135] = 132,
  [136] = 133,
  [137] = 17,
  [138] = 52,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 29,
  [145] = 145,
  [146] = 40,
  [147] = 147,
  [148] = 148,
  [149] = 35,
  [150] = 36,
  [151] = 37,
  [152] = 41,
  [153] = 28,
  [154] = 26,
  [155] = 34,
  [156] = 39,
  [157] = 30,
  [158] = 158,
  [159] = 159,
  [160] = 58,
  [161] = 38,
  [162] = 52,
  [163] = 12,
  [164] = 25,
  [165] = 33,
  [166] = 50,
  [167] = 58,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 51,
  [173] = 173,
  [174] = 174,
  [175] = 52,
  [176] = 57,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 60,
  [183] = 183,
  [184] = 58,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 62,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 192,
  [194] = 192,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 200,
  [202] = 200,
  [203] = 203,
  [204] = 204,
  [205] = 203,
  [206] = 204,
  [207] = 204,
  [208] = 203,
  [209] = 209,
  [210] = 209,
  [211] = 209,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 217,
  [221] = 221,
  [222] = 221,
  [223] = 223,
  [224] = 224,
  [225] = 219,
  [226] = 226,
  [227] = 227,
  [228] = 226,
  [229] = 227,
  [230] = 218,
  [231] = 217,
  [232] = 223,
  [233] = 216,
  [234] = 216,
  [235] = 218,
  [236] = 221,
  [237] = 223,
  [238] = 238,
  [239] = 226,
  [240] = 224,
  [241] = 219,
  [242] = 227,
  [243] = 224,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 123,
  [257] = 249,
  [258] = 258,
  [259] = 246,
  [260] = 260,
  [261] = 261,
  [262] = 246,
  [263] = 263,
  [264] = 264,
  [265] = 249,
  [266] = 251,
  [267] = 251,
  [268] = 268,
  [269] = 247,
  [270] = 249,
  [271] = 246,
  [272] = 249,
  [273] = 246,
  [274] = 249,
  [275] = 246,
  [276] = 249,
  [277] = 260,
  [278] = 260,
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
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '"', 2228,
        '#', 2357,
        '%', 2215,
        '&', 1126,
        '(', 2296,
        ')', 2298,
        '*', 2433,
        '-', 2387,
        '/', 2416,
        '0', 2410,
        '1', 2383,
        '2', 2426,
        ';', 2213,
        '=', 2335,
        '@', 2345,
        'O', 2406,
        'P', 2338,
        '[', 2224,
        ']', 2226,
        'o', 2415,
        '{', 2299,
        '}', 2301,
        0xbd, 2429,
        0x2ba, 2248,
        0x2dd, 2246,
        0x2ee, 2252,
        0x2f6, 2250,
        0x5f2, 2254,
        0x5f4, 2244,
        0x66d, 2449,
        0x2010, 2391,
        0x2011, 2393,
        0x2012, 2395,
        0x2013, 2397,
        0x2014, 2399,
        0x201c, 2232,
        0x201d, 2234,
        0x201f, 2236,
        0x2033, 2238,
        0x2036, 2240,
        0x2044, 2420,
        0x204e, 2445,
        0x2212, 2389,
        0x2215, 2418,
        0x2217, 2437,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2796, 2401,
        0x27cb, 2422,
        0x29f8, 2424,
        0x3003, 2242,
        0xff02, 2230,
        '+', 2360,
        0x16ed, 2360,
        0x2795, 2360,
        ':', 2333,
        'X', 2333,
        'x', 2333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2209);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(2322);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2323);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1180);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(839);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '#', 139,
        'D', 570,
        'L', 511,
        'M', 627,
        'O', 728,
        'P', 635,
        'R', 512,
        'S', 601,
        'U', 690,
        'b', 626,
        'c', 624,
        'd', 510,
        'e', 696,
        'h', 515,
        'i', 655,
        'l', 568,
        'm', 521,
        'n', 508,
        'o', 547,
        'p', 571,
        'q', 767,
        'r', 513,
        's', 634,
        'u', 514,
        'x', 678,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(792);
      if (lookahead == 'm') ADVANCE(553);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '#', 145,
        'd', 530,
        'e', 707,
        'h', 791,
        'm', 549,
        'n', 550,
        's', 686,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(677);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == 'q') ADVANCE(787);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(721);
      if (lookahead == 'h') ADVANCE(528);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '#', 151,
        'D', 570,
        'L', 511,
        'M', 627,
        'O', 728,
        'P', 635,
        'R', 512,
        'S', 601,
        'U', 690,
        'a', 744,
        'b', 626,
        'c', 624,
        'd', 510,
        'e', 696,
        'f', 716,
        'h', 518,
        'i', 655,
        'l', 567,
        'm', 520,
        'n', 508,
        'o', 547,
        'p', 572,
        'q', 767,
        'r', 513,
        's', 634,
        'u', 514,
        'x', 678,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '#', 192,
        'd', 535,
        'h', 793,
        'm', 555,
        'n', 556,
        'p', 650,
        's', 687,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '#', 215,
        'd', 530,
        'e', 707,
        'h', 791,
        'm', 549,
        'n', 550,
        'p', 651,
        's', 686,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '#', 220,
        'd', 538,
        'h', 796,
        'm', 561,
        'n', 562,
        's', 688,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead == 'h') ADVANCE(791);
      if (lookahead == 'm') ADVANCE(549);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '#', 226,
        'D', 570,
        'L', 511,
        'M', 627,
        'O', 728,
        'P', 635,
        'R', 512,
        'S', 601,
        'U', 690,
        'a', 744,
        'b', 626,
        'c', 624,
        'd', 510,
        'e', 696,
        'f', 716,
        'h', 518,
        'i', 655,
        'l', 567,
        'm', 520,
        'n', 508,
        'o', 547,
        'p', 571,
        'q', 767,
        'r', 513,
        's', 634,
        'u', 514,
        'x', 678,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '#', 230,
        'D', 570,
        'L', 511,
        'M', 627,
        'O', 728,
        'P', 635,
        'R', 512,
        'S', 601,
        'U', 690,
        'a', 744,
        'b', 626,
        'c', 624,
        'd', 541,
        'e', 696,
        'f', 716,
        'h', 519,
        'i', 655,
        'l', 567,
        'm', 522,
        'n', 509,
        'o', 547,
        'p', 572,
        'q', 767,
        'r', 513,
        's', 634,
        'u', 514,
        'x', 678,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'h') ADVANCE(794);
      if (lookahead == 'm') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(558);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == 'd') ADVANCE(537);
      if (lookahead == 'h') ADVANCE(795);
      if (lookahead == 'm') ADVANCE(559);
      if (lookahead == 'n') ADVANCE(560);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead == 'h') ADVANCE(797);
      if (lookahead == 'm') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'h') ADVANCE(798);
      if (lookahead == 'm') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(837);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 13,
        '/', 40,
        0x2044, 40,
        0x2215, 40,
        0x27cb, 40,
        0x29f8, 40,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == 0x221e) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == 0xbd) ADVANCE(2460);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 30,
        '/', 7,
        0x2044, 7,
        0x2215, 7,
        0x27cb, 7,
        0x29f8, 7,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(8);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(470);
      if (lookahead == '1') ADVANCE(470);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '4') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(470);
      if (lookahead == '1') ADVANCE(470);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(470);
      if (lookahead == '1') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(470);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '7') ADVANCE(404);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(418);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '5') ADVANCE(231);
      if (lookahead == '6') ADVANCE(300);
      if (lookahead == '7') ADVANCE(99);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(418);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '5') ADVANCE(231);
      if (lookahead == '6') ADVANCE(300);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 55:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 146,
        '1', 450,
        '2', 57,
        '3', 189,
        '5', 148,
        '6', 184,
        '7', 173,
        'A', 62,
        'a', 62,
        'B', 158,
        'b', 158,
        'D', 465,
        'd', 465,
        'E', 338,
        'e', 338,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 380,
        '1', 255,
        '6', 335,
        '9', 363,
        'A', 364,
        'a', 364,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 58:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 380,
        '1', 253,
        '6', 335,
        '9', 363,
        'A', 364,
        'a', 364,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 380,
        '1', 277,
        '6', 335,
        '9', 363,
        'A', 364,
        'a', 364,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '6') ADVANCE(355);
      if (lookahead == '7') ADVANCE(404);
      if (lookahead == '8') ADVANCE(453);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '7') ADVANCE(140);
      if (lookahead == ';') ADVANCE(2436);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '7') ADVANCE(140);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(414);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '6') ADVANCE(90);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(414);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(309);
      if (lookahead == '2') ADVANCE(160);
      if (lookahead == '7') ADVANCE(365);
      if (lookahead == '8') ADVANCE(384);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(326);
      if (lookahead == '2') ADVANCE(160);
      if (lookahead == '7') ADVANCE(365);
      if (lookahead == '8') ADVANCE(384);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(327);
      if (lookahead == '2') ADVANCE(160);
      if (lookahead == '7') ADVANCE(365);
      if (lookahead == '8') ADVANCE(384);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 68:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 147,
        '1', 450,
        '2', 58,
        '3', 189,
        '5', 148,
        '6', 184,
        '7', 171,
        'A', 61,
        'a', 61,
        'B', 159,
        'b', 159,
        'D', 465,
        'd', 465,
        'E', 338,
        'e', 338,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 69:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 147,
        '1', 450,
        '2', 58,
        '3', 189,
        '5', 148,
        '6', 184,
        '7', 170,
        'A', 61,
        'a', 61,
        'B', 158,
        'b', 158,
        'D', 465,
        'd', 465,
        'E', 338,
        'e', 338,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 71:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 161,
        '2', 150,
        '7', 441,
        '9', 830,
        'D', 470,
        'd', 470,
        'E', 339,
        'e', 339,
        'F', 490,
        'f', 490,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 72:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 161,
        '2', 150,
        '7', 449,
        '9', 830,
        'B', 477,
        'b', 477,
        'D', 470,
        'd', 470,
        'E', 339,
        'e', 339,
        'F', 490,
        'f', 490,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(165);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == '3') ADVANCE(320);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(243);
      if (lookahead == '8') ADVANCE(338);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(335);
      if (lookahead == '5') ADVANCE(304);
      if (lookahead == '6') ADVANCE(235);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 78:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 202,
        '2', 164,
        '7', 448,
        '9', 831,
        'B', 470,
        'b', 470,
        'D', 473,
        'd', 473,
        'F', 474,
        'f', 474,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(465);
      if (lookahead == '1') ADVANCE(465);
      if (lookahead == '2') ADVANCE(465);
      if (lookahead == '3') ADVANCE(465);
      if (lookahead == '4') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(465);
      if (lookahead == '1') ADVANCE(465);
      if (lookahead == '2') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(309);
      if (lookahead == '2') ADVANCE(160);
      if (lookahead == '7') ADVANCE(365);
      if (lookahead == '8') ADVANCE(384);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 353,
        '2', 201,
        '7', 446,
        '9', 828,
        'B', 470,
        'b', 470,
        'F', 471,
        'f', 471,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == '1') ADVANCE(489);
      if (lookahead == '3') ADVANCE(475);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(191);
      if (lookahead == '2') ADVANCE(186);
      if (lookahead == '7') ADVANCE(451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(491);
      if (lookahead == '1') ADVANCE(491);
      if (lookahead == '2') ADVANCE(491);
      if (lookahead == '3') ADVANCE(491);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(491);
      if (lookahead == '1') ADVANCE(491);
      if (lookahead == '2') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(471);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(472);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(473);
      if (lookahead == '1') ADVANCE(473);
      if (lookahead == '2') ADVANCE(473);
      if (lookahead == '3') ADVANCE(473);
      if (lookahead == '4') ADVANCE(473);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(473);
      if (lookahead == '1') ADVANCE(473);
      if (lookahead == '2') ADVANCE(473);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(180);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(474);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(162);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == '7') ADVANCE(442);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(462);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(493);
      if (lookahead == '1') ADVANCE(493);
      if (lookahead == '2') ADVANCE(493);
      if (lookahead == '3') ADVANCE(493);
      if (lookahead == '4') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(493);
      if (lookahead == '1') ADVANCE(493);
      if (lookahead == '2') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(485);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(480);
      if (lookahead == '1') ADVANCE(480);
      if (lookahead == '2') ADVANCE(480);
      if (lookahead == '3') ADVANCE(480);
      if (lookahead == '4') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(480);
      if (lookahead == '1') ADVANCE(480);
      if (lookahead == '2') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '1') ADVANCE(494);
      if (lookahead == '2') ADVANCE(494);
      if (lookahead == '3') ADVANCE(494);
      if (lookahead == '4') ADVANCE(494);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '1') ADVANCE(494);
      if (lookahead == '2') ADVANCE(494);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(492);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(495);
      if (lookahead == '1') ADVANCE(495);
      if (lookahead == '2') ADVANCE(495);
      if (lookahead == '3') ADVANCE(495);
      if (lookahead == '4') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(495);
      if (lookahead == '1') ADVANCE(495);
      if (lookahead == '2') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(488);
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == '2') ADVANCE(488);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '4') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(488);
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == '2') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(420);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == '1') ADVANCE(432);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 111:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 214,
        '1', 450,
        '2', 59,
        '3', 189,
        '5', 148,
        '6', 184,
        '7', 172,
        'A', 61,
        'a', 61,
        'B', 159,
        'b', 159,
        'D', 488,
        'd', 488,
        'E', 338,
        'e', 338,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(496);
      if (lookahead == '1') ADVANCE(496);
      if (lookahead == '2') ADVANCE(496);
      if (lookahead == '3') ADVANCE(496);
      if (lookahead == '4') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(496);
      if (lookahead == '1') ADVANCE(496);
      if (lookahead == '2') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(497);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '6') ADVANCE(94);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(175);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '1') ADVANCE(432);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(427);
      if (lookahead == '1') ADVANCE(101);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(181);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == '1') ADVANCE(103);
      if (lookahead == '6') ADVANCE(104);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(430);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(434);
      if (lookahead == '1') ADVANCE(113);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '5') ADVANCE(231);
      if (lookahead == '6') ADVANCE(300);
      if (lookahead == '7') ADVANCE(99);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '6') ADVANCE(355);
      if (lookahead == '7') ADVANCE(404);
      if (lookahead == '8') ADVANCE(453);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(216);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 128:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 209,
        '2', 193,
        '7', 458,
        '9', 832,
        'D', 494,
        'd', 494,
        'F', 492,
        'f', 492,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 129:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 354,
        '2', 204,
        '7', 813,
        '9', 829,
        'F', 472,
        'f', 472,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(205);
      if (lookahead == '2') ADVANCE(187);
      if (lookahead == '7') ADVANCE(456);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(221);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == '2') ADVANCE(203);
      if (lookahead == '7') ADVANCE(457);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(223);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == '7') ADVANCE(459);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(224);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == '2') ADVANCE(210);
      if (lookahead == '7') ADVANCE(460);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 137:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '0', 359,
        '2', 213,
        '7', 814,
        '9', 833,
        'F', 497,
        'f', 497,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '6') ADVANCE(355);
      if (lookahead == '7') ADVANCE(404);
      if (lookahead == '8') ADVANCE(453);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 139:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 52,
        '2', 143,
        '3', 308,
        '4', 311,
        '5', 416,
        '6', 83,
        '8', 237,
        '9', 337,
        'X', 167,
        'x', 167,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(470);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(470);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(483);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(381);
      if (lookahead == '4') ADVANCE(415);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '4') ADVANCE(367);
      if (lookahead == '8') ADVANCE(252);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(239);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 145:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 110,
        '4', 362,
        '6', 142,
        '8', 241,
        'X', 242,
        'x', 242,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '3') ADVANCE(811);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '3') ADVANCE(811);
      if (lookahead == '4') ADVANCE(402);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 148:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 334,
        'A', 142,
        'a', 142,
        'C', 803,
        'c', 803,
        'F', 802,
        'f', 802,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(323);
      if (lookahead == '7') ADVANCE(353);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(232);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 151:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 60,
        '2', 143,
        '3', 308,
        '4', 270,
        '5', 436,
        '6', 83,
        '8', 245,
        '9', 337,
        'X', 217,
        'x', 217,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(2456);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 153:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 56,
        '4', 305,
        '5', 433,
        '6', 142,
        '8', 258,
        'X', 194,
        'x', 194,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 56,
        '4', 305,
        '5', 433,
        '8', 258,
        'X', 195,
        'x', 195,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(254);
      if (lookahead == '3') ADVANCE(345);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(256);
      if (lookahead == '3') ADVANCE(345);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(278);
      if (lookahead == '3') ADVANCE(345);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead == ';') ADVANCE(2358);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(414);
      if (lookahead == '2') ADVANCE(404);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '4') ADVANCE(343);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(312);
      if (lookahead == '7') ADVANCE(356);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(325);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(432);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 167:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 383,
        '2', 55,
        '3', 812,
        'B', 142,
        'b', 142,
        'D', 415,
        'd', 415,
        'F', 415,
        'f', 415,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 168:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 383,
        '2', 69,
        '3', 812,
        '6', 393,
        'B', 141,
        'b', 141,
        'D', 415,
        'd', 415,
        'F', 415,
        'f', 415,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '4') ADVANCE(409);
      if (lookahead == '8') ADVANCE(295);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(240);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 170:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 364,
        '3', 188,
        '9', 366,
        'E', 801,
        'e', 801,
        'F', 306,
        'f', 306,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 171:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 364,
        '3', 188,
        '9', 371,
        'E', 801,
        'e', 801,
        'F', 306,
        'f', 306,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 172:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 364,
        '3', 188,
        '9', 372,
        'E', 801,
        'e', 801,
        'F', 306,
        'f', 306,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 173:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 364,
        '9', 366,
        'E', 801,
        'e', 801,
        'F', 306,
        'f', 306,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(821);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(314);
      if (lookahead == '7') ADVANCE(357);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(313);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(417);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(166);
      if (lookahead == '6') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(315);
      if (lookahead == '7') ADVANCE(356);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(324);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(330);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(438);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(810);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(236);
      if (lookahead == '4') ADVANCE(236);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(236);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(261);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(268);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(487);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(306);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(89);
      if (lookahead == '4') ADVANCE(364);
      if (lookahead == '8') ADVANCE(257);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(249);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(85);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 192:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 116,
        '4', 303,
        '5', 433,
        '8', 250,
        'X', 196,
        'x', 196,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(274);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(392);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead == '3') ADVANCE(815);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(392);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(392);
      if (lookahead == '2') ADVANCE(78);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(392);
      if (lookahead == '2') ADVANCE(407);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(439);
      if (lookahead == '7') ADVANCE(359);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(272);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == '4') ADVANCE(306);
      if (lookahead == '5') ADVANCE(433);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(197);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(368);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '4') ADVANCE(344);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(273);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(369);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(275);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(276);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '4') ADVANCE(349);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(283);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(105);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(379);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == '3') ADVANCE(811);
      if (lookahead == '4') ADVANCE(402);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 215:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 118,
        '4', 319,
        '5', 437,
        '6', 142,
        '8', 241,
        'X', 222,
        'x', 222,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(328);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 217:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 400,
        '2', 68,
        '3', 812,
        '6', 393,
        'B', 141,
        'b', 141,
        'D', 415,
        'd', 415,
        'F', 415,
        'f', 415,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 218:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 400,
        '2', 111,
        '3', 812,
        '6', 393,
        'B', 141,
        'b', 141,
        'D', 415,
        'd', 415,
        'F', 415,
        'f', 415,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == '4') ADVANCE(413);
      if (lookahead == '8') ADVANCE(297);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(280);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(120);
      if (lookahead == '4') ADVANCE(376);
      if (lookahead == '8') ADVANCE(293);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(246);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(329);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(401);
      if (lookahead == '2') ADVANCE(72);
      if (lookahead == '3') ADVANCE(815);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(331);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(332);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(127);
      if (lookahead == '4') ADVANCE(370);
      if (lookahead == '8') ADVANCE(294);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(279);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 226:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 125,
        '2', 143,
        '3', 308,
        '4', 269,
        '5', 416,
        '6', 83,
        '8', 245,
        '9', 337,
        'X', 168,
        'x', 168,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '4') ADVANCE(375);
      if (lookahead == '8') ADVANCE(296);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(285);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '4') ADVANCE(377);
      if (lookahead == '8') ADVANCE(298);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(288);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(135);
      if (lookahead == '4') ADVANCE(378);
      if (lookahead == '8') ADVANCE(299);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(290);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 230:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '1', 138,
        '2', 143,
        '3', 308,
        '4', 271,
        '5', 436,
        '6', 83,
        '8', 281,
        '9', 337,
        'X', 218,
        'x', 218,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead == '5') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead == '6') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead == '7') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead == '9') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 237:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '2', 54,
        '5', 443,
        '6', 336,
        '7', 156,
        '8', 77,
        '9', 406,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead == '3') ADVANCE(827);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(129);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '7') ADVANCE(244);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '3') ADVANCE(815);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(380);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(232);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 245:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '2', 53,
        '5', 443,
        '6', 336,
        '7', 155,
        '8', 77,
        '9', 406,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(2458);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(824);
      if (lookahead == '3') ADVANCE(815);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == '7') ADVANCE(251);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(109);
      if (lookahead == '7') ADVANCE(263);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(465);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '7') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(465);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '7') ADVANCE(486);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(465);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(465);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(64);
      if (lookahead == '7') ADVANCE(262);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(394);
      if (lookahead == '7') ADVANCE(284);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(234);
      if (lookahead == '4') ADVANCE(381);
      if (lookahead == '9') ADVANCE(335);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(236);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(261);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(267);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(473);
      if (lookahead == '5') ADVANCE(474);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(268);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(174);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(481);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '5') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(481);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '5') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(481);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '5') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(483);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(494);
      if (lookahead == '5') ADVANCE(492);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(488);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '7') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(488);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '7') ADVANCE(486);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(130);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(137);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 281:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '2', 124,
        '5', 443,
        '6', 336,
        '7', 157,
        '8', 77,
        '9', 406,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(274);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(368);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(132);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(273);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(369);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(134);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(275);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(136);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(283);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(379);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(121);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '7') ADVANCE(266);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(397);
      if (lookahead == '7') ADVANCE(287);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(119);
      if (lookahead == '7') ADVANCE(286);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(399);
      if (lookahead == '7') ADVANCE(292);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(122);
      if (lookahead == '7') ADVANCE(289);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(123);
      if (lookahead == '7') ADVANCE(291);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '4') ADVANCE(470);
      if (lookahead == '5') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '4') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '4') ADVANCE(473);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '5') ADVANCE(473);
      if (lookahead == '7') ADVANCE(474);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '7') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '7') ADVANCE(471);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(815);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(475);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(310);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '4') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '5') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(335);
      if (lookahead == '8') ADVANCE(410);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(335);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(302);
      if (lookahead == '8') ADVANCE(411);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(318);
      if (lookahead == '8') ADVANCE(410);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '4') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '4') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == '4') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == '5') ADVANCE(470);
      if (lookahead == '7') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(487);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(306);
      if (lookahead == '6') ADVANCE(306);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(238);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(306);
      if (lookahead == '7') ADVANCE(364);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(306);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(306);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(340);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(316);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(317);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(346);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(347);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(348);
      if (lookahead == '8') ADVANCE(412);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(350);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(351);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(470);
      if (lookahead == '7') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(470);
      if (lookahead == '8') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(381);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(444);
      if (lookahead == '6') ADVANCE(322);
      if (lookahead == '7') ADVANCE(259);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(96);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(51);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(471);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(472);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(474);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(461);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(494);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(492);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(497);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(341);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(342);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(374);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(343);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(344);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(349);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(470);
      if (lookahead == '6') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(470);
      if (lookahead == '6') ADVANCE(473);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(470);
      if (lookahead == '7') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(470);
      if (lookahead == '9') ADVANCE(470);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(231);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead == '6') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(471);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(472);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '6') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '6') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(477);
      if (lookahead == '6') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(494);
      if (lookahead == '7') ADVANCE(492);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(497);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(470);
      if (lookahead == '7') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(307);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(823);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(360);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(445);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(440);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(494);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(822);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(819);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(87);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(452);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(454);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(114);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(825);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(826);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(470);
      if (lookahead == '8') ADVANCE(470);
      if (lookahead == '9') ADVANCE(470);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(470);
      if (lookahead == '8') ADVANCE(470);
      if (lookahead == '9') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(313);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(440);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(447);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(471);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(472);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(474);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(492);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(497);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(470);
      if (lookahead == '9') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(385);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(409);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(465);
      if (lookahead == '9') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(405);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(264);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(491);
      if (lookahead == '9') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(471);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(472);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(473);
      if (lookahead == '9') ADVANCE(473);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(474);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(493);
      if (lookahead == '9') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(480);
      if (lookahead == '9') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(494);
      if (lookahead == '9') ADVANCE(494);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(492);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(495);
      if (lookahead == '9') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(488);
      if (lookahead == '9') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(339);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(386);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(496);
      if (lookahead == '9') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(497);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(395);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(398);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(455);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(413);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(381);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(381);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(301);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(233);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(464);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(804);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(364);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(807);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 450:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '9', 140,
        ';', 2368,
        'C', 381,
        'c', 381,
        'D', 333,
        'd', 333,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(387);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(479);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(483);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(477);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(482);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(388);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(389);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(390);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(808);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(391);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(396);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2373);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2364);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(470);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2367);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2372);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2372);
      if (lookahead == 'f') ADVANCE(757);
      if (lookahead == 'q') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2372);
      if (lookahead == 'o') ADVANCE(788);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2372);
      if (lookahead == 't') ADVANCE(679);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2356);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2368);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2359);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2358);
      if (lookahead == 'b') ADVANCE(470);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2358);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2436);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2460);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2431);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2452);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2448);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2440);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2444);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2348);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2369);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(837);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(838);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(719);
      if (lookahead == 'R') ADVANCE(623);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(719);
      if (lookahead == 'T') ADVANCE(573);
      if (lookahead == 'p') ADVANCE(576);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(719);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(577);
      if (lookahead == 'R') ADVANCE(623);
      if (lookahead == 'U') ADVANCE(695);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(631);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(650);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(623);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'd') ADVANCE(510);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'v') ADVANCE(638);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'v') ADVANCE(638);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'y') ADVANCE(693);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'y') ADVANCE(693);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'y') ADVANCE(706);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'd') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'd') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead == 'r') ADVANCE(630);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(720);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(748);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(637);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(636);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(683);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(683);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(773);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(786);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(670);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(671);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(673);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(537);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(674);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(538);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'i') ADVANCE(676);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'o') ADVANCE(789);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'l') ADVANCE(770);
      if (lookahead == 'm') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(681);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'l') ADVANCE(778);
      if (lookahead == 'm') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(681);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(657);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(756);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(758);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(732);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(483);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(678);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(604);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(607);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(682);
      if (lookahead == 'q') ADVANCE(782);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(578);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(758);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(575);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(765);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(473);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(494);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(580);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(581);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(582);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(583);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(584);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(585);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(586);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(587);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(709);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(755);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(667);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(654);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead == 'q') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'r') ADVANCE(709);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(733);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(780);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(771);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(773);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(774);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(777);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(781);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(783);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(785);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(788);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(645);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(649);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(500);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(603);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead == 'q') ADVANCE(769);
      if (lookahead == 'x') ADVANCE(544);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(632);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(616);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(617);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(619);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(621);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(622);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(779);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(709);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(625);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(691);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(717);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(711);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(465);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(754);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(775);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(760);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(606);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(763);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(608);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(764);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(609);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(612);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(469);
      if (lookahead == 'x') ADVANCE(697);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(712);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(466);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(723);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(526);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(724);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(725);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(722);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(734);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(713);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(737);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(527);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(740);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(741);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(742);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 787:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(579);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 788:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 789:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(534);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 790:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(543);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 791:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(694);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 792:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(699);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 793:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(700);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 794:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(701);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 795:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(702);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 796:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(703);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 797:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(704);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 798:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(705);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 799:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 0xfe0e) ADVANCE(2344);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 800:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(835);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 801:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 802:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 803:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 804:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(471);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 805:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(472);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 806:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(490);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 807:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(474);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 808:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(492);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 809:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(497);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 810:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(820);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 811:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 812:
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        'C', 476,
        'c', 476,
        'D', 489,
        'd', 489,
        'F', 475,
        'f', 475,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 813:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(805);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 814:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 815:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 816:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 817:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 818:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 819:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 820:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(482);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 821:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 822:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 823:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 824:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 825:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 826:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 827:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(470);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 828:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(421);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 829:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(422);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 830:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(423);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 831:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(425);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 832:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(429);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 833:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(435);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 834:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2356);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 835:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(834);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 836:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2356);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 837:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2351);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 838:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2352);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 839:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2454);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 840:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2371);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 841:
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 842:
      ADVANCE_MAP(
        '\n', 2312,
        '\r', 2307,
        '&', 11,
        '\t', 2306,
        0x0b, 2306,
        '\f', 2306,
        ' ', 2306,
        'A', 844,
        'B', 844,
        'a', 844,
        'b', 844,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(837);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 843:
      if (lookahead == '\n') ADVANCE(2312);
      if (lookahead == '\r') ADVANCE(2307);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2306);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(844);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 844:
      if (lookahead == '\n') ADVANCE(2312);
      if (lookahead == '\r') ADVANCE(2307);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2306);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 845:
      ADVANCE_MAP(
        '\n', 1162,
        '\r', 846,
        '&', 22,
        '\t', 845,
        0x0b, 845,
        '\f', 845,
        ' ', 845,
        '/', 849,
        0x2044, 849,
        0x2215, 849,
        0x27cb, 849,
        0x29f8, 849,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 846:
      if (lookahead == '\n') ADVANCE(1162);
      if (lookahead == '&') ADVANCE(1140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1163);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1165);
      END_STATE();
    case 847:
      ADVANCE_MAP(
        '\n', 1110,
        '\r', 1111,
        '!', 2370,
        '$', 840,
        '&', 10,
        '(', 2297,
        '0', 842,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'p', 800,
        '{', 2300,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2e40, 2364,
        'O', 34,
        'o', 34,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 848,
        0x0b, 848,
        '\f', 848,
        ' ', 848,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 848:
      ADVANCE_MAP(
        '\n', 1110,
        '\r', 847,
        '!', 2370,
        '$', 840,
        '&', 10,
        '(', 2297,
        '0', 842,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'p', 800,
        '{', 2300,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2e40, 2364,
        'O', 34,
        'o', 34,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 848,
        0x0b, 848,
        '\f', 848,
        ' ', 848,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 849:
      ADVANCE_MAP(
        '\n', 1164,
        '\r', 850,
        '&', 15,
        '=', 2372,
        0x2e40, 2372,
        '\t', 849,
        0x0b, 849,
        '\f', 849,
        ' ', 849,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 850:
      if (lookahead == '\n') ADVANCE(1164);
      if (lookahead == '&') ADVANCE(1131);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2362);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1165);
      END_STATE();
    case 851:
      if (lookahead == '\n') ADVANCE(2222);
      END_STATE();
    case 852:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      END_STATE();
    case 853:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(852);
      END_STATE();
    case 854:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(853);
      END_STATE();
    case 855:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(854);
      END_STATE();
    case 856:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(855);
      END_STATE();
    case 857:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(856);
      END_STATE();
    case 858:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(857);
      END_STATE();
    case 859:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(858);
      END_STATE();
    case 860:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(859);
      END_STATE();
    case 861:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(860);
      END_STATE();
    case 862:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(861);
      END_STATE();
    case 863:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(862);
      END_STATE();
    case 864:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(863);
      END_STATE();
    case 865:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(864);
      END_STATE();
    case 866:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(865);
      END_STATE();
    case 867:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(866);
      END_STATE();
    case 868:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(867);
      END_STATE();
    case 869:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(868);
      END_STATE();
    case 870:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(869);
      END_STATE();
    case 871:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(870);
      END_STATE();
    case 872:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 873:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 874:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 875:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(874);
      END_STATE();
    case 876:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(875);
      END_STATE();
    case 877:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(876);
      END_STATE();
    case 878:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(877);
      END_STATE();
    case 879:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(878);
      END_STATE();
    case 880:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 881:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(880);
      END_STATE();
    case 882:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(881);
      END_STATE();
    case 883:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(882);
      END_STATE();
    case 884:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(883);
      END_STATE();
    case 885:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(884);
      END_STATE();
    case 886:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 887:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(886);
      END_STATE();
    case 888:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(887);
      END_STATE();
    case 889:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(888);
      END_STATE();
    case 890:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 891:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(890);
      END_STATE();
    case 892:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(891);
      END_STATE();
    case 893:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(892);
      END_STATE();
    case 894:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(893);
      END_STATE();
    case 895:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(894);
      END_STATE();
    case 896:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(895);
      END_STATE();
    case 897:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(896);
      END_STATE();
    case 898:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(897);
      END_STATE();
    case 899:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(898);
      END_STATE();
    case 900:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(899);
      END_STATE();
    case 901:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(900);
      END_STATE();
    case 902:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(901);
      END_STATE();
    case 903:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(902);
      END_STATE();
    case 904:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(903);
      END_STATE();
    case 905:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(904);
      END_STATE();
    case 906:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(905);
      END_STATE();
    case 907:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(906);
      END_STATE();
    case 908:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(907);
      END_STATE();
    case 909:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(908);
      END_STATE();
    case 910:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(909);
      END_STATE();
    case 911:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(910);
      END_STATE();
    case 912:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(911);
      END_STATE();
    case 913:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(912);
      END_STATE();
    case 914:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(913);
      END_STATE();
    case 915:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(914);
      END_STATE();
    case 916:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(915);
      END_STATE();
    case 917:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(916);
      END_STATE();
    case 918:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(917);
      END_STATE();
    case 919:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(918);
      END_STATE();
    case 920:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(919);
      END_STATE();
    case 921:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(920);
      END_STATE();
    case 922:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(921);
      END_STATE();
    case 923:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(922);
      END_STATE();
    case 924:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(923);
      END_STATE();
    case 925:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(924);
      END_STATE();
    case 926:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(925);
      END_STATE();
    case 927:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(926);
      END_STATE();
    case 928:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(927);
      END_STATE();
    case 929:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(928);
      END_STATE();
    case 930:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(929);
      END_STATE();
    case 931:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(930);
      END_STATE();
    case 932:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(931);
      END_STATE();
    case 933:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(932);
      END_STATE();
    case 934:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(933);
      END_STATE();
    case 935:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(934);
      END_STATE();
    case 936:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(935);
      END_STATE();
    case 937:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(936);
      END_STATE();
    case 938:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(937);
      END_STATE();
    case 939:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(938);
      END_STATE();
    case 940:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(939);
      END_STATE();
    case 941:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(940);
      END_STATE();
    case 942:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(941);
      END_STATE();
    case 943:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(942);
      END_STATE();
    case 944:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(943);
      END_STATE();
    case 945:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(944);
      END_STATE();
    case 946:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(945);
      END_STATE();
    case 947:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(946);
      END_STATE();
    case 948:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(947);
      END_STATE();
    case 949:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(948);
      END_STATE();
    case 950:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(949);
      END_STATE();
    case 951:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(950);
      END_STATE();
    case 952:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(951);
      END_STATE();
    case 953:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(952);
      END_STATE();
    case 954:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(953);
      END_STATE();
    case 955:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(954);
      END_STATE();
    case 956:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(955);
      END_STATE();
    case 957:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(956);
      END_STATE();
    case 958:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(957);
      END_STATE();
    case 959:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(958);
      END_STATE();
    case 960:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(959);
      END_STATE();
    case 961:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(960);
      END_STATE();
    case 962:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(961);
      END_STATE();
    case 963:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(962);
      END_STATE();
    case 964:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(963);
      END_STATE();
    case 965:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(964);
      END_STATE();
    case 966:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(965);
      END_STATE();
    case 967:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(966);
      END_STATE();
    case 968:
      if (lookahead == '\n') ADVANCE(2222);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(967);
      END_STATE();
    case 969:
      if (lookahead == '\n') ADVANCE(2223);
      END_STATE();
    case 970:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1086);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 971:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 972:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 973:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 974:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(973);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 975:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 976:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(975);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 977:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(976);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 978:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(977);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 979:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(978);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 980:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(979);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 981:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 982:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(981);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 983:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(982);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 984:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(983);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 985:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 986:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(985);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 987:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(986);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 988:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(987);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 989:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 990:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 991:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(990);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 992:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(991);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 993:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 994:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 995:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 996:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(995);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 997:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 998:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(997);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 999:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(998);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1000:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(999);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1001:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1002:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1003:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1004:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1005:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1004);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1006:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1005);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1007:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1006);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1008:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1009:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1010:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1011:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1010);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1012:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1011);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1013:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1014:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1015:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1014);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1016:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1017:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1018:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1019:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1018);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1020:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1021:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1022:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1023:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1022);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1024:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1023);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1025:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1026:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1025);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1027:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1028:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1027);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1029:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1028);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1030:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1029);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1031:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1032:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1031);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1033:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1032);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1034:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1035:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1034);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1036:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1035);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1037:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1036);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1038:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1037);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1039:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1038);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1040:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1039);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1041:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1040);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1042:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1043:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1042);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1044:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1043);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1045:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1044);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1046:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1045);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1047:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1046);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1048:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1047);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1049:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1048);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1050:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1049);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1051:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1050);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1052:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1051);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1053:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1052);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1054:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1053);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1055:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1054);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1056:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1055);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1057:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1056);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1058:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1057);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1059:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1058);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1060:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1059);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1061:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1060);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1062:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1061);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1063:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1062);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1064:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1063);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1065:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1064);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1066:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1065);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1067:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1066);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1068:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1069:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1068);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1070:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1069);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1071:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1072:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1071);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1073:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1072);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1074:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1073);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1075:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1074);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1076:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1077:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1076);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1078:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1077);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1079:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1078);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1080:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1079);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1081:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1080);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1082:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1081);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1083:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1082);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1084:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1083);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1085:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead == '-') ADVANCE(1084);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1086:
      if (lookahead == '\n') ADVANCE(2223);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1087:
      ADVANCE_MAP(
        '\n', 1090,
        '\r', 1087,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1087,
        0x0b, 1087,
        '\f', 1087,
        ' ', 1087,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1088:
      ADVANCE_MAP(
        '\n', 1090,
        '\r', 1087,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1087,
        0x0b, 1087,
        '\f', 1087,
        ' ', 1087,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1089:
      ADVANCE_MAP(
        '\n', 2211,
        '\r', 1087,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1087,
        0x0b, 1087,
        '\f', 1087,
        ' ', 1087,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1090:
      ADVANCE_MAP(
        '\n', 2211,
        '\r', 1089,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1087,
        0x0b, 1087,
        '\f', 1087,
        ' ', 1087,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1091:
      ADVANCE_MAP(
        '\n', 1112,
        '\r', 1113,
        '!', 2370,
        '$', 840,
        '&', 27,
        '(', 2297,
        '*', 2434,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'O', 2404,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1092,
        0x0b, 1092,
        '\f', 1092,
        ' ', 1092,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2317);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1092:
      ADVANCE_MAP(
        '\n', 1112,
        '\r', 1091,
        '!', 2370,
        '$', 840,
        '&', 27,
        '(', 2297,
        '*', 2434,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'O', 2404,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1092,
        0x0b, 1092,
        '\f', 1092,
        ' ', 1092,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2317);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1093:
      ADVANCE_MAP(
        '\n', 2216,
        '\r', 1093,
        '!', 2370,
        '$', 840,
        '&', 27,
        '(', 2297,
        '*', 2434,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'O', 2404,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1093,
        0x0b, 1093,
        '\f', 1093,
        ' ', 1093,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1094:
      ADVANCE_MAP(
        '\n', 2220,
        '\r', 1094,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1094,
        0x0b, 1094,
        '\f', 1094,
        ' ', 1094,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1095:
      ADVANCE_MAP(
        '\n', 2220,
        '\r', 1094,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1094,
        0x0b, 1094,
        '\f', 1094,
        ' ', 1094,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1096:
      ADVANCE_MAP(
        '\n', 2217,
        '\r', 1096,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1096,
        0x0b, 1096,
        '\f', 1096,
        ' ', 1096,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1097:
      ADVANCE_MAP(
        '\n', 2217,
        '\r', 1096,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1096,
        0x0b, 1096,
        '\f', 1096,
        ' ', 1096,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1098:
      ADVANCE_MAP(
        '\n', 2218,
        '\r', 1098,
        '!', 2370,
        '$', 840,
        '&', 10,
        '(', 2297,
        '0', 842,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'p', 800,
        '{', 2300,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2e40, 2364,
        'O', 34,
        'o', 34,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1098,
        0x0b, 1098,
        '\f', 1098,
        ' ', 1098,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1099:
      ADVANCE_MAP(
        '\n', 2219,
        '\r', 1099,
        '!', 2381,
        '$', 2201,
        '&', 1147,
        '(', 2296,
        ')', 2298,
        '0', 1159,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        'e', 2321,
        'p', 2148,
        '{', 2299,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2e40, 2375,
        'O', 1160,
        'o', 1160,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1099,
        0x0b, 1099,
        '\f', 1099,
        ' ', 1099,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1100:
      ADVANCE_MAP(
        '\n', 2219,
        '\r', 1099,
        '!', 2381,
        '$', 2201,
        '&', 1147,
        '(', 2296,
        ')', 2298,
        '0', 1159,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        'e', 2321,
        'p', 2148,
        '{', 2299,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2e40, 2375,
        'O', 1160,
        'o', 1160,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1099,
        0x0b, 1099,
        '\f', 1099,
        ' ', 1099,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1101:
      ADVANCE_MAP(
        '\n', 2212,
        '\r', 1094,
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
        '\t', 1094,
        0x0b, 1094,
        '\f', 1094,
        ' ', 1094,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1102:
      if (lookahead == ' ') ADVANCE(1312);
      END_STATE();
    case 1103:
      if (lookahead == ' ') ADVANCE(1161);
      END_STATE();
    case 1104:
      if (lookahead == ' ') ADVANCE(1173);
      END_STATE();
    case 1105:
      if (lookahead == ' ') ADVANCE(2198);
      END_STATE();
    case 1106:
      if (lookahead == ' ') ADVANCE(1463);
      END_STATE();
    case 1107:
      if (lookahead == ' ') ADVANCE(1336);
      END_STATE();
    case 1108:
      if (lookahead == ' ') ADVANCE(1446);
      END_STATE();
    case 1109:
      if (lookahead == ' ') ADVANCE(1176);
      END_STATE();
    case 1110:
      ADVANCE_MAP(
        '!', 2370,
        '$', 840,
        '&', 10,
        '(', 2297,
        '-', 2366,
        '0', 842,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'p', 800,
        '{', 2300,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2e40, 2364,
        '\n', 1111,
        '\r', 1111,
        'O', 34,
        'o', 34,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 848,
        0x0b, 848,
        '\f', 848,
        ' ', 848,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1111:
      ADVANCE_MAP(
        '!', 2370,
        '$', 840,
        '&', 10,
        '(', 2297,
        '0', 842,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'p', 800,
        '{', 2300,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2e40, 2364,
        '\n', 1111,
        '\r', 1111,
        'O', 34,
        'o', 34,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 848,
        0x0b, 848,
        '\f', 848,
        ' ', 848,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1112:
      ADVANCE_MAP(
        '!', 2370,
        '$', 840,
        '&', 27,
        '(', 2297,
        '*', 2434,
        '-', 2366,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'O', 2404,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        '\n', 1113,
        '\r', 1113,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1092,
        0x0b, 1092,
        '\f', 1092,
        ' ', 1092,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2317);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1113:
      ADVANCE_MAP(
        '!', 2370,
        '$', 840,
        '&', 27,
        '(', 2297,
        '*', 2434,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'N', 2330,
        'O', 2404,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        '\n', 1113,
        '\r', 1113,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1092,
        0x0b, 1092,
        '\f', 1092,
        ' ', 1092,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2317);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 1114:
      ADVANCE_MAP(
        '!', 2381,
        '#', 2357,
        '$', 2201,
        '&', 1145,
        '(', 2296,
        ')', 2298,
        '0', 1159,
        ';', 2213,
        '<', 1796,
        '=', 2337,
        '?', 2381,
        '@', 2345,
        'P', 2340,
        'R', 2326,
        'T', 1802,
        'e', 2321,
        'p', 2148,
        '{', 2299,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2e40, 2375,
        'O', 1160,
        'o', 1160,
        'Z', 2197,
        'z', 2197,
        '+', 2361,
        0x16ed, 2361,
        0x2795, 2361,
        ':', 2333,
        'X', 2333,
        'x', 2333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1120);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2323);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1115:
      ADVANCE_MAP(
        '!', 2381,
        '#', 2357,
        '$', 2201,
        '&', 1149,
        '(', 2296,
        ')', 2298,
        '0', 1159,
        ';', 2213,
        '<', 1796,
        '=', 2337,
        '?', 2381,
        '@', 2345,
        'P', 2340,
        'R', 2326,
        'T', 1802,
        'e', 2321,
        'p', 2148,
        '{', 2299,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2e40, 2375,
        'O', 1160,
        'o', 1160,
        'Z', 2197,
        'z', 2197,
        '+', 2361,
        0x16ed, 2361,
        0x2795, 2361,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1120);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2323);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1116:
      ADVANCE_MAP(
        '!', 2381,
        '#', 2357,
        '$', 2201,
        '&', 1152,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 2361,
        0x16ed, 2361,
        0x2795, 2361,
        ':', 2333,
        'X', 2333,
        'x', 2333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1117:
      ADVANCE_MAP(
        '!', 2381,
        '#', 2357,
        '$', 2201,
        '&', 1152,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2337,
        '?', 2381,
        '@', 2345,
        'O', 2406,
        'P', 2340,
        'R', 2326,
        'T', 1802,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 2361,
        0x16ed, 2361,
        0x2795, 2361,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2323);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1118:
      ADVANCE_MAP(
        '!', 2381,
        '#', 2357,
        '$', 2201,
        '&', 1155,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2337,
        '?', 2381,
        '@', 2345,
        'O', 2406,
        'P', 2340,
        'R', 2326,
        'T', 1802,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 2361,
        0x16ed, 2361,
        0x2795, 2361,
        ':', 2333,
        'X', 2333,
        'x', 2333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2323);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1119:
      ADVANCE_MAP(
        '!', 2381,
        '$', 2201,
        '&', 1132,
        '(', 2296,
        '*', 2433,
        '0', 2411,
        '1', 2385,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'O', 2406,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        'e', 2321,
        'o', 2415,
        'p', 2148,
        '{', 2299,
        0xbd, 2429,
        0x66d, 2449,
        0x204e, 2445,
        0x2217, 2437,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2e40, 2375,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1120:
      ADVANCE_MAP(
        '!', 2381,
        '$', 2201,
        '&', 1147,
        '(', 2296,
        ')', 2298,
        '0', 1159,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        'e', 2321,
        'p', 2148,
        '{', 2299,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2e40, 2375,
        'O', 1160,
        'o', 1160,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1120);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1121:
      ADVANCE_MAP(
        '!', 2381,
        '$', 2201,
        '&', 1148,
        '(', 2296,
        ')', 2298,
        '0', 1159,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'N', 2332,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'p', 2148,
        '{', 2299,
        0xbd, 2427,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2e40, 2375,
        'O', 1160,
        'o', 1160,
        'Z', 2197,
        'z', 2197,
        '+', 1166,
        0x16ed, 1166,
        0x2795, 1166,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1121);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 1122:
      ADVANCE_MAP(
        '"', 2228,
        '&', 2258,
        ']', 2227,
        0x2ba, 2248,
        0x2dd, 2246,
        0x2ee, 2252,
        0x2f6, 2250,
        0x5f2, 2254,
        0x5f4, 2244,
        0x201c, 2232,
        0x201d, 2234,
        0x201f, 2236,
        0x2033, 2238,
        0x2036, 2240,
        0x3003, 2242,
        0xff02, 2230,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1124);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2259);
      if (lookahead != 0) ADVANCE(2295);
      END_STATE();
    case 1123:
      ADVANCE_MAP(
        '"', 2228,
        '&', 2258,
        0x2ba, 2248,
        0x2dd, 2246,
        0x2ee, 2252,
        0x2f6, 2250,
        0x5f2, 2254,
        0x5f4, 2244,
        0x201c, 2232,
        0x201d, 2234,
        0x201f, 2236,
        0x2033, 2238,
        0x2036, 2240,
        0x3003, 2242,
        0xff02, 2230,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1125);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2260);
      if (lookahead != 0) ADVANCE(2295);
      END_STATE();
    case 1124:
      ADVANCE_MAP(
        '"', 2228,
        '&', 1139,
        ']', 2226,
        0x2ba, 2248,
        0x2dd, 2246,
        0x2ee, 2252,
        0x2f6, 2250,
        0x5f2, 2254,
        0x5f4, 2244,
        0x201c, 2232,
        0x201d, 2234,
        0x201f, 2236,
        0x2033, 2238,
        0x2036, 2240,
        0x3003, 2242,
        0xff02, 2230,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1124);
      END_STATE();
    case 1125:
      ADVANCE_MAP(
        '"', 2228,
        '&', 1139,
        0x2ba, 2248,
        0x2dd, 2246,
        0x2ee, 2252,
        0x2f6, 2250,
        0x5f2, 2254,
        0x5f4, 2244,
        0x201c, 2232,
        0x201d, 2234,
        0x201f, 2236,
        0x2033, 2238,
        0x2036, 2240,
        0x3003, 2242,
        0xff02, 2230,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1125);
      END_STATE();
    case 1126:
      ADVANCE_MAP(
        '#', 1311,
        'a', 2058,
        'd', 1811,
        'f', 2045,
        'h', 1812,
        'l', 2009,
        'm', 1857,
        'n', 1856,
        'p', 1956,
        's', 2013,
      );
      END_STATE();
    case 1127:
      if (lookahead == '#') ADVANCE(1322);
      if (lookahead == 'd') ADVANCE(1831);
      if (lookahead == 'h') ADVANCE(2137);
      if (lookahead == 'm') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(1860);
      END_STATE();
    case 1128:
      if (lookahead == '#') ADVANCE(1355);
      if (lookahead == 'p') ADVANCE(1978);
      END_STATE();
    case 1129:
      ADVANCE_MAP(
        '#', 1395,
        'a', 2058,
        'd', 1834,
        'f', 2045,
        'h', 1813,
        'l', 2009,
        'm', 1870,
        'n', 1871,
        's', 2013,
      );
      END_STATE();
    case 1130:
      if (lookahead == '#') ADVANCE(1333);
      if (lookahead == 'f') ADVANCE(2056);
      if (lookahead == 'h') ADVANCE(1832);
      END_STATE();
    case 1131:
      if (lookahead == '#') ADVANCE(1340);
      if (lookahead == 'e') ADVANCE(2042);
      END_STATE();
    case 1132:
      ADVANCE_MAP(
        '#', 1315,
        'D', 1893,
        'L', 1820,
        'M', 1951,
        'O', 2066,
        'P', 1971,
        'R', 1821,
        'S', 1919,
        'U', 2023,
        'a', 2058,
        'b', 1949,
        'c', 1948,
        'd', 1840,
        'e', 2040,
        'f', 2045,
        'h', 1807,
        'i', 1982,
        'l', 1882,
        'm', 1824,
        'n', 1809,
        'o', 1859,
        'p', 1885,
        'q', 2111,
        'r', 1815,
        's', 1960,
        'u', 1816,
        'x', 2010,
      );
      END_STATE();
    case 1133:
      if (lookahead == '#') ADVANCE(1339);
      if (lookahead == 'p') ADVANCE(1979);
      if (lookahead == 's') ADVANCE(2018);
      END_STATE();
    case 1134:
      if (lookahead == '#') ADVANCE(1323);
      if (lookahead == 'd') ADVANCE(1841);
      if (lookahead == 'e') ADVANCE(2042);
      if (lookahead == 'h') ADVANCE(2141);
      if (lookahead == 'm') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(1874);
      if (lookahead == 's') ADVANCE(2019);
      END_STATE();
    case 1135:
      if (lookahead == '#') ADVANCE(1670);
      if (lookahead == 'i') ADVANCE(2008);
      END_STATE();
    case 1136:
      if (lookahead == '#') ADVANCE(1562);
      if (lookahead == 'e') ADVANCE(2136);
      if (lookahead == 'q') ADVANCE(2133);
      END_STATE();
    case 1137:
      if (lookahead == '#') ADVANCE(1645);
      if (lookahead == 'e') ADVANCE(2042);
      END_STATE();
    case 1138:
      if (lookahead == '#') ADVANCE(1338);
      if (lookahead == 'e') ADVANCE(2042);
      if (lookahead == 'p') ADVANCE(1979);
      if (lookahead == 's') ADVANCE(2018);
      END_STATE();
    case 1139:
      if (lookahead == '#') ADVANCE(1324);
      END_STATE();
    case 1140:
      if (lookahead == '#') ADVANCE(1337);
      if (lookahead == 's') ADVANCE(2016);
      END_STATE();
    case 1141:
      ADVANCE_MAP(
        '#', 1318,
        'D', 1893,
        'L', 1820,
        'M', 1951,
        'O', 2066,
        'P', 1971,
        'R', 1821,
        'S', 1919,
        'U', 2023,
        'b', 1949,
        'c', 1948,
        'd', 1840,
        'e', 2040,
        'f', 2057,
        'h', 1830,
        'i', 1982,
        'l', 1883,
        'm', 1825,
        'n', 1809,
        'o', 1859,
        'p', 1886,
        'q', 2111,
        'r', 1815,
        's', 1960,
        'u', 1816,
        'x', 2010,
      );
      END_STATE();
    case 1142:
      if (lookahead == '#') ADVANCE(1342);
      if (lookahead == 'd') ADVANCE(1842);
      if (lookahead == 'h') ADVANCE(2142);
      if (lookahead == 'm') ADVANCE(1877);
      if (lookahead == 'n') ADVANCE(1876);
      if (lookahead == 'p') ADVANCE(1979);
      if (lookahead == 's') ADVANCE(2020);
      END_STATE();
    case 1143:
      ADVANCE_MAP(
        '#', 1358,
        'd', 1841,
        'e', 2042,
        'h', 2141,
        'm', 1875,
        'n', 1874,
        'p', 1978,
        's', 2019,
      );
      END_STATE();
    case 1144:
      if (lookahead == '#') ADVANCE(1343);
      if (lookahead == 'd') ADVANCE(1843);
      if (lookahead == 'h') ADVANCE(2143);
      if (lookahead == 'm') ADVANCE(1879);
      if (lookahead == 'n') ADVANCE(1878);
      if (lookahead == 's') ADVANCE(2021);
      END_STATE();
    case 1145:
      ADVANCE_MAP(
        '#', 1320,
        'D', 1893,
        'L', 1820,
        'M', 1951,
        'O', 2066,
        'P', 1971,
        'R', 1821,
        'S', 1919,
        'U', 2023,
        'b', 1949,
        'c', 1948,
        'd', 1845,
        'e', 2040,
        'h', 1818,
        'i', 1982,
        'l', 1883,
        'm', 1827,
        'n', 1810,
        'o', 1859,
        'p', 1886,
        'q', 2111,
        'r', 1815,
        's', 1960,
        'u', 1816,
        'x', 2010,
      );
      END_STATE();
    case 1146:
      ADVANCE_MAP(
        '#', 1319,
        'a', 2058,
        'd', 1834,
        'f', 2045,
        'h', 1813,
        'l', 2009,
        'm', 1870,
        'n', 1871,
        's', 2013,
      );
      END_STATE();
    case 1147:
      ADVANCE_MAP(
        '#', 1430,
        'D', 1893,
        'L', 1820,
        'M', 1951,
        'O', 2066,
        'P', 1971,
        'R', 1821,
        'S', 1919,
        'U', 2023,
        'b', 1949,
        'c', 1948,
        'd', 1840,
        'e', 2040,
        'h', 1817,
        'i', 1982,
        'l', 1883,
        'm', 1825,
        'n', 1809,
        'o', 1859,
        'p', 1885,
        'q', 2111,
        'r', 1815,
        's', 1960,
        'u', 1816,
        'x', 2010,
      );
      END_STATE();
    case 1148:
      ADVANCE_MAP(
        '#', 1429,
        'D', 1893,
        'L', 1820,
        'M', 1951,
        'O', 2066,
        'P', 1971,
        'R', 1821,
        'S', 1919,
        'U', 2023,
        'b', 1949,
        'c', 1948,
        'd', 1840,
        'e', 2040,
        'f', 2057,
        'h', 1830,
        'i', 1982,
        'l', 1883,
        'm', 1825,
        'n', 1809,
        'o', 1859,
        'p', 1885,
        'q', 2111,
        'r', 1815,
        's', 1960,
        'u', 1816,
        'x', 2010,
      );
      END_STATE();
    case 1149:
      ADVANCE_MAP(
        '#', 1432,
        'D', 1893,
        'L', 1820,
        'M', 1951,
        'O', 2066,
        'P', 1971,
        'R', 1821,
        'S', 1919,
        'U', 2023,
        'b', 1949,
        'c', 1948,
        'd', 1840,
        'e', 2040,
        'h', 1817,
        'i', 1982,
        'l', 1883,
        'm', 1825,
        'n', 1809,
        'o', 1859,
        'p', 1886,
        'q', 2111,
        'r', 1815,
        's', 1960,
        'u', 1816,
        'x', 2010,
      );
      END_STATE();
    case 1150:
      if (lookahead == '#') ADVANCE(1421);
      if (lookahead == 'd') ADVANCE(1835);
      if (lookahead == 'h') ADVANCE(2138);
      if (lookahead == 'm') ADVANCE(1867);
      if (lookahead == 'n') ADVANCE(1866);
      END_STATE();
    case 1151:
      if (lookahead == '#') ADVANCE(1423);
      if (lookahead == 'p') ADVANCE(1979);
      END_STATE();
    case 1152:
      ADVANCE_MAP(
        '#', 1428,
        'D', 1893,
        'L', 1820,
        'M', 1951,
        'O', 2066,
        'P', 1971,
        'R', 1821,
        'S', 1919,
        'U', 2023,
        'a', 2058,
        'b', 1949,
        'c', 1948,
        'd', 1840,
        'e', 2040,
        'f', 2045,
        'h', 1807,
        'i', 1982,
        'l', 1882,
        'm', 1824,
        'n', 1809,
        'o', 1859,
        'p', 1886,
        'q', 2111,
        'r', 1815,
        's', 1960,
        'u', 1816,
        'x', 2010,
      );
      END_STATE();
    case 1153:
      if (lookahead == '#') ADVANCE(1422);
      if (lookahead == 's') ADVANCE(2022);
      END_STATE();
    case 1154:
      if (lookahead == '#') ADVANCE(1424);
      if (lookahead == 'd') ADVANCE(1836);
      if (lookahead == 'h') ADVANCE(2139);
      if (lookahead == 'm') ADVANCE(1869);
      if (lookahead == 'n') ADVANCE(1868);
      END_STATE();
    case 1155:
      ADVANCE_MAP(
        '#', 1431,
        'D', 1893,
        'L', 1820,
        'M', 1951,
        'O', 2066,
        'P', 1971,
        'R', 1821,
        'S', 1919,
        'U', 2023,
        'a', 2058,
        'b', 1949,
        'c', 1948,
        'd', 1845,
        'e', 2040,
        'f', 2045,
        'h', 1808,
        'i', 1982,
        'l', 1882,
        'm', 1826,
        'n', 1810,
        'o', 1859,
        'p', 1886,
        'q', 2111,
        'r', 1815,
        's', 1960,
        'u', 1816,
        'x', 2010,
      );
      END_STATE();
    case 1156:
      if (lookahead == '#') ADVANCE(1425);
      if (lookahead == 'd') ADVANCE(1839);
      if (lookahead == 'h') ADVANCE(2140);
      if (lookahead == 'm') ADVANCE(1873);
      if (lookahead == 'n') ADVANCE(1872);
      END_STATE();
    case 1157:
      if (lookahead == '#') ADVANCE(1426);
      if (lookahead == 'd') ADVANCE(1841);
      if (lookahead == 'h') ADVANCE(2141);
      if (lookahead == 'm') ADVANCE(1875);
      if (lookahead == 'n') ADVANCE(1874);
      END_STATE();
    case 1158:
      if (lookahead == '#') ADVANCE(1427);
      if (lookahead == 'd') ADVANCE(1844);
      if (lookahead == 'h') ADVANCE(2144);
      if (lookahead == 'm') ADVANCE(1881);
      if (lookahead == 'n') ADVANCE(1880);
      END_STATE();
    case 1159:
      if (lookahead == '&') ADVANCE(1127);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2314);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2195);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      END_STATE();
    case 1160:
      if (lookahead == '&') ADVANCE(1127);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2195);
      END_STATE();
    case 1161:
      if (lookahead == '&') ADVANCE(1130);
      if (lookahead == 0xbd) ADVANCE(2459);
      END_STATE();
    case 1162:
      if (lookahead == '&') ADVANCE(1140);
      if (lookahead == '-') ADVANCE(1179);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1163);
      END_STATE();
    case 1163:
      if (lookahead == '&') ADVANCE(1140);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1163);
      END_STATE();
    case 1164:
      if (lookahead == '&') ADVANCE(1131);
      if (lookahead == '-') ADVANCE(1179);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2362);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1165);
      END_STATE();
    case 1165:
      if (lookahead == '&') ADVANCE(1131);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2362);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1165);
      END_STATE();
    case 1166:
      if (lookahead == '&') ADVANCE(1134);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1175);
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2362);
      END_STATE();
    case 1167:
      if (lookahead == '&') ADVANCE(1144);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1106);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1105);
      END_STATE();
    case 1168:
      if (lookahead == '&') ADVANCE(1135);
      if (lookahead == 0x221e) ADVANCE(2362);
      END_STATE();
    case 1169:
      ADVANCE_MAP(
        '&', 1146,
        '*', 2433,
        '-', 2387,
        '/', 2416,
        '0', 2409,
        '1', 2386,
        '2', 2426,
        'O', 2405,
        'o', 2414,
        0xbd, 2429,
        0x66d, 2449,
        0x2010, 2391,
        0x2011, 2393,
        0x2012, 2395,
        0x2013, 2397,
        0x2014, 2399,
        0x2044, 2420,
        0x204e, 2445,
        0x2212, 2389,
        0x2215, 2418,
        0x2217, 2437,
        0x2731, 2441,
        0x2796, 2401,
        0x27cb, 2422,
        0x29f8, 2424,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1169);
      END_STATE();
    case 1170:
      if (lookahead == '&') ADVANCE(1137);
      END_STATE();
    case 1171:
      if (lookahead == '&') ADVANCE(1150);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1102);
      END_STATE();
    case 1172:
      if (lookahead == '&') ADVANCE(1151);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2362);
      END_STATE();
    case 1173:
      if (lookahead == '&') ADVANCE(1153);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1108);
      END_STATE();
    case 1174:
      if (lookahead == '&') ADVANCE(1154);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1103);
      END_STATE();
    case 1175:
      if (lookahead == '&') ADVANCE(1157);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2362);
      END_STATE();
    case 1176:
      if (lookahead == '&') ADVANCE(1158);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1107);
      END_STATE();
    case 1177:
      if (lookahead == '-') ADVANCE(968);
      END_STATE();
    case 1178:
      if (lookahead == '-') ADVANCE(1177);
      END_STATE();
    case 1179:
      if (lookahead == '-') ADVANCE(1178);
      END_STATE();
    case 1180:
      if (lookahead == '-') ADVANCE(1179);
      END_STATE();
    case 1181:
      if (lookahead == '.') ADVANCE(2362);
      END_STATE();
    case 1182:
      if (lookahead == '0') ADVANCE(1197);
      if (lookahead == '2') ADVANCE(1451);
      if (lookahead == '5') ADVANCE(1435);
      if (lookahead == '6') ADVANCE(1593);
      if (lookahead == '8') ADVANCE(1706);
      END_STATE();
    case 1183:
      if (lookahead == '0') ADVANCE(1672);
      if (lookahead == '1') ADVANCE(1212);
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '4') ADVANCE(1533);
      if (lookahead == '6') ADVANCE(1228);
      if (lookahead == '7') ADVANCE(1229);
      END_STATE();
    case 1184:
      ADVANCE_MAP(
        '0', 1313,
        '2', 1350,
        '7', 1551,
        '9', 2186,
        'A', 1732,
        'a', 1732,
        'B', 1728,
        'b', 1728,
        'D', 1734,
        'd', 1734,
        'E', 2176,
        'e', 2176,
        'F', 1630,
        'f', 1630,
      );
      END_STATE();
    case 1185:
      if (lookahead == '0') ADVANCE(1334);
      END_STATE();
    case 1186:
      if (lookahead == '0') ADVANCE(1187);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '6') ADVANCE(1593);
      if (lookahead == '7') ADVANCE(1658);
      if (lookahead == '8') ADVANCE(1706);
      END_STATE();
    case 1187:
      if (lookahead == '0') ADVANCE(1278);
      if (lookahead == '1') ADVANCE(1555);
      if (lookahead == '2') ADVANCE(1385);
      if (lookahead == '7') ADVANCE(1607);
      if (lookahead == '8') ADVANCE(1641);
      END_STATE();
    case 1188:
      if (lookahead == '0') ADVANCE(1278);
      if (lookahead == '1') ADVANCE(1559);
      if (lookahead == '2') ADVANCE(1385);
      if (lookahead == '7') ADVANCE(1607);
      if (lookahead == '8') ADVANCE(1641);
      END_STATE();
    case 1189:
      if (lookahead == '0') ADVANCE(1278);
      if (lookahead == '1') ADVANCE(1568);
      if (lookahead == '2') ADVANCE(1385);
      if (lookahead == '7') ADVANCE(1607);
      if (lookahead == '8') ADVANCE(1641);
      END_STATE();
    case 1190:
      if (lookahead == '0') ADVANCE(1637);
      if (lookahead == '1') ADVANCE(1484);
      if (lookahead == '6') ADVANCE(1583);
      if (lookahead == '9') ADVANCE(1620);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 1191:
      if (lookahead == '0') ADVANCE(1637);
      if (lookahead == '1') ADVANCE(1485);
      if (lookahead == '6') ADVANCE(1583);
      if (lookahead == '9') ADVANCE(1620);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 1192:
      if (lookahead == '0') ADVANCE(1637);
      if (lookahead == '1') ADVANCE(1490);
      if (lookahead == '6') ADVANCE(1583);
      if (lookahead == '9') ADVANCE(1620);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 1193:
      if (lookahead == '0') ADVANCE(1637);
      if (lookahead == '1') ADVANCE(1491);
      if (lookahead == '6') ADVANCE(1583);
      if (lookahead == '9') ADVANCE(1620);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 1194:
      ADVANCE_MAP(
        '0', 1353,
        '2', 1731,
        'B', 2149,
        'b', 2149,
        'D', 2168,
        'd', 2168,
        'E', 2176,
        'e', 2176,
        'F', 1629,
        'f', 1629,
      );
      END_STATE();
    case 1195:
      if (lookahead == '0') ADVANCE(2407);
      if (lookahead == '@') ADVANCE(2345);
      if (lookahead == 'O') ADVANCE(2403);
      if (lookahead == 'o') ADVANCE(2412);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1196);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(2322);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      END_STATE();
    case 1196:
      if (lookahead == '0') ADVANCE(2407);
      if (lookahead == '@') ADVANCE(2345);
      if (lookahead == 'O') ADVANCE(2403);
      if (lookahead == 'o') ADVANCE(2412);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1196);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      END_STATE();
    case 1197:
      if (lookahead == '0') ADVANCE(1554);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '7') ADVANCE(1592);
      END_STATE();
    case 1198:
      if (lookahead == '0') ADVANCE(1554);
      if (lookahead == '1') ADVANCE(1556);
      if (lookahead == '7') ADVANCE(1592);
      END_STATE();
    case 1199:
      ADVANCE_MAP(
        '0', 1367,
        '1', 1705,
        '2', 1190,
        '3', 1370,
        '5', 1316,
        '6', 1378,
        '7', 1379,
        'A', 1208,
        'a', 1208,
        'B', 1331,
        'b', 1331,
        'D', 1778,
        'd', 1778,
        'E', 1597,
        'e', 1597,
      );
      END_STATE();
    case 1200:
      ADVANCE_MAP(
        '0', 1367,
        '1', 1705,
        '2', 1190,
        '3', 1370,
        '5', 1316,
        '6', 1378,
        '7', 1380,
        'A', 1208,
        'a', 1208,
        'B', 1332,
        'b', 1332,
        'D', 1778,
        'd', 1778,
        'E', 1597,
        'e', 1597,
      );
      END_STATE();
    case 1201:
      if (lookahead == '0') ADVANCE(1326);
      END_STATE();
    case 1202:
      if (lookahead == '0') ADVANCE(1222);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '7') ADVANCE(1658);
      END_STATE();
    case 1203:
      if (lookahead == '0') ADVANCE(1222);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '7') ADVANCE(1658);
      if (lookahead == '8') ADVANCE(1712);
      END_STATE();
    case 1204:
      if (lookahead == '0') ADVANCE(1325);
      END_STATE();
    case 1205:
      ADVANCE_MAP(
        '0', 1368,
        '1', 1705,
        '2', 1191,
        '3', 1370,
        '5', 1316,
        '6', 1378,
        '7', 1383,
        'A', 1207,
        'a', 1207,
        'B', 1332,
        'b', 1332,
        'D', 1778,
        'd', 1778,
        'E', 1597,
        'e', 1597,
      );
      END_STATE();
    case 1206:
      ADVANCE_MAP(
        '0', 1368,
        '1', 1705,
        '2', 1191,
        '3', 1370,
        '5', 1316,
        '6', 1378,
        '7', 1382,
        'A', 1207,
        'a', 1207,
        'B', 1331,
        'b', 1331,
        'D', 1778,
        'd', 1778,
        'E', 1597,
        'e', 1597,
      );
      END_STATE();
    case 1207:
      if (lookahead == '0') ADVANCE(1241);
      if (lookahead == '7') ADVANCE(1347);
      END_STATE();
    case 1208:
      if (lookahead == '0') ADVANCE(1241);
      if (lookahead == '7') ADVANCE(1347);
      if (lookahead == ';') ADVANCE(2435);
      END_STATE();
    case 1209:
      if (lookahead == '0') ADVANCE(1356);
      if (lookahead == '1') ADVANCE(1671);
      END_STATE();
    case 1210:
      ADVANCE_MAP(
        '0', 1372,
        '2', 1317,
        '7', 1721,
        '9', 2189,
        'D', 1769,
        'd', 1769,
        'E', 1596,
        'e', 1596,
        'F', 1788,
        'f', 1788,
      );
      END_STATE();
    case 1211:
      ADVANCE_MAP(
        '0', 1372,
        '2', 1317,
        '7', 1719,
        '9', 2189,
        'B', 1726,
        'b', 1726,
        'D', 1769,
        'd', 1769,
        'E', 1596,
        'e', 1596,
        'F', 1788,
        'f', 1788,
      );
      END_STATE();
    case 1212:
      if (lookahead == '0') ADVANCE(1733);
      if (lookahead == '1') ADVANCE(1733);
      if (lookahead == '2') ADVANCE(1733);
      END_STATE();
    case 1213:
      ADVANCE_MAP(
        '0', 1733,
        '1', 1733,
        '2', 1733,
        '3', 1733,
        '4', 1733,
        'C', 1747,
        'c', 1747,
        'D', 1748,
        'd', 1748,
        'F', 1749,
        'f', 1749,
      );
      END_STATE();
    case 1214:
      if (lookahead == '0') ADVANCE(1269);
      END_STATE();
    case 1215:
      if (lookahead == '0') ADVANCE(1399);
      END_STATE();
    case 1216:
      if (lookahead == '0') ADVANCE(1396);
      END_STATE();
    case 1217:
      ADVANCE_MAP(
        '0', 1394,
        '2', 1360,
        '7', 1552,
        '9', 2186,
        'A', 1732,
        'a', 1732,
        'D', 1742,
        'd', 1742,
        'F', 1735,
        'f', 1735,
      );
      END_STATE();
    case 1218:
      if (lookahead == '0') ADVANCE(1314);
      if (lookahead == '2') ADVANCE(1359);
      if (lookahead == '7') ADVANCE(1703);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1729);
      END_STATE();
    case 1219:
      if (lookahead == '0') ADVANCE(1472);
      END_STATE();
    case 1220:
      if (lookahead == '0') ADVANCE(1740);
      if (lookahead == '8') ADVANCE(1741);
      END_STATE();
    case 1221:
      if (lookahead == '0') ADVANCE(1277);
      if (lookahead == '1') ADVANCE(1555);
      if (lookahead == '2') ADVANCE(1385);
      if (lookahead == '7') ADVANCE(1607);
      if (lookahead == '8') ADVANCE(1641);
      END_STATE();
    case 1222:
      if (lookahead == '0') ADVANCE(1277);
      if (lookahead == '1') ADVANCE(1559);
      if (lookahead == '2') ADVANCE(1385);
      if (lookahead == '7') ADVANCE(1607);
      if (lookahead == '8') ADVANCE(1641);
      END_STATE();
    case 1223:
      if (lookahead == '0') ADVANCE(1277);
      if (lookahead == '1') ADVANCE(1568);
      if (lookahead == '2') ADVANCE(1385);
      if (lookahead == '7') ADVANCE(1607);
      if (lookahead == '8') ADVANCE(1641);
      END_STATE();
    case 1224:
      if (lookahead == '0') ADVANCE(1729);
      if (lookahead == '1') ADVANCE(1729);
      if (lookahead == '2') ADVANCE(1729);
      END_STATE();
    case 1225:
      if (lookahead == '0') ADVANCE(1729);
      if (lookahead == '1') ADVANCE(1729);
      if (lookahead == '2') ADVANCE(1729);
      if (lookahead == '3') ADVANCE(1729);
      if (lookahead == '4') ADVANCE(1729);
      END_STATE();
    case 1226:
      if (lookahead == '0') ADVANCE(1443);
      if (lookahead == '8') ADVANCE(1597);
      END_STATE();
    case 1227:
      if (lookahead == '0') ADVANCE(1747);
      if (lookahead == '1') ADVANCE(1748);
      if (lookahead == '3') ADVANCE(1749);
      END_STATE();
    case 1228:
      if (lookahead == '0') ADVANCE(1752);
      END_STATE();
    case 1229:
      if (lookahead == '0') ADVANCE(1753);
      END_STATE();
    case 1230:
      if (lookahead == '0') ADVANCE(1730);
      if (lookahead == '1') ADVANCE(1730);
      if (lookahead == '2') ADVANCE(1730);
      END_STATE();
    case 1231:
      if (lookahead == '0') ADVANCE(1730);
      if (lookahead == '1') ADVANCE(1730);
      if (lookahead == '2') ADVANCE(1730);
      if (lookahead == '3') ADVANCE(1730);
      if (lookahead == '4') ADVANCE(1730);
      END_STATE();
    case 1232:
      if (lookahead == '0') ADVANCE(1790);
      if (lookahead == '1') ADVANCE(1790);
      if (lookahead == '2') ADVANCE(1790);
      END_STATE();
    case 1233:
      if (lookahead == '0') ADVANCE(1790);
      if (lookahead == '1') ADVANCE(1790);
      if (lookahead == '2') ADVANCE(1790);
      if (lookahead == '3') ADVANCE(1790);
      if (lookahead == '4') ADVANCE(1790);
      END_STATE();
    case 1234:
      if (lookahead == '0') ADVANCE(1756);
      if (lookahead == '1') ADVANCE(1762);
      if (lookahead == '2') ADVANCE(1763);
      if (lookahead == '3') ADVANCE(1764);
      if (lookahead == '4') ADVANCE(1765);
      END_STATE();
    case 1235:
      ADVANCE_MAP(
        '0', 1756,
        '1', 1762,
        '2', 1763,
        '3', 1764,
        '4', 1765,
        'C', 1747,
        'c', 1747,
        'D', 1748,
        'd', 1748,
        'F', 1749,
        'f', 1749,
      );
      END_STATE();
    case 1236:
      if (lookahead == '0') ADVANCE(1789);
      if (lookahead == '1') ADVANCE(1789);
      if (lookahead == '2') ADVANCE(1789);
      END_STATE();
    case 1237:
      if (lookahead == '0') ADVANCE(1789);
      if (lookahead == '1') ADVANCE(1789);
      if (lookahead == '2') ADVANCE(1789);
      if (lookahead == '3') ADVANCE(1789);
      if (lookahead == '4') ADVANCE(1789);
      END_STATE();
    case 1238:
      if (lookahead == '0') ADVANCE(1763);
      if (lookahead == '1') ADVANCE(1764);
      if (lookahead == '2') ADVANCE(1765);
      END_STATE();
    case 1239:
      if (lookahead == '0') ADVANCE(1768);
      END_STATE();
    case 1240:
      if (lookahead == '0') ADVANCE(1769);
      END_STATE();
    case 1241:
      if (lookahead == '0') ADVANCE(1769);
      if (lookahead == '1') ADVANCE(1769);
      END_STATE();
    case 1242:
      if (lookahead == '0') ADVANCE(1769);
      if (lookahead == '1') ADVANCE(1769);
      if (lookahead == '2') ADVANCE(1769);
      END_STATE();
    case 1243:
      if (lookahead == '0') ADVANCE(1769);
      if (lookahead == '1') ADVANCE(1769);
      if (lookahead == '2') ADVANCE(1769);
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '4') ADVANCE(1769);
      END_STATE();
    case 1244:
      if (lookahead == '0') ADVANCE(1769);
      if (lookahead == '3') ADVANCE(1769);
      END_STATE();
    case 1245:
      if (lookahead == '0') ADVANCE(1778);
      if (lookahead == '1') ADVANCE(1778);
      if (lookahead == '2') ADVANCE(1778);
      END_STATE();
    case 1246:
      if (lookahead == '0') ADVANCE(1778);
      if (lookahead == '1') ADVANCE(1778);
      if (lookahead == '2') ADVANCE(1778);
      if (lookahead == '3') ADVANCE(1778);
      if (lookahead == '4') ADVANCE(1778);
      END_STATE();
    case 1247:
      if (lookahead == '0') ADVANCE(1783);
      if (lookahead == '1') ADVANCE(1791);
      if (lookahead == '3') ADVANCE(1782);
      END_STATE();
    case 1248:
      if (lookahead == '0') ADVANCE(1779);
      END_STATE();
    case 1249:
      if (lookahead == '0') ADVANCE(1788);
      END_STATE();
    case 1250:
      if (lookahead == '0') ADVANCE(1780);
      if (lookahead == '1') ADVANCE(1780);
      if (lookahead == '2') ADVANCE(1780);
      END_STATE();
    case 1251:
      if (lookahead == '0') ADVANCE(1780);
      if (lookahead == '1') ADVANCE(1780);
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '3') ADVANCE(1780);
      if (lookahead == '4') ADVANCE(1780);
      END_STATE();
    case 1252:
      if (lookahead == '0') ADVANCE(1781);
      END_STATE();
    case 1253:
      if (lookahead == '0') ADVANCE(1793);
      if (lookahead == '1') ADVANCE(1793);
      if (lookahead == '2') ADVANCE(1793);
      END_STATE();
    case 1254:
      if (lookahead == '0') ADVANCE(1793);
      if (lookahead == '1') ADVANCE(1793);
      if (lookahead == '2') ADVANCE(1793);
      if (lookahead == '3') ADVANCE(1793);
      if (lookahead == '4') ADVANCE(1793);
      END_STATE();
    case 1255:
      if (lookahead == '0') ADVANCE(1792);
      END_STATE();
    case 1256:
      if (lookahead == '0') ADVANCE(1775);
      END_STATE();
    case 1257:
      if (lookahead == '0') ADVANCE(1786);
      if (lookahead == '1') ADVANCE(1786);
      if (lookahead == '2') ADVANCE(1786);
      END_STATE();
    case 1258:
      if (lookahead == '0') ADVANCE(1786);
      if (lookahead == '1') ADVANCE(1786);
      if (lookahead == '2') ADVANCE(1786);
      if (lookahead == '3') ADVANCE(1786);
      if (lookahead == '4') ADVANCE(1786);
      END_STATE();
    case 1259:
      if (lookahead == '0') ADVANCE(1198);
      if (lookahead == '2') ADVANCE(1451);
      if (lookahead == '5') ADVANCE(1435);
      if (lookahead == '6') ADVANCE(1593);
      if (lookahead == '8') ADVANCE(1706);
      END_STATE();
    case 1260:
      if (lookahead == '0') ADVANCE(1198);
      if (lookahead == '6') ADVANCE(1593);
      if (lookahead == '8') ADVANCE(1706);
      END_STATE();
    case 1261:
      if (lookahead == '0') ADVANCE(1675);
      if (lookahead == '1') ADVANCE(1224);
      END_STATE();
    case 1262:
      if (lookahead == '0') ADVANCE(1352);
      if (lookahead == '2') ADVANCE(1364);
      if (lookahead == '7') ADVANCE(1714);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1730);
      END_STATE();
    case 1263:
      if (lookahead == '0') ADVANCE(1794);
      if (lookahead == '1') ADVANCE(1794);
      if (lookahead == '2') ADVANCE(1794);
      END_STATE();
    case 1264:
      if (lookahead == '0') ADVANCE(1794);
      if (lookahead == '1') ADVANCE(1794);
      if (lookahead == '2') ADVANCE(1794);
      if (lookahead == '3') ADVANCE(1794);
      if (lookahead == '4') ADVANCE(1794);
      END_STATE();
    case 1265:
      if (lookahead == '0') ADVANCE(1795);
      END_STATE();
    case 1266:
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1238);
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '4') ADVANCE(1533);
      if (lookahead == '6') ADVANCE(1228);
      if (lookahead == '7') ADVANCE(1229);
      END_STATE();
    case 1267:
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1238);
      if (lookahead == '6') ADVANCE(1228);
      if (lookahead == '7') ADVANCE(1229);
      END_STATE();
    case 1268:
      if (lookahead == '0') ADVANCE(1362);
      if (lookahead == '2') ADVANCE(1366);
      if (lookahead == '7') ADVANCE(1716);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1790);
      END_STATE();
    case 1269:
      if (lookahead == '0') ADVANCE(1535);
      END_STATE();
    case 1270:
      if (lookahead == '0') ADVANCE(1676);
      if (lookahead == '1') ADVANCE(1230);
      END_STATE();
    case 1271:
      if (lookahead == '0') ADVANCE(1365);
      if (lookahead == '2') ADVANCE(1369);
      if (lookahead == '7') ADVANCE(1717);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1789);
      END_STATE();
    case 1272:
      if (lookahead == '0') ADVANCE(1677);
      if (lookahead == '1') ADVANCE(1232);
      END_STATE();
    case 1273:
      if (lookahead == '0') ADVANCE(1371);
      if (lookahead == '2') ADVANCE(1377);
      if (lookahead == '7') ADVANCE(1720);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1769);
      END_STATE();
    case 1274:
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1236);
      END_STATE();
    case 1275:
      if (lookahead == '0') ADVANCE(1684);
      if (lookahead == '1') ADVANCE(1245);
      if (lookahead == '5') ADVANCE(1477);
      if (lookahead == '6') ADVANCE(1538);
      END_STATE();
    case 1276:
      if (lookahead == '0') ADVANCE(1684);
      if (lookahead == '1') ADVANCE(1245);
      if (lookahead == '5') ADVANCE(1477);
      if (lookahead == '6') ADVANCE(1538);
      if (lookahead == '7') ADVANCE(1229);
      END_STATE();
    case 1277:
      if (lookahead == '0') ADVANCE(1616);
      END_STATE();
    case 1278:
      if (lookahead == '0') ADVANCE(1616);
      if (lookahead == '3') ADVANCE(1534);
      END_STATE();
    case 1279:
      if (lookahead == '0') ADVANCE(1683);
      if (lookahead == '1') ADVANCE(1242);
      END_STATE();
    case 1280:
      if (lookahead == '0') ADVANCE(1683);
      if (lookahead == '1') ADVANCE(1242);
      if (lookahead == '6') ADVANCE(1249);
      END_STATE();
    case 1281:
      if (lookahead == '0') ADVANCE(1687);
      if (lookahead == '1') ADVANCE(1250);
      if (lookahead == '6') ADVANCE(1252);
      END_STATE();
    case 1282:
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '5') ADVANCE(1541);
      if (lookahead == '6') ADVANCE(1481);
      END_STATE();
    case 1283:
      if (lookahead == '0') ADVANCE(1689);
      if (lookahead == '1') ADVANCE(1253);
      if (lookahead == '6') ADVANCE(1255);
      END_STATE();
    case 1284:
      if (lookahead == '0') ADVANCE(1693);
      if (lookahead == '1') ADVANCE(1263);
      END_STATE();
    case 1285:
      if (lookahead == '0') ADVANCE(1691);
      if (lookahead == '1') ADVANCE(1257);
      if (lookahead == '5') ADVANCE(1477);
      if (lookahead == '6') ADVANCE(1538);
      END_STATE();
    case 1286:
      if (lookahead == '0') ADVANCE(1691);
      if (lookahead == '1') ADVANCE(1257);
      if (lookahead == '5') ADVANCE(1477);
      if (lookahead == '6') ADVANCE(1538);
      if (lookahead == '7') ADVANCE(1229);
      END_STATE();
    case 1287:
      ADVANCE_MAP(
        '0', 1351,
        '2', 1361,
        '7', 1552,
        '9', 2186,
        'A', 1732,
        'a', 1732,
        'B', 2149,
        'b', 2149,
        'D', 1743,
        'd', 1743,
        'E', 2176,
        'e', 2176,
        'F', 1630,
        'f', 1630,
      );
      END_STATE();
    case 1288:
      ADVANCE_MAP(
        '0', 1391,
        '1', 1705,
        '2', 1192,
        '3', 1370,
        '5', 1316,
        '6', 1378,
        '7', 1381,
        'A', 1208,
        'a', 1208,
        'B', 1332,
        'b', 1332,
        'D', 1786,
        'd', 1786,
        'E', 1597,
        'e', 1597,
      );
      END_STATE();
    case 1289:
      if (lookahead == '0') ADVANCE(1599);
      if (lookahead == '2') ADVANCE(1375);
      if (lookahead == '7') ADVANCE(2164);
      if (lookahead == '9') ADVANCE(2187);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1768);
      END_STATE();
    case 1290:
      if (lookahead == '0') ADVANCE(1400);
      END_STATE();
    case 1291:
      ADVANCE_MAP(
        '0', 1392,
        '1', 1705,
        '2', 1193,
        '3', 1370,
        '5', 1316,
        '6', 1378,
        '7', 1384,
        'A', 1207,
        'a', 1207,
        'B', 1332,
        'b', 1332,
        'D', 1786,
        'd', 1786,
        'E', 1597,
        'e', 1597,
      );
      END_STATE();
    case 1292:
      ADVANCE_MAP(
        '0', 1376,
        '2', 1354,
        '7', 1715,
        '9', 2190,
        'B', 1769,
        'b', 1769,
        'D', 1780,
        'd', 1780,
        'F', 1781,
        'f', 1781,
      );
      END_STATE();
    case 1293:
      if (lookahead == '0') ADVANCE(1389);
      if (lookahead == '2') ADVANCE(1387);
      if (lookahead == '7') ADVANCE(1725);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1794);
      END_STATE();
    case 1294:
      ADVANCE_MAP(
        '0', 1600,
        '2', 1388,
        '7', 1724,
        '9', 2188,
        'B', 1769,
        'b', 1769,
        'F', 1779,
        'f', 1779,
      );
      END_STATE();
    case 1295:
      if (lookahead == '0') ADVANCE(1408);
      END_STATE();
    case 1296:
      ADVANCE_MAP(
        '0', 1386,
        '2', 1363,
        '7', 1722,
        '9', 2191,
        'D', 1793,
        'd', 1793,
        'F', 1792,
        'f', 1792,
      );
      END_STATE();
    case 1297:
      if (lookahead == '0') ADVANCE(1413);
      END_STATE();
    case 1298:
      if (lookahead == '0') ADVANCE(1419);
      END_STATE();
    case 1299:
      if (lookahead == '0') ADVANCE(1420);
      END_STATE();
    case 1300:
      if (lookahead == '0') ADVANCE(1604);
      if (lookahead == '2') ADVANCE(1393);
      if (lookahead == '7') ADVANCE(2165);
      if (lookahead == '9') ADVANCE(2192);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1795);
      END_STATE();
    case 1301:
      if (lookahead == '0') ADVANCE(1401);
      END_STATE();
    case 1302:
      if (lookahead == '0') ADVANCE(1188);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '6') ADVANCE(1593);
      if (lookahead == '7') ADVANCE(1658);
      if (lookahead == '8') ADVANCE(1706);
      END_STATE();
    case 1303:
      if (lookahead == '0') ADVANCE(1221);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '7') ADVANCE(1658);
      END_STATE();
    case 1304:
      if (lookahead == '0') ADVANCE(1221);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '7') ADVANCE(1658);
      if (lookahead == '8') ADVANCE(1712);
      END_STATE();
    case 1305:
      if (lookahead == '0') ADVANCE(1402);
      END_STATE();
    case 1306:
      if (lookahead == '0') ADVANCE(1407);
      END_STATE();
    case 1307:
      if (lookahead == '0') ADVANCE(1403);
      if (lookahead == '1') ADVANCE(1671);
      END_STATE();
    case 1308:
      if (lookahead == '0') ADVANCE(1189);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '6') ADVANCE(1593);
      if (lookahead == '7') ADVANCE(1658);
      if (lookahead == '8') ADVANCE(1706);
      END_STATE();
    case 1309:
      if (lookahead == '0') ADVANCE(1223);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '7') ADVANCE(1658);
      END_STATE();
    case 1310:
      if (lookahead == '1') ADVANCE(2383);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1310);
      END_STATE();
    case 1311:
      ADVANCE_MAP(
        '1', 1182,
        '3', 1573,
        '4', 1452,
        '5', 1669,
        '6', 1605,
        '7', 1526,
        '8', 1434,
        'X', 1321,
        'x', 1321,
      );
      END_STATE();
    case 1312:
      if (lookahead == '1') ADVANCE(2455);
      END_STATE();
    case 1313:
      if (lookahead == '1') ADVANCE(1213);
      if (lookahead == '3') ADVANCE(1533);
      if (lookahead == '4') ADVANCE(1576);
      END_STATE();
    case 1314:
      if (lookahead == '1') ADVANCE(1225);
      END_STATE();
    case 1315:
      ADVANCE_MAP(
        '1', 1186,
        '2', 1373,
        '3', 1543,
        '4', 1453,
        '5', 1698,
        '6', 1247,
        '8', 1440,
        '9', 1574,
        'X', 1404,
        'x', 1404,
      );
      END_STATE();
    case 1316:
      if (lookahead == '1') ADVANCE(1585);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1346);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2151);
      END_STATE();
    case 1317:
      if (lookahead == '1') ADVANCE(1478);
      END_STATE();
    case 1318:
      ADVANCE_MAP(
        '1', 1203,
        '2', 1373,
        '3', 1543,
        '4', 1548,
        '5', 1700,
        '6', 1247,
        '8', 1447,
        '9', 1574,
        'X', 1414,
        'x', 1414,
      );
      END_STATE();
    case 1319:
      if (lookahead == '1') ADVANCE(1260);
      if (lookahead == '4') ADVANCE(1456);
      if (lookahead == '8') ADVANCE(1449);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1450);
      END_STATE();
    case 1320:
      ADVANCE_MAP(
        '1', 1309,
        '2', 1373,
        '3', 1543,
        '4', 1549,
        '5', 1700,
        '6', 1247,
        '8', 1518,
        '9', 1574,
        'X', 1417,
        'x', 1417,
      );
      END_STATE();
    case 1321:
      ADVANCE_MAP(
        '1', 1628,
        '2', 1184,
        '3', 1214,
        '5', 2183,
        '6', 1640,
        'B', 2167,
        'b', 2167,
        'F', 2184,
        'f', 2184,
      );
      END_STATE();
    case 1322:
      if (lookahead == '1') ADVANCE(1204);
      if (lookahead == '4') ADVANCE(1608);
      if (lookahead == '8') ADVANCE(1437);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1438);
      END_STATE();
    case 1323:
      if (lookahead == '1') ADVANCE(1209);
      if (lookahead == '4') ADVANCE(1619);
      if (lookahead == '6') ADVANCE(1346);
      if (lookahead == '8') ADVANCE(1441);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1442);
      END_STATE();
    case 1324:
      if (lookahead == '1') ADVANCE(1433);
      if (lookahead == '3') ADVANCE(1573);
      if (lookahead == '6') ADVANCE(1605);
      if (lookahead == '7') ADVANCE(1526);
      if (lookahead == '8') ADVANCE(1458);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1448);
      END_STATE();
    case 1325:
      if (lookahead == '1') ADVANCE(1553);
      END_STATE();
    case 1326:
      if (lookahead == '1') ADVANCE(1564);
      if (lookahead == '7') ADVANCE(1600);
      END_STATE();
    case 1327:
      if (lookahead == '1') ADVANCE(1241);
      if (lookahead == '2') ADVANCE(1483);
      if (lookahead == '3') ADVANCE(1589);
      END_STATE();
    case 1328:
      if (lookahead == '1') ADVANCE(1241);
      if (lookahead == '2') ADVANCE(1489);
      if (lookahead == '3') ADVANCE(1589);
      END_STATE();
    case 1329:
      if (lookahead == '1') ADVANCE(1241);
      if (lookahead == '2') ADVANCE(1482);
      if (lookahead == '3') ADVANCE(1589);
      END_STATE();
    case 1330:
      if (lookahead == '1') ADVANCE(1241);
      if (lookahead == '2') ADVANCE(1488);
      if (lookahead == '3') ADVANCE(1589);
      END_STATE();
    case 1331:
      if (lookahead == '1') ADVANCE(1477);
      if (lookahead == ';') ADVANCE(1166);
      END_STATE();
    case 1332:
      if (lookahead == '1') ADVANCE(1477);
      if (lookahead == ';') ADVANCE(2361);
      END_STATE();
    case 1333:
      if (lookahead == '1') ADVANCE(1695);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2160);
      END_STATE();
    case 1334:
      if (lookahead == '1') ADVANCE(1692);
      if (lookahead == '7') ADVANCE(1599);
      END_STATE();
    case 1335:
      if (lookahead == '1') ADVANCE(1671);
      END_STATE();
    case 1336:
      if (lookahead == '1') ADVANCE(1104);
      END_STATE();
    case 1337:
      if (lookahead == '1') ADVANCE(1185);
      if (lookahead == '4') ADVANCE(1657);
      if (lookahead == '8') ADVANCE(1464);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1439);
      END_STATE();
    case 1338:
      if (lookahead == '1') ADVANCE(1201);
      if (lookahead == '4') ADVANCE(1542);
      if (lookahead == '5') ADVANCE(1699);
      if (lookahead == '6') ADVANCE(1346);
      if (lookahead == '8') ADVANCE(1519);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1410);
      END_STATE();
    case 1339:
      if (lookahead == '1') ADVANCE(1201);
      if (lookahead == '4') ADVANCE(1542);
      if (lookahead == '5') ADVANCE(1699);
      if (lookahead == '8') ADVANCE(1519);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1409);
      END_STATE();
    case 1340:
      if (lookahead == '1') ADVANCE(1335);
      if (lookahead == '6') ADVANCE(1346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1460);
      END_STATE();
    case 1341:
      if (lookahead == '1') ADVANCE(1465);
      END_STATE();
    case 1342:
      if (lookahead == '1') ADVANCE(1216);
      if (lookahead == '4') ADVANCE(1540);
      if (lookahead == '5') ADVANCE(1699);
      if (lookahead == '8') ADVANCE(1517);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1411);
      END_STATE();
    case 1343:
      if (lookahead == '1') ADVANCE(1305);
      if (lookahead == '4') ADVANCE(1623);
      if (lookahead == '8') ADVANCE(1521);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1444);
      END_STATE();
    case 1344:
      if (lookahead == '1') ADVANCE(1757);
      END_STATE();
    case 1345:
      if (lookahead == '1') ADVANCE(1760);
      END_STATE();
    case 1346:
      if (lookahead == '1') ADVANCE(1769);
      END_STATE();
    case 1347:
      if (lookahead == '1') ADVANCE(1769);
      if (lookahead == '2') ADVANCE(1769);
      END_STATE();
    case 1348:
      if (lookahead == '1') ADVANCE(1769);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1737);
      END_STATE();
    case 1349:
      if (lookahead == '1') ADVANCE(1769);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1787);
      END_STATE();
    case 1350:
      if (lookahead == '1') ADVANCE(1461);
      if (lookahead == ';') ADVANCE(2229);
      END_STATE();
    case 1351:
      if (lookahead == '1') ADVANCE(1235);
      if (lookahead == '3') ADVANCE(1533);
      if (lookahead == '4') ADVANCE(1576);
      END_STATE();
    case 1352:
      if (lookahead == '1') ADVANCE(1231);
      END_STATE();
    case 1353:
      if (lookahead == '1') ADVANCE(2161);
      if (lookahead == '3') ADVANCE(1533);
      END_STATE();
    case 1354:
      if (lookahead == '1') ADVANCE(1486);
      END_STATE();
    case 1355:
      if (lookahead == '1') ADVANCE(1215);
      if (lookahead == '4') ADVANCE(1530);
      if (lookahead == '5') ADVANCE(1697);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1397);
      END_STATE();
    case 1356:
      if (lookahead == '1') ADVANCE(1570);
      if (lookahead == '7') ADVANCE(1601);
      END_STATE();
    case 1357:
      if (lookahead == '1') ADVANCE(2177);
      END_STATE();
    case 1358:
      if (lookahead == '1') ADVANCE(1307);
      if (lookahead == '4') ADVANCE(1532);
      if (lookahead == '5') ADVANCE(1697);
      if (lookahead == '6') ADVANCE(1346);
      if (lookahead == '8') ADVANCE(1441);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1398);
      END_STATE();
    case 1359:
      if (lookahead == '1') ADVANCE(1466);
      END_STATE();
    case 1360:
      if (lookahead == '1') ADVANCE(1474);
      END_STATE();
    case 1361:
      if (lookahead == '1') ADVANCE(1474);
      if (lookahead == ';') ADVANCE(2229);
      END_STATE();
    case 1362:
      if (lookahead == '1') ADVANCE(1233);
      END_STATE();
    case 1363:
      if (lookahead == '1') ADVANCE(1487);
      END_STATE();
    case 1364:
      if (lookahead == '1') ADVANCE(1470);
      END_STATE();
    case 1365:
      if (lookahead == '1') ADVANCE(1237);
      END_STATE();
    case 1366:
      if (lookahead == '1') ADVANCE(1471);
      END_STATE();
    case 1367:
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '3') ADVANCE(2162);
      if (lookahead == '4') ADVANCE(1660);
      END_STATE();
    case 1368:
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '3') ADVANCE(2162);
      if (lookahead == '4') ADVANCE(1659);
      END_STATE();
    case 1369:
      if (lookahead == '1') ADVANCE(1473);
      END_STATE();
    case 1370:
      if (lookahead == '1') ADVANCE(1536);
      END_STATE();
    case 1371:
      if (lookahead == '1') ADVANCE(1243);
      END_STATE();
    case 1372:
      if (lookahead == '1') ADVANCE(1243);
      if (lookahead == '4') ADVANCE(1587);
      END_STATE();
    case 1373:
      if (lookahead == '1') ADVANCE(1636);
      if (lookahead == '4') ADVANCE(1682);
      END_STATE();
    case 1374:
      if (lookahead == '1') ADVANCE(1475);
      END_STATE();
    case 1375:
      if (lookahead == '1') ADVANCE(1615);
      END_STATE();
    case 1376:
      if (lookahead == '1') ADVANCE(1251);
      if (lookahead == '4') ADVANCE(1588);
      END_STATE();
    case 1377:
      if (lookahead == '1') ADVANCE(1476);
      END_STATE();
    case 1378:
      if (lookahead == '1') ADVANCE(1476);
      if (lookahead == '4') ADVANCE(1476);
      END_STATE();
    case 1379:
      if (lookahead == '1') ADVANCE(1616);
      if (lookahead == '3') ADVANCE(1344);
      if (lookahead == '9') ADVANCE(1621);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1536);
      END_STATE();
    case 1380:
      if (lookahead == '1') ADVANCE(1616);
      if (lookahead == '3') ADVANCE(1344);
      if (lookahead == '9') ADVANCE(1624);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1536);
      END_STATE();
    case 1381:
      if (lookahead == '1') ADVANCE(1616);
      if (lookahead == '3') ADVANCE(1344);
      if (lookahead == '9') ADVANCE(1625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1536);
      END_STATE();
    case 1382:
      if (lookahead == '1') ADVANCE(1616);
      if (lookahead == '9') ADVANCE(1621);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1536);
      END_STATE();
    case 1383:
      if (lookahead == '1') ADVANCE(1616);
      if (lookahead == '9') ADVANCE(1624);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1536);
      END_STATE();
    case 1384:
      if (lookahead == '1') ADVANCE(1616);
      if (lookahead == '9') ADVANCE(1625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1536);
      END_STATE();
    case 1385:
      if (lookahead == '1') ADVANCE(1683);
      if (lookahead == '2') ADVANCE(1658);
      END_STATE();
    case 1386:
      if (lookahead == '1') ADVANCE(1254);
      if (lookahead == '4') ADVANCE(1591);
      END_STATE();
    case 1387:
      if (lookahead == '1') ADVANCE(1498);
      END_STATE();
    case 1388:
      if (lookahead == '1') ADVANCE(1622);
      END_STATE();
    case 1389:
      if (lookahead == '1') ADVANCE(1264);
      END_STATE();
    case 1390:
      if (lookahead == '1') ADVANCE(1492);
      END_STATE();
    case 1391:
      if (lookahead == '1') ADVANCE(1258);
      if (lookahead == '3') ADVANCE(2162);
      if (lookahead == '4') ADVANCE(1660);
      END_STATE();
    case 1392:
      if (lookahead == '1') ADVANCE(1258);
      if (lookahead == '3') ADVANCE(2162);
      if (lookahead == '4') ADVANCE(1659);
      END_STATE();
    case 1393:
      if (lookahead == '1') ADVANCE(1627);
      END_STATE();
    case 1394:
      if (lookahead == '1') ADVANCE(1234);
      if (lookahead == '4') ADVANCE(1576);
      END_STATE();
    case 1395:
      ADVANCE_MAP(
        '1', 1259,
        '3', 1573,
        '4', 1456,
        '6', 1605,
        '7', 1526,
        '8', 1514,
        'X', 1457,
        'x', 1457,
      );
      END_STATE();
    case 1396:
      if (lookahead == '1') ADVANCE(1557);
      if (lookahead == '7') ADVANCE(1602);
      END_STATE();
    case 1397:
      if (lookahead == '1') ADVANCE(1651);
      if (lookahead == '2') ADVANCE(1655);
      END_STATE();
    case 1398:
      if (lookahead == '1') ADVANCE(1651);
      if (lookahead == '2') ADVANCE(1211);
      if (lookahead == '3') ADVANCE(2172);
      END_STATE();
    case 1399:
      if (lookahead == '1') ADVANCE(1550);
      END_STATE();
    case 1400:
      if (lookahead == '1') ADVANCE(1558);
      END_STATE();
    case 1401:
      if (lookahead == '1') ADVANCE(1696);
      if (lookahead == '7') ADVANCE(1604);
      END_STATE();
    case 1402:
      if (lookahead == '1') ADVANCE(1571);
      if (lookahead == '7') ADVANCE(1603);
      END_STATE();
    case 1403:
      if (lookahead == '1') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1601);
      END_STATE();
    case 1404:
      ADVANCE_MAP(
        '1', 1652,
        '2', 1199,
        '3', 2163,
        '6', 1640,
        'B', 1348,
        'b', 1348,
        'D', 1682,
        'd', 1682,
        'F', 1682,
        'f', 1682,
      );
      END_STATE();
    case 1405:
      ADVANCE_MAP(
        '1', 1652,
        '2', 1206,
        '3', 2163,
        'B', 1349,
        'b', 1349,
        'D', 1682,
        'd', 1682,
        'F', 1682,
        'f', 1682,
      );
      END_STATE();
    case 1406:
      ADVANCE_MAP(
        '1', 1652,
        '2', 1206,
        '3', 2163,
        'B', 1346,
        'b', 1346,
        'D', 1682,
        'd', 1682,
        'F', 1682,
        'f', 1682,
      );
      END_STATE();
    case 1407:
      if (lookahead == '1') ADVANCE(1561);
      END_STATE();
    case 1408:
      if (lookahead == '1') ADVANCE(1560);
      END_STATE();
    case 1409:
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == '2') ADVANCE(1294);
      END_STATE();
    case 1410:
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == '2') ADVANCE(1294);
      if (lookahead == '3') ADVANCE(2172);
      END_STATE();
    case 1411:
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == '2') ADVANCE(1292);
      END_STATE();
    case 1412:
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == '2') ADVANCE(1667);
      END_STATE();
    case 1413:
      if (lookahead == '1') ADVANCE(1567);
      END_STATE();
    case 1414:
      ADVANCE_MAP(
        '1', 1654,
        '2', 1205,
        '3', 2163,
        'B', 1349,
        'b', 1349,
        'D', 1682,
        'd', 1682,
        'F', 1682,
        'f', 1682,
      );
      END_STATE();
    case 1415:
      ADVANCE_MAP(
        '1', 1654,
        '2', 1205,
        '3', 2163,
        'B', 1346,
        'b', 1346,
        'D', 1682,
        'd', 1682,
        'F', 1682,
        'f', 1682,
      );
      END_STATE();
    case 1416:
      ADVANCE_MAP(
        '1', 1654,
        '2', 1200,
        '3', 2163,
        '6', 1640,
        'B', 1348,
        'b', 1348,
        'D', 1682,
        'd', 1682,
        'F', 1682,
        'f', 1682,
      );
      END_STATE();
    case 1417:
      ADVANCE_MAP(
        '1', 1654,
        '2', 1291,
        '3', 2163,
        'B', 1346,
        'b', 1346,
        'D', 1682,
        'd', 1682,
        'F', 1682,
        'f', 1682,
      );
      END_STATE();
    case 1418:
      ADVANCE_MAP(
        '1', 1654,
        '2', 1288,
        '3', 2163,
        '6', 1640,
        'B', 1348,
        'b', 1348,
        'D', 1682,
        'd', 1682,
        'F', 1682,
        'f', 1682,
      );
      END_STATE();
    case 1419:
      if (lookahead == '1') ADVANCE(1569);
      END_STATE();
    case 1420:
      if (lookahead == '1') ADVANCE(1572);
      END_STATE();
    case 1421:
      if (lookahead == '1') ADVANCE(1290);
      if (lookahead == '4') ADVANCE(1612);
      if (lookahead == '8') ADVANCE(1515);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1494);
      END_STATE();
    case 1422:
      if (lookahead == '1') ADVANCE(1301);
      if (lookahead == '4') ADVANCE(1665);
      if (lookahead == '8') ADVANCE(1522);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1495);
      END_STATE();
    case 1423:
      if (lookahead == '1') ADVANCE(1306);
      if (lookahead == '4') ADVANCE(1536);
      if (lookahead == '5') ADVANCE(1699);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1412);
      END_STATE();
    case 1424:
      if (lookahead == '1') ADVANCE(1295);
      if (lookahead == '4') ADVANCE(1613);
      if (lookahead == '8') ADVANCE(1520);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1500);
      END_STATE();
    case 1425:
      if (lookahead == '1') ADVANCE(1297);
      if (lookahead == '4') ADVANCE(1614);
      if (lookahead == '8') ADVANCE(1523);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1504);
      END_STATE();
    case 1426:
      if (lookahead == '1') ADVANCE(1298);
      if (lookahead == '4') ADVANCE(1616);
      if (lookahead == '8') ADVANCE(1524);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1506);
      END_STATE();
    case 1427:
      if (lookahead == '1') ADVANCE(1299);
      if (lookahead == '4') ADVANCE(1626);
      if (lookahead == '8') ADVANCE(1525);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1508);
      END_STATE();
    case 1428:
      ADVANCE_MAP(
        '1', 1302,
        '2', 1373,
        '3', 1543,
        '4', 1454,
        '5', 1700,
        '6', 1247,
        '8', 1440,
        '9', 1574,
        'X', 1416,
        'x', 1416,
      );
      END_STATE();
    case 1429:
      ADVANCE_MAP(
        '1', 1304,
        '2', 1373,
        '3', 1543,
        '4', 1545,
        '5', 1698,
        '6', 1247,
        '8', 1447,
        '9', 1574,
        'X', 1405,
        'x', 1405,
      );
      END_STATE();
    case 1430:
      ADVANCE_MAP(
        '1', 1303,
        '2', 1373,
        '3', 1543,
        '4', 1545,
        '5', 1698,
        '6', 1247,
        '8', 1447,
        '9', 1574,
        'X', 1406,
        'x', 1406,
      );
      END_STATE();
    case 1431:
      ADVANCE_MAP(
        '1', 1308,
        '2', 1373,
        '3', 1543,
        '4', 1455,
        '5', 1700,
        '6', 1247,
        '8', 1516,
        '9', 1574,
        'X', 1418,
        'x', 1418,
      );
      END_STATE();
    case 1432:
      ADVANCE_MAP(
        '1', 1202,
        '2', 1373,
        '3', 1543,
        '4', 1548,
        '5', 1700,
        '6', 1247,
        '8', 1447,
        '9', 1574,
        'X', 1415,
        'x', 1415,
      );
      END_STATE();
    case 1433:
      if (lookahead == '2') ADVANCE(1451);
      if (lookahead == '5') ADVANCE(1435);
      END_STATE();
    case 1434:
      if (lookahead == '2') ADVANCE(1183);
      if (lookahead == '7') ADVANCE(1493);
      END_STATE();
    case 1435:
      if (lookahead == '2') ADVANCE(1468);
      END_STATE();
    case 1436:
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '4') ADVANCE(1533);
      END_STATE();
    case 1437:
      if (lookahead == '2') ADVANCE(1261);
      if (lookahead == '7') ADVANCE(1497);
      END_STATE();
    case 1438:
      if (lookahead == '2') ADVANCE(1218);
      END_STATE();
    case 1439:
      if (lookahead == '2') ADVANCE(1289);
      END_STATE();
    case 1440:
      if (lookahead == '2') ADVANCE(1276);
      if (lookahead == '5') ADVANCE(1713);
      if (lookahead == '6') ADVANCE(1598);
      if (lookahead == '7') ADVANCE(1327);
      if (lookahead == '8') ADVANCE(1282);
      if (lookahead == '9') ADVANCE(1666);
      END_STATE();
    case 1441:
      if (lookahead == '2') ADVANCE(1280);
      if (lookahead == '7') ADVANCE(1445);
      END_STATE();
    case 1442:
      if (lookahead == '2') ADVANCE(1210);
      if (lookahead == '3') ADVANCE(2172);
      END_STATE();
    case 1443:
      if (lookahead == '2') ADVANCE(1637);
      END_STATE();
    case 1444:
      if (lookahead == '2') ADVANCE(1296);
      END_STATE();
    case 1445:
      if (lookahead == '2') ADVANCE(1478);
      END_STATE();
    case 1446:
      if (lookahead == '2') ADVANCE(2457);
      END_STATE();
    case 1447:
      if (lookahead == '2') ADVANCE(1275);
      if (lookahead == '5') ADVANCE(1713);
      if (lookahead == '6') ADVANCE(1598);
      if (lookahead == '7') ADVANCE(1329);
      if (lookahead == '8') ADVANCE(1282);
      if (lookahead == '9') ADVANCE(1666);
      END_STATE();
    case 1448:
      if (lookahead == '2') ADVANCE(1194);
      if (lookahead == '3') ADVANCE(1214);
      if (lookahead == '5') ADVANCE(2183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2184);
      END_STATE();
    case 1449:
      if (lookahead == '2') ADVANCE(1267);
      if (lookahead == '7') ADVANCE(1499);
      END_STATE();
    case 1450:
      if (lookahead == '2') ADVANCE(1217);
      if (lookahead == '6') ADVANCE(1640);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2167);
      END_STATE();
    case 1451:
      if (lookahead == '2') ADVANCE(1704);
      END_STATE();
    case 1452:
      if (lookahead == '2') ADVANCE(1732);
      if (lookahead == '3') ADVANCE(1727);
      if (lookahead == '5') ADVANCE(1733);
      if (lookahead == '7') ADVANCE(1735);
      END_STATE();
    case 1453:
      if (lookahead == '2') ADVANCE(1732);
      if (lookahead == '3') ADVANCE(1776);
      if (lookahead == '5') ADVANCE(1778);
      END_STATE();
    case 1454:
      if (lookahead == '2') ADVANCE(1732);
      if (lookahead == '3') ADVANCE(1784);
      if (lookahead == '5') ADVANCE(1778);
      END_STATE();
    case 1455:
      if (lookahead == '2') ADVANCE(1732);
      if (lookahead == '3') ADVANCE(1784);
      if (lookahead == '5') ADVANCE(1786);
      END_STATE();
    case 1456:
      if (lookahead == '2') ADVANCE(1732);
      if (lookahead == '5') ADVANCE(1742);
      if (lookahead == '7') ADVANCE(1735);
      END_STATE();
    case 1457:
      ADVANCE_MAP(
        '2', 1287,
        '3', 1214,
        '5', 2183,
        '6', 1640,
        'B', 2167,
        'b', 2167,
        'F', 2184,
        'f', 2184,
      );
      END_STATE();
    case 1458:
      if (lookahead == '2') ADVANCE(1436);
      END_STATE();
    case 1459:
      if (lookahead == '2') ADVANCE(1673);
      END_STATE();
    case 1460:
      if (lookahead == '2') ADVANCE(2175);
      if (lookahead == '3') ADVANCE(2172);
      END_STATE();
    case 1461:
      if (lookahead == '2') ADVANCE(1733);
      if (lookahead == '5') ADVANCE(1754);
      if (lookahead == '7') ADVANCE(1755);
      END_STATE();
    case 1462:
      if (lookahead == '2') ADVANCE(1480);
      if (lookahead == '4') ADVANCE(1636);
      if (lookahead == '9') ADVANCE(1583);
      END_STATE();
    case 1463:
      if (lookahead == '2') ADVANCE(1109);
      END_STATE();
    case 1464:
      if (lookahead == '2') ADVANCE(1644);
      if (lookahead == '7') ADVANCE(1509);
      END_STATE();
    case 1465:
      if (lookahead == '2') ADVANCE(1737);
      END_STATE();
    case 1466:
      if (lookahead == '2') ADVANCE(1729);
      END_STATE();
    case 1467:
      if (lookahead == '2') ADVANCE(1357);
      END_STATE();
    case 1468:
      if (lookahead == '2') ADVANCE(1744);
      if (lookahead == '4') ADVANCE(1745);
      END_STATE();
    case 1469:
      if (lookahead == '2') ADVANCE(1467);
      END_STATE();
    case 1470:
      if (lookahead == '2') ADVANCE(1730);
      END_STATE();
    case 1471:
      if (lookahead == '2') ADVANCE(1790);
      END_STATE();
    case 1472:
      if (lookahead == '2') ADVANCE(1761);
      END_STATE();
    case 1473:
      if (lookahead == '2') ADVANCE(1789);
      END_STATE();
    case 1474:
      if (lookahead == '2') ADVANCE(1766);
      if (lookahead == '5') ADVANCE(1754);
      if (lookahead == '7') ADVANCE(1755);
      END_STATE();
    case 1475:
      if (lookahead == '2') ADVANCE(1736);
      END_STATE();
    case 1476:
      if (lookahead == '2') ADVANCE(1769);
      END_STATE();
    case 1477:
      if (lookahead == '2') ADVANCE(1769);
      if (lookahead == '3') ADVANCE(1769);
      END_STATE();
    case 1478:
      if (lookahead == '2') ADVANCE(1769);
      if (lookahead == '5') ADVANCE(1788);
      END_STATE();
    case 1479:
      if (lookahead == '2') ADVANCE(1769);
      if (lookahead == '6') ADVANCE(1769);
      END_STATE();
    case 1480:
      if (lookahead == '2') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1769);
      END_STATE();
    case 1481:
      if (lookahead == '2') ADVANCE(1769);
      if (lookahead == '9') ADVANCE(1769);
      END_STATE();
    case 1482:
      if (lookahead == '2') ADVANCE(1778);
      if (lookahead == '3') ADVANCE(1769);
      END_STATE();
    case 1483:
      if (lookahead == '2') ADVANCE(1778);
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1755);
      END_STATE();
    case 1484:
      if (lookahead == '2') ADVANCE(1778);
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1755);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 1485:
      if (lookahead == '2') ADVANCE(1778);
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 1486:
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '5') ADVANCE(1781);
      END_STATE();
    case 1487:
      if (lookahead == '2') ADVANCE(1793);
      if (lookahead == '5') ADVANCE(1792);
      END_STATE();
    case 1488:
      if (lookahead == '2') ADVANCE(1786);
      if (lookahead == '3') ADVANCE(1769);
      END_STATE();
    case 1489:
      if (lookahead == '2') ADVANCE(1786);
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1755);
      END_STATE();
    case 1490:
      if (lookahead == '2') ADVANCE(1786);
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1755);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 1491:
      if (lookahead == '2') ADVANCE(1786);
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 1492:
      if (lookahead == '2') ADVANCE(1787);
      END_STATE();
    case 1493:
      if (lookahead == '2') ADVANCE(1461);
      END_STATE();
    case 1494:
      if (lookahead == '2') ADVANCE(1262);
      END_STATE();
    case 1495:
      if (lookahead == '2') ADVANCE(1300);
      END_STATE();
    case 1496:
      if (lookahead == '2') ADVANCE(1486);
      END_STATE();
    case 1497:
      if (lookahead == '2') ADVANCE(1466);
      END_STATE();
    case 1498:
      if (lookahead == '2') ADVANCE(1794);
      END_STATE();
    case 1499:
      if (lookahead == '2') ADVANCE(1474);
      END_STATE();
    case 1500:
      if (lookahead == '2') ADVANCE(1268);
      END_STATE();
    case 1501:
      if (lookahead == '2') ADVANCE(1487);
      END_STATE();
    case 1502:
      if (lookahead == '2') ADVANCE(1346);
      if (lookahead == '3') ADVANCE(2185);
      END_STATE();
    case 1503:
      if (lookahead == '2') ADVANCE(1470);
      END_STATE();
    case 1504:
      if (lookahead == '2') ADVANCE(1271);
      END_STATE();
    case 1505:
      if (lookahead == '2') ADVANCE(1471);
      END_STATE();
    case 1506:
      if (lookahead == '2') ADVANCE(1273);
      END_STATE();
    case 1507:
      if (lookahead == '2') ADVANCE(1473);
      END_STATE();
    case 1508:
      if (lookahead == '2') ADVANCE(1293);
      END_STATE();
    case 1509:
      if (lookahead == '2') ADVANCE(1615);
      END_STATE();
    case 1510:
      if (lookahead == '2') ADVANCE(1476);
      END_STATE();
    case 1511:
      if (lookahead == '2') ADVANCE(1498);
      END_STATE();
    case 1512:
      if (lookahead == '2') ADVANCE(1622);
      END_STATE();
    case 1513:
      if (lookahead == '2') ADVANCE(1627);
      END_STATE();
    case 1514:
      if (lookahead == '2') ADVANCE(1266);
      if (lookahead == '7') ADVANCE(1499);
      END_STATE();
    case 1515:
      if (lookahead == '2') ADVANCE(1270);
      if (lookahead == '7') ADVANCE(1503);
      END_STATE();
    case 1516:
      if (lookahead == '2') ADVANCE(1286);
      if (lookahead == '5') ADVANCE(1713);
      if (lookahead == '6') ADVANCE(1598);
      if (lookahead == '7') ADVANCE(1328);
      if (lookahead == '8') ADVANCE(1282);
      if (lookahead == '9') ADVANCE(1666);
      END_STATE();
    case 1517:
      if (lookahead == '2') ADVANCE(1281);
      if (lookahead == '7') ADVANCE(1496);
      END_STATE();
    case 1518:
      if (lookahead == '2') ADVANCE(1285);
      if (lookahead == '5') ADVANCE(1713);
      if (lookahead == '6') ADVANCE(1598);
      if (lookahead == '7') ADVANCE(1330);
      if (lookahead == '8') ADVANCE(1282);
      if (lookahead == '9') ADVANCE(1666);
      END_STATE();
    case 1519:
      if (lookahead == '2') ADVANCE(1648);
      if (lookahead == '7') ADVANCE(1512);
      END_STATE();
    case 1520:
      if (lookahead == '2') ADVANCE(1272);
      if (lookahead == '7') ADVANCE(1505);
      END_STATE();
    case 1521:
      if (lookahead == '2') ADVANCE(1283);
      if (lookahead == '7') ADVANCE(1501);
      END_STATE();
    case 1522:
      if (lookahead == '2') ADVANCE(1650);
      if (lookahead == '7') ADVANCE(1513);
      END_STATE();
    case 1523:
      if (lookahead == '2') ADVANCE(1274);
      if (lookahead == '7') ADVANCE(1507);
      END_STATE();
    case 1524:
      if (lookahead == '2') ADVANCE(1279);
      if (lookahead == '7') ADVANCE(1510);
      END_STATE();
    case 1525:
      if (lookahead == '2') ADVANCE(1284);
      if (lookahead == '7') ADVANCE(1511);
      END_STATE();
    case 1526:
      if (lookahead == '3') ADVANCE(1529);
      if (lookahead == '5') ADVANCE(1220);
      END_STATE();
    case 1527:
      if (lookahead == '3') ADVANCE(1528);
      if (lookahead == '8') ADVANCE(1656);
      END_STATE();
    case 1528:
      if (lookahead == '3') ADVANCE(1727);
      if (lookahead == '4') ADVANCE(1733);
      END_STATE();
    case 1529:
      if (lookahead == '3') ADVANCE(1739);
      END_STATE();
    case 1530:
      if (lookahead == '3') ADVANCE(1726);
      END_STATE();
    case 1531:
      if (lookahead == '3') ADVANCE(1726);
      if (lookahead == '4') ADVANCE(1769);
      END_STATE();
    case 1532:
      if (lookahead == '3') ADVANCE(1726);
      if (lookahead == '5') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1788);
      END_STATE();
    case 1533:
      if (lookahead == '3') ADVANCE(1750);
      if (lookahead == '6') ADVANCE(1751);
      END_STATE();
    case 1534:
      if (lookahead == '3') ADVANCE(1757);
      END_STATE();
    case 1535:
      if (lookahead == '3') ADVANCE(1760);
      END_STATE();
    case 1536:
      if (lookahead == '3') ADVANCE(1769);
      END_STATE();
    case 1537:
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '4') ADVANCE(1769);
      END_STATE();
    case 1538:
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '4') ADVANCE(1769);
      if (lookahead == '5') ADVANCE(1769);
      END_STATE();
    case 1539:
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '4') ADVANCE(1780);
      END_STATE();
    case 1540:
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '5') ADVANCE(1780);
      if (lookahead == '7') ADVANCE(1781);
      END_STATE();
    case 1541:
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1769);
      END_STATE();
    case 1542:
      if (lookahead == '3') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1779);
      END_STATE();
    case 1543:
      if (lookahead == '3') ADVANCE(1782);
      END_STATE();
    case 1544:
      if (lookahead == '3') ADVANCE(1776);
      if (lookahead == '4') ADVANCE(1778);
      END_STATE();
    case 1545:
      if (lookahead == '3') ADVANCE(1776);
      if (lookahead == '5') ADVANCE(1778);
      END_STATE();
    case 1546:
      if (lookahead == '3') ADVANCE(1784);
      if (lookahead == '4') ADVANCE(1778);
      END_STATE();
    case 1547:
      if (lookahead == '3') ADVANCE(1784);
      if (lookahead == '4') ADVANCE(1786);
      END_STATE();
    case 1548:
      if (lookahead == '3') ADVANCE(1784);
      if (lookahead == '5') ADVANCE(1778);
      END_STATE();
    case 1549:
      if (lookahead == '3') ADVANCE(1784);
      if (lookahead == '5') ADVANCE(1786);
      END_STATE();
    case 1550:
      if (lookahead == '3') ADVANCE(1530);
      END_STATE();
    case 1551:
      if (lookahead == '3') ADVANCE(1344);
      if (lookahead == '9') ADVANCE(1606);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2152);
      END_STATE();
    case 1552:
      if (lookahead == '3') ADVANCE(1344);
      if (lookahead == '9') ADVANCE(1635);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2152);
      END_STATE();
    case 1553:
      if (lookahead == '3') ADVANCE(1575);
      END_STATE();
    case 1554:
      if (lookahead == '3') ADVANCE(1534);
      END_STATE();
    case 1555:
      if (lookahead == '3') ADVANCE(1544);
      END_STATE();
    case 1556:
      if (lookahead == '3') ADVANCE(1581);
      if (lookahead == '8') ADVANCE(1656);
      END_STATE();
    case 1557:
      if (lookahead == '3') ADVANCE(1539);
      if (lookahead == '8') ADVANCE(1663);
      END_STATE();
    case 1558:
      if (lookahead == '3') ADVANCE(1577);
      END_STATE();
    case 1559:
      if (lookahead == '3') ADVANCE(1546);
      END_STATE();
    case 1560:
      if (lookahead == '3') ADVANCE(1578);
      END_STATE();
    case 1561:
      if (lookahead == '3') ADVANCE(1536);
      END_STATE();
    case 1562:
      if (lookahead == '3') ADVANCE(1536);
      if (lookahead == '6') ADVANCE(1536);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1502);
      END_STATE();
    case 1563:
      if (lookahead == '3') ADVANCE(1536);
      if (lookahead == '7') ADVANCE(1616);
      END_STATE();
    case 1564:
      if (lookahead == '3') ADVANCE(1536);
      if (lookahead == '8') ADVANCE(1661);
      END_STATE();
    case 1565:
      if (lookahead == '3') ADVANCE(2172);
      END_STATE();
    case 1566:
      if (lookahead == '3') ADVANCE(1531);
      if (lookahead == '8') ADVANCE(1662);
      END_STATE();
    case 1567:
      if (lookahead == '3') ADVANCE(1580);
      END_STATE();
    case 1568:
      if (lookahead == '3') ADVANCE(1547);
      END_STATE();
    case 1569:
      if (lookahead == '3') ADVANCE(1583);
      END_STATE();
    case 1570:
      if (lookahead == '3') ADVANCE(1583);
      if (lookahead == '8') ADVANCE(1662);
      END_STATE();
    case 1571:
      if (lookahead == '3') ADVANCE(1590);
      if (lookahead == '8') ADVANCE(1664);
      END_STATE();
    case 1572:
      if (lookahead == '3') ADVANCE(1594);
      END_STATE();
    case 1573:
      if (lookahead == '4') ADVANCE(1731);
      END_STATE();
    case 1574:
      if (lookahead == '4') ADVANCE(1701);
      if (lookahead == '6') ADVANCE(1563);
      if (lookahead == '7') ADVANCE(1462);
      END_STATE();
    case 1575:
      if (lookahead == '4') ADVANCE(1729);
      END_STATE();
    case 1576:
      if (lookahead == '4') ADVANCE(1752);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1753);
      END_STATE();
    case 1577:
      if (lookahead == '4') ADVANCE(1730);
      END_STATE();
    case 1578:
      if (lookahead == '4') ADVANCE(1790);
      END_STATE();
    case 1579:
      if (lookahead == '4') ADVANCE(1759);
      END_STATE();
    case 1580:
      if (lookahead == '4') ADVANCE(1789);
      END_STATE();
    case 1581:
      if (lookahead == '4') ADVANCE(1767);
      END_STATE();
    case 1582:
      if (lookahead == '4') ADVANCE(1768);
      END_STATE();
    case 1583:
      if (lookahead == '4') ADVANCE(1769);
      END_STATE();
    case 1584:
      if (lookahead == '4') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1769);
      END_STATE();
    case 1585:
      if (lookahead == '4') ADVANCE(1769);
      if (lookahead == '8') ADVANCE(1769);
      END_STATE();
    case 1586:
      if (lookahead == '4') ADVANCE(1779);
      END_STATE();
    case 1587:
      if (lookahead == '4') ADVANCE(1788);
      END_STATE();
    case 1588:
      if (lookahead == '4') ADVANCE(1781);
      END_STATE();
    case 1589:
      if (lookahead == '4') ADVANCE(1774);
      END_STATE();
    case 1590:
      if (lookahead == '4') ADVANCE(1793);
      END_STATE();
    case 1591:
      if (lookahead == '4') ADVANCE(1792);
      END_STATE();
    case 1592:
      if (lookahead == '4') ADVANCE(1579);
      END_STATE();
    case 1593:
      if (lookahead == '4') ADVANCE(1611);
      END_STATE();
    case 1594:
      if (lookahead == '4') ADVANCE(1794);
      END_STATE();
    case 1595:
      if (lookahead == '4') ADVANCE(1795);
      END_STATE();
    case 1596:
      if (lookahead == '4') ADVANCE(1240);
      END_STATE();
    case 1597:
      if (lookahead == '4') ADVANCE(1256);
      END_STATE();
    case 1598:
      if (lookahead == '4') ADVANCE(1636);
      if (lookahead == '6') ADVANCE(1244);
      END_STATE();
    case 1599:
      if (lookahead == '4') ADVANCE(1582);
      END_STATE();
    case 1600:
      if (lookahead == '4') ADVANCE(1586);
      END_STATE();
    case 1601:
      if (lookahead == '4') ADVANCE(1587);
      END_STATE();
    case 1602:
      if (lookahead == '4') ADVANCE(1588);
      END_STATE();
    case 1603:
      if (lookahead == '4') ADVANCE(1591);
      END_STATE();
    case 1604:
      if (lookahead == '4') ADVANCE(1595);
      END_STATE();
    case 1605:
      if (lookahead == '5') ADVANCE(1459);
      if (lookahead == '9') ADVANCE(1674);
      END_STATE();
    case 1606:
      if (lookahead == '5') ADVANCE(1727);
      if (lookahead == '6') ADVANCE(1733);
      END_STATE();
    case 1607:
      if (lookahead == '5') ADVANCE(1477);
      END_STATE();
    case 1608:
      if (lookahead == '5') ADVANCE(1729);
      END_STATE();
    case 1609:
      if (lookahead == '5') ADVANCE(1726);
      END_STATE();
    case 1610:
      if (lookahead == '5') ADVANCE(1726);
      if (lookahead == '6') ADVANCE(1769);
      END_STATE();
    case 1611:
      if (lookahead == '5') ADVANCE(1746);
      END_STATE();
    case 1612:
      if (lookahead == '5') ADVANCE(1730);
      END_STATE();
    case 1613:
      if (lookahead == '5') ADVANCE(1790);
      END_STATE();
    case 1614:
      if (lookahead == '5') ADVANCE(1789);
      END_STATE();
    case 1615:
      if (lookahead == '5') ADVANCE(1768);
      END_STATE();
    case 1616:
      if (lookahead == '5') ADVANCE(1769);
      END_STATE();
    case 1617:
      if (lookahead == '5') ADVANCE(1769);
      if (lookahead == '6') ADVANCE(1769);
      END_STATE();
    case 1618:
      if (lookahead == '5') ADVANCE(1769);
      if (lookahead == '6') ADVANCE(1780);
      END_STATE();
    case 1619:
      if (lookahead == '5') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1788);
      END_STATE();
    case 1620:
      if (lookahead == '5') ADVANCE(1769);
      if (lookahead == '9') ADVANCE(1769);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1769);
      END_STATE();
    case 1621:
      if (lookahead == '5') ADVANCE(1776);
      if (lookahead == '6') ADVANCE(1778);
      END_STATE();
    case 1622:
      if (lookahead == '5') ADVANCE(1779);
      END_STATE();
    case 1623:
      if (lookahead == '5') ADVANCE(1793);
      if (lookahead == '7') ADVANCE(1792);
      END_STATE();
    case 1624:
      if (lookahead == '5') ADVANCE(1784);
      if (lookahead == '6') ADVANCE(1778);
      END_STATE();
    case 1625:
      if (lookahead == '5') ADVANCE(1784);
      if (lookahead == '6') ADVANCE(1786);
      END_STATE();
    case 1626:
      if (lookahead == '5') ADVANCE(1794);
      END_STATE();
    case 1627:
      if (lookahead == '5') ADVANCE(1795);
      END_STATE();
    case 1628:
      if (lookahead == '6') ADVANCE(2178);
      END_STATE();
    case 1629:
      if (lookahead == '6') ADVANCE(1741);
      END_STATE();
    case 1630:
      if (lookahead == '6') ADVANCE(1741);
      if (lookahead == ';') ADVANCE(2417);
      END_STATE();
    case 1631:
      if (lookahead == '6') ADVANCE(1729);
      END_STATE();
    case 1632:
      if (lookahead == '6') ADVANCE(1730);
      END_STATE();
    case 1633:
      if (lookahead == '6') ADVANCE(1790);
      END_STATE();
    case 1634:
      if (lookahead == '6') ADVANCE(1789);
      END_STATE();
    case 1635:
      if (lookahead == '6') ADVANCE(1767);
      END_STATE();
    case 1636:
      if (lookahead == '6') ADVANCE(1769);
      END_STATE();
    case 1637:
      if (lookahead == '6') ADVANCE(1769);
      if (lookahead == '7') ADVANCE(1769);
      END_STATE();
    case 1638:
      if (lookahead == '6') ADVANCE(1793);
      END_STATE();
    case 1639:
      if (lookahead == '6') ADVANCE(1702);
      END_STATE();
    case 1640:
      if (lookahead == '6') ADVANCE(2170);
      END_STATE();
    case 1641:
      if (lookahead == '6') ADVANCE(1617);
      END_STATE();
    case 1642:
      if (lookahead == '6') ADVANCE(1794);
      END_STATE();
    case 1643:
      if (lookahead == '6') ADVANCE(1707);
      END_STATE();
    case 1644:
      if (lookahead == '6') ADVANCE(1239);
      END_STATE();
    case 1645:
      if (lookahead == '6') ADVANCE(1346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1565);
      END_STATE();
    case 1646:
      if (lookahead == '6') ADVANCE(1710);
      END_STATE();
    case 1647:
      if (lookahead == '6') ADVANCE(1709);
      END_STATE();
    case 1648:
      if (lookahead == '6') ADVANCE(1248);
      END_STATE();
    case 1649:
      if (lookahead == '6') ADVANCE(1711);
      END_STATE();
    case 1650:
      if (lookahead == '6') ADVANCE(1265);
      END_STATE();
    case 1651:
      if (lookahead == '6') ADVANCE(2179);
      END_STATE();
    case 1652:
      if (lookahead == '6') ADVANCE(2181);
      END_STATE();
    case 1653:
      if (lookahead == '6') ADVANCE(2180);
      END_STATE();
    case 1654:
      if (lookahead == '6') ADVANCE(2182);
      END_STATE();
    case 1655:
      if (lookahead == '7') ADVANCE(1718);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1726);
      END_STATE();
    case 1656:
      if (lookahead == '7') ADVANCE(1758);
      END_STATE();
    case 1657:
      if (lookahead == '7') ADVANCE(1768);
      END_STATE();
    case 1658:
      if (lookahead == '7') ADVANCE(1769);
      END_STATE();
    case 1659:
      if (lookahead == '7') ADVANCE(1769);
      if (lookahead == '8') ADVANCE(1769);
      if (lookahead == '9') ADVANCE(1769);
      END_STATE();
    case 1660:
      if (lookahead == '7') ADVANCE(1769);
      if (lookahead == '8') ADVANCE(1769);
      if (lookahead == '9') ADVANCE(1769);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1753);
      END_STATE();
    case 1661:
      if (lookahead == '7') ADVANCE(1779);
      END_STATE();
    case 1662:
      if (lookahead == '7') ADVANCE(1788);
      END_STATE();
    case 1663:
      if (lookahead == '7') ADVANCE(1781);
      END_STATE();
    case 1664:
      if (lookahead == '7') ADVANCE(1792);
      END_STATE();
    case 1665:
      if (lookahead == '7') ADVANCE(1795);
      END_STATE();
    case 1666:
      if (lookahead == '7') ADVANCE(1709);
      END_STATE();
    case 1667:
      if (lookahead == '7') ADVANCE(1723);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1769);
      END_STATE();
    case 1668:
      if (lookahead == '7') ADVANCE(1569);
      END_STATE();
    case 1669:
      if (lookahead == '8') ADVANCE(1639);
      END_STATE();
    case 1670:
      if (lookahead == '8') ADVANCE(1668);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1469);
      END_STATE();
    case 1671:
      if (lookahead == '8') ADVANCE(1596);
      END_STATE();
    case 1672:
      if (lookahead == '8') ADVANCE(1733);
      if (lookahead == '9') ADVANCE(1733);
      END_STATE();
    case 1673:
      if (lookahead == '8') ADVANCE(1472);
      END_STATE();
    case 1674:
      if (lookahead == '8') ADVANCE(1738);
      END_STATE();
    case 1675:
      if (lookahead == '8') ADVANCE(1729);
      if (lookahead == '9') ADVANCE(1729);
      END_STATE();
    case 1676:
      if (lookahead == '8') ADVANCE(1730);
      if (lookahead == '9') ADVANCE(1730);
      END_STATE();
    case 1677:
      if (lookahead == '8') ADVANCE(1790);
      if (lookahead == '9') ADVANCE(1790);
      END_STATE();
    case 1678:
      if (lookahead == '8') ADVANCE(1756);
      if (lookahead == '9') ADVANCE(1762);
      END_STATE();
    case 1679:
      if (lookahead == '8') ADVANCE(1759);
      END_STATE();
    case 1680:
      if (lookahead == '8') ADVANCE(1789);
      if (lookahead == '9') ADVANCE(1789);
      END_STATE();
    case 1681:
      if (lookahead == '8') ADVANCE(1768);
      END_STATE();
    case 1682:
      if (lookahead == '8') ADVANCE(1769);
      END_STATE();
    case 1683:
      if (lookahead == '8') ADVANCE(1769);
      if (lookahead == '9') ADVANCE(1769);
      END_STATE();
    case 1684:
      if (lookahead == '8') ADVANCE(1778);
      if (lookahead == '9') ADVANCE(1778);
      END_STATE();
    case 1685:
      if (lookahead == '8') ADVANCE(1779);
      END_STATE();
    case 1686:
      if (lookahead == '8') ADVANCE(1788);
      END_STATE();
    case 1687:
      if (lookahead == '8') ADVANCE(1780);
      if (lookahead == '9') ADVANCE(1780);
      END_STATE();
    case 1688:
      if (lookahead == '8') ADVANCE(1781);
      END_STATE();
    case 1689:
      if (lookahead == '8') ADVANCE(1793);
      if (lookahead == '9') ADVANCE(1793);
      END_STATE();
    case 1690:
      if (lookahead == '8') ADVANCE(1792);
      END_STATE();
    case 1691:
      if (lookahead == '8') ADVANCE(1786);
      if (lookahead == '9') ADVANCE(1786);
      END_STATE();
    case 1692:
      if (lookahead == '8') ADVANCE(1657);
      END_STATE();
    case 1693:
      if (lookahead == '8') ADVANCE(1794);
      if (lookahead == '9') ADVANCE(1794);
      END_STATE();
    case 1694:
      if (lookahead == '8') ADVANCE(1795);
      END_STATE();
    case 1695:
      if (lookahead == '8') ADVANCE(1708);
      END_STATE();
    case 1696:
      if (lookahead == '8') ADVANCE(1665);
      END_STATE();
    case 1697:
      if (lookahead == '8') ADVANCE(1643);
      END_STATE();
    case 1698:
      if (lookahead == '8') ADVANCE(1646);
      END_STATE();
    case 1699:
      if (lookahead == '8') ADVANCE(1647);
      END_STATE();
    case 1700:
      if (lookahead == '8') ADVANCE(1649);
      END_STATE();
    case 1701:
      if (lookahead == '9') ADVANCE(1479);
      END_STATE();
    case 1702:
      if (lookahead == '9') ADVANCE(1727);
      END_STATE();
    case 1703:
      if (lookahead == '9') ADVANCE(1631);
      END_STATE();
    case 1704:
      if (lookahead == '9') ADVANCE(1345);
      END_STATE();
    case 1705:
      if (lookahead == '9') ADVANCE(1347);
      if (lookahead == ';') ADVANCE(2378);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1636);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1584);
      END_STATE();
    case 1706:
      if (lookahead == '9') ADVANCE(1737);
      END_STATE();
    case 1707:
      if (lookahead == '9') ADVANCE(1726);
      END_STATE();
    case 1708:
      if (lookahead == '9') ADVANCE(1736);
      END_STATE();
    case 1709:
      if (lookahead == '9') ADVANCE(1769);
      END_STATE();
    case 1710:
      if (lookahead == '9') ADVANCE(1776);
      END_STATE();
    case 1711:
      if (lookahead == '9') ADVANCE(1784);
      END_STATE();
    case 1712:
      if (lookahead == '9') ADVANCE(1787);
      END_STATE();
    case 1713:
      if (lookahead == '9') ADVANCE(1537);
      END_STATE();
    case 1714:
      if (lookahead == '9') ADVANCE(1632);
      END_STATE();
    case 1715:
      if (lookahead == '9') ADVANCE(1618);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2157);
      END_STATE();
    case 1716:
      if (lookahead == '9') ADVANCE(1633);
      END_STATE();
    case 1717:
      if (lookahead == '9') ADVANCE(1634);
      END_STATE();
    case 1718:
      if (lookahead == '9') ADVANCE(1609);
      END_STATE();
    case 1719:
      if (lookahead == '9') ADVANCE(1610);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2156);
      END_STATE();
    case 1720:
      if (lookahead == '9') ADVANCE(1636);
      END_STATE();
    case 1721:
      if (lookahead == '9') ADVANCE(1636);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2156);
      END_STATE();
    case 1722:
      if (lookahead == '9') ADVANCE(1638);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2158);
      END_STATE();
    case 1723:
      if (lookahead == '9') ADVANCE(1616);
      END_STATE();
    case 1724:
      if (lookahead == '9') ADVANCE(1616);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2155);
      END_STATE();
    case 1725:
      if (lookahead == '9') ADVANCE(1642);
      END_STATE();
    case 1726:
      if (lookahead == ';') ADVANCE(2357);
      END_STATE();
    case 1727:
      if (lookahead == ';') ADVANCE(2360);
      END_STATE();
    case 1728:
      if (lookahead == ';') ADVANCE(2360);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1738);
      END_STATE();
    case 1729:
      if (lookahead == ';') ADVANCE(2195);
      END_STATE();
    case 1730:
      if (lookahead == ';') ADVANCE(1102);
      END_STATE();
    case 1731:
      if (lookahead == ';') ADVANCE(2229);
      END_STATE();
    case 1732:
      if (lookahead == ';') ADVANCE(2435);
      END_STATE();
    case 1733:
      if (lookahead == ';') ADVANCE(2347);
      END_STATE();
    case 1734:
      if (lookahead == ';') ADVANCE(2347);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1739);
      END_STATE();
    case 1735:
      if (lookahead == ';') ADVANCE(2417);
      END_STATE();
    case 1736:
      if (lookahead == ';') ADVANCE(2459);
      END_STATE();
    case 1737:
      if (lookahead == ';') ADVANCE(2432);
      END_STATE();
    case 1738:
      if (lookahead == ';') ADVANCE(2249);
      END_STATE();
    case 1739:
      if (lookahead == ';') ADVANCE(2247);
      END_STATE();
    case 1740:
      if (lookahead == ';') ADVANCE(2253);
      END_STATE();
    case 1741:
      if (lookahead == ';') ADVANCE(2251);
      END_STATE();
    case 1742:
      if (lookahead == ';') ADVANCE(2388);
      END_STATE();
    case 1743:
      if (lookahead == ';') ADVANCE(2388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1739);
      END_STATE();
    case 1744:
      if (lookahead == ';') ADVANCE(2255);
      END_STATE();
    case 1745:
      if (lookahead == ';') ADVANCE(2245);
      END_STATE();
    case 1746:
      if (lookahead == ';') ADVANCE(2451);
      END_STATE();
    case 1747:
      if (lookahead == ';') ADVANCE(2233);
      END_STATE();
    case 1748:
      if (lookahead == ';') ADVANCE(2235);
      END_STATE();
    case 1749:
      if (lookahead == ';') ADVANCE(2237);
      END_STATE();
    case 1750:
      if (lookahead == ';') ADVANCE(2239);
      END_STATE();
    case 1751:
      if (lookahead == ';') ADVANCE(2241);
      END_STATE();
    case 1752:
      if (lookahead == ';') ADVANCE(2421);
      END_STATE();
    case 1753:
      if (lookahead == ';') ADVANCE(2447);
      END_STATE();
    case 1754:
      if (lookahead == ';') ADVANCE(2419);
      END_STATE();
    case 1755:
      if (lookahead == ';') ADVANCE(2439);
      END_STATE();
    case 1756:
      if (lookahead == ';') ADVANCE(2392);
      END_STATE();
    case 1757:
      if (lookahead == ';') ADVANCE(2443);
      END_STATE();
    case 1758:
      if (lookahead == ';') ADVANCE(2423);
      END_STATE();
    case 1759:
      if (lookahead == ';') ADVANCE(2425);
      END_STATE();
    case 1760:
      if (lookahead == ';') ADVANCE(2243);
      END_STATE();
    case 1761:
      if (lookahead == ';') ADVANCE(2231);
      END_STATE();
    case 1762:
      if (lookahead == ';') ADVANCE(2394);
      END_STATE();
    case 1763:
      if (lookahead == ';') ADVANCE(2396);
      END_STATE();
    case 1764:
      if (lookahead == ';') ADVANCE(2398);
      END_STATE();
    case 1765:
      if (lookahead == ';') ADVANCE(2400);
      END_STATE();
    case 1766:
      if (lookahead == ';') ADVANCE(2390);
      END_STATE();
    case 1767:
      if (lookahead == ';') ADVANCE(2402);
      END_STATE();
    case 1768:
      if (lookahead == ';') ADVANCE(1165);
      END_STATE();
    case 1769:
      if (lookahead == ';') ADVANCE(2362);
      END_STATE();
    case 1770:
      if (lookahead == ';') ADVANCE(2362);
      if (lookahead == 'a') ADVANCE(2050);
      END_STATE();
    case 1771:
      if (lookahead == ';') ADVANCE(2362);
      if (lookahead == 'f') ADVANCE(2099);
      if (lookahead == 'q') ADVANCE(1769);
      END_STATE();
    case 1772:
      if (lookahead == ';') ADVANCE(2362);
      if (lookahead == 'o') ADVANCE(2135);
      END_STATE();
    case 1773:
      if (lookahead == ';') ADVANCE(2362);
      if (lookahead == 't') ADVANCE(2011);
      END_STATE();
    case 1774:
      if (lookahead == ';') ADVANCE(2374);
      END_STATE();
    case 1775:
      if (lookahead == ';') ADVANCE(2375);
      END_STATE();
    case 1776:
      if (lookahead == ';') ADVANCE(1166);
      END_STATE();
    case 1777:
      if (lookahead == ';') ADVANCE(1166);
      if (lookahead == 'b') ADVANCE(1769);
      if (lookahead == 'e') ADVANCE(1769);
      if (lookahead == 'm') ADVANCE(1990);
      END_STATE();
    case 1778:
      if (lookahead == ';') ADVANCE(2377);
      END_STATE();
    case 1779:
      if (lookahead == ';') ADVANCE(1168);
      END_STATE();
    case 1780:
      if (lookahead == ';') ADVANCE(2354);
      END_STATE();
    case 1781:
      if (lookahead == ';') ADVANCE(1172);
      END_STATE();
    case 1782:
      if (lookahead == ';') ADVANCE(2378);
      END_STATE();
    case 1783:
      if (lookahead == ';') ADVANCE(1170);
      END_STATE();
    case 1784:
      if (lookahead == ';') ADVANCE(2361);
      END_STATE();
    case 1785:
      if (lookahead == ';') ADVANCE(2361);
      if (lookahead == 'b') ADVANCE(1769);
      if (lookahead == 'e') ADVANCE(1769);
      if (lookahead == 'm') ADVANCE(1990);
      END_STATE();
    case 1786:
      if (lookahead == ';') ADVANCE(2349);
      END_STATE();
    case 1787:
      if (lookahead == ';') ADVANCE(2430);
      END_STATE();
    case 1788:
      if (lookahead == ';') ADVANCE(1175);
      END_STATE();
    case 1789:
      if (lookahead == ';') ADVANCE(2196);
      END_STATE();
    case 1790:
      if (lookahead == ';') ADVANCE(1103);
      END_STATE();
    case 1791:
      if (lookahead == ';') ADVANCE(2379);
      END_STATE();
    case 1792:
      if (lookahead == ';') ADVANCE(1106);
      END_STATE();
    case 1793:
      if (lookahead == ';') ADVANCE(1105);
      END_STATE();
    case 1794:
      if (lookahead == ';') ADVANCE(1107);
      END_STATE();
    case 1795:
      if (lookahead == ';') ADVANCE(1108);
      END_STATE();
    case 1796:
      if (lookahead == '=') ADVANCE(2362);
      END_STATE();
    case 1797:
      if (lookahead == 'A') ADVANCE(2051);
      END_STATE();
    case 1798:
      if (lookahead == 'A') ADVANCE(2051);
      if (lookahead == 'R') ADVANCE(1947);
      END_STATE();
    case 1799:
      if (lookahead == 'A') ADVANCE(2051);
      if (lookahead == 'T') ADVANCE(1887);
      if (lookahead == 'p') ADVANCE(1888);
      END_STATE();
    case 1800:
      if (lookahead == 'L') ADVANCE(1890);
      if (lookahead == 'R') ADVANCE(1947);
      if (lookahead == 'U') ADVANCE(2027);
      END_STATE();
    case 1801:
      if (lookahead == 'M') ADVANCE(1955);
      END_STATE();
    case 1802:
      if (lookahead == 'N') ADVANCE(2362);
      END_STATE();
    case 1803:
      if (lookahead == 'P') ADVANCE(1979);
      END_STATE();
    case 1804:
      if (lookahead == 'R') ADVANCE(1947);
      END_STATE();
    case 1805:
      if (lookahead == 'a') ADVANCE(2058);
      END_STATE();
    case 1806:
      if (lookahead == 'a') ADVANCE(1851);
      END_STATE();
    case 1807:
      if (lookahead == 'a') ADVANCE(1958);
      if (lookahead == 'y') ADVANCE(2033);
      END_STATE();
    case 1808:
      if (lookahead == 'a') ADVANCE(1958);
      if (lookahead == 'y') ADVANCE(2038);
      END_STATE();
    case 1809:
      if (lookahead == 'a') ADVANCE(1850);
      if (lookahead == 'd') ADVANCE(1840);
      if (lookahead == 'e') ADVANCE(1833);
      if (lookahead == 'v') ADVANCE(1974);
      END_STATE();
    case 1810:
      if (lookahead == 'a') ADVANCE(1850);
      if (lookahead == 'd') ADVANCE(1845);
      if (lookahead == 'e') ADVANCE(1833);
      if (lookahead == 'v') ADVANCE(1974);
      END_STATE();
    case 1811:
      if (lookahead == 'a') ADVANCE(2059);
      END_STATE();
    case 1812:
      if (lookahead == 'a') ADVANCE(1957);
      if (lookahead == 'y') ADVANCE(2025);
      END_STATE();
    case 1813:
      if (lookahead == 'a') ADVANCE(1957);
      if (lookahead == 'y') ADVANCE(2029);
      END_STATE();
    case 1814:
      if (lookahead == 'a') ADVANCE(2046);
      END_STATE();
    case 1815:
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead == 'i') ADVANCE(1917);
      END_STATE();
    case 1816:
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead == 'p') ADVANCE(1822);
      END_STATE();
    case 1817:
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead == 'y') ADVANCE(2033);
      END_STATE();
    case 1818:
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead == 'y') ADVANCE(2038);
      END_STATE();
    case 1819:
      if (lookahead == 'a') ADVANCE(1976);
      END_STATE();
    case 1820:
      if (lookahead == 'a') ADVANCE(1983);
      if (lookahead == 'e') ADVANCE(1905);
      END_STATE();
    case 1821:
      if (lookahead == 'a') ADVANCE(1983);
      if (lookahead == 'i') ADVANCE(1915);
      END_STATE();
    case 1822:
      if (lookahead == 'a') ADVANCE(2051);
      END_STATE();
    case 1823:
      if (lookahead == 'a') ADVANCE(2051);
      if (lookahead == 'r') ADVANCE(1954);
      END_STATE();
    case 1824:
      if (lookahead == 'a') ADVANCE(1961);
      if (lookahead == 'd') ADVANCE(1840);
      if (lookahead == 'i') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(2039);
      if (lookahead == 'p') ADVANCE(1769);
      END_STATE();
    case 1825:
      if (lookahead == 'a') ADVANCE(1961);
      if (lookahead == 'd') ADVANCE(1840);
      if (lookahead == 'i') ADVANCE(2003);
      if (lookahead == 'n') ADVANCE(2039);
      if (lookahead == 'p') ADVANCE(1769);
      END_STATE();
    case 1826:
      if (lookahead == 'a') ADVANCE(1961);
      if (lookahead == 'd') ADVANCE(1845);
      if (lookahead == 'i') ADVANCE(1865);
      if (lookahead == 'n') ADVANCE(2039);
      if (lookahead == 'p') ADVANCE(1769);
      END_STATE();
    case 1827:
      if (lookahead == 'a') ADVANCE(1961);
      if (lookahead == 'd') ADVANCE(1845);
      if (lookahead == 'i') ADVANCE(2007);
      if (lookahead == 'n') ADVANCE(2039);
      if (lookahead == 'p') ADVANCE(1769);
      END_STATE();
    case 1828:
      if (lookahead == 'a') ADVANCE(2050);
      END_STATE();
    case 1829:
      if (lookahead == 'a') ADVANCE(1769);
      END_STATE();
    case 1830:
      if (lookahead == 'a') ADVANCE(1975);
      if (lookahead == 'y') ADVANCE(2033);
      END_STATE();
    case 1831:
      if (lookahead == 'a') ADVANCE(2081);
      END_STATE();
    case 1832:
      if (lookahead == 'a') ADVANCE(1972);
      END_STATE();
    case 1833:
      if (lookahead == 'a') ADVANCE(2052);
      END_STATE();
    case 1834:
      if (lookahead == 'a') ADVANCE(2083);
      END_STATE();
    case 1835:
      if (lookahead == 'a') ADVANCE(2085);
      END_STATE();
    case 1836:
      if (lookahead == 'a') ADVANCE(2087);
      END_STATE();
    case 1837:
      if (lookahead == 'a') ADVANCE(2088);
      END_STATE();
    case 1838:
      if (lookahead == 'a') ADVANCE(2089);
      END_STATE();
    case 1839:
      if (lookahead == 'a') ADVANCE(2090);
      END_STATE();
    case 1840:
      if (lookahead == 'a') ADVANCE(2091);
      END_STATE();
    case 1841:
      if (lookahead == 'a') ADVANCE(2092);
      END_STATE();
    case 1842:
      if (lookahead == 'a') ADVANCE(2093);
      END_STATE();
    case 1843:
      if (lookahead == 'a') ADVANCE(2094);
      END_STATE();
    case 1844:
      if (lookahead == 'a') ADVANCE(2095);
      END_STATE();
    case 1845:
      if (lookahead == 'a') ADVANCE(2096);
      END_STATE();
    case 1846:
      if (lookahead == 'a') ADVANCE(2080);
      END_STATE();
    case 1847:
      if (lookahead == 'a') ADVANCE(1854);
      END_STATE();
    case 1848:
      if (lookahead == 'a') ADVANCE(1977);
      END_STATE();
    case 1849:
      if (lookahead == 'a') ADVANCE(1855);
      END_STATE();
    case 1850:
      if (lookahead == 'b') ADVANCE(1962);
      END_STATE();
    case 1851:
      if (lookahead == 'c') ADVANCE(1341);
      END_STATE();
    case 1852:
      if (lookahead == 'c') ADVANCE(1964);
      END_STATE();
    case 1853:
      if (lookahead == 'c') ADVANCE(1966);
      END_STATE();
    case 1854:
      if (lookahead == 'c') ADVANCE(1374);
      END_STATE();
    case 1855:
      if (lookahead == 'c') ADVANCE(1390);
      END_STATE();
    case 1856:
      if (lookahead == 'd') ADVANCE(1811);
      END_STATE();
    case 1857:
      if (lookahead == 'd') ADVANCE(1811);
      if (lookahead == 'i') ADVANCE(1862);
      END_STATE();
    case 1858:
      if (lookahead == 'd') ADVANCE(2017);
      if (lookahead == 'p') ADVANCE(1979);
      END_STATE();
    case 1859:
      if (lookahead == 'd') ADVANCE(2017);
      if (lookahead == 'p') ADVANCE(1979);
      if (lookahead == 's') ADVANCE(1980);
      END_STATE();
    case 1860:
      if (lookahead == 'd') ADVANCE(1831);
      END_STATE();
    case 1861:
      if (lookahead == 'd') ADVANCE(1831);
      if (lookahead == 'i') ADVANCE(1998);
      END_STATE();
    case 1862:
      if (lookahead == 'd') ADVANCE(1805);
      if (lookahead == 'n') ADVANCE(2119);
      END_STATE();
    case 1863:
      if (lookahead == 'd') ADVANCE(1805);
      if (lookahead == 'n') ADVANCE(2122);
      END_STATE();
    case 1864:
      if (lookahead == 'd') ADVANCE(1805);
      if (lookahead == 'n') ADVANCE(2127);
      END_STATE();
    case 1865:
      if (lookahead == 'd') ADVANCE(1805);
      if (lookahead == 'n') ADVANCE(2131);
      END_STATE();
    case 1866:
      if (lookahead == 'd') ADVANCE(1835);
      END_STATE();
    case 1867:
      if (lookahead == 'd') ADVANCE(1835);
      if (lookahead == 'i') ADVANCE(1999);
      END_STATE();
    case 1868:
      if (lookahead == 'd') ADVANCE(1836);
      END_STATE();
    case 1869:
      if (lookahead == 'd') ADVANCE(1836);
      if (lookahead == 'i') ADVANCE(2000);
      END_STATE();
    case 1870:
      if (lookahead == 'd') ADVANCE(1837);
      if (lookahead == 'i') ADVANCE(1863);
      END_STATE();
    case 1871:
      if (lookahead == 'd') ADVANCE(1838);
      END_STATE();
    case 1872:
      if (lookahead == 'd') ADVANCE(1839);
      END_STATE();
    case 1873:
      if (lookahead == 'd') ADVANCE(1839);
      if (lookahead == 'i') ADVANCE(2001);
      END_STATE();
    case 1874:
      if (lookahead == 'd') ADVANCE(1841);
      END_STATE();
    case 1875:
      if (lookahead == 'd') ADVANCE(1841);
      if (lookahead == 'i') ADVANCE(2002);
      END_STATE();
    case 1876:
      if (lookahead == 'd') ADVANCE(1842);
      END_STATE();
    case 1877:
      if (lookahead == 'd') ADVANCE(1842);
      if (lookahead == 'i') ADVANCE(2004);
      END_STATE();
    case 1878:
      if (lookahead == 'd') ADVANCE(1843);
      END_STATE();
    case 1879:
      if (lookahead == 'd') ADVANCE(1843);
      if (lookahead == 'i') ADVANCE(2005);
      END_STATE();
    case 1880:
      if (lookahead == 'd') ADVANCE(1844);
      END_STATE();
    case 1881:
      if (lookahead == 'd') ADVANCE(1844);
      if (lookahead == 'i') ADVANCE(2006);
      END_STATE();
    case 1882:
      if (lookahead == 'e') ADVANCE(1771);
      if (lookahead == 'l') ADVANCE(2103);
      if (lookahead == 'o') ADVANCE(2134);
      if (lookahead == 'r') ADVANCE(1814);
      END_STATE();
    case 1883:
      if (lookahead == 'e') ADVANCE(1771);
      if (lookahead == 'l') ADVANCE(2103);
      if (lookahead == 'r') ADVANCE(1814);
      END_STATE();
    case 1884:
      if (lookahead == 'e') ADVANCE(1984);
      END_STATE();
    case 1885:
      if (lookahead == 'e') ADVANCE(2048);
      if (lookahead == 'l') ADVANCE(2114);
      if (lookahead == 'm') ADVANCE(1769);
      if (lookahead == 'r') ADVANCE(2014);
      END_STATE();
    case 1886:
      if (lookahead == 'e') ADVANCE(2048);
      if (lookahead == 'l') ADVANCE(2117);
      if (lookahead == 'm') ADVANCE(1769);
      if (lookahead == 'r') ADVANCE(2014);
      END_STATE();
    case 1887:
      if (lookahead == 'e') ADVANCE(1889);
      END_STATE();
    case 1888:
      if (lookahead == 'e') ADVANCE(2043);
      END_STATE();
    case 1889:
      if (lookahead == 'e') ADVANCE(1769);
      END_STATE();
    case 1890:
      if (lookahead == 'e') ADVANCE(1907);
      END_STATE();
    case 1891:
      if (lookahead == 'e') ADVANCE(1985);
      END_STATE();
    case 1892:
      if (lookahead == 'e') ADVANCE(1988);
      END_STATE();
    case 1893:
      if (lookahead == 'e') ADVANCE(1964);
      END_STATE();
    case 1894:
      if (lookahead == 'e') ADVANCE(1986);
      END_STATE();
    case 1895:
      if (lookahead == 'e') ADVANCE(1987);
      END_STATE();
    case 1896:
      if (lookahead == 'e') ADVANCE(1989);
      END_STATE();
    case 1897:
      if (lookahead == 'e') ADVANCE(1991);
      END_STATE();
    case 1898:
      if (lookahead == 'e') ADVANCE(1990);
      END_STATE();
    case 1899:
      if (lookahead == 'e') ADVANCE(1992);
      END_STATE();
    case 1900:
      if (lookahead == 'e') ADVANCE(1994);
      END_STATE();
    case 1901:
      if (lookahead == 'e') ADVANCE(1996);
      END_STATE();
    case 1902:
      if (lookahead == 'e') ADVANCE(1995);
      END_STATE();
    case 1903:
      if (lookahead == 'e') ADVANCE(2086);
      END_STATE();
    case 1904:
      if (lookahead == 'e') ADVANCE(2084);
      END_STATE();
    case 1905:
      if (lookahead == 'f') ADVANCE(2098);
      END_STATE();
    case 1906:
      if (lookahead == 'f') ADVANCE(1952);
      END_STATE();
    case 1907:
      if (lookahead == 'f') ADVANCE(2100);
      END_STATE();
    case 1908:
      if (lookahead == 'f') ADVANCE(1737);
      END_STATE();
    case 1909:
      if (lookahead == 'f') ADVANCE(2067);
      END_STATE();
    case 1910:
      if (lookahead == 'f') ADVANCE(1736);
      END_STATE();
    case 1911:
      if (lookahead == 'f') ADVANCE(1769);
      END_STATE();
    case 1912:
      if (lookahead == 'f') ADVANCE(1787);
      END_STATE();
    case 1913:
      if (lookahead == 'f') ADVANCE(1953);
      END_STATE();
    case 1914:
      if (lookahead == 'g') ADVANCE(2010);
      END_STATE();
    case 1915:
      if (lookahead == 'g') ADVANCE(1921);
      END_STATE();
    case 1916:
      if (lookahead == 'g') ADVANCE(1769);
      END_STATE();
    case 1917:
      if (lookahead == 'g') ADVANCE(1922);
      END_STATE();
    case 1918:
      if (lookahead == 'h') ADVANCE(1884);
      END_STATE();
    case 1919:
      if (lookahead == 'h') ADVANCE(2015);
      if (lookahead == 'q') ADVANCE(2116);
      END_STATE();
    case 1920:
      if (lookahead == 'h') ADVANCE(1733);
      END_STATE();
    case 1921:
      if (lookahead == 'h') ADVANCE(2100);
      END_STATE();
    case 1922:
      if (lookahead == 'h') ADVANCE(2108);
      END_STATE();
    case 1923:
      if (lookahead == 'h') ADVANCE(1729);
      END_STATE();
    case 1924:
      if (lookahead == 'h') ADVANCE(1730);
      END_STATE();
    case 1925:
      if (lookahead == 'h') ADVANCE(1790);
      END_STATE();
    case 1926:
      if (lookahead == 'h') ADVANCE(1756);
      END_STATE();
    case 1927:
      if (lookahead == 'h') ADVANCE(1789);
      END_STATE();
    case 1928:
      if (lookahead == 'h') ADVANCE(1764);
      END_STATE();
    case 1929:
      if (lookahead == 'h') ADVANCE(1765);
      END_STATE();
    case 1930:
      if (lookahead == 'h') ADVANCE(1769);
      END_STATE();
    case 1931:
      if (lookahead == 'h') ADVANCE(1778);
      END_STATE();
    case 1932:
      if (lookahead == 'h') ADVANCE(1780);
      END_STATE();
    case 1933:
      if (lookahead == 'h') ADVANCE(1793);
      END_STATE();
    case 1934:
      if (lookahead == 'h') ADVANCE(1786);
      END_STATE();
    case 1935:
      if (lookahead == 'h') ADVANCE(1794);
      END_STATE();
    case 1936:
      if (lookahead == 'h') ADVANCE(1891);
      END_STATE();
    case 1937:
      if (lookahead == 'h') ADVANCE(1892);
      END_STATE();
    case 1938:
      if (lookahead == 'h') ADVANCE(1894);
      END_STATE();
    case 1939:
      if (lookahead == 'h') ADVANCE(1895);
      END_STATE();
    case 1940:
      if (lookahead == 'h') ADVANCE(1896);
      END_STATE();
    case 1941:
      if (lookahead == 'h') ADVANCE(1897);
      END_STATE();
    case 1942:
      if (lookahead == 'h') ADVANCE(1898);
      END_STATE();
    case 1943:
      if (lookahead == 'h') ADVANCE(1899);
      END_STATE();
    case 1944:
      if (lookahead == 'h') ADVANCE(1900);
      END_STATE();
    case 1945:
      if (lookahead == 'h') ADVANCE(1901);
      END_STATE();
    case 1946:
      if (lookahead == 'h') ADVANCE(1902);
      END_STATE();
    case 1947:
      if (lookahead == 'i') ADVANCE(1915);
      END_STATE();
    case 1948:
      if (lookahead == 'i') ADVANCE(2053);
      END_STATE();
    case 1949:
      if (lookahead == 'i') ADVANCE(1914);
      if (lookahead == 'o') ADVANCE(2097);
      END_STATE();
    case 1950:
      if (lookahead == 'i') ADVANCE(1769);
      END_STATE();
    case 1951:
      if (lookahead == 'i') ADVANCE(1997);
      END_STATE();
    case 1952:
      if (lookahead == 'i') ADVANCE(1993);
      END_STATE();
    case 1953:
      if (lookahead == 'i') ADVANCE(1990);
      END_STATE();
    case 1954:
      if (lookahead == 'i') ADVANCE(1917);
      END_STATE();
    case 1955:
      if (lookahead == 'i') ADVANCE(2002);
      END_STATE();
    case 1956:
      if (lookahead == 'l') ADVANCE(2110);
      END_STATE();
    case 1957:
      if (lookahead == 'l') ADVANCE(1908);
      END_STATE();
    case 1958:
      if (lookahead == 'l') ADVANCE(1908);
      if (lookahead == 'r') ADVANCE(2053);
      END_STATE();
    case 1959:
      if (lookahead == 'l') ADVANCE(1735);
      END_STATE();
    case 1960:
      if (lookahead == 'l') ADVANCE(1814);
      if (lookahead == 'q') ADVANCE(2109);
      if (lookahead == 'r') ADVANCE(1814);
      END_STATE();
    case 1961:
      if (lookahead == 'l') ADVANCE(1889);
      END_STATE();
    case 1962:
      if (lookahead == 'l') ADVANCE(1829);
      END_STATE();
    case 1963:
      if (lookahead == 'l') ADVANCE(1768);
      END_STATE();
    case 1964:
      if (lookahead == 'l') ADVANCE(1769);
      END_STATE();
    case 1965:
      if (lookahead == 'l') ADVANCE(1769);
      if (lookahead == 'r') ADVANCE(1769);
      END_STATE();
    case 1966:
      if (lookahead == 'l') ADVANCE(1782);
      END_STATE();
    case 1967:
      if (lookahead == 'l') ADVANCE(1779);
      END_STATE();
    case 1968:
      if (lookahead == 'l') ADVANCE(1788);
      END_STATE();
    case 1969:
      if (lookahead == 'l') ADVANCE(1781);
      END_STATE();
    case 1970:
      if (lookahead == 'l') ADVANCE(1792);
      END_STATE();
    case 1971:
      if (lookahead == 'l') ADVANCE(2112);
      END_STATE();
    case 1972:
      if (lookahead == 'l') ADVANCE(1910);
      END_STATE();
    case 1973:
      if (lookahead == 'l') ADVANCE(1795);
      END_STATE();
    case 1974:
      if (lookahead == 'l') ADVANCE(2107);
      END_STATE();
    case 1975:
      if (lookahead == 'l') ADVANCE(1912);
      if (lookahead == 'r') ADVANCE(2053);
      END_STATE();
    case 1976:
      if (lookahead == 'l') ADVANCE(2074);
      END_STATE();
    case 1977:
      if (lookahead == 'l') ADVANCE(2076);
      END_STATE();
    case 1978:
      if (lookahead == 'l') ADVANCE(2120);
      END_STATE();
    case 1979:
      if (lookahead == 'l') ADVANCE(2126);
      END_STATE();
    case 1980:
      if (lookahead == 'l') ADVANCE(1841);
      END_STATE();
    case 1981:
      if (lookahead == 'm') ADVANCE(1769);
      END_STATE();
    case 1982:
      if (lookahead == 'n') ADVANCE(1906);
      END_STATE();
    case 1983:
      if (lookahead == 'n') ADVANCE(1916);
      END_STATE();
    case 1984:
      if (lookahead == 'n') ADVANCE(1733);
      END_STATE();
    case 1985:
      if (lookahead == 'n') ADVANCE(1729);
      END_STATE();
    case 1986:
      if (lookahead == 'n') ADVANCE(1730);
      END_STATE();
    case 1987:
      if (lookahead == 'n') ADVANCE(1790);
      END_STATE();
    case 1988:
      if (lookahead == 'n') ADVANCE(1756);
      END_STATE();
    case 1989:
      if (lookahead == 'n') ADVANCE(1789);
      END_STATE();
    case 1990:
      if (lookahead == 'n') ADVANCE(1769);
      END_STATE();
    case 1991:
      if (lookahead == 'n') ADVANCE(1778);
      END_STATE();
    case 1992:
      if (lookahead == 'n') ADVANCE(1780);
      END_STATE();
    case 1993:
      if (lookahead == 'n') ADVANCE(1774);
      END_STATE();
    case 1994:
      if (lookahead == 'n') ADVANCE(1793);
      END_STATE();
    case 1995:
      if (lookahead == 'n') ADVANCE(1786);
      END_STATE();
    case 1996:
      if (lookahead == 'n') ADVANCE(1794);
      END_STATE();
    case 1997:
      if (lookahead == 'n') ADVANCE(2115);
      END_STATE();
    case 1998:
      if (lookahead == 'n') ADVANCE(2121);
      END_STATE();
    case 1999:
      if (lookahead == 'n') ADVANCE(2123);
      END_STATE();
    case 2000:
      if (lookahead == 'n') ADVANCE(2124);
      END_STATE();
    case 2001:
      if (lookahead == 'n') ADVANCE(2125);
      END_STATE();
    case 2002:
      if (lookahead == 'n') ADVANCE(2126);
      END_STATE();
    case 2003:
      if (lookahead == 'n') ADVANCE(2127);
      END_STATE();
    case 2004:
      if (lookahead == 'n') ADVANCE(2128);
      END_STATE();
    case 2005:
      if (lookahead == 'n') ADVANCE(2129);
      END_STATE();
    case 2006:
      if (lookahead == 'n') ADVANCE(2130);
      END_STATE();
    case 2007:
      if (lookahead == 'n') ADVANCE(2131);
      END_STATE();
    case 2008:
      if (lookahead == 'n') ADVANCE(1913);
      END_STATE();
    case 2009:
      if (lookahead == 'o') ADVANCE(2134);
      END_STATE();
    case 2010:
      if (lookahead == 'o') ADVANCE(1858);
      END_STATE();
    case 2011:
      if (lookahead == 'o') ADVANCE(1981);
      END_STATE();
    case 2012:
      if (lookahead == 'o') ADVANCE(2135);
      END_STATE();
    case 2013:
      if (lookahead == 'o') ADVANCE(1959);
      END_STATE();
    case 2014:
      if (lookahead == 'o') ADVANCE(1909);
      END_STATE();
    case 2015:
      if (lookahead == 'o') ADVANCE(2049);
      END_STATE();
    case 2016:
      if (lookahead == 'o') ADVANCE(1963);
      END_STATE();
    case 2017:
      if (lookahead == 'o') ADVANCE(2105);
      END_STATE();
    case 2018:
      if (lookahead == 'o') ADVANCE(1967);
      END_STATE();
    case 2019:
      if (lookahead == 'o') ADVANCE(1968);
      END_STATE();
    case 2020:
      if (lookahead == 'o') ADVANCE(1969);
      END_STATE();
    case 2021:
      if (lookahead == 'o') ADVANCE(1970);
      END_STATE();
    case 2022:
      if (lookahead == 'o') ADVANCE(1973);
      END_STATE();
    case 2023:
      if (lookahead == 'p') ADVANCE(1799);
      END_STATE();
    case 2024:
      if (lookahead == 'p') ADVANCE(1181);
      END_STATE();
    case 2025:
      if (lookahead == 'p') ADVANCE(1918);
      END_STATE();
    case 2026:
      if (lookahead == 'p') ADVANCE(1769);
      END_STATE();
    case 2027:
      if (lookahead == 'p') ADVANCE(1822);
      END_STATE();
    case 2028:
      if (lookahead == 'p') ADVANCE(1936);
      END_STATE();
    case 2029:
      if (lookahead == 'p') ADVANCE(1937);
      END_STATE();
    case 2030:
      if (lookahead == 'p') ADVANCE(1938);
      END_STATE();
    case 2031:
      if (lookahead == 'p') ADVANCE(1939);
      END_STATE();
    case 2032:
      if (lookahead == 'p') ADVANCE(1940);
      END_STATE();
    case 2033:
      if (lookahead == 'p') ADVANCE(1941);
      END_STATE();
    case 2034:
      if (lookahead == 'p') ADVANCE(1942);
      END_STATE();
    case 2035:
      if (lookahead == 'p') ADVANCE(1943);
      END_STATE();
    case 2036:
      if (lookahead == 'p') ADVANCE(1944);
      END_STATE();
    case 2037:
      if (lookahead == 'p') ADVANCE(1945);
      END_STATE();
    case 2038:
      if (lookahead == 'p') ADVANCE(1946);
      END_STATE();
    case 2039:
      if (lookahead == 'p') ADVANCE(1979);
      END_STATE();
    case 2040:
      if (lookahead == 'p') ADVANCE(1979);
      if (lookahead == 'q') ADVANCE(2132);
      if (lookahead == 'x') ADVANCE(1853);
      END_STATE();
    case 2041:
      if (lookahead == 'p') ADVANCE(1979);
      if (lookahead == 'u') ADVANCE(1965);
      END_STATE();
    case 2042:
      if (lookahead == 'q') ADVANCE(2113);
      END_STATE();
    case 2043:
      if (lookahead == 'r') ADVANCE(1804);
      END_STATE();
    case 2044:
      if (lookahead == 'r') ADVANCE(1772);
      END_STATE();
    case 2045:
      if (lookahead == 'r') ADVANCE(1806);
      END_STATE();
    case 2046:
      if (lookahead == 'r') ADVANCE(2053);
      END_STATE();
    case 2047:
      if (lookahead == 'r') ADVANCE(1950);
      END_STATE();
    case 2048:
      if (lookahead == 'r') ADVANCE(2026);
      END_STATE();
    case 2049:
      if (lookahead == 'r') ADVANCE(2101);
      END_STATE();
    case 2050:
      if (lookahead == 'r') ADVANCE(1889);
      END_STATE();
    case 2051:
      if (lookahead == 'r') ADVANCE(2054);
      END_STATE();
    case 2052:
      if (lookahead == 'r') ADVANCE(2044);
      END_STATE();
    case 2053:
      if (lookahead == 'r') ADVANCE(1769);
      END_STATE();
    case 2054:
      if (lookahead == 'r') ADVANCE(2012);
      END_STATE();
    case 2055:
      if (lookahead == 'r') ADVANCE(1911);
      END_STATE();
    case 2056:
      if (lookahead == 'r') ADVANCE(1847);
      END_STATE();
    case 2057:
      if (lookahead == 'r') ADVANCE(1849);
      END_STATE();
    case 2058:
      if (lookahead == 's') ADVANCE(2102);
      END_STATE();
    case 2059:
      if (lookahead == 's') ADVANCE(1920);
      END_STATE();
    case 2060:
      if (lookahead == 's') ADVANCE(1801);
      END_STATE();
    case 2061:
      if (lookahead == 's') ADVANCE(1777);
      END_STATE();
    case 2062:
      if (lookahead == 's') ADVANCE(1803);
      END_STATE();
    case 2063:
      if (lookahead == 's') ADVANCE(1785);
      END_STATE();
    case 2064:
      if (lookahead == 's') ADVANCE(1727);
      END_STATE();
    case 2065:
      if (lookahead == 's') ADVANCE(1733);
      END_STATE();
    case 2066:
      if (lookahead == 's') ADVANCE(1980);
      END_STATE();
    case 2067:
      if (lookahead == 's') ADVANCE(2118);
      END_STATE();
    case 2068:
      if (lookahead == 's') ADVANCE(1729);
      END_STATE();
    case 2069:
      if (lookahead == 's') ADVANCE(1726);
      END_STATE();
    case 2070:
      if (lookahead == 's') ADVANCE(1730);
      END_STATE();
    case 2071:
      if (lookahead == 's') ADVANCE(1790);
      END_STATE();
    case 2072:
      if (lookahead == 's') ADVANCE(1789);
      END_STATE();
    case 2073:
      if (lookahead == 's') ADVANCE(1766);
      END_STATE();
    case 2074:
      if (lookahead == 's') ADVANCE(1769);
      END_STATE();
    case 2075:
      if (lookahead == 's') ADVANCE(1778);
      END_STATE();
    case 2076:
      if (lookahead == 's') ADVANCE(1791);
      END_STATE();
    case 2077:
      if (lookahead == 's') ADVANCE(1780);
      END_STATE();
    case 2078:
      if (lookahead == 's') ADVANCE(1793);
      END_STATE();
    case 2079:
      if (lookahead == 's') ADVANCE(1786);
      END_STATE();
    case 2080:
      if (lookahead == 's') ADVANCE(2104);
      END_STATE();
    case 2081:
      if (lookahead == 's') ADVANCE(1923);
      END_STATE();
    case 2082:
      if (lookahead == 's') ADVANCE(1794);
      END_STATE();
    case 2083:
      if (lookahead == 's') ADVANCE(1926);
      END_STATE();
    case 2084:
      if (lookahead == 's') ADVANCE(2105);
      END_STATE();
    case 2085:
      if (lookahead == 's') ADVANCE(1924);
      END_STATE();
    case 2086:
      if (lookahead == 's') ADVANCE(2106);
      END_STATE();
    case 2087:
      if (lookahead == 's') ADVANCE(1925);
      END_STATE();
    case 2088:
      if (lookahead == 's') ADVANCE(1929);
      END_STATE();
    case 2089:
      if (lookahead == 's') ADVANCE(1928);
      END_STATE();
    case 2090:
      if (lookahead == 's') ADVANCE(1927);
      END_STATE();
    case 2091:
      if (lookahead == 's') ADVANCE(1931);
      END_STATE();
    case 2092:
      if (lookahead == 's') ADVANCE(1930);
      END_STATE();
    case 2093:
      if (lookahead == 's') ADVANCE(1932);
      END_STATE();
    case 2094:
      if (lookahead == 's') ADVANCE(1933);
      END_STATE();
    case 2095:
      if (lookahead == 's') ADVANCE(1935);
      END_STATE();
    case 2096:
      if (lookahead == 's') ADVANCE(1934);
      END_STATE();
    case 2097:
      if (lookahead == 't') ADVANCE(1773);
      if (lookahead == 'x') ADVANCE(2041);
      END_STATE();
    case 2098:
      if (lookahead == 't') ADVANCE(1798);
      END_STATE();
    case 2099:
      if (lookahead == 't') ADVANCE(1823);
      END_STATE();
    case 2100:
      if (lookahead == 't') ADVANCE(1797);
      END_STATE();
    case 2101:
      if (lookahead == 't') ADVANCE(1800);
      END_STATE();
    case 2102:
      if (lookahead == 't') ADVANCE(1732);
      END_STATE();
    case 2103:
      if (lookahead == 't') ADVANCE(2047);
      END_STATE();
    case 2104:
      if (lookahead == 't') ADVANCE(1755);
      END_STATE();
    case 2105:
      if (lookahead == 't') ADVANCE(1769);
      END_STATE();
    case 2106:
      if (lookahead == 't') ADVANCE(1782);
      END_STATE();
    case 2107:
      if (lookahead == 't') ADVANCE(1783);
      END_STATE();
    case 2108:
      if (lookahead == 't') ADVANCE(1822);
      END_STATE();
    case 2109:
      if (lookahead == 'u') ADVANCE(1770);
      END_STATE();
    case 2110:
      if (lookahead == 'u') ADVANCE(2064);
      END_STATE();
    case 2111:
      if (lookahead == 'u') ADVANCE(1903);
      END_STATE();
    case 2112:
      if (lookahead == 'u') ADVANCE(2060);
      END_STATE();
    case 2113:
      if (lookahead == 'u') ADVANCE(1819);
      END_STATE();
    case 2114:
      if (lookahead == 'u') ADVANCE(2061);
      END_STATE();
    case 2115:
      if (lookahead == 'u') ADVANCE(2062);
      END_STATE();
    case 2116:
      if (lookahead == 'u') ADVANCE(1828);
      END_STATE();
    case 2117:
      if (lookahead == 'u') ADVANCE(2063);
      END_STATE();
    case 2118:
      if (lookahead == 'u') ADVANCE(2055);
      END_STATE();
    case 2119:
      if (lookahead == 'u') ADVANCE(2065);
      END_STATE();
    case 2120:
      if (lookahead == 'u') ADVANCE(2069);
      END_STATE();
    case 2121:
      if (lookahead == 'u') ADVANCE(2068);
      END_STATE();
    case 2122:
      if (lookahead == 'u') ADVANCE(2073);
      END_STATE();
    case 2123:
      if (lookahead == 'u') ADVANCE(2070);
      END_STATE();
    case 2124:
      if (lookahead == 'u') ADVANCE(2071);
      END_STATE();
    case 2125:
      if (lookahead == 'u') ADVANCE(2072);
      END_STATE();
    case 2126:
      if (lookahead == 'u') ADVANCE(2074);
      END_STATE();
    case 2127:
      if (lookahead == 'u') ADVANCE(2075);
      END_STATE();
    case 2128:
      if (lookahead == 'u') ADVANCE(2077);
      END_STATE();
    case 2129:
      if (lookahead == 'u') ADVANCE(2078);
      END_STATE();
    case 2130:
      if (lookahead == 'u') ADVANCE(2082);
      END_STATE();
    case 2131:
      if (lookahead == 'u') ADVANCE(2079);
      END_STATE();
    case 2132:
      if (lookahead == 'u') ADVANCE(1848);
      END_STATE();
    case 2133:
      if (lookahead == 'u') ADVANCE(1904);
      END_STATE();
    case 2134:
      if (lookahead == 'w') ADVANCE(1846);
      END_STATE();
    case 2135:
      if (lookahead == 'w') ADVANCE(1769);
      END_STATE();
    case 2136:
      if (lookahead == 'x') ADVANCE(1852);
      END_STATE();
    case 2137:
      if (lookahead == 'y') ADVANCE(2028);
      END_STATE();
    case 2138:
      if (lookahead == 'y') ADVANCE(2030);
      END_STATE();
    case 2139:
      if (lookahead == 'y') ADVANCE(2031);
      END_STATE();
    case 2140:
      if (lookahead == 'y') ADVANCE(2032);
      END_STATE();
    case 2141:
      if (lookahead == 'y') ADVANCE(2034);
      END_STATE();
    case 2142:
      if (lookahead == 'y') ADVANCE(2035);
      END_STATE();
    case 2143:
      if (lookahead == 'y') ADVANCE(2036);
      END_STATE();
    case 2144:
      if (lookahead == 'y') ADVANCE(2037);
      END_STATE();
    case 2145:
      if (lookahead == '{') ADVANCE(2299);
      if (lookahead == '}') ADVANCE(2301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2302);
      if (lookahead != 0) ADVANCE(2303);
      END_STATE();
    case 2146:
      if (lookahead == 0xfe0e) ADVANCE(2343);
      END_STATE();
    case 2147:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2147);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2256);
      if ((!eof && set_contains(sym_tagpair_key_character_set_1, 22, lookahead))) ADVANCE(2257);
      END_STATE();
    case 2148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2194);
      END_STATE();
    case 2149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1738);
      END_STATE();
    case 2150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1769);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1769);
      END_STATE();
    case 2151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1769);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1769);
      END_STATE();
    case 2152:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1758);
      END_STATE();
    case 2153:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1768);
      END_STATE();
    case 2154:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1769);
      END_STATE();
    case 2155:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1779);
      END_STATE();
    case 2156:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1788);
      END_STATE();
    case 2157:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1781);
      END_STATE();
    case 2158:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1792);
      END_STATE();
    case 2159:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1795);
      END_STATE();
    case 2160:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2171);
      END_STATE();
    case 2161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1747);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1748);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1749);
      END_STATE();
    case 2162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1769);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1769);
      END_STATE();
    case 2163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1783);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1791);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1782);
      END_STATE();
    case 2164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2153);
      END_STATE();
    case 2165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2159);
      END_STATE();
    case 2166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1727);
      END_STATE();
    case 2167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1737);
      END_STATE();
    case 2168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1739);
      END_STATE();
    case 2169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1726);
      END_STATE();
    case 2170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1746);
      END_STATE();
    case 2171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1736);
      END_STATE();
    case 2172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1769);
      END_STATE();
    case 2173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1776);
      END_STATE();
    case 2174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1784);
      END_STATE();
    case 2175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1596);
      END_STATE();
    case 2176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1740);
      END_STATE();
    case 2177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1769);
      END_STATE();
    case 2178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2166);
      END_STATE();
    case 2179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2169);
      END_STATE();
    case 2180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2172);
      END_STATE();
    case 2181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2173);
      END_STATE();
    case 2182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2174);
      END_STATE();
    case 2183:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1468);
      END_STATE();
    case 2184:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1219);
      END_STATE();
    case 2185:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1769);
      END_STATE();
    case 2186:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1679);
      END_STATE();
    case 2187:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1681);
      END_STATE();
    case 2188:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1685);
      END_STATE();
    case 2189:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1686);
      END_STATE();
    case 2190:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1688);
      END_STATE();
    case 2191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1690);
      END_STATE();
    case 2192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1694);
      END_STATE();
    case 2193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2354);
      END_STATE();
    case 2194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2193);
      END_STATE();
    case 2195:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2353);
      END_STATE();
    case 2196:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2350);
      END_STATE();
    case 2197:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2354);
      END_STATE();
    case 2198:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2453);
      END_STATE();
    case 2199:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2314);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      END_STATE();
    case 2200:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2314);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2382);
      END_STATE();
    case 2202:
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '\n', 2216,
        '\r', 1093,
        '!', 2370,
        '$', 840,
        '&', 27,
        '(', 2297,
        '*', 2434,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'O', 2404,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1093,
        0x0b, 1093,
        '\f', 1093,
        ' ', 1093,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2203:
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '\n', 2218,
        '\r', 1098,
        '!', 2370,
        '$', 840,
        '&', 10,
        '(', 2297,
        '0', 842,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'p', 800,
        '{', 2300,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2e40, 2364,
        'O', 34,
        'o', 34,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1098,
        0x0b, 1098,
        '\f', 1098,
        ' ', 1098,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2204:
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '!', 2370,
        '#', 2359,
        '$', 840,
        '&', 21,
        '(', 2297,
        '*', 2434,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'O', 2404,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        '\n', 1113,
        '\r', 1113,
        'Z', 836,
        'z', 836,
        '+', 2358,
        0x16ed, 2358,
        0x2795, 2358,
        ':', 2334,
        'X', 2334,
        'x', 2334,
        '\t', 1092,
        0x0b, 1092,
        '\f', 1092,
        ' ', 1092,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2317);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2205:
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '!', 2370,
        '#', 2359,
        '$', 840,
        '&', 21,
        '(', 2297,
        '*', 2434,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2336,
        '?', 2370,
        '@', 2346,
        'O', 2404,
        'P', 2339,
        'R', 2324,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        '\n', 1113,
        '\r', 1113,
        'Z', 836,
        'z', 836,
        '+', 2358,
        0x16ed, 2358,
        0x2795, 2358,
        '\t', 1092,
        0x0b, 1092,
        '\f', 1092,
        ' ', 1092,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2317);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2325);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2206:
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '!', 2370,
        '#', 2359,
        '$', 840,
        '&', 28,
        '(', 2297,
        '*', 2434,
        '0', 2408,
        '1', 2384,
        ';', 2214,
        '<', 498,
        '=', 2336,
        '?', 2370,
        '@', 2346,
        'O', 2404,
        'P', 2339,
        'R', 2324,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'o', 2413,
        'p', 800,
        '{', 2300,
        0xbd, 2428,
        0x66d, 2450,
        0x204e, 2446,
        0x2217, 2438,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2731, 2442,
        0x2e40, 2364,
        '\n', 1113,
        '\r', 1113,
        'Z', 836,
        'z', 836,
        '+', 2358,
        0x16ed, 2358,
        0x2795, 2358,
        ':', 2334,
        'X', 2334,
        'x', 2334,
        '\t', 1092,
        0x0b, 1092,
        '\f', 1092,
        ' ', 1092,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2348);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2317);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2325);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2207:
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '!', 2370,
        '$', 840,
        '&', 10,
        '(', 2297,
        '0', 842,
        ';', 2214,
        '<', 498,
        '=', 2365,
        '?', 2370,
        '@', 2346,
        'P', 2339,
        'R', 2328,
        'T', 504,
        '[', 2225,
        'e', 2319,
        'p', 800,
        '{', 2300,
        0x221e, 2373,
        0x2659, 2342,
        0x265f, 799,
        0x2e40, 2364,
        '\n', 1111,
        '\r', 1111,
        'O', 34,
        'o', 34,
        'Z', 836,
        'z', 836,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 848,
        0x0b, 848,
        '\f', 848,
        ' ', 848,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2320);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2367);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2329);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2208:
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '!', 2381,
        '#', 2357,
        '$', 2201,
        '&', 1141,
        '(', 2296,
        ')', 2298,
        '0', 1159,
        ';', 2213,
        '<', 1796,
        '=', 2376,
        '?', 2381,
        '@', 2345,
        'P', 2340,
        'R', 2331,
        'T', 1802,
        '[', 2224,
        'e', 2321,
        'p', 2148,
        '{', 2299,
        0xbd, 2427,
        0x221e, 2374,
        0x2659, 2341,
        0x265f, 2146,
        0x2e40, 2375,
        'O', 1160,
        'o', 1160,
        'Z', 2197,
        'z', 2197,
        '+', 2361,
        0x16ed, 2361,
        0x2795, 2361,
        ':', 2333,
        'X', 2333,
        'x', 2333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1121);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2377);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      if (set_contains(sym_annotation_character_set_6, 48, lookahead)) ADVANCE(2362);
      END_STATE();
    case 2209:
      if (eof) ADVANCE(2210);
      ADVANCE_MAP(
        '"', 2228,
        '%', 2215,
        '&', 1129,
        '(', 2296,
        ')', 2298,
        '*', 2433,
        '-', 2387,
        '/', 2416,
        '0', 2410,
        '1', 2383,
        '2', 2426,
        ';', 2213,
        '@', 2345,
        'O', 2406,
        'P', 2338,
        '[', 2224,
        ']', 2226,
        'o', 2415,
        '{', 2299,
        '}', 2301,
        0xbd, 2429,
        0x2ba, 2248,
        0x2dd, 2246,
        0x2ee, 2252,
        0x2f6, 2250,
        0x5f2, 2254,
        0x5f4, 2244,
        0x66d, 2449,
        0x2010, 2391,
        0x2011, 2393,
        0x2012, 2395,
        0x2013, 2397,
        0x2014, 2399,
        0x201c, 2232,
        0x201d, 2234,
        0x201f, 2236,
        0x2033, 2238,
        0x2036, 2240,
        0x2044, 2420,
        0x204e, 2445,
        0x2212, 2389,
        0x2215, 2418,
        0x2217, 2437,
        0x2659, 2341,
        0x265f, 2146,
        0x2731, 2441,
        0x2796, 2401,
        0x27cb, 2422,
        0x29f8, 2424,
        0x3003, 2242,
        0xff02, 2230,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2209);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2318);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2316);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2327);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2211);
      if (lookahead == '\r') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1087);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2212);
      if (lookahead == '\r') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1094);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2216);
      if (lookahead == '\r') ADVANCE(1093);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1093);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2217);
      if (lookahead == '\r') ADVANCE(1096);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1096);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2218);
      if (lookahead == '\r') ADVANCE(1098);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1098);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2219);
      if (lookahead == '\r') ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1099);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2212);
      if (lookahead == '\r') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1094);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2221);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(1179);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(aux_sym_double_quote_token1);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(anon_sym_uff02);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(aux_sym_double_quote_token2);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(anon_sym_u201c);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(aux_sym_double_quote_token3);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(anon_sym_u201d);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(aux_sym_double_quote_token4);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(anon_sym_u201f);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(aux_sym_double_quote_token5);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(anon_sym_u2033);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(aux_sym_double_quote_token6);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(anon_sym_u2036);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(aux_sym_double_quote_token7);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(anon_sym_u3003);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(aux_sym_double_quote_token8);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(anon_sym_u05f4);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(aux_sym_double_quote_token9);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(anon_sym_u02dd);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(aux_sym_double_quote_token10);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(anon_sym_u02ba);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(aux_sym_double_quote_token11);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(anon_sym_u02f6);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(aux_sym_double_quote_token12);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(anon_sym_u02ee);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(aux_sym_double_quote_token13);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(anon_sym_u05f2);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(aux_sym_double_quote_token14);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2256);
      if ((!eof && set_contains(sym_tagpair_key_character_set_1, 22, lookahead))) ADVANCE(2257);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(sym_tagpair_key);
      if ((!eof && set_contains(sym_tagpair_key_character_set_1, 22, lookahead))) ADVANCE(2257);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '#') ADVANCE(2267);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2258);
      if (lookahead == ']') ADVANCE(2227);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2259);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2258);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2260);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2288);
      if (lookahead == '1') ADVANCE(2288);
      if (lookahead == '3') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2288);
      if (lookahead == '8') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2280);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      ADVANCE_MAP(
        '0', 2269,
        '2', 2288,
        'B', 2289,
        'b', 2289,
        'D', 2291,
        'd', 2291,
        'E', 2292,
        'e', 2292,
        'F', 2284,
        'f', 2284,
      );
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2263);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2276);
      if (lookahead == '3') ADVANCE(2282);
      if (lookahead == '6') ADVANCE(2283);
      if (lookahead == '7') ADVANCE(2281);
      if (lookahead == '8') ADVANCE(2272);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2273);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2290);
      if (lookahead == '3') ADVANCE(2279);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2288);
      if (lookahead == '4') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2275);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2264);
      if (lookahead == '3') ADVANCE(2265);
      if (lookahead == '5') ADVANCE(2293);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2294);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2287);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2261);
      if (lookahead == '4') ADVANCE(2279);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2274);
      if (lookahead == '5') ADVANCE(2278);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2286);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2270);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2288);
      if (lookahead == '6') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2280);
      if (lookahead == '5') ADVANCE(2262);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '4') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '5') ADVANCE(2277);
      if (lookahead == '9') ADVANCE(2285);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '6') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '9') ADVANCE(2268);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ';') ADVANCE(2295);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2288);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2288);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2288);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2270);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2266);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2295);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(aux_sym_inline_comment_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2302);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(2303);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(aux_sym_inline_comment_text_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(2303);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(sym_move_number);
      ADVANCE_MAP(
        '\n', 2312,
        '\r', 2307,
        '&', 25,
        '\t', 2306,
        0x0b, 2306,
        '\f', 2306,
        ' ', 2306,
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
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2312);
      if (lookahead == '\r') ADVANCE(2307);
      if (lookahead == '&') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2306);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2312);
      if (lookahead == '\r') ADVANCE(2307);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2306);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2312);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2314);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2313);
      if (lookahead == '\r') ADVANCE(2309);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2313);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1144);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2314);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1105);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2314);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1102);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2314);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1179);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(sym_move_number);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2314);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(sym_move_number);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(sym__misc_punctuation);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(sym__misc_punctuation);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(692);
      if (lookahead == 'p') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(2024);
      if (lookahead == 'p') ADVANCE(2362);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(2362);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(2380);
      if (lookahead == '\r') ADVANCE(2363);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(2362);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2362);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(anon_sym_EQ);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 12,
        '+', 2372,
        '=', 2372,
        0x16ed, 2372,
        0x2795, 2372,
        '/', 36,
        0x2044, 36,
        0x2215, 36,
        0x27cb, 36,
        0x29f8, 36,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(anon_sym_EQ);
      ADVANCE_MAP(
        '&', 1133,
        '+', 2362,
        '=', 2362,
        0x16ed, 2362,
        0x2795, 2362,
        '/', 1168,
        0x2044, 1168,
        0x2215, 1168,
        0x27cb, 1168,
        0x29f8, 1168,
      );
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(835);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2194);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(anon_sym_u2659);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(anon_sym_u2659);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 23,
        '+', 2372,
        0x16ed, 2372,
        0x2795, 2372,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2356);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '&', 1142,
        '+', 2362,
        0x16ed, 2362,
        0x2795, 2362,
        '/', 1172,
        0x2044, 1172,
        0x2215, 1172,
        0x27cb, 1172,
        0x29f8, 1172,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2354);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(838);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(1156);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2196);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 24,
        '+', 2359,
        0x16ed, 2359,
        0x2795, 2359,
        '/', 40,
        0x2044, 40,
        0x2215, 40,
        0x27cb, 40,
        0x29f8, 40,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(1128);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2357);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '&', 1143,
        '+', 2357,
        0x16ed, 2357,
        0x2795, 2357,
        '/', 1175,
        0x2044, 1175,
        0x2215, 1175,
        0x27cb, 1175,
        0x29f8, 1175,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2362);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1180);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 12,
        '+', 2372,
        0x16ed, 2372,
        0x2795, 2372,
        '/', 36,
        0x2044, 36,
        0x2215, 36,
        0x27cb, 36,
        0x29f8, 36,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 12,
        '+', 2372,
        '=', 2372,
        0x16ed, 2372,
        0x2795, 2372,
        '/', 36,
        0x2044, 36,
        0x2215, 36,
        0x27cb, 36,
        0x29f8, 36,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 23,
        '-', 2355,
        '+', 2372,
        0x16ed, 2372,
        0x2795, 2372,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2356);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 23,
        '+', 2372,
        0x16ed, 2372,
        0x2795, 2372,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2356);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(17);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1180,
        '\r', 1,
        '&', 19,
        '+', 2372,
        0x16ed, 2372,
        0x2795, 2372,
        '/', 36,
        0x2044, 36,
        0x2215, 36,
        0x27cb, 36,
        0x29f8, 36,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2372);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2371);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1162,
        '\r', 846,
        '&', 22,
        '\t', 845,
        0x0b, 845,
        '\f', 845,
        ' ', 845,
        '/', 849,
        0x2044, 849,
        0x2215, 849,
        0x27cb, 849,
        0x29f8, 849,
      );
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1140);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1163);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1133,
        '+', 2362,
        0x16ed, 2362,
        0x2795, 2362,
        '/', 1168,
        0x2044, 1168,
        0x2215, 1168,
        0x27cb, 1168,
        0x29f8, 1168,
      );
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1133,
        '+', 2362,
        '=', 2362,
        0x16ed, 2362,
        0x2795, 2362,
        '/', 1168,
        0x2044, 1168,
        0x2215, 1168,
        0x27cb, 1168,
        0x29f8, 1168,
      );
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1142,
        '+', 2362,
        0x16ed, 2362,
        0x2795, 2362,
        '/', 1172,
        0x2044, 1172,
        0x2215, 1172,
        0x27cb, 1172,
        0x29f8, 1172,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2354);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1136);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1138,
        '+', 2362,
        0x16ed, 2362,
        0x2795, 2362,
        '/', 1168,
        0x2044, 1168,
        0x2215, 1168,
        0x27cb, 1168,
        0x29f8, 1168,
      );
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(1179);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2362);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2382);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(2312);
      if (lookahead == '\r') ADVANCE(2307);
      if (lookahead == ' ') ADVANCE(2304);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2306);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(844);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(2310);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2200);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2314);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(1167);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(anon_sym_u2212);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(anon_sym_u2010);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(anon_sym_u2011);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(anon_sym_u2012);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(anon_sym_u2013);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(anon_sym_u2014);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(anon_sym_u2796);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(837);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1171);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1171);
      if (lookahead == '&') ADVANCE(1127);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2195);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '\n', 2312,
        '\r', 2307,
        ' ', 2305,
        '&', 11,
        '\t', 2306,
        0x0b, 2306,
        '\f', 2306,
        'A', 844,
        'B', 844,
        'a', 844,
        'b', 844,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(837);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1171);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1171);
      if (lookahead == '&') ADVANCE(1127);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2195);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(2311);
      if (lookahead == '&') ADVANCE(1127);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2200);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2314);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2195);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2199);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(837);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1171);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1171);
      if (lookahead == '&') ADVANCE(1127);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2195);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(anon_sym_u2215);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(anon_sym_u2044);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(anon_sym_u27cb);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(anon_sym_u29f8);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(anon_sym_u00bd);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == ' ') ADVANCE(1174);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == ' ') ADVANCE(1174);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(anon_sym_u2217);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(anon_sym_u2217);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(anon_sym_u2731);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(anon_sym_u2731);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(anon_sym_u204e);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(anon_sym_u204e);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(anon_sym_u066d);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(anon_sym_u066d);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      if (lookahead == '\n') ADVANCE(1180);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2207, .external_lex_state = 1},
  [2] = {.lex_state = 1088, .external_lex_state = 1},
  [3] = {.lex_state = 2204, .external_lex_state = 1},
  [4] = {.lex_state = 2204, .external_lex_state = 1},
  [5] = {.lex_state = 1116, .external_lex_state = 1},
  [6] = {.lex_state = 1116, .external_lex_state = 1},
  [7] = {.lex_state = 1116, .external_lex_state = 1},
  [8] = {.lex_state = 2206, .external_lex_state = 1},
  [9] = {.lex_state = 2207, .external_lex_state = 1},
  [10] = {.lex_state = 2205, .external_lex_state = 1},
  [11] = {.lex_state = 2207, .external_lex_state = 1},
  [12] = {.lex_state = 2206, .external_lex_state = 1},
  [13] = {.lex_state = 2205, .external_lex_state = 1},
  [14] = {.lex_state = 2205, .external_lex_state = 1},
  [15] = {.lex_state = 1118, .external_lex_state = 1},
  [16] = {.lex_state = 2205, .external_lex_state = 1},
  [17] = {.lex_state = 2204, .external_lex_state = 1},
  [18] = {.lex_state = 1117, .external_lex_state = 1},
  [19] = {.lex_state = 1088, .external_lex_state = 1},
  [20] = {.lex_state = 1117, .external_lex_state = 1},
  [21] = {.lex_state = 1117, .external_lex_state = 1},
  [22] = {.lex_state = 1088, .external_lex_state = 1},
  [23] = {.lex_state = 1118, .external_lex_state = 1},
  [24] = {.lex_state = 1088, .external_lex_state = 1},
  [25] = {.lex_state = 2204, .external_lex_state = 1},
  [26] = {.lex_state = 2204, .external_lex_state = 1},
  [27] = {.lex_state = 2208, .external_lex_state = 1},
  [28] = {.lex_state = 2204, .external_lex_state = 1},
  [29] = {.lex_state = 2204, .external_lex_state = 1},
  [30] = {.lex_state = 2204, .external_lex_state = 1},
  [31] = {.lex_state = 2204, .external_lex_state = 1},
  [32] = {.lex_state = 2208, .external_lex_state = 1},
  [33] = {.lex_state = 2204, .external_lex_state = 1},
  [34] = {.lex_state = 2204, .external_lex_state = 1},
  [35] = {.lex_state = 2204, .external_lex_state = 1},
  [36] = {.lex_state = 2204, .external_lex_state = 1},
  [37] = {.lex_state = 2204, .external_lex_state = 1},
  [38] = {.lex_state = 2204, .external_lex_state = 1},
  [39] = {.lex_state = 2204, .external_lex_state = 1},
  [40] = {.lex_state = 2204, .external_lex_state = 1},
  [41] = {.lex_state = 2204, .external_lex_state = 1},
  [42] = {.lex_state = 2204, .external_lex_state = 1},
  [43] = {.lex_state = 2204, .external_lex_state = 1},
  [44] = {.lex_state = 2204, .external_lex_state = 1},
  [45] = {.lex_state = 1116, .external_lex_state = 1},
  [46] = {.lex_state = 2204, .external_lex_state = 1},
  [47] = {.lex_state = 2204, .external_lex_state = 1},
  [48] = {.lex_state = 1117, .external_lex_state = 1},
  [49] = {.lex_state = 2208, .external_lex_state = 1},
  [50] = {.lex_state = 2204, .external_lex_state = 1},
  [51] = {.lex_state = 2204, .external_lex_state = 1},
  [52] = {.lex_state = 2202, .external_lex_state = 1},
  [53] = {.lex_state = 2204, .external_lex_state = 1},
  [54] = {.lex_state = 2202, .external_lex_state = 1},
  [55] = {.lex_state = 2204, .external_lex_state = 1},
  [56] = {.lex_state = 2204, .external_lex_state = 1},
  [57] = {.lex_state = 2204, .external_lex_state = 1},
  [58] = {.lex_state = 2204, .external_lex_state = 1},
  [59] = {.lex_state = 2204, .external_lex_state = 1},
  [60] = {.lex_state = 2204, .external_lex_state = 1},
  [61] = {.lex_state = 2204, .external_lex_state = 1},
  [62] = {.lex_state = 2204, .external_lex_state = 1},
  [63] = {.lex_state = 2204, .external_lex_state = 1},
  [64] = {.lex_state = 2204, .external_lex_state = 1},
  [65] = {.lex_state = 2204, .external_lex_state = 1},
  [66] = {.lex_state = 2204, .external_lex_state = 1},
  [67] = {.lex_state = 2204, .external_lex_state = 1},
  [68] = {.lex_state = 2204, .external_lex_state = 1},
  [69] = {.lex_state = 2204, .external_lex_state = 1},
  [70] = {.lex_state = 1095, .external_lex_state = 1},
  [71] = {.lex_state = 1116, .external_lex_state = 1},
  [72] = {.lex_state = 1116, .external_lex_state = 1},
  [73] = {.lex_state = 1088, .external_lex_state = 1},
  [74] = {.lex_state = 2204, .external_lex_state = 1},
  [75] = {.lex_state = 1116, .external_lex_state = 1},
  [76] = {.lex_state = 2204, .external_lex_state = 1},
  [77] = {.lex_state = 1116, .external_lex_state = 1},
  [78] = {.lex_state = 1116, .external_lex_state = 1},
  [79] = {.lex_state = 1116, .external_lex_state = 1},
  [80] = {.lex_state = 1116, .external_lex_state = 1},
  [81] = {.lex_state = 1088, .external_lex_state = 1},
  [82] = {.lex_state = 1116, .external_lex_state = 1},
  [83] = {.lex_state = 1116, .external_lex_state = 1},
  [84] = {.lex_state = 1088, .external_lex_state = 1},
  [85] = {.lex_state = 1088, .external_lex_state = 1},
  [86] = {.lex_state = 1116, .external_lex_state = 1},
  [87] = {.lex_state = 1116, .external_lex_state = 1},
  [88] = {.lex_state = 1116, .external_lex_state = 1},
  [89] = {.lex_state = 1116, .external_lex_state = 1},
  [90] = {.lex_state = 1116, .external_lex_state = 1},
  [91] = {.lex_state = 1116, .external_lex_state = 1},
  [92] = {.lex_state = 1116, .external_lex_state = 1},
  [93] = {.lex_state = 1116, .external_lex_state = 1},
  [94] = {.lex_state = 2208, .external_lex_state = 1},
  [95] = {.lex_state = 1097, .external_lex_state = 1},
  [96] = {.lex_state = 1116, .external_lex_state = 1},
  [97] = {.lex_state = 1116, .external_lex_state = 1},
  [98] = {.lex_state = 2208, .external_lex_state = 1},
  [99] = {.lex_state = 1116, .external_lex_state = 1},
  [100] = {.lex_state = 2208, .external_lex_state = 1},
  [101] = {.lex_state = 1116, .external_lex_state = 1},
  [102] = {.lex_state = 1116, .external_lex_state = 1},
  [103] = {.lex_state = 1116, .external_lex_state = 1},
  [104] = {.lex_state = 1116, .external_lex_state = 1},
  [105] = {.lex_state = 1116, .external_lex_state = 1},
  [106] = {.lex_state = 1116, .external_lex_state = 1},
  [107] = {.lex_state = 1116, .external_lex_state = 1},
  [108] = {.lex_state = 1116, .external_lex_state = 1},
  [109] = {.lex_state = 1116, .external_lex_state = 1},
  [110] = {.lex_state = 2208, .external_lex_state = 1},
  [111] = {.lex_state = 1116, .external_lex_state = 1},
  [112] = {.lex_state = 1116, .external_lex_state = 1},
  [113] = {.lex_state = 1116, .external_lex_state = 1},
  [114] = {.lex_state = 1116, .external_lex_state = 1},
  [115] = {.lex_state = 2208, .external_lex_state = 1},
  [116] = {.lex_state = 1116, .external_lex_state = 1},
  [117] = {.lex_state = 1116, .external_lex_state = 1},
  [118] = {.lex_state = 1123},
  [119] = {.lex_state = 1123},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1122},
  [122] = {.lex_state = 1123},
  [123] = {.lex_state = 1123},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1169},
  [126] = {.lex_state = 1114, .external_lex_state = 1},
  [127] = {.lex_state = 1115, .external_lex_state = 1},
  [128] = {.lex_state = 1169},
  [129] = {.lex_state = 1114, .external_lex_state = 1},
  [130] = {.lex_state = 1115, .external_lex_state = 1},
  [131] = {.lex_state = 1115, .external_lex_state = 1},
  [132] = {.lex_state = 2207, .external_lex_state = 1},
  [133] = {.lex_state = 2207, .external_lex_state = 1},
  [134] = {.lex_state = 1115, .external_lex_state = 1},
  [135] = {.lex_state = 2207, .external_lex_state = 1},
  [136] = {.lex_state = 2207, .external_lex_state = 1},
  [137] = {.lex_state = 2208, .external_lex_state = 1},
  [138] = {.lex_state = 2203, .external_lex_state = 1},
  [139] = {.lex_state = 2207, .external_lex_state = 1},
  [140] = {.lex_state = 2207, .external_lex_state = 1},
  [141] = {.lex_state = 2207, .external_lex_state = 1},
  [142] = {.lex_state = 2207, .external_lex_state = 1},
  [143] = {.lex_state = 2207, .external_lex_state = 1},
  [144] = {.lex_state = 2208, .external_lex_state = 1},
  [145] = {.lex_state = 2207, .external_lex_state = 1},
  [146] = {.lex_state = 2208, .external_lex_state = 1},
  [147] = {.lex_state = 2207, .external_lex_state = 1},
  [148] = {.lex_state = 2207, .external_lex_state = 1},
  [149] = {.lex_state = 2208, .external_lex_state = 1},
  [150] = {.lex_state = 2208, .external_lex_state = 1},
  [151] = {.lex_state = 2208, .external_lex_state = 1},
  [152] = {.lex_state = 2208, .external_lex_state = 1},
  [153] = {.lex_state = 2208, .external_lex_state = 1},
  [154] = {.lex_state = 2208, .external_lex_state = 1},
  [155] = {.lex_state = 2208, .external_lex_state = 1},
  [156] = {.lex_state = 2208, .external_lex_state = 1},
  [157] = {.lex_state = 2208, .external_lex_state = 1},
  [158] = {.lex_state = 2207, .external_lex_state = 1},
  [159] = {.lex_state = 2207, .external_lex_state = 1},
  [160] = {.lex_state = 2207, .external_lex_state = 1},
  [161] = {.lex_state = 2208, .external_lex_state = 1},
  [162] = {.lex_state = 2203, .external_lex_state = 1},
  [163] = {.lex_state = 2208, .external_lex_state = 1},
  [164] = {.lex_state = 2208, .external_lex_state = 1},
  [165] = {.lex_state = 2208, .external_lex_state = 1},
  [166] = {.lex_state = 2208, .external_lex_state = 1},
  [167] = {.lex_state = 2207, .external_lex_state = 1},
  [168] = {.lex_state = 2208, .external_lex_state = 1},
  [169] = {.lex_state = 2208, .external_lex_state = 1},
  [170] = {.lex_state = 1169},
  [171] = {.lex_state = 1169},
  [172] = {.lex_state = 2208, .external_lex_state = 1},
  [173] = {.lex_state = 2208, .external_lex_state = 1},
  [174] = {.lex_state = 1169},
  [175] = {.lex_state = 1100, .external_lex_state = 1},
  [176] = {.lex_state = 2208, .external_lex_state = 1},
  [177] = {.lex_state = 2208, .external_lex_state = 1},
  [178] = {.lex_state = 2208, .external_lex_state = 1},
  [179] = {.lex_state = 2208, .external_lex_state = 1},
  [180] = {.lex_state = 2208, .external_lex_state = 1},
  [181] = {.lex_state = 2208, .external_lex_state = 1},
  [182] = {.lex_state = 2208, .external_lex_state = 1},
  [183] = {.lex_state = 2208, .external_lex_state = 1},
  [184] = {.lex_state = 2208, .external_lex_state = 1},
  [185] = {.lex_state = 2208, .external_lex_state = 1},
  [186] = {.lex_state = 2208, .external_lex_state = 1},
  [187] = {.lex_state = 2208, .external_lex_state = 1},
  [188] = {.lex_state = 2208, .external_lex_state = 1},
  [189] = {.lex_state = 2208, .external_lex_state = 1},
  [190] = {.lex_state = 2208, .external_lex_state = 1},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2145},
  [193] = {.lex_state = 2145},
  [194] = {.lex_state = 2145},
  [195] = {.lex_state = 2145},
  [196] = {.lex_state = 2145},
  [197] = {.lex_state = 2145},
  [198] = {.lex_state = 2145},
  [199] = {.lex_state = 2145},
  [200] = {.lex_state = 1195},
  [201] = {.lex_state = 1195},
  [202] = {.lex_state = 1195},
  [203] = {.lex_state = 1195},
  [204] = {.lex_state = 1195},
  [205] = {.lex_state = 1195},
  [206] = {.lex_state = 1195},
  [207] = {.lex_state = 1195},
  [208] = {.lex_state = 1195},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 2145},
  [213] = {.lex_state = 2145},
  [214] = {.lex_state = 1195},
  [215] = {.lex_state = 2145},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
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
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 2208},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 1195},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 2221},
  [250] = {.lex_state = 1310},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 2221},
  [253] = {.lex_state = 2147},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 1169},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 2221},
  [258] = {.lex_state = 1169},
  [259] = {.lex_state = 1195},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 1310},
  [262] = {.lex_state = 1195},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2221},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 2221},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 2221},
  [271] = {.lex_state = 1195},
  [272] = {.lex_state = 2221},
  [273] = {.lex_state = 1195},
  [274] = {.lex_state = 2221},
  [275] = {.lex_state = 1195},
  [276] = {.lex_state = 2221},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
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
    [sym_variation_delimiter_close] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__misc_punctuation] = ACTIONS(1),
    [sym__san_file] = ACTIONS(1),
    [sym__san_rank] = ACTIONS(1),
    [sym__san_promotable_piece] = ACTIONS(1),
    [sym__san_major_or_minor_piece] = ACTIONS(1),
    [sym__san_capture_symbol] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_series_of_games] = STATE(263),
    [sym_game] = STATE(158),
    [sym_freestanding_comment] = STATE(32),
    [sym_rest_of_line_comment_delimiter_open] = STATE(265),
    [sym_rest_of_line_comment] = STATE(67),
    [sym_header] = STATE(2),
    [sym_tagpair] = STATE(19),
    [sym_movetext] = STATE(128),
    [sym_inline_comment_delimiter_open] = STATE(192),
    [sym__movetext_element] = STATE(103),
    [sym_variation] = STATE(103),
    [sym_inline_comment] = STATE(104),
    [sym__san_move] = STATE(105),
    [sym_san_move] = STATE(99),
    [sym__san_move_piece] = STATE(91),
    [sym__lan_move] = STATE(106),
    [sym_lan_move] = STATE(97),
    [sym__san_square] = STATE(15),
    [sym__san_move_pawn] = STATE(91),
    [sym__san_drop_pawn] = STATE(91),
    [sym__san_move_major_or_minor_piece] = STATE(91),
    [sym__san_drop_major_or_minor_piece] = STATE(91),
    [sym__lan_move_by_coordinates] = STATE(86),
    [sym__annotation] = STATE(107),
    [aux_sym_series_of_games_repeat1] = STATE(9),
    [aux_sym_freestanding_comment_repeat1] = STATE(132),
    [aux_sym_movetext_repeat1] = STATE(7),
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
  [0] = 31,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(31), 1,
      sym__empty_line,
    ACTIONS(33), 1,
      sym_variation_delimiter_open,
    ACTIONS(35), 1,
      sym_move_number,
    ACTIONS(37), 1,
      sym__san_file,
    ACTIONS(39), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      sym_annotation,
    ACTIONS(49), 1,
      anon_sym_1,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(30), 1,
      sym__lan_move_by_coordinates,
    STATE(42), 1,
      sym_lan_move,
    STATE(43), 1,
      sym_movetext,
    STATE(46), 1,
      sym_san_move,
    STATE(55), 1,
      sym__annotation,
    STATE(65), 1,
      sym__san_move,
    STATE(68), 1,
      sym__lan_move,
    STATE(142), 1,
      sym_result_code,
    STATE(194), 1,
      sym_inline_comment_delimiter_open,
    STATE(265), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(45), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(53), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(69), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(41), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(51), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(28), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(55), 14,
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
  [119] = 26,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(33), 1,
      sym_variation_delimiter_open,
    ACTIONS(35), 1,
      sym_move_number,
    ACTIONS(37), 1,
      sym__san_file,
    ACTIONS(39), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      sym_annotation,
    STATE(4), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(30), 1,
      sym__lan_move_by_coordinates,
    STATE(42), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(55), 1,
      sym__annotation,
    STATE(65), 1,
      sym__san_move,
    STATE(68), 1,
      sym__lan_move,
    STATE(194), 1,
      sym_inline_comment_delimiter_open,
    STATE(265), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(45), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(69), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(41), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(28), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(59), 21,
      sym_tagpair_delimiter_open,
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
  [228] = 26,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(68), 1,
      sym_variation_delimiter_open,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(77), 1,
      sym__san_file,
    ACTIONS(80), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      sym_annotation,
    ACTIONS(95), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(4), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(30), 1,
      sym__lan_move_by_coordinates,
    STATE(42), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(55), 1,
      sym__annotation,
    STATE(65), 1,
      sym__san_move,
    STATE(68), 1,
      sym__lan_move,
    STATE(194), 1,
      sym_inline_comment_delimiter_open,
    STATE(265), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(89), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(69), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(83), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(28), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(66), 21,
      sym_tagpair_delimiter_open,
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
  [337] = 31,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(35), 1,
      sym_move_number,
    ACTIONS(37), 1,
      sym__san_file,
    ACTIONS(39), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(41), 1,
      anon_sym_P,
    ACTIONS(47), 1,
      sym_annotation,
    ACTIONS(49), 1,
      anon_sym_1,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      sym_variation_delimiter_open,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(30), 1,
      sym__lan_move_by_coordinates,
    STATE(42), 1,
      sym_lan_move,
    STATE(44), 1,
      sym_movetext,
    STATE(46), 1,
      sym_san_move,
    STATE(55), 1,
      sym__annotation,
    STATE(65), 1,
      sym__san_move,
    STATE(68), 1,
      sym__lan_move,
    STATE(140), 1,
      sym_result_code,
    STATE(194), 1,
      sym_inline_comment_delimiter_open,
    STATE(265), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(53), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(104), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(108), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(69), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(51), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(28), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(110), 14,
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
  [455] = 27,
    ACTIONS(95), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      sym_variation_delimiter_open,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      sym_move_number,
    ACTIONS(124), 1,
      sym__san_file,
    ACTIONS(127), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(130), 1,
      anon_sym_P,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      sym_annotation,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(86), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      sym_lan_move,
    STATE(99), 1,
      sym_san_move,
    STATE(105), 1,
      sym__san_move,
    STATE(106), 1,
      sym__lan_move,
    STATE(107), 1,
      sym__annotation,
    STATE(192), 1,
      sym_inline_comment_delimiter_open,
    STATE(257), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(133), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(139), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(104), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(66), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(61), 14,
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
  [563] = 27,
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
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      anon_sym_AT,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(86), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      sym_lan_move,
    STATE(99), 1,
      sym_san_move,
    STATE(105), 1,
      sym__san_move,
    STATE(106), 1,
      sym__lan_move,
    STATE(107), 1,
      sym__annotation,
    STATE(192), 1,
      sym_inline_comment_delimiter_open,
    STATE(257), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(147), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(151), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(104), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(59), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(57), 14,
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
  [671] = 7,
    ACTIONS(157), 1,
      sym__san_promotable_piece,
    ACTIONS(161), 1,
      anon_sym_EQ,
    STATE(38), 1,
      sym__san_promotion,
    STATE(267), 1,
      sym__san_promotion_symbol,
    ACTIONS(159), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(153), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(155), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [731] = 35,
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
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      aux_sym_series_of_games_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(19), 1,
      sym_tagpair,
    STATE(27), 1,
      sym_freestanding_comment,
    STATE(67), 1,
      sym_rest_of_line_comment,
    STATE(86), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      sym_lan_move,
    STATE(99), 1,
      sym_san_move,
    STATE(104), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym__san_move,
    STATE(106), 1,
      sym__lan_move,
    STATE(107), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(132), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(158), 1,
      sym_game,
    STATE(192), 1,
      sym_inline_comment_delimiter_open,
    STATE(265), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(25), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(21), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(91), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [845] = 6,
    ACTIONS(161), 1,
      anon_sym_EQ,
    ACTIONS(169), 1,
      sym__san_promotable_piece,
    STATE(40), 1,
      sym__san_promotion,
    STATE(267), 1,
      sym__san_promotion_symbol,
    ACTIONS(165), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(167), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [901] = 35,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(179), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(182), 1,
      sym_variation_delimiter_open,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      sym_move_number,
    ACTIONS(191), 1,
      sym__san_file,
    ACTIONS(194), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(206), 1,
      sym_annotation,
    ACTIONS(209), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      aux_sym_series_of_games_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(19), 1,
      sym_tagpair,
    STATE(49), 1,
      sym_freestanding_comment,
    STATE(74), 1,
      sym_rest_of_line_comment,
    STATE(86), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      sym_lan_move,
    STATE(99), 1,
      sym_san_move,
    STATE(104), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym__san_move,
    STATE(106), 1,
      sym__lan_move,
    STATE(107), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(135), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(158), 1,
      sym_game,
    STATE(192), 1,
      sym_inline_comment_delimiter_open,
    STATE(274), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(203), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(197), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(91), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1015] = 2,
    ACTIONS(212), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(214), 40,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_capture_symbol,
      anon_sym_EQ,
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
  [1063] = 6,
    ACTIONS(161), 1,
      anon_sym_EQ,
    ACTIONS(220), 1,
      sym__san_promotable_piece,
    STATE(39), 1,
      sym__san_promotion,
    STATE(267), 1,
      sym__san_promotion_symbol,
    ACTIONS(216), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(218), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1119] = 6,
    ACTIONS(161), 1,
      anon_sym_EQ,
    ACTIONS(226), 1,
      sym__san_promotable_piece,
    STATE(36), 1,
      sym__san_promotion,
    STATE(267), 1,
      sym__san_promotion_symbol,
    ACTIONS(222), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(224), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1175] = 8,
    ACTIONS(228), 1,
      sym__san_promotable_piece,
    ACTIONS(230), 1,
      sym__san_capture_symbol,
    ACTIONS(232), 1,
      anon_sym_EQ,
    ACTIONS(234), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(83), 1,
      sym__san_promotion,
    STATE(266), 1,
      sym__san_promotion_symbol,
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
    ACTIONS(153), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1234] = 2,
    ACTIONS(212), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(214), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
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
  [1280] = 4,
    ACTIONS(236), 1,
      sym__san_capture_symbol,
    STATE(35), 1,
      sym__san_square,
    ACTIONS(212), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(214), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1330] = 6,
    ACTIONS(232), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      sym__san_promotable_piece,
    STATE(71), 1,
      sym__san_promotion,
    STATE(266), 1,
      sym__san_promotion_symbol,
    ACTIONS(224), 12,
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
    ACTIONS(222), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1383] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(240), 1,
      sym__empty_line,
    STATE(22), 1,
      aux_sym_header_repeat1,
    STATE(84), 1,
      sym_rest_of_line_comment,
    STATE(85), 1,
      sym_tagpair,
    STATE(270), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(242), 32,
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
  [1442] = 6,
    ACTIONS(232), 1,
      anon_sym_EQ,
    ACTIONS(244), 1,
      sym__san_promotable_piece,
    STATE(90), 1,
      sym__san_promotion,
    STATE(266), 1,
      sym__san_promotion_symbol,
    ACTIONS(218), 12,
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
    ACTIONS(216), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1495] = 6,
    ACTIONS(232), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      sym__san_promotable_piece,
    STATE(77), 1,
      sym__san_promotion,
    STATE(266), 1,
      sym__san_promotion_symbol,
    ACTIONS(167), 12,
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
    ACTIONS(165), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1548] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(248), 1,
      sym__empty_line,
    STATE(24), 1,
      aux_sym_header_repeat1,
    STATE(84), 1,
      sym_rest_of_line_comment,
    STATE(85), 1,
      sym_tagpair,
    STATE(270), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(250), 32,
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
  [1607] = 2,
    ACTIONS(214), 15,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
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
    ACTIONS(212), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1652] = 9,
    ACTIONS(252), 1,
      sym__empty_line,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(263), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(24), 1,
      aux_sym_header_repeat1,
    STATE(84), 1,
      sym_rest_of_line_comment,
    STATE(85), 1,
      sym_tagpair,
    STATE(270), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(261), 32,
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
  [1711] = 2,
    ACTIONS(266), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(268), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1755] = 2,
    ACTIONS(270), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(272), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1799] = 31,
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
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(278), 1,
      sym_move_number,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(19), 1,
      sym_tagpair,
    STATE(86), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      sym_lan_move,
    STATE(99), 1,
      sym_san_move,
    STATE(105), 1,
      sym__san_move,
    STATE(106), 1,
      sym__lan_move,
    STATE(107), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(141), 1,
      sym_game,
    STATE(192), 1,
      sym_inline_comment_delimiter_open,
    STATE(257), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(147), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(151), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(104), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1901] = 3,
    ACTIONS(284), 1,
      sym_check_or_mate_condition,
    ACTIONS(280), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(282), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1947] = 2,
    ACTIONS(286), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(288), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [1991] = 3,
    ACTIONS(294), 1,
      sym_check_or_mate_condition,
    ACTIONS(290), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(292), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2037] = 2,
    ACTIONS(212), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(214), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2081] = 31,
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
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      anon_sym_AT,
    ACTIONS(276), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(278), 1,
      sym_move_number,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(19), 1,
      sym_tagpair,
    STATE(86), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      sym_lan_move,
    STATE(99), 1,
      sym_san_move,
    STATE(105), 1,
      sym__san_move,
    STATE(106), 1,
      sym__lan_move,
    STATE(107), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(141), 1,
      sym_game,
    STATE(192), 1,
      sym_inline_comment_delimiter_open,
    STATE(257), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(147), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(151), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(104), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2183] = 2,
    ACTIONS(298), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(300), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2227] = 2,
    ACTIONS(302), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(304), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2271] = 2,
    ACTIONS(306), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(308), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2315] = 2,
    ACTIONS(310), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(312), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2359] = 2,
    ACTIONS(314), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(316), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2403] = 2,
    ACTIONS(216), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(218), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2447] = 2,
    ACTIONS(222), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(224), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2491] = 2,
    ACTIONS(318), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(320), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2535] = 2,
    ACTIONS(322), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(324), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2579] = 3,
    ACTIONS(330), 1,
      sym__misc_punctuation,
    ACTIONS(326), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(328), 34,
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
  [2624] = 7,
    ACTIONS(49), 1,
      anon_sym_1,
    STATE(159), 1,
      sym_result_code,
    ACTIONS(53), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(51), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(332), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(55), 14,
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
    ACTIONS(334), 14,
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
  [2677] = 7,
    ACTIONS(49), 1,
      anon_sym_1,
    STATE(147), 1,
      sym_result_code,
    ACTIONS(53), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(51), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(336), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(55), 14,
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
    ACTIONS(338), 14,
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
  [2730] = 4,
    ACTIONS(340), 1,
      sym__san_capture_symbol,
    STATE(78), 1,
      sym__san_square,
    ACTIONS(214), 12,
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
    ACTIONS(212), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2777] = 3,
    ACTIONS(346), 1,
      sym__misc_punctuation,
    ACTIONS(342), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(344), 34,
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
  [2822] = 3,
    ACTIONS(352), 1,
      sym__misc_punctuation,
    ACTIONS(348), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(350), 34,
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
  [2867] = 2,
    ACTIONS(214), 14,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(212), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [2910] = 30,
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
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      anon_sym_AT,
    ACTIONS(276), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(278), 1,
      sym_move_number,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(19), 1,
      sym_tagpair,
    STATE(86), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      sym_lan_move,
    STATE(99), 1,
      sym_san_move,
    STATE(105), 1,
      sym__san_move,
    STATE(106), 1,
      sym__lan_move,
    STATE(107), 1,
      sym__annotation,
    STATE(128), 1,
      sym_movetext,
    STATE(141), 1,
      sym_game,
    STATE(192), 1,
      sym_inline_comment_delimiter_open,
    STATE(257), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(147), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(151), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(104), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3009] = 2,
    ACTIONS(354), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(356), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [3052] = 2,
    ACTIONS(358), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(360), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [3095] = 3,
    ACTIONS(366), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(362), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(364), 35,
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
  [3140] = 2,
    ACTIONS(368), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(370), 34,
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
  [3182] = 3,
    ACTIONS(362), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(372), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(364), 35,
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
  [3226] = 2,
    ACTIONS(374), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(376), 34,
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
  [3268] = 2,
    ACTIONS(378), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(380), 34,
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
  [3310] = 2,
    ACTIONS(382), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(384), 34,
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
  [3352] = 2,
    ACTIONS(386), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(388), 34,
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
  [3394] = 2,
    ACTIONS(390), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(392), 34,
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
  [3436] = 2,
    ACTIONS(394), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(396), 34,
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
  [3478] = 2,
    ACTIONS(398), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(400), 34,
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
  [3520] = 2,
    ACTIONS(402), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(404), 34,
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
  [3562] = 2,
    ACTIONS(406), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(408), 34,
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
  [3604] = 2,
    ACTIONS(410), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(412), 34,
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
  [3646] = 2,
    ACTIONS(414), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(416), 34,
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
  [3688] = 2,
    ACTIONS(418), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(420), 34,
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
  [3730] = 5,
    ACTIONS(427), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(429), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(424), 13,
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
    ACTIONS(420), 20,
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
  [3778] = 2,
    ACTIONS(432), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(434), 34,
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
  [3820] = 2,
    ACTIONS(436), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(438), 34,
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
  [3862] = 3,
    ACTIONS(362), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(440), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(364), 35,
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
  [3906] = 2,
    ACTIONS(312), 12,
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
    ACTIONS(310), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [3947] = 2,
    ACTIONS(288), 12,
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
    ACTIONS(286), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [3988] = 2,
    ACTIONS(386), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(388), 34,
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
  [4029] = 5,
    ACTIONS(422), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(427), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(429), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(424), 13,
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
    ACTIONS(420), 20,
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
  [4076] = 2,
    ACTIONS(316), 12,
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
    ACTIONS(314), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4117] = 2,
    ACTIONS(386), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(388), 34,
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
  [4158] = 2,
    ACTIONS(320), 12,
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
    ACTIONS(318), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4199] = 2,
    ACTIONS(308), 12,
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
    ACTIONS(306), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4240] = 2,
    ACTIONS(324), 12,
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
    ACTIONS(322), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4281] = 2,
    ACTIONS(272), 12,
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
    ACTIONS(270), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4322] = 2,
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
  [4363] = 2,
    ACTIONS(214), 12,
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
    ACTIONS(212), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4404] = 2,
    ACTIONS(218), 12,
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
    ACTIONS(216), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4445] = 2,
    ACTIONS(446), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(448), 34,
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
  [4486] = 2,
    ACTIONS(450), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(452), 34,
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
  [4527] = 3,
    ACTIONS(454), 1,
      sym_check_or_mate_condition,
    ACTIONS(292), 11,
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
    ACTIONS(290), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4570] = 2,
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
    ACTIONS(302), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4611] = 2,
    ACTIONS(300), 12,
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
    ACTIONS(298), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4652] = 2,
    ACTIONS(268), 12,
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
    ACTIONS(266), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4693] = 2,
    ACTIONS(224), 12,
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
    ACTIONS(222), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4734] = 3,
    ACTIONS(456), 1,
      sym_check_or_mate_condition,
    ACTIONS(282), 11,
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
    ACTIONS(280), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4777] = 2,
    ACTIONS(356), 11,
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
    ACTIONS(354), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4817] = 2,
    ACTIONS(360), 11,
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
    ACTIONS(358), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [4857] = 27,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      sym_variation_delimiter_open,
    ACTIONS(460), 1,
      sym_variation_delimiter_close,
    ACTIONS(462), 1,
      sym_move_number,
    ACTIONS(464), 1,
      sym__san_file,
    ACTIONS(466), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(468), 1,
      anon_sym_P,
    ACTIONS(472), 1,
      anon_sym_AT,
    ACTIONS(476), 1,
      sym_annotation,
    STATE(110), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(126), 1,
      sym__san_square,
    STATE(157), 1,
      sym__lan_move_by_coordinates,
    STATE(168), 1,
      sym_san_move,
    STATE(169), 1,
      sym_lan_move,
    STATE(180), 1,
      sym__variation_san_move,
    STATE(183), 1,
      sym__variation_lan_move,
    STATE(187), 1,
      sym__variation_annotation,
    STATE(193), 1,
      sym_inline_comment_delimiter_open,
    STATE(249), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(269), 1,
      sym_variation_movetext,
    ACTIONS(470), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(474), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(190), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(153), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4947] = 3,
    ACTIONS(362), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(478), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(364), 33,
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
  [4989] = 3,
    ACTIONS(480), 1,
      sym__misc_punctuation,
    ACTIONS(350), 11,
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
    ACTIONS(348), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5031] = 3,
    ACTIONS(482), 1,
      sym__misc_punctuation,
    ACTIONS(328), 11,
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
    ACTIONS(326), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5073] = 27,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      sym_variation_delimiter_open,
    ACTIONS(462), 1,
      sym_move_number,
    ACTIONS(464), 1,
      sym__san_file,
    ACTIONS(466), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(468), 1,
      anon_sym_P,
    ACTIONS(472), 1,
      anon_sym_AT,
    ACTIONS(476), 1,
      sym_annotation,
    ACTIONS(484), 1,
      sym_variation_delimiter_close,
    STATE(110), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(126), 1,
      sym__san_square,
    STATE(157), 1,
      sym__lan_move_by_coordinates,
    STATE(168), 1,
      sym_san_move,
    STATE(169), 1,
      sym_lan_move,
    STATE(180), 1,
      sym__variation_san_move,
    STATE(183), 1,
      sym__variation_lan_move,
    STATE(187), 1,
      sym__variation_annotation,
    STATE(193), 1,
      sym_inline_comment_delimiter_open,
    STATE(247), 1,
      sym_variation_movetext,
    STATE(249), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(470), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(474), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(190), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(153), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5163] = 3,
    ACTIONS(486), 1,
      sym__misc_punctuation,
    ACTIONS(344), 11,
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
    ACTIONS(342), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5205] = 27,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      sym_variation_delimiter_open,
    ACTIONS(462), 1,
      sym_move_number,
    ACTIONS(464), 1,
      sym__san_file,
    ACTIONS(466), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(468), 1,
      anon_sym_P,
    ACTIONS(472), 1,
      anon_sym_AT,
    ACTIONS(476), 1,
      sym_annotation,
    ACTIONS(488), 1,
      sym_variation_delimiter_close,
    STATE(110), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(126), 1,
      sym__san_square,
    STATE(157), 1,
      sym__lan_move_by_coordinates,
    STATE(168), 1,
      sym_san_move,
    STATE(169), 1,
      sym_lan_move,
    STATE(180), 1,
      sym__variation_san_move,
    STATE(183), 1,
      sym__variation_lan_move,
    STATE(187), 1,
      sym__variation_annotation,
    STATE(193), 1,
      sym_inline_comment_delimiter_open,
    STATE(244), 1,
      sym_variation_movetext,
    STATE(249), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(470), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(474), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(190), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(153), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5295] = 2,
    ACTIONS(408), 11,
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
    ACTIONS(406), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5334] = 2,
    ACTIONS(388), 11,
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
    ACTIONS(386), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5373] = 2,
    ACTIONS(438), 11,
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
    ACTIONS(436), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5412] = 2,
    ACTIONS(420), 11,
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
    ACTIONS(418), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5451] = 2,
    ACTIONS(416), 11,
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
    ACTIONS(414), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5490] = 2,
    ACTIONS(434), 11,
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
    ACTIONS(432), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5529] = 2,
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
    ACTIONS(374), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5568] = 2,
    ACTIONS(380), 11,
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
    ACTIONS(378), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5607] = 2,
    ACTIONS(370), 11,
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
    ACTIONS(368), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5646] = 26,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      sym_variation_delimiter_open,
    ACTIONS(462), 1,
      sym_move_number,
    ACTIONS(464), 1,
      sym__san_file,
    ACTIONS(466), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(468), 1,
      anon_sym_P,
    ACTIONS(472), 1,
      anon_sym_AT,
    ACTIONS(476), 1,
      sym_annotation,
    ACTIONS(490), 1,
      sym_variation_delimiter_close,
    STATE(115), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(126), 1,
      sym__san_square,
    STATE(157), 1,
      sym__lan_move_by_coordinates,
    STATE(168), 1,
      sym_san_move,
    STATE(169), 1,
      sym_lan_move,
    STATE(180), 1,
      sym__variation_san_move,
    STATE(183), 1,
      sym__variation_lan_move,
    STATE(187), 1,
      sym__variation_annotation,
    STATE(193), 1,
      sym_inline_comment_delimiter_open,
    STATE(249), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(470), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(474), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(190), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(153), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5733] = 2,
    ACTIONS(392), 11,
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
    ACTIONS(390), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5772] = 2,
    ACTIONS(404), 11,
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
    ACTIONS(402), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5811] = 2,
    ACTIONS(396), 11,
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
    ACTIONS(394), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5850] = 2,
    ACTIONS(400), 11,
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
    ACTIONS(398), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [5889] = 26,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      sym_variation_delimiter_open,
    ACTIONS(498), 1,
      sym_variation_delimiter_close,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(503), 1,
      sym_move_number,
    ACTIONS(506), 1,
      sym__san_file,
    ACTIONS(509), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(512), 1,
      anon_sym_P,
    ACTIONS(518), 1,
      anon_sym_AT,
    ACTIONS(524), 1,
      sym_annotation,
    ACTIONS(527), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(115), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(126), 1,
      sym__san_square,
    STATE(157), 1,
      sym__lan_move_by_coordinates,
    STATE(168), 1,
      sym_san_move,
    STATE(169), 1,
      sym_lan_move,
    STATE(180), 1,
      sym__variation_san_move,
    STATE(183), 1,
      sym__variation_lan_move,
    STATE(187), 1,
      sym__variation_annotation,
    STATE(193), 1,
      sym_inline_comment_delimiter_open,
    STATE(249), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(515), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(521), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(189), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(190), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(153), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5976] = 2,
    ACTIONS(412), 11,
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
    ACTIONS(410), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [6015] = 2,
    ACTIONS(384), 11,
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
    ACTIONS(382), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
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
  [6054] = 5,
    ACTIONS(532), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(122), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(124), 1,
      sym_tagpair_value_contents,
    STATE(248), 1,
      sym_double_quote,
    ACTIONS(530), 28,
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
  [6097] = 3,
    ACTIONS(537), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(119), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(534), 28,
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
  [6134] = 3,
    STATE(118), 1,
      sym_double_quote,
    STATE(264), 1,
      sym__tagpair_value,
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
  [6171] = 2,
    ACTIONS(542), 1,
      sym_tagpair_delimiter_close,
    ACTIONS(544), 29,
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
  [6206] = 3,
    ACTIONS(549), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(119), 1,
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
  [6243] = 2,
    ACTIONS(551), 1,
      aux_sym_tagpair_value_contents_token1,
    ACTIONS(542), 28,
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
  [6277] = 2,
    STATE(254), 1,
      sym_double_quote,
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
  [6311] = 2,
    ACTIONS(557), 10,
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
    ACTIONS(555), 16,
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
  [6342] = 8,
    ACTIONS(559), 1,
      sym__san_promotable_piece,
    ACTIONS(561), 1,
      sym__san_capture_symbol,
    ACTIONS(563), 1,
      anon_sym_EQ,
    ACTIONS(565), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(161), 1,
      sym__san_promotion,
    STATE(251), 1,
      sym__san_promotion_symbol,
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
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6382] = 6,
    ACTIONS(563), 1,
      anon_sym_EQ,
    ACTIONS(567), 1,
      sym__san_promotable_piece,
    STATE(156), 1,
      sym__san_promotion,
    STATE(251), 1,
      sym__san_promotion_symbol,
    ACTIONS(218), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(216), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6416] = 5,
    ACTIONS(49), 1,
      anon_sym_1,
    STATE(143), 1,
      sym_result_code,
    ACTIONS(53), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(51), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(110), 14,
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
  [6448] = 2,
    ACTIONS(214), 8,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(212), 13,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_capture_symbol,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6474] = 6,
    ACTIONS(563), 1,
      anon_sym_EQ,
    ACTIONS(569), 1,
      sym__san_promotable_piece,
    STATE(146), 1,
      sym__san_promotion,
    STATE(251), 1,
      sym__san_promotion_symbol,
    ACTIONS(167), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(165), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6508] = 6,
    ACTIONS(563), 1,
      anon_sym_EQ,
    ACTIONS(571), 1,
      sym__san_promotable_piece,
    STATE(150), 1,
      sym__san_promotion,
    STATE(251), 1,
      sym__san_promotion_symbol,
    ACTIONS(224), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(222), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6542] = 7,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    ACTIONS(575), 1,
      sym_old_style_twic_section_comment,
    STATE(272), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(133), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(577), 13,
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
  [6577] = 7,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(589), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(272), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(133), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(587), 13,
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
  [6612] = 2,
    ACTIONS(214), 7,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(212), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6636] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(592), 1,
      sym_old_style_twic_section_comment,
    STATE(276), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(136), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(577), 13,
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
  [6668] = 6,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    ACTIONS(589), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(594), 1,
      sym_old_style_twic_section_comment,
    STATE(276), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(136), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(587), 13,
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
  [6700] = 4,
    ACTIONS(597), 1,
      sym__san_capture_symbol,
    STATE(149), 1,
      sym__san_square,
    ACTIONS(214), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(212), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6728] = 3,
    ACTIONS(599), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(362), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(364), 15,
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
  [6753] = 2,
    ACTIONS(601), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(603), 14,
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
  [6775] = 2,
    ACTIONS(605), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(607), 14,
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
  [6797] = 2,
    ACTIONS(609), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(611), 14,
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
  [6819] = 2,
    ACTIONS(613), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(615), 14,
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
  [6841] = 2,
    ACTIONS(617), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(619), 14,
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
  [6863] = 2,
    ACTIONS(288), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(286), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6885] = 2,
    ACTIONS(621), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(623), 14,
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
  [6907] = 2,
    ACTIONS(320), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(318), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6929] = 2,
    ACTIONS(625), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(627), 14,
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
  [6951] = 2,
    ACTIONS(629), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(631), 14,
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
  [6973] = 2,
    ACTIONS(308), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(306), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6995] = 2,
    ACTIONS(312), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(310), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7017] = 2,
    ACTIONS(316), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(314), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7039] = 2,
    ACTIONS(324), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(322), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7061] = 3,
    ACTIONS(633), 1,
      sym_check_or_mate_condition,
    ACTIONS(282), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(280), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7085] = 2,
    ACTIONS(272), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(270), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7107] = 2,
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
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7129] = 2,
    ACTIONS(224), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(222), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7151] = 3,
    ACTIONS(635), 1,
      sym_check_or_mate_condition,
    ACTIONS(292), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(290), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7175] = 2,
    ACTIONS(637), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(639), 14,
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
  [7197] = 2,
    ACTIONS(641), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(643), 14,
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
  [7219] = 2,
    ACTIONS(386), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(388), 14,
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
  [7241] = 2,
    ACTIONS(218), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(216), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7263] = 3,
    ACTIONS(362), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(645), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(364), 15,
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
  [7287] = 2,
    ACTIONS(214), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(212), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7309] = 2,
    ACTIONS(268), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(266), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7331] = 2,
    ACTIONS(300), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(298), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7353] = 2,
    ACTIONS(356), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(354), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7374] = 2,
    ACTIONS(386), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(388), 14,
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
  [7395] = 3,
    ACTIONS(649), 1,
      sym__misc_punctuation,
    ACTIONS(651), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(647), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7418] = 3,
    ACTIONS(655), 1,
      sym__misc_punctuation,
    ACTIONS(657), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(653), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7441] = 1,
    ACTIONS(659), 16,
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
  [7460] = 1,
    ACTIONS(661), 16,
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
  [7479] = 2,
    ACTIONS(360), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(358), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7500] = 3,
    ACTIONS(665), 1,
      sym__misc_punctuation,
    ACTIONS(667), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(663), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7523] = 1,
    ACTIONS(669), 16,
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
  [7542] = 3,
    ACTIONS(362), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(671), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(364), 14,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
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
  [7565] = 2,
    ACTIONS(384), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(382), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7585] = 2,
    ACTIONS(675), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(673), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7605] = 2,
    ACTIONS(679), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(677), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7625] = 2,
    ACTIONS(683), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(681), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7645] = 2,
    ACTIONS(687), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(685), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7665] = 2,
    ACTIONS(691), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(689), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7685] = 2,
    ACTIONS(396), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(394), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7705] = 2,
    ACTIONS(695), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(693), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7725] = 2,
    ACTIONS(388), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(386), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7745] = 2,
    ACTIONS(699), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(697), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7765] = 2,
    ACTIONS(703), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(701), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7785] = 2,
    ACTIONS(707), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(705), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7805] = 2,
    ACTIONS(404), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(402), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7825] = 2,
    ACTIONS(711), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(709), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7845] = 2,
    ACTIONS(715), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(713), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7865] = 1,
    ACTIONS(717), 10,
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
  [7878] = 7,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      aux_sym_inline_comment_text_token1,
    STATE(113), 1,
      sym_inline_comment_delimiter_close,
    STATE(196), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(220), 1,
      sym_inline_comment_text,
    STATE(198), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [7901] = 7,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_inline_comment_delimiter_close,
    STATE(196), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(231), 1,
      sym_inline_comment_text,
    STATE(198), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [7924] = 7,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_inline_comment_delimiter_close,
    STATE(196), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(217), 1,
      sym_inline_comment_text,
    STATE(198), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [7947] = 6,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(731), 1,
      aux_sym_inline_comment_text_token1,
    STATE(196), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(215), 1,
      sym__recursive_inline_comment_delimiter_close,
    STATE(199), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [7967] = 6,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 1,
      aux_sym_inline_comment_text_token1,
    STATE(196), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(212), 1,
      sym__recursive_inline_comment_delimiter_close,
    STATE(195), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [7987] = 5,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(742), 1,
      aux_sym_inline_comment_text_token1,
    STATE(196), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(197), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8004] = 5,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    ACTIONS(747), 1,
      aux_sym_inline_comment_text_token1,
    STATE(196), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(197), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8021] = 5,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(754), 1,
      aux_sym_inline_comment_text_token1,
    STATE(196), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(199), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [8038] = 5,
    ACTIONS(757), 1,
      sym__san_file,
    ACTIONS(759), 1,
      sym__san_rank,
    ACTIONS(761), 1,
      sym__san_capture_symbol,
    ACTIONS(763), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__san_square,
  [8054] = 5,
    ACTIONS(765), 1,
      sym__san_file,
    ACTIONS(767), 1,
      sym__san_rank,
    ACTIONS(769), 1,
      sym__san_capture_symbol,
    ACTIONS(771), 1,
      anon_sym_AT,
    STATE(89), 1,
      sym__san_square,
  [8070] = 5,
    ACTIONS(773), 1,
      sym__san_file,
    ACTIONS(775), 1,
      sym__san_rank,
    ACTIONS(777), 1,
      sym__san_capture_symbol,
    ACTIONS(779), 1,
      anon_sym_AT,
    STATE(164), 1,
      sym__san_square,
  [8086] = 4,
    ACTIONS(781), 1,
      sym__san_file,
    ACTIONS(783), 1,
      sym__san_rank,
    ACTIONS(785), 1,
      sym__san_capture_symbol,
    STATE(34), 1,
      sym__san_square,
  [8099] = 4,
    ACTIONS(787), 1,
      sym__san_file,
    ACTIONS(789), 1,
      sym__san_rank,
    ACTIONS(791), 1,
      sym__san_capture_symbol,
    STATE(127), 1,
      sym__san_square,
  [8112] = 4,
    ACTIONS(793), 1,
      sym__san_file,
    ACTIONS(795), 1,
      sym__san_rank,
    ACTIONS(797), 1,
      sym__san_capture_symbol,
    STATE(87), 1,
      sym__san_square,
  [8125] = 4,
    ACTIONS(799), 1,
      sym__san_file,
    ACTIONS(801), 1,
      sym__san_rank,
    ACTIONS(803), 1,
      sym__san_capture_symbol,
    STATE(13), 1,
      sym__san_square,
  [8138] = 4,
    ACTIONS(805), 1,
      sym__san_file,
    ACTIONS(807), 1,
      sym__san_rank,
    ACTIONS(809), 1,
      sym__san_capture_symbol,
    STATE(20), 1,
      sym__san_square,
  [8151] = 4,
    ACTIONS(811), 1,
      sym__san_file,
    ACTIONS(813), 1,
      sym__san_rank,
    ACTIONS(815), 1,
      sym__san_capture_symbol,
    STATE(155), 1,
      sym__san_square,
  [8164] = 3,
    ACTIONS(793), 1,
      sym__san_file,
    ACTIONS(797), 1,
      sym__san_capture_symbol,
    STATE(87), 1,
      sym__san_square,
  [8174] = 3,
    ACTIONS(781), 1,
      sym__san_file,
    ACTIONS(785), 1,
      sym__san_capture_symbol,
    STATE(34), 1,
      sym__san_square,
  [8184] = 3,
    ACTIONS(811), 1,
      sym__san_file,
    ACTIONS(815), 1,
      sym__san_capture_symbol,
    STATE(155), 1,
      sym__san_square,
  [8194] = 2,
    ACTIONS(819), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(817), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8202] = 2,
    ACTIONS(823), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(821), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8210] = 1,
    ACTIONS(825), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [8216] = 2,
    ACTIONS(829), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(827), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8224] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(72), 1,
      sym__san_square,
  [8231] = 2,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_inline_comment_delimiter_close,
  [8238] = 2,
    ACTIONS(781), 1,
      sym__san_file,
    STATE(35), 1,
      sym__san_square,
  [8245] = 2,
    ACTIONS(811), 1,
      sym__san_file,
    STATE(155), 1,
      sym__san_square,
  [8252] = 2,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_inline_comment_delimiter_close,
  [8259] = 2,
    ACTIONS(805), 1,
      sym__san_file,
    STATE(21), 1,
      sym__san_square,
  [8266] = 2,
    ACTIONS(799), 1,
      sym__san_file,
    STATE(10), 1,
      sym__san_square,
  [8273] = 2,
    ACTIONS(781), 1,
      sym__san_file,
    STATE(41), 1,
      sym__san_square,
  [8280] = 2,
    ACTIONS(781), 1,
      sym__san_file,
    STATE(26), 1,
      sym__san_square,
  [8287] = 2,
    ACTIONS(781), 1,
      sym__san_file,
    STATE(34), 1,
      sym__san_square,
  [8294] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(88), 1,
      sym__san_square,
  [8301] = 2,
    ACTIONS(799), 1,
      sym__san_file,
    STATE(14), 1,
      sym__san_square,
  [8308] = 2,
    ACTIONS(781), 1,
      sym__san_file,
    STATE(33), 1,
      sym__san_square,
  [8315] = 2,
    ACTIONS(805), 1,
      sym__san_file,
    STATE(18), 1,
      sym__san_square,
  [8322] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(78), 1,
      sym__san_square,
  [8329] = 2,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      sym_inline_comment_delimiter_close,
  [8336] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(79), 1,
      sym__san_square,
  [8343] = 2,
    ACTIONS(811), 1,
      sym__san_file,
    STATE(144), 1,
      sym__san_square,
  [8350] = 2,
    ACTIONS(781), 1,
      sym__san_file,
    STATE(29), 1,
      sym__san_square,
  [8357] = 2,
    ACTIONS(811), 1,
      sym__san_file,
    STATE(149), 1,
      sym__san_square,
  [8364] = 2,
    ACTIONS(787), 1,
      sym__san_file,
    STATE(130), 1,
      sym__san_square,
  [8371] = 2,
    ACTIONS(811), 1,
      sym__san_file,
    STATE(152), 1,
      sym__san_square,
  [8378] = 1,
    ACTIONS(825), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
  [8383] = 2,
    ACTIONS(811), 1,
      sym__san_file,
    STATE(165), 1,
      sym__san_square,
  [8390] = 2,
    ACTIONS(811), 1,
      sym__san_file,
    STATE(154), 1,
      sym__san_square,
  [8397] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(87), 1,
      sym__san_square,
  [8404] = 2,
    ACTIONS(787), 1,
      sym__san_file,
    STATE(131), 1,
      sym__san_square,
  [8411] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(80), 1,
      sym__san_square,
  [8418] = 1,
    ACTIONS(837), 1,
      sym_variation_delimiter_close,
  [8422] = 1,
    ACTIONS(839), 1,
      anon_sym_PERCENT,
  [8426] = 1,
    ACTIONS(841), 1,
      sym__san_rank,
  [8430] = 1,
    ACTIONS(843), 1,
      sym_variation_delimiter_close,
  [8434] = 1,
    ACTIONS(845), 1,
      sym_tagpair_delimiter_close,
  [8438] = 1,
    ACTIONS(847), 1,
      sym_rest_of_line_comment_text,
  [8442] = 1,
    ACTIONS(825), 1,
      anon_sym_1,
  [8446] = 1,
    ACTIONS(849), 1,
      sym__san_promotable_piece,
  [8450] = 1,
    ACTIONS(851), 1,
      sym_rest_of_line_comment_text,
  [8454] = 1,
    ACTIONS(853), 1,
      sym_tagpair_key,
  [8458] = 1,
    ACTIONS(855), 1,
      sym_tagpair_delimiter_close,
  [8462] = 1,
    ACTIONS(857), 1,
      anon_sym_2,
  [8466] = 1,
    ACTIONS(551), 1,
      sym_tagpair_delimiter_close,
  [8470] = 1,
    ACTIONS(859), 1,
      sym_rest_of_line_comment_text,
  [8474] = 1,
    ACTIONS(861), 1,
      anon_sym_2,
  [8478] = 1,
    ACTIONS(863), 1,
      sym__san_rank,
  [8482] = 1,
    ACTIONS(865), 1,
      anon_sym_AT,
  [8486] = 1,
    ACTIONS(867), 1,
      anon_sym_1,
  [8490] = 1,
    ACTIONS(869), 1,
      sym__san_rank,
  [8494] = 1,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
  [8498] = 1,
    ACTIONS(873), 1,
      sym_tagpair_delimiter_close,
  [8502] = 1,
    ACTIONS(875), 1,
      sym_rest_of_line_comment_text,
  [8506] = 1,
    ACTIONS(877), 1,
      sym__san_promotable_piece,
  [8510] = 1,
    ACTIONS(879), 1,
      sym__san_promotable_piece,
  [8514] = 1,
    ACTIONS(881), 1,
      sym_rest_of_line_comment_text,
  [8518] = 1,
    ACTIONS(883), 1,
      sym_variation_delimiter_close,
  [8522] = 1,
    ACTIONS(885), 1,
      sym_rest_of_line_comment_text,
  [8526] = 1,
    ACTIONS(887), 1,
      sym__san_rank,
  [8530] = 1,
    ACTIONS(889), 1,
      sym_rest_of_line_comment_text,
  [8534] = 1,
    ACTIONS(891), 1,
      sym__san_rank,
  [8538] = 1,
    ACTIONS(893), 1,
      sym_rest_of_line_comment_text,
  [8542] = 1,
    ACTIONS(895), 1,
      sym__san_rank,
  [8546] = 1,
    ACTIONS(897), 1,
      sym_rest_of_line_comment_text,
  [8550] = 1,
    ACTIONS(899), 1,
      anon_sym_AT,
  [8554] = 1,
    ACTIONS(901), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 119,
  [SMALL_STATE(4)] = 228,
  [SMALL_STATE(5)] = 337,
  [SMALL_STATE(6)] = 455,
  [SMALL_STATE(7)] = 563,
  [SMALL_STATE(8)] = 671,
  [SMALL_STATE(9)] = 731,
  [SMALL_STATE(10)] = 845,
  [SMALL_STATE(11)] = 901,
  [SMALL_STATE(12)] = 1015,
  [SMALL_STATE(13)] = 1063,
  [SMALL_STATE(14)] = 1119,
  [SMALL_STATE(15)] = 1175,
  [SMALL_STATE(16)] = 1234,
  [SMALL_STATE(17)] = 1280,
  [SMALL_STATE(18)] = 1330,
  [SMALL_STATE(19)] = 1383,
  [SMALL_STATE(20)] = 1442,
  [SMALL_STATE(21)] = 1495,
  [SMALL_STATE(22)] = 1548,
  [SMALL_STATE(23)] = 1607,
  [SMALL_STATE(24)] = 1652,
  [SMALL_STATE(25)] = 1711,
  [SMALL_STATE(26)] = 1755,
  [SMALL_STATE(27)] = 1799,
  [SMALL_STATE(28)] = 1901,
  [SMALL_STATE(29)] = 1947,
  [SMALL_STATE(30)] = 1991,
  [SMALL_STATE(31)] = 2037,
  [SMALL_STATE(32)] = 2081,
  [SMALL_STATE(33)] = 2183,
  [SMALL_STATE(34)] = 2227,
  [SMALL_STATE(35)] = 2271,
  [SMALL_STATE(36)] = 2315,
  [SMALL_STATE(37)] = 2359,
  [SMALL_STATE(38)] = 2403,
  [SMALL_STATE(39)] = 2447,
  [SMALL_STATE(40)] = 2491,
  [SMALL_STATE(41)] = 2535,
  [SMALL_STATE(42)] = 2579,
  [SMALL_STATE(43)] = 2624,
  [SMALL_STATE(44)] = 2677,
  [SMALL_STATE(45)] = 2730,
  [SMALL_STATE(46)] = 2777,
  [SMALL_STATE(47)] = 2822,
  [SMALL_STATE(48)] = 2867,
  [SMALL_STATE(49)] = 2910,
  [SMALL_STATE(50)] = 3009,
  [SMALL_STATE(51)] = 3052,
  [SMALL_STATE(52)] = 3095,
  [SMALL_STATE(53)] = 3140,
  [SMALL_STATE(54)] = 3182,
  [SMALL_STATE(55)] = 3226,
  [SMALL_STATE(56)] = 3268,
  [SMALL_STATE(57)] = 3310,
  [SMALL_STATE(58)] = 3352,
  [SMALL_STATE(59)] = 3394,
  [SMALL_STATE(60)] = 3436,
  [SMALL_STATE(61)] = 3478,
  [SMALL_STATE(62)] = 3520,
  [SMALL_STATE(63)] = 3562,
  [SMALL_STATE(64)] = 3604,
  [SMALL_STATE(65)] = 3646,
  [SMALL_STATE(66)] = 3688,
  [SMALL_STATE(67)] = 3730,
  [SMALL_STATE(68)] = 3778,
  [SMALL_STATE(69)] = 3820,
  [SMALL_STATE(70)] = 3862,
  [SMALL_STATE(71)] = 3906,
  [SMALL_STATE(72)] = 3947,
  [SMALL_STATE(73)] = 3988,
  [SMALL_STATE(74)] = 4029,
  [SMALL_STATE(75)] = 4076,
  [SMALL_STATE(76)] = 4117,
  [SMALL_STATE(77)] = 4158,
  [SMALL_STATE(78)] = 4199,
  [SMALL_STATE(79)] = 4240,
  [SMALL_STATE(80)] = 4281,
  [SMALL_STATE(81)] = 4322,
  [SMALL_STATE(82)] = 4363,
  [SMALL_STATE(83)] = 4404,
  [SMALL_STATE(84)] = 4445,
  [SMALL_STATE(85)] = 4486,
  [SMALL_STATE(86)] = 4527,
  [SMALL_STATE(87)] = 4570,
  [SMALL_STATE(88)] = 4611,
  [SMALL_STATE(89)] = 4652,
  [SMALL_STATE(90)] = 4693,
  [SMALL_STATE(91)] = 4734,
  [SMALL_STATE(92)] = 4777,
  [SMALL_STATE(93)] = 4817,
  [SMALL_STATE(94)] = 4857,
  [SMALL_STATE(95)] = 4947,
  [SMALL_STATE(96)] = 4989,
  [SMALL_STATE(97)] = 5031,
  [SMALL_STATE(98)] = 5073,
  [SMALL_STATE(99)] = 5163,
  [SMALL_STATE(100)] = 5205,
  [SMALL_STATE(101)] = 5295,
  [SMALL_STATE(102)] = 5334,
  [SMALL_STATE(103)] = 5373,
  [SMALL_STATE(104)] = 5412,
  [SMALL_STATE(105)] = 5451,
  [SMALL_STATE(106)] = 5490,
  [SMALL_STATE(107)] = 5529,
  [SMALL_STATE(108)] = 5568,
  [SMALL_STATE(109)] = 5607,
  [SMALL_STATE(110)] = 5646,
  [SMALL_STATE(111)] = 5733,
  [SMALL_STATE(112)] = 5772,
  [SMALL_STATE(113)] = 5811,
  [SMALL_STATE(114)] = 5850,
  [SMALL_STATE(115)] = 5889,
  [SMALL_STATE(116)] = 5976,
  [SMALL_STATE(117)] = 6015,
  [SMALL_STATE(118)] = 6054,
  [SMALL_STATE(119)] = 6097,
  [SMALL_STATE(120)] = 6134,
  [SMALL_STATE(121)] = 6171,
  [SMALL_STATE(122)] = 6206,
  [SMALL_STATE(123)] = 6243,
  [SMALL_STATE(124)] = 6277,
  [SMALL_STATE(125)] = 6311,
  [SMALL_STATE(126)] = 6342,
  [SMALL_STATE(127)] = 6382,
  [SMALL_STATE(128)] = 6416,
  [SMALL_STATE(129)] = 6448,
  [SMALL_STATE(130)] = 6474,
  [SMALL_STATE(131)] = 6508,
  [SMALL_STATE(132)] = 6542,
  [SMALL_STATE(133)] = 6577,
  [SMALL_STATE(134)] = 6612,
  [SMALL_STATE(135)] = 6636,
  [SMALL_STATE(136)] = 6668,
  [SMALL_STATE(137)] = 6700,
  [SMALL_STATE(138)] = 6728,
  [SMALL_STATE(139)] = 6753,
  [SMALL_STATE(140)] = 6775,
  [SMALL_STATE(141)] = 6797,
  [SMALL_STATE(142)] = 6819,
  [SMALL_STATE(143)] = 6841,
  [SMALL_STATE(144)] = 6863,
  [SMALL_STATE(145)] = 6885,
  [SMALL_STATE(146)] = 6907,
  [SMALL_STATE(147)] = 6929,
  [SMALL_STATE(148)] = 6951,
  [SMALL_STATE(149)] = 6973,
  [SMALL_STATE(150)] = 6995,
  [SMALL_STATE(151)] = 7017,
  [SMALL_STATE(152)] = 7039,
  [SMALL_STATE(153)] = 7061,
  [SMALL_STATE(154)] = 7085,
  [SMALL_STATE(155)] = 7107,
  [SMALL_STATE(156)] = 7129,
  [SMALL_STATE(157)] = 7151,
  [SMALL_STATE(158)] = 7175,
  [SMALL_STATE(159)] = 7197,
  [SMALL_STATE(160)] = 7219,
  [SMALL_STATE(161)] = 7241,
  [SMALL_STATE(162)] = 7263,
  [SMALL_STATE(163)] = 7287,
  [SMALL_STATE(164)] = 7309,
  [SMALL_STATE(165)] = 7331,
  [SMALL_STATE(166)] = 7353,
  [SMALL_STATE(167)] = 7374,
  [SMALL_STATE(168)] = 7395,
  [SMALL_STATE(169)] = 7418,
  [SMALL_STATE(170)] = 7441,
  [SMALL_STATE(171)] = 7460,
  [SMALL_STATE(172)] = 7479,
  [SMALL_STATE(173)] = 7500,
  [SMALL_STATE(174)] = 7523,
  [SMALL_STATE(175)] = 7542,
  [SMALL_STATE(176)] = 7565,
  [SMALL_STATE(177)] = 7585,
  [SMALL_STATE(178)] = 7605,
  [SMALL_STATE(179)] = 7625,
  [SMALL_STATE(180)] = 7645,
  [SMALL_STATE(181)] = 7665,
  [SMALL_STATE(182)] = 7685,
  [SMALL_STATE(183)] = 7705,
  [SMALL_STATE(184)] = 7725,
  [SMALL_STATE(185)] = 7745,
  [SMALL_STATE(186)] = 7765,
  [SMALL_STATE(187)] = 7785,
  [SMALL_STATE(188)] = 7805,
  [SMALL_STATE(189)] = 7825,
  [SMALL_STATE(190)] = 7845,
  [SMALL_STATE(191)] = 7865,
  [SMALL_STATE(192)] = 7878,
  [SMALL_STATE(193)] = 7901,
  [SMALL_STATE(194)] = 7924,
  [SMALL_STATE(195)] = 7947,
  [SMALL_STATE(196)] = 7967,
  [SMALL_STATE(197)] = 7987,
  [SMALL_STATE(198)] = 8004,
  [SMALL_STATE(199)] = 8021,
  [SMALL_STATE(200)] = 8038,
  [SMALL_STATE(201)] = 8054,
  [SMALL_STATE(202)] = 8070,
  [SMALL_STATE(203)] = 8086,
  [SMALL_STATE(204)] = 8099,
  [SMALL_STATE(205)] = 8112,
  [SMALL_STATE(206)] = 8125,
  [SMALL_STATE(207)] = 8138,
  [SMALL_STATE(208)] = 8151,
  [SMALL_STATE(209)] = 8164,
  [SMALL_STATE(210)] = 8174,
  [SMALL_STATE(211)] = 8184,
  [SMALL_STATE(212)] = 8194,
  [SMALL_STATE(213)] = 8202,
  [SMALL_STATE(214)] = 8210,
  [SMALL_STATE(215)] = 8216,
  [SMALL_STATE(216)] = 8224,
  [SMALL_STATE(217)] = 8231,
  [SMALL_STATE(218)] = 8238,
  [SMALL_STATE(219)] = 8245,
  [SMALL_STATE(220)] = 8252,
  [SMALL_STATE(221)] = 8259,
  [SMALL_STATE(222)] = 8266,
  [SMALL_STATE(223)] = 8273,
  [SMALL_STATE(224)] = 8280,
  [SMALL_STATE(225)] = 8287,
  [SMALL_STATE(226)] = 8294,
  [SMALL_STATE(227)] = 8301,
  [SMALL_STATE(228)] = 8308,
  [SMALL_STATE(229)] = 8315,
  [SMALL_STATE(230)] = 8322,
  [SMALL_STATE(231)] = 8329,
  [SMALL_STATE(232)] = 8336,
  [SMALL_STATE(233)] = 8343,
  [SMALL_STATE(234)] = 8350,
  [SMALL_STATE(235)] = 8357,
  [SMALL_STATE(236)] = 8364,
  [SMALL_STATE(237)] = 8371,
  [SMALL_STATE(238)] = 8378,
  [SMALL_STATE(239)] = 8383,
  [SMALL_STATE(240)] = 8390,
  [SMALL_STATE(241)] = 8397,
  [SMALL_STATE(242)] = 8404,
  [SMALL_STATE(243)] = 8411,
  [SMALL_STATE(244)] = 8418,
  [SMALL_STATE(245)] = 8422,
  [SMALL_STATE(246)] = 8426,
  [SMALL_STATE(247)] = 8430,
  [SMALL_STATE(248)] = 8434,
  [SMALL_STATE(249)] = 8438,
  [SMALL_STATE(250)] = 8442,
  [SMALL_STATE(251)] = 8446,
  [SMALL_STATE(252)] = 8450,
  [SMALL_STATE(253)] = 8454,
  [SMALL_STATE(254)] = 8458,
  [SMALL_STATE(255)] = 8462,
  [SMALL_STATE(256)] = 8466,
  [SMALL_STATE(257)] = 8470,
  [SMALL_STATE(258)] = 8474,
  [SMALL_STATE(259)] = 8478,
  [SMALL_STATE(260)] = 8482,
  [SMALL_STATE(261)] = 8486,
  [SMALL_STATE(262)] = 8490,
  [SMALL_STATE(263)] = 8494,
  [SMALL_STATE(264)] = 8498,
  [SMALL_STATE(265)] = 8502,
  [SMALL_STATE(266)] = 8506,
  [SMALL_STATE(267)] = 8510,
  [SMALL_STATE(268)] = 8514,
  [SMALL_STATE(269)] = 8518,
  [SMALL_STATE(270)] = 8522,
  [SMALL_STATE(271)] = 8526,
  [SMALL_STATE(272)] = 8530,
  [SMALL_STATE(273)] = 8534,
  [SMALL_STATE(274)] = 8538,
  [SMALL_STATE(275)] = 8542,
  [SMALL_STATE(276)] = 8546,
  [SMALL_STATE(277)] = 8550,
  [SMALL_STATE(278)] = 8554,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, 0, 7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, 0, 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(252),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(98),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(213),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(64),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(206),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(200),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(278),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(228),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(28),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(47),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(245),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(252),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(94),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(213),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(116),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(207),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(201),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(260),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(260),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(226),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(91),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 33), SHIFT_REPEAT(96),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(252),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(135),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(253),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(94),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(213),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(116),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(207),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(201),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(260),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(226),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(91),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(96),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 32), SHIFT_REPEAT(245),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, 0, 6),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 28),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(24),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(252),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(253),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(245),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, 0, 31),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move, 1, 0, 11),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move, 1, 0, 11),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 26),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 26),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 37),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 37),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move, 1, 0, 9),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move, 1, 0, 9),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation, 1, 0, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation, 1, 0, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, 0, 25),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, 0, 25),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, 0, 35),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, 0, 35),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 12),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 12),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, 0, 14),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, 0, 14),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, 0, 41),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, 0, 41),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, 0, 25),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, 0, 25),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation, 2, 0, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation, 2, 0, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 30),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 30),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move, 2, 0, 9),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move, 2, 0, 9),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment_delimiter_close, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_delimiter_close, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move, 2, 0, 11),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move, 2, 0, 11),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 10),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 10),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, 0, 43),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, 0, 43),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, 0, 18),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(252),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(100),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(213),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(185),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(204),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(202),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(277),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(277),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(239),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(153),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(173),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 36), SHIFT_REPEAT(245),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1, 0, 0),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1, 0, 0), SHIFT(119),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 38),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 38),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 24),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 24),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 27),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 27),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 29),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 29),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 45),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 45),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 39),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 39),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_san_move, 1, 0, 20),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_san_move, 1, 0, 20),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_lan_move, 1, 0, 22),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_lan_move, 1, 0, 22),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_annotation, 1, 0, 16),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_annotation, 1, 0, 16),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_lan_move, 2, 0, 22),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_lan_move, 2, 0, 22),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_san_move, 2, 0, 20),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_san_move, 2, 0, 20),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_annotation, 2, 0, 16),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_annotation, 2, 0, 16),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 19),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 19),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, 0, 34),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, 0, 34),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 21),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 21),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 15),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 15),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, 0, 44),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, 0, 44),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 23),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 23),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 18),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 18),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [737] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_text, 1, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0), SHIFT_REPEAT(196),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0), SHIFT_REPEAT(199),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recursive_inline_comment, 2, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recursive_inline_comment, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_delimiter_open, 1, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment_delimiter_open, 1, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recursive_inline_comment, 3, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recursive_inline_comment, 3, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, 0, 42),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 1, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, 0, 46),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [871] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 2, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
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
