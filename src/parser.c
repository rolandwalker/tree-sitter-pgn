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
#define STATE_COUNT 265
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 46

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
  sym_inline_comment_delimiter_open = 41,
  sym_inline_comment_delimiter_close = 42,
  sym_inline_comment_text = 43,
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
  sym__movetext_element = 121,
  sym__variation_movetext_element = 122,
  sym_variation = 123,
  sym_recursive_variation = 124,
  sym_inline_comment = 125,
  sym__san_move = 126,
  sym__variation_san_move = 127,
  sym_san_move = 128,
  sym__san_move_piece = 129,
  sym__lan_move = 130,
  sym__variation_lan_move = 131,
  sym_lan_move = 132,
  sym__san_promotion_symbol = 133,
  sym__san_square = 134,
  sym__san_promotion = 135,
  sym__san_move_pawn = 136,
  sym__san_drop_pawn = 137,
  sym__san_move_major_or_minor_piece = 138,
  sym__san_drop_major_or_minor_piece = 139,
  sym__lan_move_by_coordinates = 140,
  sym__annotation = 141,
  sym__variation_annotation = 142,
  sym_result_code = 143,
  aux_sym_series_of_games_repeat1 = 144,
  aux_sym_freestanding_comment_repeat1 = 145,
  aux_sym_header_repeat1 = 146,
  aux_sym_tagpair_value_contents_repeat1 = 147,
  aux_sym_movetext_repeat1 = 148,
  aux_sym_variation_movetext_repeat1 = 149,
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
  [sym_inline_comment_delimiter_open] = "inline_comment_delimiter_open",
  [sym_inline_comment_delimiter_close] = "inline_comment_delimiter_close",
  [sym_inline_comment_text] = "inline_comment_text",
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
  [sym__movetext_element] = "_movetext_element",
  [sym__variation_movetext_element] = "_variation_movetext_element",
  [sym_variation] = "variation",
  [sym_recursive_variation] = "recursive_variation",
  [sym_inline_comment] = "inline_comment",
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
  [sym_inline_comment_delimiter_open] = sym_inline_comment_delimiter_open,
  [sym_inline_comment_delimiter_close] = sym_inline_comment_delimiter_close,
  [sym_inline_comment_text] = sym_inline_comment_text,
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
  [sym__movetext_element] = sym__movetext_element,
  [sym__variation_movetext_element] = sym__variation_movetext_element,
  [sym_variation] = sym_variation,
  [sym_recursive_variation] = sym_recursive_variation,
  [sym_inline_comment] = sym_inline_comment,
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
  [sym_inline_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_text] = {
    .visible = true,
    .named = true,
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
  [30] = {.index = 46, .length = 3},
  [31] = {.index = 49, .length = 4},
  [32] = {.index = 53, .length = 10},
  [33] = {.index = 63, .length = 2},
  [34] = {.index = 65, .length = 3},
  [35] = {.index = 68, .length = 10},
  [36] = {.index = 78, .length = 3},
  [37] = {.index = 81, .length = 2},
  [38] = {.index = 83, .length = 2},
  [39] = {.index = 85, .length = 3},
  [40] = {.index = 88, .length = 4},
  [41] = {.index = 92, .length = 2},
  [42] = {.index = 94, .length = 5},
  [43] = {.index = 99, .length = 3},
  [44] = {.index = 102, .length = 3},
  [45] = {.index = 105, .length = 3},
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
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1},
    {field_game, 0, .inherited = true},
  [49] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
  [53] =
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
  [63] =
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 1},
  [65] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [68] =
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
  [78] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [81] =
    {field_header, 0},
    {field_movetext, 2},
  [83] =
    {field_header, 0},
    {field_result_code, 2},
  [85] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 2},
  [88] =
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [92] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [94] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [99] =
    {field_recursive_variation_content, 1},
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 2},
  [102] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [105] =
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
  [6] = 2,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 8,
  [16] = 16,
  [17] = 12,
  [18] = 18,
  [19] = 10,
  [20] = 12,
  [21] = 9,
  [22] = 22,
  [23] = 11,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 12,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 12,
  [41] = 41,
  [42] = 16,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 48,
  [57] = 57,
  [58] = 48,
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
  [69] = 26,
  [70] = 12,
  [71] = 32,
  [72] = 72,
  [73] = 73,
  [74] = 38,
  [75] = 75,
  [76] = 33,
  [77] = 35,
  [78] = 36,
  [79] = 34,
  [80] = 28,
  [81] = 59,
  [82] = 63,
  [83] = 30,
  [84] = 25,
  [85] = 29,
  [86] = 39,
  [87] = 63,
  [88] = 37,
  [89] = 31,
  [90] = 41,
  [91] = 51,
  [92] = 44,
  [93] = 49,
  [94] = 48,
  [95] = 46,
  [96] = 68,
  [97] = 60,
  [98] = 98,
  [99] = 62,
  [100] = 55,
  [101] = 61,
  [102] = 63,
  [103] = 52,
  [104] = 54,
  [105] = 57,
  [106] = 53,
  [107] = 107,
  [108] = 66,
  [109] = 64,
  [110] = 107,
  [111] = 67,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 8,
  [123] = 11,
  [124] = 9,
  [125] = 10,
  [126] = 12,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 16,
  [131] = 128,
  [132] = 12,
  [133] = 129,
  [134] = 48,
  [135] = 135,
  [136] = 136,
  [137] = 34,
  [138] = 138,
  [139] = 38,
  [140] = 63,
  [141] = 141,
  [142] = 36,
  [143] = 35,
  [144] = 144,
  [145] = 33,
  [146] = 31,
  [147] = 37,
  [148] = 148,
  [149] = 12,
  [150] = 26,
  [151] = 28,
  [152] = 152,
  [153] = 48,
  [154] = 154,
  [155] = 155,
  [156] = 39,
  [157] = 157,
  [158] = 29,
  [159] = 25,
  [160] = 30,
  [161] = 32,
  [162] = 162,
  [163] = 49,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 63,
  [170] = 48,
  [171] = 41,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 63,
  [176] = 176,
  [177] = 177,
  [178] = 57,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 186,
  [188] = 186,
  [189] = 189,
  [190] = 190,
  [191] = 189,
  [192] = 190,
  [193] = 189,
  [194] = 190,
  [195] = 195,
  [196] = 196,
  [197] = 195,
  [198] = 195,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 199,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 204,
  [207] = 207,
  [208] = 201,
  [209] = 209,
  [210] = 207,
  [211] = 211,
  [212] = 209,
  [213] = 200,
  [214] = 203,
  [215] = 204,
  [216] = 207,
  [217] = 201,
  [218] = 205,
  [219] = 209,
  [220] = 199,
  [221] = 200,
  [222] = 203,
  [223] = 205,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 233,
  [237] = 237,
  [238] = 225,
  [239] = 226,
  [240] = 227,
  [241] = 233,
  [242] = 226,
  [243] = 227,
  [244] = 235,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 235,
  [252] = 252,
  [253] = 120,
  [254] = 233,
  [255] = 227,
  [256] = 233,
  [257] = 227,
  [258] = 233,
  [259] = 227,
  [260] = 233,
  [261] = 229,
  [262] = 232,
  [263] = 229,
  [264] = 232,
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

static TSCharacterRange sym_annotation_character_set_4[] = {
  {'\t', '\r'}, {' ', '!'}, {'$', '$'}, {'&', '&'}, {'+', '+'}, {'-', '-'}, {'<', '='}, {'?', '?'},
  {'N', 'N'}, {'R', 'R'}, {'T', 'T'}, {'e', 'e'}, {0xb1, 0xb1}, {0x16ed, 0x16ed}, {0x2010, 0x2014}, {0x203c, 0x203d},
  {0x2047, 0x2049}, {0x2191, 0x2192}, {0x21c6, 0x21c6}, {0x21d4, 0x21d4}, {0x21d7, 0x21d7}, {0x2206, 0x2207}, {0x2212, 0x2213}, {0x221e, 0x221e},
  {0x2264, 0x2264}, {0x229e, 0x229e}, {0x22a5, 0x22a5}, {0x2313, 0x2313}, {0x2514, 0x2514}, {0x2518, 0x2518}, {0x25a1, 0x25a1}, {0x25cb, 0x25cb},
  {0x25fa, 0x25fa}, {0x25ff, 0x25ff}, {0x2612, 0x2612}, {0x2642, 0x2642}, {0x2715, 0x2715}, {0x2795, 0x2796}, {0x27ea, 0x27eb}, {0x27f3, 0x27f3},
  {0x2a00, 0x2a01}, {0x2a71, 0x2a72}, {0x2b12, 0x2b13}, {0x2e40, 0x2e40},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '"', 2211,
        '#', 2339,
        '%', 2198,
        '&', 1119,
        '(', 2279,
        ')', 2281,
        '*', 2415,
        '-', 2369,
        '/', 2398,
        '0', 2392,
        '1', 2365,
        '2', 2408,
        ';', 2196,
        '=', 2317,
        '@', 2327,
        'O', 2388,
        'P', 2320,
        '[', 2207,
        ']', 2209,
        'o', 2397,
        '{', 2282,
        '}', 2284,
        0xbd, 2411,
        0x2ba, 2231,
        0x2dd, 2229,
        0x2ee, 2235,
        0x2f6, 2233,
        0x5f2, 2237,
        0x5f4, 2227,
        0x66d, 2431,
        0x2010, 2373,
        0x2011, 2375,
        0x2012, 2377,
        0x2013, 2379,
        0x2014, 2381,
        0x201c, 2215,
        0x201d, 2217,
        0x201f, 2219,
        0x2033, 2221,
        0x2036, 2223,
        0x2044, 2402,
        0x204e, 2427,
        0x2212, 2371,
        0x2215, 2400,
        0x2217, 2419,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2796, 2383,
        0x27cb, 2404,
        0x29f8, 2406,
        0x3003, 2225,
        0xff02, 2213,
        '+', 2342,
        0x16ed, 2342,
        0x2795, 2342,
        ':', 2315,
        'X', 2315,
        'x', 2315,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2192);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(2304);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2305);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1173);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(831);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '#', 139,
        'D', 563,
        'L', 505,
        'M', 620,
        'P', 628,
        'R', 506,
        'S', 594,
        'U', 682,
        'b', 619,
        'c', 617,
        'd', 501,
        'e', 688,
        'h', 509,
        'i', 647,
        'l', 561,
        'm', 515,
        'n', 503,
        'p', 564,
        'q', 758,
        'r', 507,
        's', 627,
        'u', 508,
        'x', 670,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(527);
      if (lookahead == 'h') ADVANCE(783);
      if (lookahead == 'm') ADVANCE(546);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '#', 176,
        'd', 529,
        'h', 784,
        'm', 548,
        'n', 549,
        'p', 643,
        's', 679,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(781);
      if (lookahead == 'q') ADVANCE(778);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 's') ADVANCE(675);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(713);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '#', 154,
        'D', 563,
        'L', 505,
        'M', 620,
        'P', 628,
        'R', 506,
        'S', 594,
        'U', 682,
        'a', 735,
        'b', 619,
        'c', 617,
        'd', 501,
        'e', 688,
        'f', 708,
        'h', 512,
        'i', 647,
        'l', 560,
        'm', 514,
        'n', 503,
        'p', 565,
        'q', 758,
        'r', 507,
        's', 627,
        'u', 508,
        'x', 670,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == 's') ADVANCE(675);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '#', 169,
        'd', 523,
        'h', 782,
        'm', 542,
        'n', 543,
        's', 678,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '#', 193,
        'd', 532,
        'h', 787,
        'm', 554,
        'n', 555,
        's', 680,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(523);
      if (lookahead == 'h') ADVANCE(782);
      if (lookahead == 'm') ADVANCE(542);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '#', 194,
        'd', 523,
        'h', 782,
        'm', 542,
        'n', 543,
        'p', 644,
        's', 678,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '#', 221,
        'D', 563,
        'L', 505,
        'M', 620,
        'P', 628,
        'R', 506,
        'S', 594,
        'U', 682,
        'a', 735,
        'b', 619,
        'c', 617,
        'd', 501,
        'e', 688,
        'f', 708,
        'h', 512,
        'i', 647,
        'l', 560,
        'm', 514,
        'n', 503,
        'p', 564,
        'q', 758,
        'r', 507,
        's', 627,
        'u', 508,
        'x', 670,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '#', 227,
        'D', 563,
        'L', 505,
        'M', 620,
        'P', 628,
        'R', 506,
        'S', 594,
        'U', 682,
        'a', 735,
        'b', 619,
        'c', 617,
        'd', 535,
        'e', 688,
        'f', 708,
        'h', 513,
        'i', 647,
        'l', 560,
        'm', 516,
        'n', 504,
        'p', 565,
        'q', 758,
        'r', 507,
        's', 627,
        'u', 508,
        'x', 670,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead == 'h') ADVANCE(785);
      if (lookahead == 'm') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(551);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == 's') ADVANCE(677);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(786);
      if (lookahead == 'm') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == 's') ADVANCE(681);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'h') ADVANCE(788);
      if (lookahead == 'm') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(557);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(789);
      if (lookahead == 'm') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(829);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 22,
        '/', 40,
        0x2044, 40,
        0x2215, 40,
        0x27cb, 40,
        0x29f8, 40,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == 0x221e) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == 0xbd) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(17);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 31,
        '/', 7,
        0x2044, 7,
        0x2215, 7,
        0x27cb, 7,
        0x29f8, 7,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(8);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(1077);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(464);
      if (lookahead == '1') ADVANCE(464);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '4') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(464);
      if (lookahead == '1') ADVANCE(464);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(464);
      if (lookahead == '1') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(464);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '7') ADVANCE(399);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '5') ADVANCE(228);
      if (lookahead == '6') ADVANCE(299);
      if (lookahead == '7') ADVANCE(100);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '5') ADVANCE(228);
      if (lookahead == '6') ADVANCE(299);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '7') ADVANCE(140);
      if (lookahead == ';') ADVANCE(2418);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '7') ADVANCE(140);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 149,
        '1', 443,
        '2', 59,
        '3', 185,
        '5', 151,
        '6', 180,
        '7', 173,
        'A', 56,
        'a', 56,
        'B', 144,
        'b', 144,
        'D', 459,
        'd', 459,
        'E', 334,
        'e', 334,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 375,
        '1', 254,
        '6', 331,
        '9', 813,
        'A', 359,
        'a', 359,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 60:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 375,
        '1', 252,
        '6', 331,
        '9', 813,
        'A', 359,
        'a', 359,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 61:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 375,
        '1', 275,
        '6', 331,
        '9', 813,
        'A', 359,
        'a', 359,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '6') ADVANCE(351);
      if (lookahead == '7') ADVANCE(399);
      if (lookahead == '8') ADVANCE(447);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(409);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '6') ADVANCE(91);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(409);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(305);
      if (lookahead == '2') ADVANCE(161);
      if (lookahead == '7') ADVANCE(360);
      if (lookahead == '8') ADVANCE(379);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '2') ADVANCE(161);
      if (lookahead == '7') ADVANCE(360);
      if (lookahead == '8') ADVANCE(379);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(323);
      if (lookahead == '2') ADVANCE(161);
      if (lookahead == '7') ADVANCE(360);
      if (lookahead == '8') ADVANCE(379);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 68:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 150,
        '1', 443,
        '2', 60,
        '3', 185,
        '5', 151,
        '6', 180,
        '7', 171,
        'A', 55,
        'a', 55,
        'B', 145,
        'b', 145,
        'D', 459,
        'd', 459,
        'E', 334,
        'e', 334,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 69:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 150,
        '1', 443,
        '2', 60,
        '3', 185,
        '5', 151,
        '6', 180,
        '7', 170,
        'A', 55,
        'a', 55,
        'B', 144,
        'b', 144,
        'D', 459,
        'd', 459,
        'E', 334,
        'e', 334,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 70:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 163,
        '2', 153,
        '7', 441,
        '9', 822,
        'D', 464,
        'd', 464,
        'F', 484,
        'f', 484,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 71:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 163,
        '2', 153,
        '7', 444,
        '9', 822,
        'B', 471,
        'b', 471,
        'D', 464,
        'd', 464,
        'F', 484,
        'f', 484,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(359);
      if (lookahead == '3') ADVANCE(317);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(359);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(331);
      if (lookahead == '6') ADVANCE(232);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 198,
        '2', 166,
        '7', 440,
        '9', 823,
        'B', 464,
        'b', 464,
        'D', 467,
        'd', 467,
        'F', 468,
        'f', 468,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(165);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(459);
      if (lookahead == '1') ADVANCE(459);
      if (lookahead == '2') ADVANCE(459);
      if (lookahead == '3') ADVANCE(459);
      if (lookahead == '4') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(459);
      if (lookahead == '1') ADVANCE(459);
      if (lookahead == '2') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(241);
      if (lookahead == '8') ADVANCE(334);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 349,
        '2', 197,
        '7', 803,
        '9', 820,
        'F', 465,
        'f', 465,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(470);
      if (lookahead == '1') ADVANCE(483);
      if (lookahead == '3') ADVANCE(469);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(187);
      if (lookahead == '2') ADVANCE(182);
      if (lookahead == '7') ADVANCE(445);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(305);
      if (lookahead == '2') ADVANCE(161);
      if (lookahead == '7') ADVANCE(360);
      if (lookahead == '8') ADVANCE(379);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(485);
      if (lookahead == '1') ADVANCE(485);
      if (lookahead == '2') ADVANCE(485);
      if (lookahead == '3') ADVANCE(485);
      if (lookahead == '4') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(485);
      if (lookahead == '1') ADVANCE(485);
      if (lookahead == '2') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(465);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(466);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(467);
      if (lookahead == '1') ADVANCE(467);
      if (lookahead == '2') ADVANCE(467);
      if (lookahead == '3') ADVANCE(467);
      if (lookahead == '4') ADVANCE(467);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(467);
      if (lookahead == '1') ADVANCE(467);
      if (lookahead == '2') ADVANCE(467);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(468);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '2') ADVANCE(181);
      if (lookahead == '7') ADVANCE(442);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(456);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(487);
      if (lookahead == '1') ADVANCE(487);
      if (lookahead == '2') ADVANCE(487);
      if (lookahead == '3') ADVANCE(487);
      if (lookahead == '4') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(487);
      if (lookahead == '1') ADVANCE(487);
      if (lookahead == '2') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(474);
      if (lookahead == '1') ADVANCE(474);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == '4') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(474);
      if (lookahead == '1') ADVANCE(474);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(488);
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == '2') ADVANCE(488);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '4') ADVANCE(488);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(488);
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == '2') ADVANCE(488);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(486);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(489);
      if (lookahead == '1') ADVANCE(489);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead == '4') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(489);
      if (lookahead == '1') ADVANCE(489);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(482);
      if (lookahead == '1') ADVANCE(482);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == '4') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(482);
      if (lookahead == '1') ADVANCE(482);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(414);
      if (lookahead == '1') ADVANCE(87);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 111:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 210,
        '1', 443,
        '2', 61,
        '3', 185,
        '5', 151,
        '6', 180,
        '7', 172,
        'A', 55,
        'a', 55,
        'B', 145,
        'b', 145,
        'D', 482,
        'd', 482,
        'E', 334,
        'e', 334,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(188);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(191);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(490);
      if (lookahead == '1') ADVANCE(490);
      if (lookahead == '2') ADVANCE(490);
      if (lookahead == '3') ADVANCE(490);
      if (lookahead == '4') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(490);
      if (lookahead == '1') ADVANCE(490);
      if (lookahead == '2') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(491);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(418);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(420);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(421);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(422);
      if (lookahead == '1') ADVANCE(104);
      if (lookahead == '6') ADVANCE(105);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == '1') ADVANCE(115);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(425);
      if (lookahead == '1') ADVANCE(109);
      if (lookahead == '5') ADVANCE(228);
      if (lookahead == '6') ADVANCE(299);
      if (lookahead == '7') ADVANCE(100);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '6') ADVANCE(351);
      if (lookahead == '7') ADVANCE(399);
      if (lookahead == '8') ADVANCE(447);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 126:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 205,
        '2', 192,
        '7', 452,
        '9', 824,
        'D', 488,
        'd', 488,
        'F', 486,
        'f', 486,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 127:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 350,
        '2', 200,
        '7', 805,
        '9', 821,
        'F', 466,
        'f', 466,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(201);
      if (lookahead == '2') ADVANCE(183);
      if (lookahead == '7') ADVANCE(450);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(217);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == '2') ADVANCE(199);
      if (lookahead == '7') ADVANCE(451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(218);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == '2') ADVANCE(202);
      if (lookahead == '7') ADVANCE(453);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(219);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(208);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == '7') ADVANCE(454);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 135:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '0', 355,
        '2', 209,
        '7', 806,
        '9', 825,
        'F', 491,
        'f', 491,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '6') ADVANCE(351);
      if (lookahead == '7') ADVANCE(399);
      if (lookahead == '8') ADVANCE(447);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(215);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 139:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 52,
        '3', 304,
        '4', 308,
        '5', 410,
        '6', 83,
        '8', 234,
        '9', 332,
        'X', 157,
        'x', 157,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(464);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(464);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '4') ADVANCE(362);
      if (lookahead == '8') ADVANCE(245);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(236);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(228);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(228);
      if (lookahead == ';') ADVANCE(2340);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(253);
      if (lookahead == '3') ADVANCE(341);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(255);
      if (lookahead == '3') ADVANCE(341);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '2') ADVANCE(276);
      if (lookahead == '3') ADVANCE(341);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '3') ADVANCE(802);
      if (lookahead == '4') ADVANCE(398);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '3') ADVANCE(802);
      if (lookahead == '4') ADVANCE(397);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 151:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 330,
        'A', 142,
        'a', 142,
        'C', 794,
        'c', 794,
        'F', 793,
        'f', 793,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(309);
      if (lookahead == '7') ADVANCE(352);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(229);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 62,
        '3', 304,
        '4', 268,
        '5', 431,
        '6', 83,
        '8', 243,
        '9', 332,
        'X', 212,
        'x', 212,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(2438);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(411);
      if (lookahead == '7') ADVANCE(349);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(378);
      if (lookahead == '2') ADVANCE(57);
      if (lookahead == '3') ADVANCE(804);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(142);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 158:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 378,
        '2', 69,
        '3', 804,
        '6', 388,
        'B', 141,
        'b', 141,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 159:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 58,
        '4', 403,
        '6', 142,
        '8', 256,
        'X', 237,
        'x', 237,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead == '8') ADVANCE(256);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(238);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(409);
      if (lookahead == '2') ADVANCE(399);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(813);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '4') ADVANCE(339);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(311);
      if (lookahead == '7') ADVANCE(353);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(262);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(427);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '4') ADVANCE(358);
      if (lookahead == '8') ADVANCE(239);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(240);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 170:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 359,
        '3', 184,
        '9', 361,
        'E', 792,
        'e', 792,
        'F', 303,
        'f', 303,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 171:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 359,
        '3', 184,
        '9', 366,
        'E', 792,
        'e', 792,
        'F', 303,
        'f', 303,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 172:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 359,
        '3', 184,
        '9', 367,
        'E', 792,
        'e', 792,
        'F', 303,
        'f', 303,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 173:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 359,
        '9', 361,
        'E', 792,
        'e', 792,
        'F', 303,
        'f', 303,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(310);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(168);
      if (lookahead == '6') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(251);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 176:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 78,
        '4', 302,
        '5', 426,
        '8', 247,
        'X', 189,
        'x', 189,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(320);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(433);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(233);
      if (lookahead == '4') ADVANCE(233);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(233);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(266);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(481);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(303);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(90);
      if (lookahead == '4') ADVANCE(359);
      if (lookahead == '8') ADVANCE(250);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(246);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(326);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(387);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(387);
      if (lookahead == '2') ADVANCE(402);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(312);
      if (lookahead == '7') ADVANCE(352);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(272);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '4') ADVANCE(371);
      if (lookahead == '8') ADVANCE(293);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 194:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 113,
        '4', 316,
        '5', 432,
        '8', 239,
        'X', 216,
        'x', 216,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(270);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '4') ADVANCE(303);
      if (lookahead == '5') ADVANCE(426);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(190);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(363);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '4') ADVANCE(340);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(271);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(364);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(273);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(101);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(274);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(103);
      if (lookahead == '4') ADVANCE(345);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(281);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(374);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '3') ADVANCE(802);
      if (lookahead == '4') ADVANCE(397);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(428);
      if (lookahead == '7') ADVANCE(350);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 212:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 395,
        '2', 68,
        '3', 804,
        '6', 388,
        'B', 141,
        'b', 141,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 213:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 395,
        '2', 111,
        '3', 804,
        '6', 388,
        'B', 141,
        'b', 141,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(324);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(434);
      if (lookahead == '7') ADVANCE(355);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(396);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(325);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(327);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(328);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(125);
      if (lookahead == '4') ADVANCE(365);
      if (lookahead == '8') ADVANCE(292);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(277);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 221:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 124,
        '3', 304,
        '4', 267,
        '5', 410,
        '6', 83,
        '8', 243,
        '9', 332,
        'X', 158,
        'x', 158,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '4') ADVANCE(404);
      if (lookahead == '8') ADVANCE(294);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(278);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(129);
      if (lookahead == '4') ADVANCE(370);
      if (lookahead == '8') ADVANCE(295);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(283);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(138);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead == '8') ADVANCE(296);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(284);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '4') ADVANCE(372);
      if (lookahead == '8') ADVANCE(297);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(287);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '4') ADVANCE(373);
      if (lookahead == '8') ADVANCE(298);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(289);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 227:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '1', 137,
        '3', 304,
        '4', 269,
        '5', 431,
        '6', 83,
        '8', 279,
        '9', 332,
        'X', 213,
        'x', 213,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == '6') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == '7') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == '9') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 234:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '2', 54,
        '5', 436,
        '6', 333,
        '7', 147,
        '8', 76,
        '9', 401,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead == '3') ADVANCE(819);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead == '3') ADVANCE(807);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '7') ADVANCE(242);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(375);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(229);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 243:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '2', 53,
        '5', 436,
        '6', 333,
        '7', 146,
        '8', 76,
        '9', 401,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(2440);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(110);
      if (lookahead == '7') ADVANCE(261);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(96);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '7') ADVANCE(249);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(126);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(262);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(64);
      if (lookahead == '7') ADVANCE(260);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(816);
      if (lookahead == '3') ADVANCE(807);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(459);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '7') ADVANCE(480);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(459);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '7') ADVANCE(480);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(459);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(459);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(389);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(231);
      if (lookahead == '4') ADVANCE(376);
      if (lookahead == '9') ADVANCE(331);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(233);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(259);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(467);
      if (lookahead == '5') ADVANCE(468);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(162);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(266);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(475);
      if (lookahead == '3') ADVANCE(458);
      if (lookahead == '5') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(475);
      if (lookahead == '3') ADVANCE(473);
      if (lookahead == '5') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(475);
      if (lookahead == '3') ADVANCE(473);
      if (lookahead == '5') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(477);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(488);
      if (lookahead == '5') ADVANCE(486);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(476);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '7') ADVANCE(480);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(482);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '7') ADVANCE(480);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(127);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 279:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '2', 123,
        '5', 436,
        '6', 333,
        '7', 148,
        '8', 76,
        '9', 401,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(363);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(130);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(271);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(364);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(132);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(273);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(134);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(281);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(374);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(120);
      if (lookahead == '7') ADVANCE(280);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(392);
      if (lookahead == '7') ADVANCE(286);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(119);
      if (lookahead == '7') ADVANCE(285);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(394);
      if (lookahead == '7') ADVANCE(291);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(121);
      if (lookahead == '7') ADVANCE(288);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(122);
      if (lookahead == '7') ADVANCE(290);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '4') ADVANCE(464);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '4') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '4') ADVANCE(467);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead == '5') ADVANCE(467);
      if (lookahead == '7') ADVANCE(468);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(469);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(307);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(807);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(458);
      if (lookahead == '4') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(458);
      if (lookahead == '5') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(331);
      if (lookahead == '8') ADVANCE(405);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(331);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(301);
      if (lookahead == '8') ADVANCE(406);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(315);
      if (lookahead == '8') ADVANCE(405);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(473);
      if (lookahead == '4') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(473);
      if (lookahead == '4') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(471);
      if (lookahead == '4') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(471);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(481);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(303);
      if (lookahead == '6') ADVANCE(303);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(235);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(303);
      if (lookahead == '7') ADVANCE(359);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(303);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(335);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(313);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(314);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(342);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(343);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(344);
      if (lookahead == '8') ADVANCE(407);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(346);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(347);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(464);
      if (lookahead == '7') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(464);
      if (lookahead == '8') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(437);
      if (lookahead == '6') ADVANCE(319);
      if (lookahead == '7') ADVANCE(257);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(376);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(97);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(51);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(465);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(466);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(468);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(455);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(488);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(486);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(337);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(338);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(369);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(339);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(340);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(345);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(348);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead == '6') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead == '6') ADVANCE(467);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(228);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(458);
      if (lookahead == '6') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(465);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(466);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(473);
      if (lookahead == '6') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(473);
      if (lookahead == '6') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(471);
      if (lookahead == '6') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(478);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(488);
      if (lookahead == '7') ADVANCE(486);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(491);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(464);
      if (lookahead == '7') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(306);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(814);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(356);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(438);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(435);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(488);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(815);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(811);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(446);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(89);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(448);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(116);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(817);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(818);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(464);
      if (lookahead == '8') ADVANCE(464);
      if (lookahead == '9') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(464);
      if (lookahead == '8') ADVANCE(464);
      if (lookahead == '9') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(310);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(435);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(439);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(465);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(466);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(468);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(486);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(491);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(464);
      if (lookahead == '9') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(380);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(403);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(459);
      if (lookahead == '9') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(400);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(263);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(485);
      if (lookahead == '9') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(465);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(466);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(467);
      if (lookahead == '9') ADVANCE(467);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(468);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(487);
      if (lookahead == '9') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(474);
      if (lookahead == '9') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(488);
      if (lookahead == '9') ADVANCE(488);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(486);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(489);
      if (lookahead == '9') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(482);
      if (lookahead == '9') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(381);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(404);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(490);
      if (lookahead == '9') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(491);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(390);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(449);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(300);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(230);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(458);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(359);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(798);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(797);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(376);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 443:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '9', 140,
        ';', 2350,
        'C', 376,
        'c', 376,
        'D', 329,
        'd', 329,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(368);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(797);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(382);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(473);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(477);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(471);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(476);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(383);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(384);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(385);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(799);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(386);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(391);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2355);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2347);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'm') ADVANCE(646);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2349);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2354);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2354);
      if (lookahead == 'f') ADVANCE(748);
      if (lookahead == 'q') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2354);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2354);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(841);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2338);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2350);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2341);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2340);
      if (lookahead == 'b') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'm') ADVANCE(646);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2340);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2418);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2413);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2434);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2430);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2422);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2426);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2330);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2351);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(829);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(830);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(711);
      if (lookahead == 'R') ADVANCE(616);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(711);
      if (lookahead == 'T') ADVANCE(567);
      if (lookahead == 'p') ADVANCE(569);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(711);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(570);
      if (lookahead == 'R') ADVANCE(616);
      if (lookahead == 'U') ADVANCE(687);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(624);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(643);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(616);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'v') ADVANCE(631);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'v') ADVANCE(631);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'y') ADVANCE(685);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'y') ADVANCE(685);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'y') ADVANCE(698);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == 'i') ADVANCE(661);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(738);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(737);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(626);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(629);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(523);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(523);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(777);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(527);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(663);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead == 'i') ADVANCE(664);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(531);
      if (lookahead == 'i') ADVANCE(665);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(531);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'i') ADVANCE(667);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == 'o') ADVANCE(780);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(673);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(673);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(649);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(657);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(747);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(749);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(722);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(477);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(476);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(621);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(670);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(596);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(600);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(674);
      if (lookahead == 'q') ADVANCE(772);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(749);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(571);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(756);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(488);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(573);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(574);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(575);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(577);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(578);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(579);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(580);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(701);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(659);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(652);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == 'q') ADVANCE(757);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(759);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(562);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(585);
      if (lookahead == 'r') ADVANCE(701);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(771);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(762);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(763);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(765);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(767);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(773);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(774);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(775);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(645);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(709);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(635);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(745);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(638);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(639);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(494);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(597);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead == 'q') ADVANCE(760);
      if (lookahead == 'x') ADVANCE(538);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(625);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(610);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(611);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(612);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(769);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(701);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(462);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(562);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(683);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(750);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(672);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(710);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(472);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(766);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(751);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(754);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(604);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(607);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(606);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'x') ADVANCE(689);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(469);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(704);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(566);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(715);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(716);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(720);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(725);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(705);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(719);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(521);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(728);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(519);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(730);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(731);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(732);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(733);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(526);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(537);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(686);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(691);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(692);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(693);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(694);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 787:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(695);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 788:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(696);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 789:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(697);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 790:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 0xfe0e) ADVANCE(2326);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 791:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 792:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 793:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 794:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 795:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(465);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 796:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(466);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 797:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 798:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(468);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 799:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(486);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 800:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(491);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 801:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(812);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 802:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(464);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 803:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 804:
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        'C', 470,
        'c', 470,
        'D', 483,
        'd', 483,
        'F', 469,
        'f', 469,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 805:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 806:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(800);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 807:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 808:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(458);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 809:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 810:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(471);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 811:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(478);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 812:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(476);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 813:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 814:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 815:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 816:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 817:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 818:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 819:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(464);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 820:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(415);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 821:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 822:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(417);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 823:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(419);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 824:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(423);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 825:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(430);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 826:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2338);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 827:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(826);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 828:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2338);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 829:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2333);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 830:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2334);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 831:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2436);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 832:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2353);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 833:
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 834:
      ADVANCE_MAP(
        '\n', 2294,
        '\r', 2289,
        '&', 11,
        '\t', 2288,
        0x0b, 2288,
        '\f', 2288,
        ' ', 2288,
        'A', 836,
        'B', 836,
        'a', 836,
        'b', 836,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(829);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 835:
      if (lookahead == '\n') ADVANCE(2294);
      if (lookahead == '\r') ADVANCE(2289);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2288);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(836);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 836:
      if (lookahead == '\n') ADVANCE(2294);
      if (lookahead == '\r') ADVANCE(2289);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2288);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 837:
      ADVANCE_MAP(
        '\n', 1155,
        '\r', 838,
        '&', 29,
        '\t', 837,
        0x0b, 837,
        '\f', 837,
        ' ', 837,
        '/', 841,
        0x2044, 841,
        0x2215, 841,
        0x27cb, 841,
        0x29f8, 841,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 838:
      if (lookahead == '\n') ADVANCE(1155);
      if (lookahead == '&') ADVANCE(1132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1156);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1158);
      END_STATE();
    case 839:
      ADVANCE_MAP(
        '\n', 1103,
        '\r', 1104,
        '!', 2352,
        '$', 832,
        '&', 10,
        '(', 2280,
        '0', 834,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'p', 791,
        '{', 2283,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2e40, 2347,
        'O', 34,
        'o', 34,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 840,
        0x0b, 840,
        '\f', 840,
        ' ', 840,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 840:
      ADVANCE_MAP(
        '\n', 1103,
        '\r', 839,
        '!', 2352,
        '$', 832,
        '&', 10,
        '(', 2280,
        '0', 834,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'p', 791,
        '{', 2283,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2e40, 2347,
        'O', 34,
        'o', 34,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 840,
        0x0b, 840,
        '\f', 840,
        ' ', 840,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 841:
      ADVANCE_MAP(
        '\n', 1157,
        '\r', 842,
        '&', 14,
        '=', 2354,
        0x2e40, 2354,
        '\t', 841,
        0x0b, 841,
        '\f', 841,
        ' ', 841,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 842:
      if (lookahead == '\n') ADVANCE(1157);
      if (lookahead == '&') ADVANCE(1124);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1158);
      END_STATE();
    case 843:
      if (lookahead == '\n') ADVANCE(2205);
      END_STATE();
    case 844:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      END_STATE();
    case 845:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(844);
      END_STATE();
    case 846:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(845);
      END_STATE();
    case 847:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(846);
      END_STATE();
    case 848:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(847);
      END_STATE();
    case 849:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(848);
      END_STATE();
    case 850:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(849);
      END_STATE();
    case 851:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(850);
      END_STATE();
    case 852:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(851);
      END_STATE();
    case 853:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(852);
      END_STATE();
    case 854:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(853);
      END_STATE();
    case 855:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(854);
      END_STATE();
    case 856:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(855);
      END_STATE();
    case 857:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(856);
      END_STATE();
    case 858:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(857);
      END_STATE();
    case 859:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(858);
      END_STATE();
    case 860:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(859);
      END_STATE();
    case 861:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(860);
      END_STATE();
    case 862:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(861);
      END_STATE();
    case 863:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(862);
      END_STATE();
    case 864:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(863);
      END_STATE();
    case 865:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(864);
      END_STATE();
    case 866:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(865);
      END_STATE();
    case 867:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(866);
      END_STATE();
    case 868:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(867);
      END_STATE();
    case 869:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(868);
      END_STATE();
    case 870:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(869);
      END_STATE();
    case 871:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(870);
      END_STATE();
    case 872:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 873:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 874:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 875:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(874);
      END_STATE();
    case 876:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(875);
      END_STATE();
    case 877:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(876);
      END_STATE();
    case 878:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(877);
      END_STATE();
    case 879:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(878);
      END_STATE();
    case 880:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 881:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(880);
      END_STATE();
    case 882:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(881);
      END_STATE();
    case 883:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(882);
      END_STATE();
    case 884:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(883);
      END_STATE();
    case 885:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(884);
      END_STATE();
    case 886:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 887:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(886);
      END_STATE();
    case 888:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(887);
      END_STATE();
    case 889:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(888);
      END_STATE();
    case 890:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 891:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(890);
      END_STATE();
    case 892:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(891);
      END_STATE();
    case 893:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(892);
      END_STATE();
    case 894:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(893);
      END_STATE();
    case 895:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(894);
      END_STATE();
    case 896:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(895);
      END_STATE();
    case 897:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(896);
      END_STATE();
    case 898:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(897);
      END_STATE();
    case 899:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(898);
      END_STATE();
    case 900:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(899);
      END_STATE();
    case 901:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(900);
      END_STATE();
    case 902:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(901);
      END_STATE();
    case 903:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(902);
      END_STATE();
    case 904:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(903);
      END_STATE();
    case 905:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(904);
      END_STATE();
    case 906:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(905);
      END_STATE();
    case 907:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(906);
      END_STATE();
    case 908:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(907);
      END_STATE();
    case 909:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(908);
      END_STATE();
    case 910:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(909);
      END_STATE();
    case 911:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(910);
      END_STATE();
    case 912:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(911);
      END_STATE();
    case 913:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(912);
      END_STATE();
    case 914:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(913);
      END_STATE();
    case 915:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(914);
      END_STATE();
    case 916:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(915);
      END_STATE();
    case 917:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(916);
      END_STATE();
    case 918:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(917);
      END_STATE();
    case 919:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(918);
      END_STATE();
    case 920:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(919);
      END_STATE();
    case 921:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(920);
      END_STATE();
    case 922:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(921);
      END_STATE();
    case 923:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(922);
      END_STATE();
    case 924:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(923);
      END_STATE();
    case 925:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(924);
      END_STATE();
    case 926:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(925);
      END_STATE();
    case 927:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(926);
      END_STATE();
    case 928:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(927);
      END_STATE();
    case 929:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(928);
      END_STATE();
    case 930:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(929);
      END_STATE();
    case 931:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(930);
      END_STATE();
    case 932:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(931);
      END_STATE();
    case 933:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(932);
      END_STATE();
    case 934:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(933);
      END_STATE();
    case 935:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(934);
      END_STATE();
    case 936:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(935);
      END_STATE();
    case 937:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(936);
      END_STATE();
    case 938:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(937);
      END_STATE();
    case 939:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(938);
      END_STATE();
    case 940:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(939);
      END_STATE();
    case 941:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(940);
      END_STATE();
    case 942:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(941);
      END_STATE();
    case 943:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(942);
      END_STATE();
    case 944:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(943);
      END_STATE();
    case 945:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(944);
      END_STATE();
    case 946:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(945);
      END_STATE();
    case 947:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(946);
      END_STATE();
    case 948:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(947);
      END_STATE();
    case 949:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(948);
      END_STATE();
    case 950:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(949);
      END_STATE();
    case 951:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(950);
      END_STATE();
    case 952:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(951);
      END_STATE();
    case 953:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(952);
      END_STATE();
    case 954:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(953);
      END_STATE();
    case 955:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(954);
      END_STATE();
    case 956:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(955);
      END_STATE();
    case 957:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(956);
      END_STATE();
    case 958:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(957);
      END_STATE();
    case 959:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(958);
      END_STATE();
    case 960:
      if (lookahead == '\n') ADVANCE(2205);
      if (lookahead == '\r') ADVANCE(843);
      if (lookahead == '-') ADVANCE(959);
      END_STATE();
    case 961:
      if (lookahead == '\n') ADVANCE(2206);
      END_STATE();
    case 962:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1078);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 963:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(962);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 964:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(963);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 965:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(964);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 966:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(965);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 967:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(966);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 968:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(967);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 969:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 970:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(969);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 971:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 972:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 973:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 974:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(973);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 975:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 976:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(975);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 977:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(976);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 978:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(977);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 979:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(978);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 980:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(979);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 981:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 982:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(981);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 983:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(982);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 984:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(983);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 985:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 986:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(985);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 987:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(986);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 988:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(987);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 989:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 990:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 991:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(990);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 992:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(991);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 993:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 994:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 995:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 996:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(995);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 997:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 998:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(997);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 999:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(998);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1000:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(999);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1001:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1002:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1003:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1004:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1005:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1004);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1006:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1005);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1007:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1006);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1008:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1009:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1010:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1011:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1010);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1012:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1011);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1013:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1014:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1015:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1014);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1016:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1017:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1018:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1019:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1018);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1020:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1021:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1022:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1023:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1022);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1024:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1023);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1025:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1026:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1025);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1027:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1028:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1027);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1029:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1028);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1030:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1029);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1031:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1032:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1031);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1033:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1032);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1034:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1035:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1034);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1036:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1035);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1037:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1036);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1038:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1037);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1039:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1038);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1040:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1039);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1041:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1040);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1042:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1043:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1042);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1044:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1043);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1045:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1044);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1046:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1045);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1047:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1046);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1048:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1047);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1049:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1048);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1050:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1049);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1051:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1050);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1052:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1051);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1053:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1052);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1054:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1053);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1055:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1054);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1056:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1055);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1057:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1056);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1058:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1057);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1059:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1058);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1060:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1059);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1061:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1060);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1062:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1061);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1063:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1062);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1064:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1063);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1065:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1064);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1066:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1065);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1067:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1066);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1068:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1069:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1068);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1070:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1069);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1071:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1072:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1071);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1073:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1072);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1074:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1073);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1075:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1074);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1076:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1077:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead == '-') ADVANCE(1076);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1078:
      if (lookahead == '\n') ADVANCE(2206);
      if (lookahead == '\r') ADVANCE(961);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1079:
      ADVANCE_MAP(
        '\n', 1105,
        '\r', 1106,
        '!', 2352,
        '$', 832,
        '&', 26,
        '(', 2280,
        '*', 2416,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'O', 2386,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1080,
        0x0b, 1080,
        '\f', 1080,
        ' ', 1080,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2299);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1080:
      ADVANCE_MAP(
        '\n', 1105,
        '\r', 1079,
        '!', 2352,
        '$', 832,
        '&', 26,
        '(', 2280,
        '*', 2416,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'O', 2386,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1080,
        0x0b, 1080,
        '\f', 1080,
        ' ', 1080,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2299);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1081:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1081,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1081,
        0x0b, 1081,
        '\f', 1081,
        ' ', 1081,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1082:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1081,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1081,
        0x0b, 1081,
        '\f', 1081,
        ' ', 1081,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1083:
      ADVANCE_MAP(
        '\n', 2194,
        '\r', 1081,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1081,
        0x0b, 1081,
        '\f', 1081,
        ' ', 1081,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1084:
      ADVANCE_MAP(
        '\n', 2194,
        '\r', 1083,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1081,
        0x0b, 1081,
        '\f', 1081,
        ' ', 1081,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1085:
      ADVANCE_MAP(
        '\n', 2199,
        '\r', 1085,
        '!', 2352,
        '$', 832,
        '&', 26,
        '(', 2280,
        '*', 2416,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'O', 2386,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1085,
        0x0b, 1085,
        '\f', 1085,
        ' ', 1085,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1086:
      ADVANCE_MAP(
        '\n', 2203,
        '\r', 1086,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1086,
        0x0b, 1086,
        '\f', 1086,
        ' ', 1086,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1087:
      ADVANCE_MAP(
        '\n', 2203,
        '\r', 1086,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1086,
        0x0b, 1086,
        '\f', 1086,
        ' ', 1086,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1088:
      ADVANCE_MAP(
        '\n', 2200,
        '\r', 1088,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1088,
        0x0b, 1088,
        '\f', 1088,
        ' ', 1088,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1089:
      ADVANCE_MAP(
        '\n', 2200,
        '\r', 1088,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1088,
        0x0b, 1088,
        '\f', 1088,
        ' ', 1088,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1090:
      ADVANCE_MAP(
        '\n', 2201,
        '\r', 1090,
        '!', 2352,
        '$', 832,
        '&', 10,
        '(', 2280,
        '0', 834,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'p', 791,
        '{', 2283,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2e40, 2347,
        'O', 34,
        'o', 34,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1090,
        0x0b, 1090,
        '\f', 1090,
        ' ', 1090,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1091:
      ADVANCE_MAP(
        '\n', 2202,
        '\r', 1091,
        '!', 2363,
        '$', 2184,
        '&', 1137,
        '(', 2279,
        ')', 2281,
        '0', 1152,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        'e', 2303,
        'p', 2130,
        '{', 2282,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2e40, 2361,
        'O', 1153,
        'o', 1153,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1091,
        0x0b, 1091,
        '\f', 1091,
        ' ', 1091,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1092:
      ADVANCE_MAP(
        '\n', 2202,
        '\r', 1091,
        '!', 2363,
        '$', 2184,
        '&', 1137,
        '(', 2279,
        ')', 2281,
        '0', 1152,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        'e', 2303,
        'p', 2130,
        '{', 2282,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2e40, 2361,
        'O', 1153,
        'o', 1153,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1091,
        0x0b, 1091,
        '\f', 1091,
        ' ', 1091,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1093:
      ADVANCE_MAP(
        '\n', 2195,
        '\r', 1086,
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
        '\t', 1086,
        0x0b, 1086,
        '\f', 1086,
        ' ', 1086,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1094:
      if (lookahead == ' ') ADVANCE(1305);
      END_STATE();
    case 1095:
      if (lookahead == ' ') ADVANCE(1154);
      END_STATE();
    case 1096:
      if (lookahead == ' ') ADVANCE(1167);
      END_STATE();
    case 1097:
      if (lookahead == ' ') SKIP(1097);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2239);
      if (lookahead != 0) ADVANCE(2240);
      END_STATE();
    case 1098:
      if (lookahead == ' ') ADVANCE(2181);
      END_STATE();
    case 1099:
      if (lookahead == ' ') ADVANCE(1452);
      END_STATE();
    case 1100:
      if (lookahead == ' ') ADVANCE(1327);
      END_STATE();
    case 1101:
      if (lookahead == ' ') ADVANCE(1435);
      END_STATE();
    case 1102:
      if (lookahead == ' ') ADVANCE(1169);
      END_STATE();
    case 1103:
      ADVANCE_MAP(
        '!', 2352,
        '$', 832,
        '&', 10,
        '(', 2280,
        '-', 2348,
        '0', 834,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'p', 791,
        '{', 2283,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2e40, 2347,
        '\n', 1104,
        '\r', 1104,
        'O', 34,
        'o', 34,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 840,
        0x0b, 840,
        '\f', 840,
        ' ', 840,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1104:
      ADVANCE_MAP(
        '!', 2352,
        '$', 832,
        '&', 10,
        '(', 2280,
        '0', 834,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'p', 791,
        '{', 2283,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2e40, 2347,
        '\n', 1104,
        '\r', 1104,
        'O', 34,
        'o', 34,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 840,
        0x0b, 840,
        '\f', 840,
        ' ', 840,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1105:
      ADVANCE_MAP(
        '!', 2352,
        '$', 832,
        '&', 26,
        '(', 2280,
        '*', 2416,
        '-', 2348,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'O', 2386,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        '\n', 1106,
        '\r', 1106,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1080,
        0x0b, 1080,
        '\f', 1080,
        ' ', 1080,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2299);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1106:
      ADVANCE_MAP(
        '!', 2352,
        '$', 832,
        '&', 26,
        '(', 2280,
        '*', 2416,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'N', 2312,
        'O', 2386,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        '\n', 1106,
        '\r', 1106,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1080,
        0x0b, 1080,
        '\f', 1080,
        ' ', 1080,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2299);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 1107:
      ADVANCE_MAP(
        '!', 2363,
        '#', 2339,
        '$', 2184,
        '&', 1135,
        '(', 2279,
        ')', 2281,
        '0', 1152,
        ';', 2196,
        '<', 1783,
        '=', 2319,
        '?', 2363,
        '@', 2327,
        'P', 2322,
        'R', 2308,
        'T', 1789,
        'e', 2303,
        'p', 2130,
        '{', 2282,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2e40, 2361,
        'O', 1153,
        'o', 1153,
        'Z', 2180,
        'z', 2180,
        '+', 2343,
        0x16ed, 2343,
        0x2795, 2343,
        ':', 2315,
        'X', 2315,
        'x', 2315,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2331);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2305);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1108:
      ADVANCE_MAP(
        '!', 2363,
        '#', 2339,
        '$', 2184,
        '&', 1140,
        '(', 2279,
        ')', 2281,
        '0', 1152,
        ';', 2196,
        '<', 1783,
        '=', 2319,
        '?', 2363,
        '@', 2327,
        'P', 2322,
        'R', 2308,
        'T', 1789,
        'e', 2303,
        'p', 2130,
        '{', 2282,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2e40, 2361,
        'O', 1153,
        'o', 1153,
        'Z', 2180,
        'z', 2180,
        '+', 2343,
        0x16ed, 2343,
        0x2795, 2343,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2305);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1109:
      ADVANCE_MAP(
        '!', 2363,
        '#', 2339,
        '$', 2184,
        '&', 1143,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 2343,
        0x16ed, 2343,
        0x2795, 2343,
        ':', 2315,
        'X', 2315,
        'x', 2315,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1112);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1110:
      ADVANCE_MAP(
        '!', 2363,
        '#', 2339,
        '$', 2184,
        '&', 1143,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2319,
        '?', 2363,
        '@', 2327,
        'O', 2388,
        'P', 2322,
        'R', 2308,
        'T', 1789,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 2343,
        0x16ed, 2343,
        0x2795, 2343,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1112);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2305);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1111:
      ADVANCE_MAP(
        '!', 2363,
        '#', 2339,
        '$', 2184,
        '&', 1147,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2319,
        '?', 2363,
        '@', 2327,
        'O', 2388,
        'P', 2322,
        'R', 2308,
        'T', 1789,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 2343,
        0x16ed, 2343,
        0x2795, 2343,
        ':', 2315,
        'X', 2315,
        'x', 2315,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1112);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2331);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2305);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1112:
      ADVANCE_MAP(
        '!', 2363,
        '$', 2184,
        '&', 1125,
        '(', 2279,
        '*', 2415,
        '0', 2393,
        '1', 2367,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'O', 2388,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        'e', 2303,
        'o', 2397,
        'p', 2130,
        '{', 2282,
        0xbd, 2411,
        0x66d, 2431,
        0x204e, 2427,
        0x2217, 2419,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2e40, 2361,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1112);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1113:
      ADVANCE_MAP(
        '!', 2363,
        '$', 2184,
        '&', 1137,
        '(', 2279,
        ')', 2281,
        '0', 1152,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        'e', 2303,
        'p', 2130,
        '{', 2282,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2e40, 2361,
        'O', 1153,
        'o', 1153,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1114:
      ADVANCE_MAP(
        '!', 2363,
        '$', 2184,
        '&', 1138,
        '(', 2279,
        ')', 2281,
        '0', 1152,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'N', 2314,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'p', 2130,
        '{', 2282,
        0xbd, 2409,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2e40, 2361,
        'O', 1153,
        'o', 1153,
        'Z', 2180,
        'z', 2180,
        '+', 1159,
        0x16ed, 1159,
        0x2795, 1159,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1114);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 1115:
      ADVANCE_MAP(
        '"', 2211,
        '&', 2241,
        ']', 2210,
        0x2ba, 2231,
        0x2dd, 2229,
        0x2ee, 2235,
        0x2f6, 2233,
        0x5f2, 2237,
        0x5f4, 2227,
        0x201c, 2215,
        0x201d, 2217,
        0x201f, 2219,
        0x2033, 2221,
        0x2036, 2223,
        0x3003, 2225,
        0xff02, 2213,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1117);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2242);
      if (lookahead != 0) ADVANCE(2278);
      END_STATE();
    case 1116:
      ADVANCE_MAP(
        '"', 2211,
        '&', 2241,
        0x2ba, 2231,
        0x2dd, 2229,
        0x2ee, 2235,
        0x2f6, 2233,
        0x5f2, 2237,
        0x5f4, 2227,
        0x201c, 2215,
        0x201d, 2217,
        0x201f, 2219,
        0x2033, 2221,
        0x2036, 2223,
        0x3003, 2225,
        0xff02, 2213,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1118);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2243);
      if (lookahead != 0) ADVANCE(2278);
      END_STATE();
    case 1117:
      ADVANCE_MAP(
        '"', 2211,
        '&', 1131,
        ']', 2209,
        0x2ba, 2231,
        0x2dd, 2229,
        0x2ee, 2235,
        0x2f6, 2233,
        0x5f2, 2237,
        0x5f4, 2227,
        0x201c, 2215,
        0x201d, 2217,
        0x201f, 2219,
        0x2033, 2221,
        0x2036, 2223,
        0x3003, 2225,
        0xff02, 2213,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1117);
      END_STATE();
    case 1118:
      ADVANCE_MAP(
        '"', 2211,
        '&', 1131,
        0x2ba, 2231,
        0x2dd, 2229,
        0x2ee, 2235,
        0x2f6, 2233,
        0x5f2, 2237,
        0x5f4, 2227,
        0x201c, 2215,
        0x201d, 2217,
        0x201f, 2219,
        0x2033, 2221,
        0x2036, 2223,
        0x3003, 2225,
        0xff02, 2213,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1118);
      END_STATE();
    case 1119:
      ADVANCE_MAP(
        '#', 1304,
        'a', 2043,
        'd', 1798,
        'f', 2030,
        'h', 1799,
        'l', 1994,
        'm', 1844,
        'n', 1843,
        'p', 1942,
        's', 1998,
      );
      END_STATE();
    case 1120:
      if (lookahead == '#') ADVANCE(1315);
      if (lookahead == 'd') ADVANCE(1818);
      if (lookahead == 'h') ADVANCE(2121);
      if (lookahead == 'm') ADVANCE(1847);
      if (lookahead == 'n') ADVANCE(1846);
      END_STATE();
    case 1121:
      if (lookahead == '#') ADVANCE(1344);
      if (lookahead == 'p') ADVANCE(1964);
      END_STATE();
    case 1122:
      ADVANCE_MAP(
        '#', 1382,
        'a', 2043,
        'd', 1821,
        'f', 2030,
        'h', 1800,
        'l', 1994,
        'm', 1856,
        'n', 1857,
        's', 1998,
      );
      END_STATE();
    case 1123:
      if (lookahead == '#') ADVANCE(1324);
      if (lookahead == 'f') ADVANCE(2041);
      if (lookahead == 'h') ADVANCE(1819);
      END_STATE();
    case 1124:
      if (lookahead == '#') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(2027);
      END_STATE();
    case 1125:
      ADVANCE_MAP(
        '#', 1308,
        'D', 1879,
        'L', 1807,
        'M', 1937,
        'P', 1957,
        'R', 1808,
        'S', 1905,
        'U', 2008,
        'a', 2043,
        'b', 1935,
        'c', 1934,
        'd', 1827,
        'e', 2025,
        'f', 2030,
        'h', 1794,
        'i', 1967,
        'l', 1868,
        'm', 1809,
        'n', 1796,
        'p', 1871,
        'q', 2095,
        'r', 1802,
        's', 1946,
        'u', 1803,
        'x', 1995,
      );
      END_STATE();
    case 1126:
      if (lookahead == '#') ADVANCE(1332);
      if (lookahead == 'd') ADVANCE(1829);
      if (lookahead == 'h') ADVANCE(2126);
      if (lookahead == 'm') ADVANCE(1863);
      if (lookahead == 'n') ADVANCE(1862);
      if (lookahead == 'p') ADVANCE(1965);
      if (lookahead == 's') ADVANCE(2005);
      END_STATE();
    case 1127:
      if (lookahead == '#') ADVANCE(1658);
      if (lookahead == 'i') ADVANCE(1993);
      END_STATE();
    case 1128:
      if (lookahead == '#') ADVANCE(1552);
      if (lookahead == 'e') ADVANCE(2120);
      if (lookahead == 'q') ADVANCE(2117);
      END_STATE();
    case 1129:
      if (lookahead == '#') ADVANCE(1633);
      if (lookahead == 'e') ADVANCE(2027);
      END_STATE();
    case 1130:
      if (lookahead == '#') ADVANCE(1408);
      if (lookahead == 'e') ADVANCE(2027);
      if (lookahead == 's') ADVANCE(2003);
      END_STATE();
    case 1131:
      if (lookahead == '#') ADVANCE(1322);
      END_STATE();
    case 1132:
      if (lookahead == '#') ADVANCE(1328);
      if (lookahead == 's') ADVANCE(2001);
      END_STATE();
    case 1133:
      ADVANCE_MAP(
        '#', 1311,
        'D', 1879,
        'L', 1807,
        'M', 1937,
        'P', 1957,
        'R', 1808,
        'S', 1905,
        'U', 2008,
        'b', 1935,
        'c', 1934,
        'd', 1827,
        'e', 2025,
        'f', 2042,
        'h', 1817,
        'i', 1967,
        'l', 1869,
        'm', 1810,
        'n', 1796,
        'p', 1872,
        'q', 2095,
        'r', 1802,
        's', 1946,
        'u', 1803,
        'x', 1995,
      );
      END_STATE();
    case 1134:
      if (lookahead == '#') ADVANCE(1329);
      if (lookahead == 'd') ADVANCE(1828);
      if (lookahead == 'h') ADVANCE(2125);
      if (lookahead == 'm') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(1860);
      if (lookahead == 's') ADVANCE(2004);
      END_STATE();
    case 1135:
      ADVANCE_MAP(
        '#', 1313,
        'D', 1879,
        'L', 1807,
        'M', 1937,
        'P', 1957,
        'R', 1808,
        'S', 1905,
        'U', 2008,
        'b', 1935,
        'c', 1934,
        'd', 1832,
        'e', 2025,
        'h', 1805,
        'i', 1967,
        'l', 1869,
        'm', 1812,
        'n', 1797,
        'p', 1872,
        'q', 2095,
        'r', 1802,
        's', 1946,
        'u', 1803,
        'x', 1995,
      );
      END_STATE();
    case 1136:
      ADVANCE_MAP(
        '#', 1312,
        'a', 2043,
        'd', 1821,
        'f', 2030,
        'h', 1800,
        'l', 1994,
        'm', 1856,
        'n', 1857,
        's', 1998,
      );
      END_STATE();
    case 1137:
      ADVANCE_MAP(
        '#', 1420,
        'D', 1879,
        'L', 1807,
        'M', 1937,
        'P', 1957,
        'R', 1808,
        'S', 1905,
        'U', 2008,
        'b', 1935,
        'c', 1934,
        'd', 1827,
        'e', 2025,
        'h', 1804,
        'i', 1967,
        'l', 1869,
        'm', 1810,
        'n', 1796,
        'p', 1871,
        'q', 2095,
        'r', 1802,
        's', 1946,
        'u', 1803,
        'x', 1995,
      );
      END_STATE();
    case 1138:
      ADVANCE_MAP(
        '#', 1419,
        'D', 1879,
        'L', 1807,
        'M', 1937,
        'P', 1957,
        'R', 1808,
        'S', 1905,
        'U', 2008,
        'b', 1935,
        'c', 1934,
        'd', 1827,
        'e', 2025,
        'f', 2042,
        'h', 1817,
        'i', 1967,
        'l', 1869,
        'm', 1810,
        'n', 1796,
        'p', 1871,
        'q', 2095,
        'r', 1802,
        's', 1946,
        'u', 1803,
        'x', 1995,
      );
      END_STATE();
    case 1139:
      if (lookahead == '#') ADVANCE(1410);
      if (lookahead == 'd') ADVANCE(1830);
      if (lookahead == 'h') ADVANCE(2127);
      if (lookahead == 'm') ADVANCE(1865);
      if (lookahead == 'n') ADVANCE(1864);
      if (lookahead == 's') ADVANCE(2006);
      END_STATE();
    case 1140:
      ADVANCE_MAP(
        '#', 1422,
        'D', 1879,
        'L', 1807,
        'M', 1937,
        'P', 1957,
        'R', 1808,
        'S', 1905,
        'U', 2008,
        'b', 1935,
        'c', 1934,
        'd', 1827,
        'e', 2025,
        'h', 1804,
        'i', 1967,
        'l', 1869,
        'm', 1810,
        'n', 1796,
        'p', 1872,
        'q', 2095,
        'r', 1802,
        's', 1946,
        'u', 1803,
        'x', 1995,
      );
      END_STATE();
    case 1141:
      if (lookahead == '#') ADVANCE(1407);
      if (lookahead == 'd') ADVANCE(1822);
      if (lookahead == 'h') ADVANCE(2122);
      if (lookahead == 'm') ADVANCE(1853);
      if (lookahead == 'n') ADVANCE(1852);
      END_STATE();
    case 1142:
      if (lookahead == '#') ADVANCE(1412);
      if (lookahead == 'p') ADVANCE(1965);
      END_STATE();
    case 1143:
      ADVANCE_MAP(
        '#', 1418,
        'D', 1879,
        'L', 1807,
        'M', 1937,
        'P', 1957,
        'R', 1808,
        'S', 1905,
        'U', 2008,
        'a', 2043,
        'b', 1935,
        'c', 1934,
        'd', 1827,
        'e', 2025,
        'f', 2030,
        'h', 1794,
        'i', 1967,
        'l', 1868,
        'm', 1809,
        'n', 1796,
        'p', 1872,
        'q', 2095,
        'r', 1802,
        's', 1946,
        'u', 1803,
        'x', 1995,
      );
      END_STATE();
    case 1144:
      if (lookahead == '#') ADVANCE(1411);
      if (lookahead == 'd') ADVANCE(1828);
      if (lookahead == 'h') ADVANCE(2125);
      if (lookahead == 'm') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(1860);
      if (lookahead == 'p') ADVANCE(1964);
      if (lookahead == 's') ADVANCE(2004);
      END_STATE();
    case 1145:
      if (lookahead == '#') ADVANCE(1409);
      if (lookahead == 's') ADVANCE(2003);
      END_STATE();
    case 1146:
      if (lookahead == '#') ADVANCE(1413);
      if (lookahead == 'd') ADVANCE(1823);
      if (lookahead == 'h') ADVANCE(2123);
      if (lookahead == 'm') ADVANCE(1855);
      if (lookahead == 'n') ADVANCE(1854);
      END_STATE();
    case 1147:
      ADVANCE_MAP(
        '#', 1421,
        'D', 1879,
        'L', 1807,
        'M', 1937,
        'P', 1957,
        'R', 1808,
        'S', 1905,
        'U', 2008,
        'a', 2043,
        'b', 1935,
        'c', 1934,
        'd', 1832,
        'e', 2025,
        'f', 2030,
        'h', 1795,
        'i', 1967,
        'l', 1868,
        'm', 1811,
        'n', 1797,
        'p', 1872,
        'q', 2095,
        'r', 1802,
        's', 1946,
        'u', 1803,
        'x', 1995,
      );
      END_STATE();
    case 1148:
      if (lookahead == '#') ADVANCE(1414);
      if (lookahead == 's') ADVANCE(2007);
      END_STATE();
    case 1149:
      if (lookahead == '#') ADVANCE(1415);
      if (lookahead == 'd') ADVANCE(1826);
      if (lookahead == 'h') ADVANCE(2124);
      if (lookahead == 'm') ADVANCE(1859);
      if (lookahead == 'n') ADVANCE(1858);
      END_STATE();
    case 1150:
      if (lookahead == '#') ADVANCE(1416);
      if (lookahead == 'd') ADVANCE(1828);
      if (lookahead == 'h') ADVANCE(2125);
      if (lookahead == 'm') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(1860);
      END_STATE();
    case 1151:
      if (lookahead == '#') ADVANCE(1417);
      if (lookahead == 'd') ADVANCE(1831);
      if (lookahead == 'h') ADVANCE(2128);
      if (lookahead == 'm') ADVANCE(1867);
      if (lookahead == 'n') ADVANCE(1866);
      END_STATE();
    case 1152:
      if (lookahead == '&') ADVANCE(1120);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2296);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2178);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      END_STATE();
    case 1153:
      if (lookahead == '&') ADVANCE(1120);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2178);
      END_STATE();
    case 1154:
      if (lookahead == '&') ADVANCE(1123);
      if (lookahead == 0xbd) ADVANCE(2441);
      END_STATE();
    case 1155:
      if (lookahead == '&') ADVANCE(1132);
      if (lookahead == '-') ADVANCE(1172);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1156);
      END_STATE();
    case 1156:
      if (lookahead == '&') ADVANCE(1132);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1156);
      END_STATE();
    case 1157:
      if (lookahead == '&') ADVANCE(1124);
      if (lookahead == '-') ADVANCE(1172);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1158);
      END_STATE();
    case 1158:
      if (lookahead == '&') ADVANCE(1124);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1158);
      END_STATE();
    case 1159:
      if (lookahead == '&') ADVANCE(1134);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1168);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2344);
      END_STATE();
    case 1160:
      if (lookahead == '&') ADVANCE(1127);
      if (lookahead == 0x221e) ADVANCE(2344);
      END_STATE();
    case 1161:
      ADVANCE_MAP(
        '&', 1136,
        '*', 2415,
        '-', 2369,
        '/', 2398,
        '0', 2391,
        '1', 2368,
        '2', 2408,
        'O', 2387,
        'o', 2396,
        0xbd, 2411,
        0x66d, 2431,
        0x2010, 2373,
        0x2011, 2375,
        0x2012, 2377,
        0x2013, 2379,
        0x2014, 2381,
        0x2044, 2402,
        0x204e, 2427,
        0x2212, 2371,
        0x2215, 2400,
        0x2217, 2419,
        0x2731, 2423,
        0x2796, 2383,
        0x27cb, 2404,
        0x29f8, 2406,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1161);
      END_STATE();
    case 1162:
      if (lookahead == '&') ADVANCE(1129);
      END_STATE();
    case 1163:
      if (lookahead == '&') ADVANCE(1139);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1099);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1098);
      END_STATE();
    case 1164:
      if (lookahead == '&') ADVANCE(1141);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1094);
      END_STATE();
    case 1165:
      if (lookahead == '&') ADVANCE(1142);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2344);
      END_STATE();
    case 1166:
      if (lookahead == '&') ADVANCE(1146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1095);
      END_STATE();
    case 1167:
      if (lookahead == '&') ADVANCE(1148);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1101);
      END_STATE();
    case 1168:
      if (lookahead == '&') ADVANCE(1150);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2344);
      END_STATE();
    case 1169:
      if (lookahead == '&') ADVANCE(1151);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1100);
      END_STATE();
    case 1170:
      if (lookahead == '-') ADVANCE(960);
      END_STATE();
    case 1171:
      if (lookahead == '-') ADVANCE(1170);
      END_STATE();
    case 1172:
      if (lookahead == '-') ADVANCE(1171);
      END_STATE();
    case 1173:
      if (lookahead == '-') ADVANCE(1172);
      END_STATE();
    case 1174:
      if (lookahead == '.') ADVANCE(2344);
      END_STATE();
    case 1175:
      if (lookahead == '0') ADVANCE(1190);
      if (lookahead == '2') ADVANCE(1440);
      if (lookahead == '5') ADVANCE(1425);
      if (lookahead == '6') ADVANCE(1582);
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1176:
      if (lookahead == '0') ADVANCE(1660);
      if (lookahead == '1') ADVANCE(1206);
      if (lookahead == '2') ADVANCE(1219);
      if (lookahead == '4') ADVANCE(1525);
      if (lookahead == '6') ADVANCE(1220);
      if (lookahead == '7') ADVANCE(1221);
      END_STATE();
    case 1177:
      ADVANCE_MAP(
        '0', 1306,
        '2', 1339,
        '7', 1541,
        '9', 2169,
        'A', 1719,
        'a', 1719,
        'B', 1715,
        'b', 1715,
        'D', 1721,
        'd', 1721,
        'E', 2159,
        'e', 2159,
        'F', 1618,
        'f', 1618,
      );
      END_STATE();
    case 1178:
      if (lookahead == '0') ADVANCE(1325);
      END_STATE();
    case 1179:
      if (lookahead == '0') ADVANCE(1180);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '6') ADVANCE(1582);
      if (lookahead == '7') ADVANCE(1646);
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1180:
      if (lookahead == '0') ADVANCE(1270);
      if (lookahead == '1') ADVANCE(1545);
      if (lookahead == '2') ADVANCE(1372);
      if (lookahead == '7') ADVANCE(1594);
      if (lookahead == '8') ADVANCE(1629);
      END_STATE();
    case 1181:
      if (lookahead == '0') ADVANCE(1270);
      if (lookahead == '1') ADVANCE(1549);
      if (lookahead == '2') ADVANCE(1372);
      if (lookahead == '7') ADVANCE(1594);
      if (lookahead == '8') ADVANCE(1629);
      END_STATE();
    case 1182:
      if (lookahead == '0') ADVANCE(1270);
      if (lookahead == '1') ADVANCE(1557);
      if (lookahead == '2') ADVANCE(1372);
      if (lookahead == '7') ADVANCE(1594);
      if (lookahead == '8') ADVANCE(1629);
      END_STATE();
    case 1183:
      if (lookahead == '0') ADVANCE(1625);
      if (lookahead == '1') ADVANCE(1473);
      if (lookahead == '6') ADVANCE(1572);
      if (lookahead == '9') ADVANCE(2160);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1605);
      END_STATE();
    case 1184:
      if (lookahead == '0') ADVANCE(1625);
      if (lookahead == '1') ADVANCE(1474);
      if (lookahead == '6') ADVANCE(1572);
      if (lookahead == '9') ADVANCE(2160);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1605);
      END_STATE();
    case 1185:
      if (lookahead == '0') ADVANCE(1625);
      if (lookahead == '1') ADVANCE(1479);
      if (lookahead == '6') ADVANCE(1572);
      if (lookahead == '9') ADVANCE(2160);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1605);
      END_STATE();
    case 1186:
      if (lookahead == '0') ADVANCE(1625);
      if (lookahead == '1') ADVANCE(1480);
      if (lookahead == '6') ADVANCE(1572);
      if (lookahead == '9') ADVANCE(2160);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1605);
      END_STATE();
    case 1187:
      ADVANCE_MAP(
        '0', 1342,
        '2', 1718,
        'B', 2131,
        'b', 2131,
        'D', 2151,
        'd', 2151,
        'E', 2159,
        'e', 2159,
        'F', 1617,
        'f', 1617,
      );
      END_STATE();
    case 1188:
      if (lookahead == '0') ADVANCE(2389);
      if (lookahead == '@') ADVANCE(2327);
      if (lookahead == 'O') ADVANCE(2385);
      if (lookahead == 'o') ADVANCE(2394);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1189);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(2304);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      END_STATE();
    case 1189:
      if (lookahead == '0') ADVANCE(2389);
      if (lookahead == '@') ADVANCE(2327);
      if (lookahead == 'O') ADVANCE(2385);
      if (lookahead == 'o') ADVANCE(2394);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1189);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      END_STATE();
    case 1190:
      if (lookahead == '0') ADVANCE(1544);
      if (lookahead == '1') ADVANCE(1519);
      if (lookahead == '7') ADVANCE(1581);
      END_STATE();
    case 1191:
      if (lookahead == '0') ADVANCE(1544);
      if (lookahead == '1') ADVANCE(1546);
      if (lookahead == '7') ADVANCE(1581);
      END_STATE();
    case 1192:
      ADVANCE_MAP(
        '0', 1355,
        '1', 1692,
        '2', 1183,
        '3', 1358,
        '5', 1309,
        '6', 1365,
        '7', 1366,
        'A', 1195,
        'a', 1195,
        'B', 1320,
        'b', 1320,
        'D', 1765,
        'd', 1765,
        'E', 1586,
        'e', 1586,
      );
      END_STATE();
    case 1193:
      ADVANCE_MAP(
        '0', 1355,
        '1', 1692,
        '2', 1183,
        '3', 1358,
        '5', 1309,
        '6', 1365,
        '7', 1367,
        'A', 1195,
        'a', 1195,
        'B', 1321,
        'b', 1321,
        'D', 1765,
        'd', 1765,
        'E', 1586,
        'e', 1586,
      );
      END_STATE();
    case 1194:
      if (lookahead == '0') ADVANCE(1233);
      if (lookahead == '7') ADVANCE(1336);
      END_STATE();
    case 1195:
      if (lookahead == '0') ADVANCE(1233);
      if (lookahead == '7') ADVANCE(1336);
      if (lookahead == ';') ADVANCE(2417);
      END_STATE();
    case 1196:
      if (lookahead == '0') ADVANCE(1345);
      END_STATE();
    case 1197:
      if (lookahead == '0') ADVANCE(1214);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '7') ADVANCE(1646);
      END_STATE();
    case 1198:
      if (lookahead == '0') ADVANCE(1214);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '7') ADVANCE(1646);
      if (lookahead == '8') ADVANCE(1700);
      END_STATE();
    case 1199:
      ADVANCE_MAP(
        '0', 1360,
        '2', 1310,
        '7', 1709,
        '9', 2172,
        'D', 1756,
        'd', 1756,
        'F', 1775,
        'f', 1775,
      );
      END_STATE();
    case 1200:
      ADVANCE_MAP(
        '0', 1360,
        '2', 1310,
        '7', 1707,
        '9', 2172,
        'B', 1713,
        'b', 1713,
        'D', 1756,
        'd', 1756,
        'F', 1775,
        'f', 1775,
      );
      END_STATE();
    case 1201:
      if (lookahead == '0') ADVANCE(1323);
      END_STATE();
    case 1202:
      ADVANCE_MAP(
        '0', 1356,
        '1', 1692,
        '2', 1184,
        '3', 1358,
        '5', 1309,
        '6', 1365,
        '7', 1370,
        'A', 1194,
        'a', 1194,
        'B', 1321,
        'b', 1321,
        'D', 1765,
        'd', 1765,
        'E', 1586,
        'e', 1586,
      );
      END_STATE();
    case 1203:
      ADVANCE_MAP(
        '0', 1356,
        '1', 1692,
        '2', 1184,
        '3', 1358,
        '5', 1309,
        '6', 1365,
        '7', 1369,
        'A', 1194,
        'a', 1194,
        'B', 1320,
        'b', 1320,
        'D', 1765,
        'd', 1765,
        'E', 1586,
        'e', 1586,
      );
      END_STATE();
    case 1204:
      if (lookahead == '0') ADVANCE(1383);
      END_STATE();
    case 1205:
      ADVANCE_MAP(
        '0', 1381,
        '2', 1348,
        '7', 1542,
        '9', 2169,
        'A', 1719,
        'a', 1719,
        'D', 1729,
        'd', 1729,
        'F', 1722,
        'f', 1722,
      );
      END_STATE();
    case 1206:
      if (lookahead == '0') ADVANCE(1720);
      if (lookahead == '1') ADVANCE(1720);
      if (lookahead == '2') ADVANCE(1720);
      END_STATE();
    case 1207:
      ADVANCE_MAP(
        '0', 1720,
        '1', 1720,
        '2', 1720,
        '3', 1720,
        '4', 1720,
        'C', 1734,
        'c', 1734,
        'D', 1735,
        'd', 1735,
        'F', 1736,
        'f', 1736,
      );
      END_STATE();
    case 1208:
      if (lookahead == '0') ADVANCE(1261);
      END_STATE();
    case 1209:
      if (lookahead == '0') ADVANCE(1386);
      END_STATE();
    case 1210:
      if (lookahead == '0') ADVANCE(1307);
      if (lookahead == '2') ADVANCE(1347);
      if (lookahead == '7') ADVANCE(1691);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1716);
      END_STATE();
    case 1211:
      if (lookahead == '0') ADVANCE(1461);
      END_STATE();
    case 1212:
      if (lookahead == '0') ADVANCE(1727);
      if (lookahead == '8') ADVANCE(1728);
      END_STATE();
    case 1213:
      if (lookahead == '0') ADVANCE(1269);
      if (lookahead == '1') ADVANCE(1545);
      if (lookahead == '2') ADVANCE(1372);
      if (lookahead == '7') ADVANCE(1594);
      if (lookahead == '8') ADVANCE(1629);
      END_STATE();
    case 1214:
      if (lookahead == '0') ADVANCE(1269);
      if (lookahead == '1') ADVANCE(1549);
      if (lookahead == '2') ADVANCE(1372);
      if (lookahead == '7') ADVANCE(1594);
      if (lookahead == '8') ADVANCE(1629);
      END_STATE();
    case 1215:
      if (lookahead == '0') ADVANCE(1269);
      if (lookahead == '1') ADVANCE(1557);
      if (lookahead == '2') ADVANCE(1372);
      if (lookahead == '7') ADVANCE(1594);
      if (lookahead == '8') ADVANCE(1629);
      END_STATE();
    case 1216:
      if (lookahead == '0') ADVANCE(1716);
      if (lookahead == '1') ADVANCE(1716);
      if (lookahead == '2') ADVANCE(1716);
      END_STATE();
    case 1217:
      if (lookahead == '0') ADVANCE(1716);
      if (lookahead == '1') ADVANCE(1716);
      if (lookahead == '2') ADVANCE(1716);
      if (lookahead == '3') ADVANCE(1716);
      if (lookahead == '4') ADVANCE(1716);
      END_STATE();
    case 1218:
      if (lookahead == '0') ADVANCE(1433);
      if (lookahead == '8') ADVANCE(1586);
      END_STATE();
    case 1219:
      if (lookahead == '0') ADVANCE(1734);
      if (lookahead == '1') ADVANCE(1735);
      if (lookahead == '3') ADVANCE(1736);
      END_STATE();
    case 1220:
      if (lookahead == '0') ADVANCE(1739);
      END_STATE();
    case 1221:
      if (lookahead == '0') ADVANCE(1740);
      END_STATE();
    case 1222:
      if (lookahead == '0') ADVANCE(1717);
      if (lookahead == '1') ADVANCE(1717);
      if (lookahead == '2') ADVANCE(1717);
      END_STATE();
    case 1223:
      if (lookahead == '0') ADVANCE(1717);
      if (lookahead == '1') ADVANCE(1717);
      if (lookahead == '2') ADVANCE(1717);
      if (lookahead == '3') ADVANCE(1717);
      if (lookahead == '4') ADVANCE(1717);
      END_STATE();
    case 1224:
      if (lookahead == '0') ADVANCE(1777);
      if (lookahead == '1') ADVANCE(1777);
      if (lookahead == '2') ADVANCE(1777);
      END_STATE();
    case 1225:
      if (lookahead == '0') ADVANCE(1777);
      if (lookahead == '1') ADVANCE(1777);
      if (lookahead == '2') ADVANCE(1777);
      if (lookahead == '3') ADVANCE(1777);
      if (lookahead == '4') ADVANCE(1777);
      END_STATE();
    case 1226:
      if (lookahead == '0') ADVANCE(1743);
      if (lookahead == '1') ADVANCE(1749);
      if (lookahead == '2') ADVANCE(1750);
      if (lookahead == '3') ADVANCE(1751);
      if (lookahead == '4') ADVANCE(1752);
      END_STATE();
    case 1227:
      ADVANCE_MAP(
        '0', 1743,
        '1', 1749,
        '2', 1750,
        '3', 1751,
        '4', 1752,
        'C', 1734,
        'c', 1734,
        'D', 1735,
        'd', 1735,
        'F', 1736,
        'f', 1736,
      );
      END_STATE();
    case 1228:
      if (lookahead == '0') ADVANCE(1776);
      if (lookahead == '1') ADVANCE(1776);
      if (lookahead == '2') ADVANCE(1776);
      END_STATE();
    case 1229:
      if (lookahead == '0') ADVANCE(1776);
      if (lookahead == '1') ADVANCE(1776);
      if (lookahead == '2') ADVANCE(1776);
      if (lookahead == '3') ADVANCE(1776);
      if (lookahead == '4') ADVANCE(1776);
      END_STATE();
    case 1230:
      if (lookahead == '0') ADVANCE(1750);
      if (lookahead == '1') ADVANCE(1751);
      if (lookahead == '2') ADVANCE(1752);
      END_STATE();
    case 1231:
      if (lookahead == '0') ADVANCE(1755);
      END_STATE();
    case 1232:
      if (lookahead == '0') ADVANCE(1756);
      END_STATE();
    case 1233:
      if (lookahead == '0') ADVANCE(1756);
      if (lookahead == '1') ADVANCE(1756);
      END_STATE();
    case 1234:
      if (lookahead == '0') ADVANCE(1756);
      if (lookahead == '1') ADVANCE(1756);
      if (lookahead == '2') ADVANCE(1756);
      END_STATE();
    case 1235:
      if (lookahead == '0') ADVANCE(1756);
      if (lookahead == '1') ADVANCE(1756);
      if (lookahead == '2') ADVANCE(1756);
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '4') ADVANCE(1756);
      END_STATE();
    case 1236:
      if (lookahead == '0') ADVANCE(1756);
      if (lookahead == '3') ADVANCE(1756);
      END_STATE();
    case 1237:
      if (lookahead == '0') ADVANCE(1765);
      if (lookahead == '1') ADVANCE(1765);
      if (lookahead == '2') ADVANCE(1765);
      END_STATE();
    case 1238:
      if (lookahead == '0') ADVANCE(1765);
      if (lookahead == '1') ADVANCE(1765);
      if (lookahead == '2') ADVANCE(1765);
      if (lookahead == '3') ADVANCE(1765);
      if (lookahead == '4') ADVANCE(1765);
      END_STATE();
    case 1239:
      if (lookahead == '0') ADVANCE(1770);
      if (lookahead == '1') ADVANCE(1778);
      if (lookahead == '3') ADVANCE(1769);
      END_STATE();
    case 1240:
      if (lookahead == '0') ADVANCE(1766);
      END_STATE();
    case 1241:
      if (lookahead == '0') ADVANCE(1775);
      END_STATE();
    case 1242:
      if (lookahead == '0') ADVANCE(1767);
      if (lookahead == '1') ADVANCE(1767);
      if (lookahead == '2') ADVANCE(1767);
      END_STATE();
    case 1243:
      if (lookahead == '0') ADVANCE(1767);
      if (lookahead == '1') ADVANCE(1767);
      if (lookahead == '2') ADVANCE(1767);
      if (lookahead == '3') ADVANCE(1767);
      if (lookahead == '4') ADVANCE(1767);
      END_STATE();
    case 1244:
      if (lookahead == '0') ADVANCE(1768);
      END_STATE();
    case 1245:
      if (lookahead == '0') ADVANCE(1780);
      if (lookahead == '1') ADVANCE(1780);
      if (lookahead == '2') ADVANCE(1780);
      END_STATE();
    case 1246:
      if (lookahead == '0') ADVANCE(1780);
      if (lookahead == '1') ADVANCE(1780);
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '3') ADVANCE(1780);
      if (lookahead == '4') ADVANCE(1780);
      END_STATE();
    case 1247:
      if (lookahead == '0') ADVANCE(1779);
      END_STATE();
    case 1248:
      if (lookahead == '0') ADVANCE(1762);
      END_STATE();
    case 1249:
      if (lookahead == '0') ADVANCE(1773);
      if (lookahead == '1') ADVANCE(1773);
      if (lookahead == '2') ADVANCE(1773);
      END_STATE();
    case 1250:
      if (lookahead == '0') ADVANCE(1773);
      if (lookahead == '1') ADVANCE(1773);
      if (lookahead == '2') ADVANCE(1773);
      if (lookahead == '3') ADVANCE(1773);
      if (lookahead == '4') ADVANCE(1773);
      END_STATE();
    case 1251:
      if (lookahead == '0') ADVANCE(1191);
      if (lookahead == '2') ADVANCE(1440);
      if (lookahead == '5') ADVANCE(1425);
      if (lookahead == '6') ADVANCE(1582);
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1252:
      if (lookahead == '0') ADVANCE(1191);
      if (lookahead == '6') ADVANCE(1582);
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1253:
      if (lookahead == '0') ADVANCE(1663);
      if (lookahead == '1') ADVANCE(1216);
      END_STATE();
    case 1254:
      if (lookahead == '0') ADVANCE(1341);
      if (lookahead == '2') ADVANCE(1352);
      if (lookahead == '7') ADVANCE(1702);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1717);
      END_STATE();
    case 1255:
      if (lookahead == '0') ADVANCE(1781);
      if (lookahead == '1') ADVANCE(1781);
      if (lookahead == '2') ADVANCE(1781);
      END_STATE();
    case 1256:
      if (lookahead == '0') ADVANCE(1781);
      if (lookahead == '1') ADVANCE(1781);
      if (lookahead == '2') ADVANCE(1781);
      if (lookahead == '3') ADVANCE(1781);
      if (lookahead == '4') ADVANCE(1781);
      END_STATE();
    case 1257:
      if (lookahead == '0') ADVANCE(1782);
      END_STATE();
    case 1258:
      if (lookahead == '0') ADVANCE(1666);
      if (lookahead == '1') ADVANCE(1230);
      if (lookahead == '2') ADVANCE(1219);
      if (lookahead == '4') ADVANCE(1525);
      if (lookahead == '6') ADVANCE(1220);
      if (lookahead == '7') ADVANCE(1221);
      END_STATE();
    case 1259:
      if (lookahead == '0') ADVANCE(1666);
      if (lookahead == '1') ADVANCE(1230);
      if (lookahead == '6') ADVANCE(1220);
      if (lookahead == '7') ADVANCE(1221);
      END_STATE();
    case 1260:
      if (lookahead == '0') ADVANCE(1350);
      if (lookahead == '2') ADVANCE(1354);
      if (lookahead == '7') ADVANCE(1704);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1777);
      END_STATE();
    case 1261:
      if (lookahead == '0') ADVANCE(1527);
      END_STATE();
    case 1262:
      if (lookahead == '0') ADVANCE(1664);
      if (lookahead == '1') ADVANCE(1222);
      END_STATE();
    case 1263:
      if (lookahead == '0') ADVANCE(1353);
      if (lookahead == '2') ADVANCE(1357);
      if (lookahead == '7') ADVANCE(1705);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1776);
      END_STATE();
    case 1264:
      if (lookahead == '0') ADVANCE(1665);
      if (lookahead == '1') ADVANCE(1224);
      END_STATE();
    case 1265:
      if (lookahead == '0') ADVANCE(1359);
      if (lookahead == '2') ADVANCE(1364);
      if (lookahead == '7') ADVANCE(1708);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1756);
      END_STATE();
    case 1266:
      if (lookahead == '0') ADVANCE(1668);
      if (lookahead == '1') ADVANCE(1228);
      END_STATE();
    case 1267:
      if (lookahead == '0') ADVANCE(1671);
      if (lookahead == '1') ADVANCE(1237);
      if (lookahead == '5') ADVANCE(1466);
      if (lookahead == '6') ADVANCE(1530);
      END_STATE();
    case 1268:
      if (lookahead == '0') ADVANCE(1671);
      if (lookahead == '1') ADVANCE(1237);
      if (lookahead == '5') ADVANCE(1466);
      if (lookahead == '6') ADVANCE(1530);
      if (lookahead == '7') ADVANCE(1221);
      END_STATE();
    case 1269:
      if (lookahead == '0') ADVANCE(1605);
      END_STATE();
    case 1270:
      if (lookahead == '0') ADVANCE(1605);
      if (lookahead == '3') ADVANCE(1526);
      END_STATE();
    case 1271:
      if (lookahead == '0') ADVANCE(1670);
      if (lookahead == '1') ADVANCE(1234);
      END_STATE();
    case 1272:
      if (lookahead == '0') ADVANCE(1670);
      if (lookahead == '1') ADVANCE(1234);
      if (lookahead == '6') ADVANCE(1241);
      END_STATE();
    case 1273:
      if (lookahead == '0') ADVANCE(1674);
      if (lookahead == '1') ADVANCE(1242);
      if (lookahead == '6') ADVANCE(1244);
      END_STATE();
    case 1274:
      if (lookahead == '0') ADVANCE(1572);
      if (lookahead == '6') ADVANCE(1470);
      END_STATE();
    case 1275:
      if (lookahead == '0') ADVANCE(1676);
      if (lookahead == '1') ADVANCE(1245);
      if (lookahead == '6') ADVANCE(1247);
      END_STATE();
    case 1276:
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1255);
      END_STATE();
    case 1277:
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1249);
      if (lookahead == '5') ADVANCE(1466);
      if (lookahead == '6') ADVANCE(1530);
      END_STATE();
    case 1278:
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1249);
      if (lookahead == '5') ADVANCE(1466);
      if (lookahead == '6') ADVANCE(1530);
      if (lookahead == '7') ADVANCE(1221);
      END_STATE();
    case 1279:
      ADVANCE_MAP(
        '0', 1340,
        '2', 1349,
        '7', 1542,
        '9', 2169,
        'A', 1719,
        'a', 1719,
        'B', 2131,
        'b', 2131,
        'D', 1730,
        'd', 1730,
        'E', 2159,
        'e', 2159,
        'F', 1618,
        'f', 1618,
      );
      END_STATE();
    case 1280:
      ADVANCE_MAP(
        '0', 1378,
        '1', 1692,
        '2', 1185,
        '3', 1358,
        '5', 1309,
        '6', 1365,
        '7', 1368,
        'A', 1195,
        'a', 1195,
        'B', 1321,
        'b', 1321,
        'D', 1773,
        'd', 1773,
        'E', 1586,
        'e', 1586,
      );
      END_STATE();
    case 1281:
      ADVANCE_MAP(
        '0', 1363,
        '2', 1343,
        '7', 1703,
        '9', 2173,
        'B', 1756,
        'b', 1756,
        'D', 1767,
        'd', 1767,
        'F', 1768,
        'f', 1768,
      );
      END_STATE();
    case 1282:
      if (lookahead == '0') ADVANCE(1588);
      if (lookahead == '2') ADVANCE(1362);
      if (lookahead == '7') ADVANCE(2146);
      if (lookahead == '9') ADVANCE(2170);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1755);
      END_STATE();
    case 1283:
      if (lookahead == '0') ADVANCE(1387);
      END_STATE();
    case 1284:
      ADVANCE_MAP(
        '0', 1379,
        '1', 1692,
        '2', 1186,
        '3', 1358,
        '5', 1309,
        '6', 1365,
        '7', 1371,
        'A', 1194,
        'a', 1194,
        'B', 1321,
        'b', 1321,
        'D', 1773,
        'd', 1773,
        'E', 1586,
        'e', 1586,
      );
      END_STATE();
    case 1285:
      if (lookahead == '0') ADVANCE(1376);
      if (lookahead == '2') ADVANCE(1374);
      if (lookahead == '7') ADVANCE(1712);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1781);
      END_STATE();
    case 1286:
      ADVANCE_MAP(
        '0', 1373,
        '2', 1351,
        '7', 1710,
        '9', 2174,
        'D', 1780,
        'd', 1780,
        'F', 1779,
        'f', 1779,
      );
      END_STATE();
    case 1287:
      if (lookahead == '0') ADVANCE(1589);
      if (lookahead == '2') ADVANCE(1375);
      if (lookahead == '7') ADVANCE(2147);
      if (lookahead == '9') ADVANCE(2171);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1766);
      END_STATE();
    case 1288:
      if (lookahead == '0') ADVANCE(1395);
      END_STATE();
    case 1289:
      if (lookahead == '0') ADVANCE(1399);
      END_STATE();
    case 1290:
      if (lookahead == '0') ADVANCE(1405);
      END_STATE();
    case 1291:
      if (lookahead == '0') ADVANCE(1406);
      END_STATE();
    case 1292:
      if (lookahead == '0') ADVANCE(1593);
      if (lookahead == '2') ADVANCE(1380);
      if (lookahead == '7') ADVANCE(2148);
      if (lookahead == '9') ADVANCE(2175);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1782);
      END_STATE();
    case 1293:
      if (lookahead == '0') ADVANCE(1388);
      END_STATE();
    case 1294:
      if (lookahead == '0') ADVANCE(1181);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '6') ADVANCE(1582);
      if (lookahead == '7') ADVANCE(1646);
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1295:
      if (lookahead == '0') ADVANCE(1389);
      END_STATE();
    case 1296:
      if (lookahead == '0') ADVANCE(1213);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '7') ADVANCE(1646);
      END_STATE();
    case 1297:
      if (lookahead == '0') ADVANCE(1213);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '7') ADVANCE(1646);
      if (lookahead == '8') ADVANCE(1700);
      END_STATE();
    case 1298:
      if (lookahead == '0') ADVANCE(1390);
      END_STATE();
    case 1299:
      if (lookahead == '0') ADVANCE(1394);
      END_STATE();
    case 1300:
      if (lookahead == '0') ADVANCE(1396);
      END_STATE();
    case 1301:
      if (lookahead == '0') ADVANCE(1182);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '6') ADVANCE(1582);
      if (lookahead == '7') ADVANCE(1646);
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1302:
      if (lookahead == '0') ADVANCE(1215);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '7') ADVANCE(1646);
      END_STATE();
    case 1303:
      if (lookahead == '1') ADVANCE(2365);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1303);
      END_STATE();
    case 1304:
      ADVANCE_MAP(
        '1', 1175,
        '3', 1562,
        '4', 1441,
        '5', 1657,
        '6', 1595,
        '7', 1518,
        '8', 1424,
        'X', 1314,
        'x', 1314,
      );
      END_STATE();
    case 1305:
      if (lookahead == '1') ADVANCE(2437);
      END_STATE();
    case 1306:
      if (lookahead == '1') ADVANCE(1207);
      if (lookahead == '3') ADVANCE(1525);
      if (lookahead == '4') ADVANCE(1565);
      END_STATE();
    case 1307:
      if (lookahead == '1') ADVANCE(1217);
      END_STATE();
    case 1308:
      ADVANCE_MAP(
        '1', 1179,
        '3', 1533,
        '4', 1442,
        '5', 1686,
        '6', 1239,
        '8', 1430,
        '9', 1563,
        'X', 1391,
        'x', 1391,
      );
      END_STATE();
    case 1309:
      if (lookahead == '1') ADVANCE(1574);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1335);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2136);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2133);
      END_STATE();
    case 1310:
      if (lookahead == '1') ADVANCE(1467);
      END_STATE();
    case 1311:
      ADVANCE_MAP(
        '1', 1198,
        '3', 1533,
        '4', 1538,
        '5', 1688,
        '6', 1239,
        '8', 1436,
        '9', 1563,
        'X', 1400,
        'x', 1400,
      );
      END_STATE();
    case 1312:
      if (lookahead == '1') ADVANCE(1252);
      if (lookahead == '4') ADVANCE(1445);
      if (lookahead == '8') ADVANCE(1438);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1439);
      END_STATE();
    case 1313:
      ADVANCE_MAP(
        '1', 1302,
        '3', 1533,
        '4', 1539,
        '5', 1688,
        '6', 1239,
        '8', 1510,
        '9', 1563,
        'X', 1403,
        'x', 1403,
      );
      END_STATE();
    case 1314:
      ADVANCE_MAP(
        '1', 1616,
        '2', 1177,
        '3', 1208,
        '5', 2166,
        '6', 1628,
        'B', 2150,
        'b', 2150,
        'F', 2167,
        'f', 2167,
      );
      END_STATE();
    case 1315:
      if (lookahead == '1') ADVANCE(1201);
      if (lookahead == '4') ADVANCE(1597);
      if (lookahead == '8') ADVANCE(1427);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1428);
      END_STATE();
    case 1316:
      if (lookahead == '1') ADVANCE(1233);
      if (lookahead == '2') ADVANCE(1472);
      if (lookahead == '3') ADVANCE(1578);
      END_STATE();
    case 1317:
      if (lookahead == '1') ADVANCE(1233);
      if (lookahead == '2') ADVANCE(1478);
      if (lookahead == '3') ADVANCE(1578);
      END_STATE();
    case 1318:
      if (lookahead == '1') ADVANCE(1233);
      if (lookahead == '2') ADVANCE(1471);
      if (lookahead == '3') ADVANCE(1578);
      END_STATE();
    case 1319:
      if (lookahead == '1') ADVANCE(1233);
      if (lookahead == '2') ADVANCE(1477);
      if (lookahead == '3') ADVANCE(1578);
      END_STATE();
    case 1320:
      if (lookahead == '1') ADVANCE(1466);
      if (lookahead == ';') ADVANCE(1159);
      END_STATE();
    case 1321:
      if (lookahead == '1') ADVANCE(1466);
      if (lookahead == ';') ADVANCE(2343);
      END_STATE();
    case 1322:
      if (lookahead == '1') ADVANCE(1423);
      if (lookahead == '3') ADVANCE(1562);
      if (lookahead == '6') ADVANCE(1595);
      if (lookahead == '7') ADVANCE(1518);
      if (lookahead == '8') ADVANCE(1447);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1437);
      END_STATE();
    case 1323:
      if (lookahead == '1') ADVANCE(1543);
      END_STATE();
    case 1324:
      if (lookahead == '1') ADVANCE(1682);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2142);
      END_STATE();
    case 1325:
      if (lookahead == '1') ADVANCE(1679);
      if (lookahead == '7') ADVANCE(1588);
      END_STATE();
    case 1326:
      if (lookahead == '1') ADVANCE(1659);
      END_STATE();
    case 1327:
      if (lookahead == '1') ADVANCE(1096);
      END_STATE();
    case 1328:
      if (lookahead == '1') ADVANCE(1178);
      if (lookahead == '4') ADVANCE(1645);
      if (lookahead == '8') ADVANCE(1453);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1429);
      END_STATE();
    case 1329:
      if (lookahead == '1') ADVANCE(1196);
      if (lookahead == '4') ADVANCE(1608);
      if (lookahead == '8') ADVANCE(1431);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1432);
      END_STATE();
    case 1330:
      if (lookahead == '1') ADVANCE(1326);
      if (lookahead == '6') ADVANCE(1335);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1449);
      END_STATE();
    case 1331:
      if (lookahead == '1') ADVANCE(1454);
      END_STATE();
    case 1332:
      if (lookahead == '1') ADVANCE(1204);
      if (lookahead == '4') ADVANCE(1532);
      if (lookahead == '5') ADVANCE(1687);
      if (lookahead == '8') ADVANCE(1509);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1397);
      END_STATE();
    case 1333:
      if (lookahead == '1') ADVANCE(1744);
      END_STATE();
    case 1334:
      if (lookahead == '1') ADVANCE(1747);
      END_STATE();
    case 1335:
      if (lookahead == '1') ADVANCE(1756);
      END_STATE();
    case 1336:
      if (lookahead == '1') ADVANCE(1756);
      if (lookahead == '2') ADVANCE(1756);
      END_STATE();
    case 1337:
      if (lookahead == '1') ADVANCE(1756);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1724);
      END_STATE();
    case 1338:
      if (lookahead == '1') ADVANCE(1756);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1774);
      END_STATE();
    case 1339:
      if (lookahead == '1') ADVANCE(1450);
      if (lookahead == ';') ADVANCE(2212);
      END_STATE();
    case 1340:
      if (lookahead == '1') ADVANCE(1227);
      if (lookahead == '3') ADVANCE(1525);
      if (lookahead == '4') ADVANCE(1565);
      END_STATE();
    case 1341:
      if (lookahead == '1') ADVANCE(1223);
      END_STATE();
    case 1342:
      if (lookahead == '1') ADVANCE(2143);
      if (lookahead == '3') ADVANCE(1525);
      END_STATE();
    case 1343:
      if (lookahead == '1') ADVANCE(1475);
      END_STATE();
    case 1344:
      if (lookahead == '1') ADVANCE(1209);
      if (lookahead == '4') ADVANCE(1522);
      if (lookahead == '5') ADVANCE(1685);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1384);
      END_STATE();
    case 1345:
      if (lookahead == '1') ADVANCE(1559);
      if (lookahead == '7') ADVANCE(1590);
      END_STATE();
    case 1346:
      if (lookahead == '1') ADVANCE(2160);
      END_STATE();
    case 1347:
      if (lookahead == '1') ADVANCE(1455);
      END_STATE();
    case 1348:
      if (lookahead == '1') ADVANCE(1463);
      END_STATE();
    case 1349:
      if (lookahead == '1') ADVANCE(1463);
      if (lookahead == ';') ADVANCE(2212);
      END_STATE();
    case 1350:
      if (lookahead == '1') ADVANCE(1225);
      END_STATE();
    case 1351:
      if (lookahead == '1') ADVANCE(1476);
      END_STATE();
    case 1352:
      if (lookahead == '1') ADVANCE(1459);
      END_STATE();
    case 1353:
      if (lookahead == '1') ADVANCE(1229);
      END_STATE();
    case 1354:
      if (lookahead == '1') ADVANCE(1460);
      END_STATE();
    case 1355:
      if (lookahead == '1') ADVANCE(1238);
      if (lookahead == '3') ADVANCE(2144);
      if (lookahead == '4') ADVANCE(1648);
      END_STATE();
    case 1356:
      if (lookahead == '1') ADVANCE(1238);
      if (lookahead == '3') ADVANCE(2144);
      if (lookahead == '4') ADVANCE(1647);
      END_STATE();
    case 1357:
      if (lookahead == '1') ADVANCE(1462);
      END_STATE();
    case 1358:
      if (lookahead == '1') ADVANCE(1528);
      END_STATE();
    case 1359:
      if (lookahead == '1') ADVANCE(1235);
      END_STATE();
    case 1360:
      if (lookahead == '1') ADVANCE(1235);
      if (lookahead == '4') ADVANCE(1576);
      END_STATE();
    case 1361:
      if (lookahead == '1') ADVANCE(1464);
      END_STATE();
    case 1362:
      if (lookahead == '1') ADVANCE(1604);
      END_STATE();
    case 1363:
      if (lookahead == '1') ADVANCE(1243);
      if (lookahead == '4') ADVANCE(1577);
      END_STATE();
    case 1364:
      if (lookahead == '1') ADVANCE(1465);
      END_STATE();
    case 1365:
      if (lookahead == '1') ADVANCE(1465);
      if (lookahead == '4') ADVANCE(1465);
      END_STATE();
    case 1366:
      if (lookahead == '1') ADVANCE(1605);
      if (lookahead == '3') ADVANCE(1333);
      if (lookahead == '9') ADVANCE(1609);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1528);
      END_STATE();
    case 1367:
      if (lookahead == '1') ADVANCE(1605);
      if (lookahead == '3') ADVANCE(1333);
      if (lookahead == '9') ADVANCE(1612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1528);
      END_STATE();
    case 1368:
      if (lookahead == '1') ADVANCE(1605);
      if (lookahead == '3') ADVANCE(1333);
      if (lookahead == '9') ADVANCE(1613);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1528);
      END_STATE();
    case 1369:
      if (lookahead == '1') ADVANCE(1605);
      if (lookahead == '9') ADVANCE(1609);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1528);
      END_STATE();
    case 1370:
      if (lookahead == '1') ADVANCE(1605);
      if (lookahead == '9') ADVANCE(1612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1528);
      END_STATE();
    case 1371:
      if (lookahead == '1') ADVANCE(1605);
      if (lookahead == '9') ADVANCE(1613);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1528);
      END_STATE();
    case 1372:
      if (lookahead == '1') ADVANCE(1670);
      if (lookahead == '2') ADVANCE(1646);
      END_STATE();
    case 1373:
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '4') ADVANCE(1580);
      END_STATE();
    case 1374:
      if (lookahead == '1') ADVANCE(1489);
      END_STATE();
    case 1375:
      if (lookahead == '1') ADVANCE(1610);
      END_STATE();
    case 1376:
      if (lookahead == '1') ADVANCE(1256);
      END_STATE();
    case 1377:
      if (lookahead == '1') ADVANCE(1481);
      END_STATE();
    case 1378:
      if (lookahead == '1') ADVANCE(1250);
      if (lookahead == '3') ADVANCE(2144);
      if (lookahead == '4') ADVANCE(1648);
      END_STATE();
    case 1379:
      if (lookahead == '1') ADVANCE(1250);
      if (lookahead == '3') ADVANCE(2144);
      if (lookahead == '4') ADVANCE(1647);
      END_STATE();
    case 1380:
      if (lookahead == '1') ADVANCE(1615);
      END_STATE();
    case 1381:
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '4') ADVANCE(1565);
      END_STATE();
    case 1382:
      ADVANCE_MAP(
        '1', 1251,
        '3', 1562,
        '4', 1445,
        '6', 1595,
        '7', 1518,
        '8', 1506,
        'X', 1446,
        'x', 1446,
      );
      END_STATE();
    case 1383:
      if (lookahead == '1') ADVANCE(1547);
      if (lookahead == '7') ADVANCE(1591);
      END_STATE();
    case 1384:
      if (lookahead == '1') ADVANCE(1639);
      if (lookahead == '2') ADVANCE(1643);
      END_STATE();
    case 1385:
      if (lookahead == '1') ADVANCE(1639);
      if (lookahead == '2') ADVANCE(1200);
      END_STATE();
    case 1386:
      if (lookahead == '1') ADVANCE(1540);
      END_STATE();
    case 1387:
      if (lookahead == '1') ADVANCE(1548);
      END_STATE();
    case 1388:
      if (lookahead == '1') ADVANCE(1683);
      if (lookahead == '7') ADVANCE(1589);
      END_STATE();
    case 1389:
      if (lookahead == '1') ADVANCE(1560);
      if (lookahead == '7') ADVANCE(1592);
      END_STATE();
    case 1390:
      if (lookahead == '1') ADVANCE(1555);
      if (lookahead == '7') ADVANCE(1590);
      END_STATE();
    case 1391:
      if (lookahead == '1') ADVANCE(1640);
      if (lookahead == '2') ADVANCE(1192);
      if (lookahead == '3') ADVANCE(2145);
      if (lookahead == '6') ADVANCE(1628);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1337);
      END_STATE();
    case 1392:
      if (lookahead == '1') ADVANCE(1640);
      if (lookahead == '2') ADVANCE(1203);
      if (lookahead == '3') ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1338);
      END_STATE();
    case 1393:
      if (lookahead == '1') ADVANCE(1640);
      if (lookahead == '2') ADVANCE(1203);
      if (lookahead == '3') ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1335);
      END_STATE();
    case 1394:
      if (lookahead == '1') ADVANCE(1551);
      END_STATE();
    case 1395:
      if (lookahead == '1') ADVANCE(1550);
      END_STATE();
    case 1396:
      if (lookahead == '1') ADVANCE(1684);
      if (lookahead == '7') ADVANCE(1593);
      END_STATE();
    case 1397:
      if (lookahead == '1') ADVANCE(1641);
      if (lookahead == '2') ADVANCE(1281);
      END_STATE();
    case 1398:
      if (lookahead == '1') ADVANCE(1641);
      if (lookahead == '2') ADVANCE(1655);
      END_STATE();
    case 1399:
      if (lookahead == '1') ADVANCE(1556);
      END_STATE();
    case 1400:
      if (lookahead == '1') ADVANCE(1642);
      if (lookahead == '2') ADVANCE(1202);
      if (lookahead == '3') ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1338);
      END_STATE();
    case 1401:
      if (lookahead == '1') ADVANCE(1642);
      if (lookahead == '2') ADVANCE(1202);
      if (lookahead == '3') ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1335);
      END_STATE();
    case 1402:
      if (lookahead == '1') ADVANCE(1642);
      if (lookahead == '2') ADVANCE(1193);
      if (lookahead == '3') ADVANCE(2145);
      if (lookahead == '6') ADVANCE(1628);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1337);
      END_STATE();
    case 1403:
      if (lookahead == '1') ADVANCE(1642);
      if (lookahead == '2') ADVANCE(1284);
      if (lookahead == '3') ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1335);
      END_STATE();
    case 1404:
      if (lookahead == '1') ADVANCE(1642);
      if (lookahead == '2') ADVANCE(1280);
      if (lookahead == '3') ADVANCE(2145);
      if (lookahead == '6') ADVANCE(1628);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1337);
      END_STATE();
    case 1405:
      if (lookahead == '1') ADVANCE(1558);
      END_STATE();
    case 1406:
      if (lookahead == '1') ADVANCE(1561);
      END_STATE();
    case 1407:
      if (lookahead == '1') ADVANCE(1283);
      if (lookahead == '4') ADVANCE(1601);
      if (lookahead == '8') ADVANCE(1507);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1483);
      END_STATE();
    case 1408:
      if (lookahead == '1') ADVANCE(1293);
      if (lookahead == '4') ADVANCE(1649);
      if (lookahead == '6') ADVANCE(1335);
      if (lookahead == '8') ADVANCE(1511);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1485);
      END_STATE();
    case 1409:
      if (lookahead == '1') ADVANCE(1293);
      if (lookahead == '4') ADVANCE(1649);
      if (lookahead == '8') ADVANCE(1511);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1484);
      END_STATE();
    case 1410:
      if (lookahead == '1') ADVANCE(1295);
      if (lookahead == '4') ADVANCE(1611);
      if (lookahead == '8') ADVANCE(1513);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1486);
      END_STATE();
    case 1411:
      if (lookahead == '1') ADVANCE(1298);
      if (lookahead == '4') ADVANCE(1524);
      if (lookahead == '5') ADVANCE(1685);
      if (lookahead == '8') ADVANCE(1431);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1385);
      END_STATE();
    case 1412:
      if (lookahead == '1') ADVANCE(1299);
      if (lookahead == '4') ADVANCE(1528);
      if (lookahead == '5') ADVANCE(1687);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1398);
      END_STATE();
    case 1413:
      if (lookahead == '1') ADVANCE(1288);
      if (lookahead == '4') ADVANCE(1602);
      if (lookahead == '8') ADVANCE(1512);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1491);
      END_STATE();
    case 1414:
      if (lookahead == '1') ADVANCE(1300);
      if (lookahead == '4') ADVANCE(1653);
      if (lookahead == '8') ADVANCE(1514);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1492);
      END_STATE();
    case 1415:
      if (lookahead == '1') ADVANCE(1289);
      if (lookahead == '4') ADVANCE(1603);
      if (lookahead == '8') ADVANCE(1515);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1496);
      END_STATE();
    case 1416:
      if (lookahead == '1') ADVANCE(1290);
      if (lookahead == '4') ADVANCE(1605);
      if (lookahead == '8') ADVANCE(1516);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1498);
      END_STATE();
    case 1417:
      if (lookahead == '1') ADVANCE(1291);
      if (lookahead == '4') ADVANCE(1614);
      if (lookahead == '8') ADVANCE(1517);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1500);
      END_STATE();
    case 1418:
      ADVANCE_MAP(
        '1', 1294,
        '3', 1533,
        '4', 1443,
        '5', 1688,
        '6', 1239,
        '8', 1430,
        '9', 1563,
        'X', 1402,
        'x', 1402,
      );
      END_STATE();
    case 1419:
      ADVANCE_MAP(
        '1', 1297,
        '3', 1533,
        '4', 1535,
        '5', 1686,
        '6', 1239,
        '8', 1436,
        '9', 1563,
        'X', 1392,
        'x', 1392,
      );
      END_STATE();
    case 1420:
      ADVANCE_MAP(
        '1', 1296,
        '3', 1533,
        '4', 1535,
        '5', 1686,
        '6', 1239,
        '8', 1436,
        '9', 1563,
        'X', 1393,
        'x', 1393,
      );
      END_STATE();
    case 1421:
      ADVANCE_MAP(
        '1', 1301,
        '3', 1533,
        '4', 1444,
        '5', 1688,
        '6', 1239,
        '8', 1508,
        '9', 1563,
        'X', 1404,
        'x', 1404,
      );
      END_STATE();
    case 1422:
      ADVANCE_MAP(
        '1', 1197,
        '3', 1533,
        '4', 1538,
        '5', 1688,
        '6', 1239,
        '8', 1436,
        '9', 1563,
        'X', 1401,
        'x', 1401,
      );
      END_STATE();
    case 1423:
      if (lookahead == '2') ADVANCE(1440);
      if (lookahead == '5') ADVANCE(1425);
      END_STATE();
    case 1424:
      if (lookahead == '2') ADVANCE(1176);
      if (lookahead == '7') ADVANCE(1482);
      END_STATE();
    case 1425:
      if (lookahead == '2') ADVANCE(1457);
      END_STATE();
    case 1426:
      if (lookahead == '2') ADVANCE(1219);
      if (lookahead == '4') ADVANCE(1525);
      END_STATE();
    case 1427:
      if (lookahead == '2') ADVANCE(1253);
      if (lookahead == '7') ADVANCE(1488);
      END_STATE();
    case 1428:
      if (lookahead == '2') ADVANCE(1210);
      END_STATE();
    case 1429:
      if (lookahead == '2') ADVANCE(1282);
      END_STATE();
    case 1430:
      if (lookahead == '2') ADVANCE(1268);
      if (lookahead == '5') ADVANCE(1701);
      if (lookahead == '6') ADVANCE(1587);
      if (lookahead == '7') ADVANCE(1316);
      if (lookahead == '8') ADVANCE(1274);
      if (lookahead == '9') ADVANCE(1654);
      END_STATE();
    case 1431:
      if (lookahead == '2') ADVANCE(1272);
      if (lookahead == '7') ADVANCE(1434);
      END_STATE();
    case 1432:
      if (lookahead == '2') ADVANCE(1199);
      END_STATE();
    case 1433:
      if (lookahead == '2') ADVANCE(1625);
      END_STATE();
    case 1434:
      if (lookahead == '2') ADVANCE(1467);
      END_STATE();
    case 1435:
      if (lookahead == '2') ADVANCE(2439);
      END_STATE();
    case 1436:
      if (lookahead == '2') ADVANCE(1267);
      if (lookahead == '5') ADVANCE(1701);
      if (lookahead == '6') ADVANCE(1587);
      if (lookahead == '7') ADVANCE(1318);
      if (lookahead == '8') ADVANCE(1274);
      if (lookahead == '9') ADVANCE(1654);
      END_STATE();
    case 1437:
      if (lookahead == '2') ADVANCE(1187);
      if (lookahead == '3') ADVANCE(1208);
      if (lookahead == '5') ADVANCE(2166);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2167);
      END_STATE();
    case 1438:
      if (lookahead == '2') ADVANCE(1259);
      if (lookahead == '7') ADVANCE(1490);
      END_STATE();
    case 1439:
      if (lookahead == '2') ADVANCE(1205);
      if (lookahead == '6') ADVANCE(1628);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2150);
      END_STATE();
    case 1440:
      if (lookahead == '2') ADVANCE(1693);
      END_STATE();
    case 1441:
      if (lookahead == '2') ADVANCE(1719);
      if (lookahead == '3') ADVANCE(1714);
      if (lookahead == '5') ADVANCE(1720);
      if (lookahead == '7') ADVANCE(1722);
      END_STATE();
    case 1442:
      if (lookahead == '2') ADVANCE(1719);
      if (lookahead == '3') ADVANCE(1763);
      if (lookahead == '5') ADVANCE(1765);
      END_STATE();
    case 1443:
      if (lookahead == '2') ADVANCE(1719);
      if (lookahead == '3') ADVANCE(1771);
      if (lookahead == '5') ADVANCE(1765);
      END_STATE();
    case 1444:
      if (lookahead == '2') ADVANCE(1719);
      if (lookahead == '3') ADVANCE(1771);
      if (lookahead == '5') ADVANCE(1773);
      END_STATE();
    case 1445:
      if (lookahead == '2') ADVANCE(1719);
      if (lookahead == '5') ADVANCE(1729);
      if (lookahead == '7') ADVANCE(1722);
      END_STATE();
    case 1446:
      ADVANCE_MAP(
        '2', 1279,
        '3', 1208,
        '5', 2166,
        '6', 1628,
        'B', 2150,
        'b', 2150,
        'F', 2167,
        'f', 2167,
      );
      END_STATE();
    case 1447:
      if (lookahead == '2') ADVANCE(1426);
      END_STATE();
    case 1448:
      if (lookahead == '2') ADVANCE(1661);
      END_STATE();
    case 1449:
      if (lookahead == '2') ADVANCE(2158);
      if (lookahead == '3') ADVANCE(2155);
      END_STATE();
    case 1450:
      if (lookahead == '2') ADVANCE(1720);
      if (lookahead == '5') ADVANCE(1741);
      if (lookahead == '7') ADVANCE(1742);
      END_STATE();
    case 1451:
      if (lookahead == '2') ADVANCE(1469);
      if (lookahead == '4') ADVANCE(1624);
      if (lookahead == '9') ADVANCE(1572);
      END_STATE();
    case 1452:
      if (lookahead == '2') ADVANCE(1102);
      END_STATE();
    case 1453:
      if (lookahead == '2') ADVANCE(1632);
      if (lookahead == '7') ADVANCE(1501);
      END_STATE();
    case 1454:
      if (lookahead == '2') ADVANCE(1724);
      END_STATE();
    case 1455:
      if (lookahead == '2') ADVANCE(1716);
      END_STATE();
    case 1456:
      if (lookahead == '2') ADVANCE(1346);
      END_STATE();
    case 1457:
      if (lookahead == '2') ADVANCE(1731);
      if (lookahead == '4') ADVANCE(1732);
      END_STATE();
    case 1458:
      if (lookahead == '2') ADVANCE(1456);
      END_STATE();
    case 1459:
      if (lookahead == '2') ADVANCE(1717);
      END_STATE();
    case 1460:
      if (lookahead == '2') ADVANCE(1777);
      END_STATE();
    case 1461:
      if (lookahead == '2') ADVANCE(1748);
      END_STATE();
    case 1462:
      if (lookahead == '2') ADVANCE(1776);
      END_STATE();
    case 1463:
      if (lookahead == '2') ADVANCE(1753);
      if (lookahead == '5') ADVANCE(1741);
      if (lookahead == '7') ADVANCE(1742);
      END_STATE();
    case 1464:
      if (lookahead == '2') ADVANCE(1723);
      END_STATE();
    case 1465:
      if (lookahead == '2') ADVANCE(1756);
      END_STATE();
    case 1466:
      if (lookahead == '2') ADVANCE(1756);
      if (lookahead == '3') ADVANCE(1756);
      END_STATE();
    case 1467:
      if (lookahead == '2') ADVANCE(1756);
      if (lookahead == '5') ADVANCE(1775);
      END_STATE();
    case 1468:
      if (lookahead == '2') ADVANCE(1756);
      if (lookahead == '6') ADVANCE(1756);
      END_STATE();
    case 1469:
      if (lookahead == '2') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1756);
      END_STATE();
    case 1470:
      if (lookahead == '2') ADVANCE(1756);
      if (lookahead == '9') ADVANCE(1756);
      END_STATE();
    case 1471:
      if (lookahead == '2') ADVANCE(1765);
      if (lookahead == '3') ADVANCE(1756);
      END_STATE();
    case 1472:
      if (lookahead == '2') ADVANCE(1765);
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1742);
      END_STATE();
    case 1473:
      if (lookahead == '2') ADVANCE(1765);
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1742);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1761);
      END_STATE();
    case 1474:
      if (lookahead == '2') ADVANCE(1765);
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1761);
      END_STATE();
    case 1475:
      if (lookahead == '2') ADVANCE(1767);
      if (lookahead == '5') ADVANCE(1768);
      END_STATE();
    case 1476:
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '5') ADVANCE(1779);
      END_STATE();
    case 1477:
      if (lookahead == '2') ADVANCE(1773);
      if (lookahead == '3') ADVANCE(1756);
      END_STATE();
    case 1478:
      if (lookahead == '2') ADVANCE(1773);
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1742);
      END_STATE();
    case 1479:
      if (lookahead == '2') ADVANCE(1773);
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1742);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1761);
      END_STATE();
    case 1480:
      if (lookahead == '2') ADVANCE(1773);
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1761);
      END_STATE();
    case 1481:
      if (lookahead == '2') ADVANCE(1774);
      END_STATE();
    case 1482:
      if (lookahead == '2') ADVANCE(1450);
      END_STATE();
    case 1483:
      if (lookahead == '2') ADVANCE(1254);
      END_STATE();
    case 1484:
      if (lookahead == '2') ADVANCE(1287);
      END_STATE();
    case 1485:
      if (lookahead == '2') ADVANCE(1287);
      if (lookahead == '3') ADVANCE(2155);
      END_STATE();
    case 1486:
      if (lookahead == '2') ADVANCE(1286);
      END_STATE();
    case 1487:
      if (lookahead == '2') ADVANCE(1475);
      END_STATE();
    case 1488:
      if (lookahead == '2') ADVANCE(1455);
      END_STATE();
    case 1489:
      if (lookahead == '2') ADVANCE(1781);
      END_STATE();
    case 1490:
      if (lookahead == '2') ADVANCE(1463);
      END_STATE();
    case 1491:
      if (lookahead == '2') ADVANCE(1260);
      END_STATE();
    case 1492:
      if (lookahead == '2') ADVANCE(1292);
      END_STATE();
    case 1493:
      if (lookahead == '2') ADVANCE(1476);
      END_STATE();
    case 1494:
      if (lookahead == '2') ADVANCE(1335);
      if (lookahead == '3') ADVANCE(2168);
      END_STATE();
    case 1495:
      if (lookahead == '2') ADVANCE(1459);
      END_STATE();
    case 1496:
      if (lookahead == '2') ADVANCE(1263);
      END_STATE();
    case 1497:
      if (lookahead == '2') ADVANCE(1460);
      END_STATE();
    case 1498:
      if (lookahead == '2') ADVANCE(1265);
      END_STATE();
    case 1499:
      if (lookahead == '2') ADVANCE(1462);
      END_STATE();
    case 1500:
      if (lookahead == '2') ADVANCE(1285);
      END_STATE();
    case 1501:
      if (lookahead == '2') ADVANCE(1604);
      END_STATE();
    case 1502:
      if (lookahead == '2') ADVANCE(1465);
      END_STATE();
    case 1503:
      if (lookahead == '2') ADVANCE(1489);
      END_STATE();
    case 1504:
      if (lookahead == '2') ADVANCE(1610);
      END_STATE();
    case 1505:
      if (lookahead == '2') ADVANCE(1615);
      END_STATE();
    case 1506:
      if (lookahead == '2') ADVANCE(1258);
      if (lookahead == '7') ADVANCE(1490);
      END_STATE();
    case 1507:
      if (lookahead == '2') ADVANCE(1262);
      if (lookahead == '7') ADVANCE(1495);
      END_STATE();
    case 1508:
      if (lookahead == '2') ADVANCE(1278);
      if (lookahead == '5') ADVANCE(1701);
      if (lookahead == '6') ADVANCE(1587);
      if (lookahead == '7') ADVANCE(1317);
      if (lookahead == '8') ADVANCE(1274);
      if (lookahead == '9') ADVANCE(1654);
      END_STATE();
    case 1509:
      if (lookahead == '2') ADVANCE(1273);
      if (lookahead == '7') ADVANCE(1487);
      END_STATE();
    case 1510:
      if (lookahead == '2') ADVANCE(1277);
      if (lookahead == '5') ADVANCE(1701);
      if (lookahead == '6') ADVANCE(1587);
      if (lookahead == '7') ADVANCE(1319);
      if (lookahead == '8') ADVANCE(1274);
      if (lookahead == '9') ADVANCE(1654);
      END_STATE();
    case 1511:
      if (lookahead == '2') ADVANCE(1636);
      if (lookahead == '7') ADVANCE(1504);
      END_STATE();
    case 1512:
      if (lookahead == '2') ADVANCE(1264);
      if (lookahead == '7') ADVANCE(1497);
      END_STATE();
    case 1513:
      if (lookahead == '2') ADVANCE(1275);
      if (lookahead == '7') ADVANCE(1493);
      END_STATE();
    case 1514:
      if (lookahead == '2') ADVANCE(1638);
      if (lookahead == '7') ADVANCE(1505);
      END_STATE();
    case 1515:
      if (lookahead == '2') ADVANCE(1266);
      if (lookahead == '7') ADVANCE(1499);
      END_STATE();
    case 1516:
      if (lookahead == '2') ADVANCE(1271);
      if (lookahead == '7') ADVANCE(1502);
      END_STATE();
    case 1517:
      if (lookahead == '2') ADVANCE(1276);
      if (lookahead == '7') ADVANCE(1503);
      END_STATE();
    case 1518:
      if (lookahead == '3') ADVANCE(1521);
      if (lookahead == '5') ADVANCE(1212);
      END_STATE();
    case 1519:
      if (lookahead == '3') ADVANCE(1520);
      if (lookahead == '8') ADVANCE(1644);
      END_STATE();
    case 1520:
      if (lookahead == '3') ADVANCE(1714);
      if (lookahead == '4') ADVANCE(1720);
      END_STATE();
    case 1521:
      if (lookahead == '3') ADVANCE(1726);
      END_STATE();
    case 1522:
      if (lookahead == '3') ADVANCE(1713);
      END_STATE();
    case 1523:
      if (lookahead == '3') ADVANCE(1713);
      if (lookahead == '4') ADVANCE(1756);
      END_STATE();
    case 1524:
      if (lookahead == '3') ADVANCE(1713);
      if (lookahead == '5') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1775);
      END_STATE();
    case 1525:
      if (lookahead == '3') ADVANCE(1737);
      if (lookahead == '6') ADVANCE(1738);
      END_STATE();
    case 1526:
      if (lookahead == '3') ADVANCE(1744);
      END_STATE();
    case 1527:
      if (lookahead == '3') ADVANCE(1747);
      END_STATE();
    case 1528:
      if (lookahead == '3') ADVANCE(1756);
      END_STATE();
    case 1529:
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '4') ADVANCE(1756);
      END_STATE();
    case 1530:
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '4') ADVANCE(1756);
      if (lookahead == '5') ADVANCE(1756);
      END_STATE();
    case 1531:
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '4') ADVANCE(1767);
      END_STATE();
    case 1532:
      if (lookahead == '3') ADVANCE(1756);
      if (lookahead == '5') ADVANCE(1767);
      if (lookahead == '7') ADVANCE(1768);
      END_STATE();
    case 1533:
      if (lookahead == '3') ADVANCE(1769);
      END_STATE();
    case 1534:
      if (lookahead == '3') ADVANCE(1763);
      if (lookahead == '4') ADVANCE(1765);
      END_STATE();
    case 1535:
      if (lookahead == '3') ADVANCE(1763);
      if (lookahead == '5') ADVANCE(1765);
      END_STATE();
    case 1536:
      if (lookahead == '3') ADVANCE(1771);
      if (lookahead == '4') ADVANCE(1765);
      END_STATE();
    case 1537:
      if (lookahead == '3') ADVANCE(1771);
      if (lookahead == '4') ADVANCE(1773);
      END_STATE();
    case 1538:
      if (lookahead == '3') ADVANCE(1771);
      if (lookahead == '5') ADVANCE(1765);
      END_STATE();
    case 1539:
      if (lookahead == '3') ADVANCE(1771);
      if (lookahead == '5') ADVANCE(1773);
      END_STATE();
    case 1540:
      if (lookahead == '3') ADVANCE(1522);
      END_STATE();
    case 1541:
      if (lookahead == '3') ADVANCE(1333);
      if (lookahead == '9') ADVANCE(1596);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2134);
      END_STATE();
    case 1542:
      if (lookahead == '3') ADVANCE(1333);
      if (lookahead == '9') ADVANCE(1623);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2134);
      END_STATE();
    case 1543:
      if (lookahead == '3') ADVANCE(1564);
      END_STATE();
    case 1544:
      if (lookahead == '3') ADVANCE(1526);
      END_STATE();
    case 1545:
      if (lookahead == '3') ADVANCE(1534);
      END_STATE();
    case 1546:
      if (lookahead == '3') ADVANCE(1570);
      if (lookahead == '8') ADVANCE(1644);
      END_STATE();
    case 1547:
      if (lookahead == '3') ADVANCE(1531);
      if (lookahead == '8') ADVANCE(1651);
      END_STATE();
    case 1548:
      if (lookahead == '3') ADVANCE(1566);
      END_STATE();
    case 1549:
      if (lookahead == '3') ADVANCE(1536);
      END_STATE();
    case 1550:
      if (lookahead == '3') ADVANCE(1567);
      END_STATE();
    case 1551:
      if (lookahead == '3') ADVANCE(1528);
      END_STATE();
    case 1552:
      if (lookahead == '3') ADVANCE(1528);
      if (lookahead == '6') ADVANCE(1528);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1494);
      END_STATE();
    case 1553:
      if (lookahead == '3') ADVANCE(1528);
      if (lookahead == '7') ADVANCE(1605);
      END_STATE();
    case 1554:
      if (lookahead == '3') ADVANCE(2155);
      END_STATE();
    case 1555:
      if (lookahead == '3') ADVANCE(1523);
      if (lookahead == '8') ADVANCE(1650);
      END_STATE();
    case 1556:
      if (lookahead == '3') ADVANCE(1569);
      END_STATE();
    case 1557:
      if (lookahead == '3') ADVANCE(1537);
      END_STATE();
    case 1558:
      if (lookahead == '3') ADVANCE(1572);
      END_STATE();
    case 1559:
      if (lookahead == '3') ADVANCE(1572);
      if (lookahead == '8') ADVANCE(1650);
      END_STATE();
    case 1560:
      if (lookahead == '3') ADVANCE(1579);
      if (lookahead == '8') ADVANCE(1652);
      END_STATE();
    case 1561:
      if (lookahead == '3') ADVANCE(1583);
      END_STATE();
    case 1562:
      if (lookahead == '4') ADVANCE(1718);
      END_STATE();
    case 1563:
      if (lookahead == '4') ADVANCE(1689);
      if (lookahead == '6') ADVANCE(1553);
      if (lookahead == '7') ADVANCE(1451);
      END_STATE();
    case 1564:
      if (lookahead == '4') ADVANCE(1716);
      END_STATE();
    case 1565:
      if (lookahead == '4') ADVANCE(1739);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1740);
      END_STATE();
    case 1566:
      if (lookahead == '4') ADVANCE(1717);
      END_STATE();
    case 1567:
      if (lookahead == '4') ADVANCE(1777);
      END_STATE();
    case 1568:
      if (lookahead == '4') ADVANCE(1746);
      END_STATE();
    case 1569:
      if (lookahead == '4') ADVANCE(1776);
      END_STATE();
    case 1570:
      if (lookahead == '4') ADVANCE(1754);
      END_STATE();
    case 1571:
      if (lookahead == '4') ADVANCE(1755);
      END_STATE();
    case 1572:
      if (lookahead == '4') ADVANCE(1756);
      END_STATE();
    case 1573:
      if (lookahead == '4') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1756);
      END_STATE();
    case 1574:
      if (lookahead == '4') ADVANCE(1756);
      if (lookahead == '8') ADVANCE(1756);
      END_STATE();
    case 1575:
      if (lookahead == '4') ADVANCE(1766);
      END_STATE();
    case 1576:
      if (lookahead == '4') ADVANCE(1775);
      END_STATE();
    case 1577:
      if (lookahead == '4') ADVANCE(1768);
      END_STATE();
    case 1578:
      if (lookahead == '4') ADVANCE(1761);
      END_STATE();
    case 1579:
      if (lookahead == '4') ADVANCE(1780);
      END_STATE();
    case 1580:
      if (lookahead == '4') ADVANCE(1779);
      END_STATE();
    case 1581:
      if (lookahead == '4') ADVANCE(1568);
      END_STATE();
    case 1582:
      if (lookahead == '4') ADVANCE(1600);
      END_STATE();
    case 1583:
      if (lookahead == '4') ADVANCE(1781);
      END_STATE();
    case 1584:
      if (lookahead == '4') ADVANCE(1782);
      END_STATE();
    case 1585:
      if (lookahead == '4') ADVANCE(1232);
      END_STATE();
    case 1586:
      if (lookahead == '4') ADVANCE(1248);
      END_STATE();
    case 1587:
      if (lookahead == '4') ADVANCE(1624);
      if (lookahead == '6') ADVANCE(1236);
      END_STATE();
    case 1588:
      if (lookahead == '4') ADVANCE(1571);
      END_STATE();
    case 1589:
      if (lookahead == '4') ADVANCE(1575);
      END_STATE();
    case 1590:
      if (lookahead == '4') ADVANCE(1576);
      END_STATE();
    case 1591:
      if (lookahead == '4') ADVANCE(1577);
      END_STATE();
    case 1592:
      if (lookahead == '4') ADVANCE(1580);
      END_STATE();
    case 1593:
      if (lookahead == '4') ADVANCE(1584);
      END_STATE();
    case 1594:
      if (lookahead == '5') ADVANCE(1466);
      END_STATE();
    case 1595:
      if (lookahead == '5') ADVANCE(1448);
      if (lookahead == '9') ADVANCE(1662);
      END_STATE();
    case 1596:
      if (lookahead == '5') ADVANCE(1714);
      if (lookahead == '6') ADVANCE(1720);
      END_STATE();
    case 1597:
      if (lookahead == '5') ADVANCE(1716);
      END_STATE();
    case 1598:
      if (lookahead == '5') ADVANCE(1713);
      END_STATE();
    case 1599:
      if (lookahead == '5') ADVANCE(1713);
      if (lookahead == '6') ADVANCE(1756);
      END_STATE();
    case 1600:
      if (lookahead == '5') ADVANCE(1733);
      END_STATE();
    case 1601:
      if (lookahead == '5') ADVANCE(1717);
      END_STATE();
    case 1602:
      if (lookahead == '5') ADVANCE(1777);
      END_STATE();
    case 1603:
      if (lookahead == '5') ADVANCE(1776);
      END_STATE();
    case 1604:
      if (lookahead == '5') ADVANCE(1755);
      END_STATE();
    case 1605:
      if (lookahead == '5') ADVANCE(1756);
      END_STATE();
    case 1606:
      if (lookahead == '5') ADVANCE(1756);
      if (lookahead == '6') ADVANCE(1756);
      END_STATE();
    case 1607:
      if (lookahead == '5') ADVANCE(1756);
      if (lookahead == '6') ADVANCE(1767);
      END_STATE();
    case 1608:
      if (lookahead == '5') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1775);
      END_STATE();
    case 1609:
      if (lookahead == '5') ADVANCE(1763);
      if (lookahead == '6') ADVANCE(1765);
      END_STATE();
    case 1610:
      if (lookahead == '5') ADVANCE(1766);
      END_STATE();
    case 1611:
      if (lookahead == '5') ADVANCE(1780);
      if (lookahead == '7') ADVANCE(1779);
      END_STATE();
    case 1612:
      if (lookahead == '5') ADVANCE(1771);
      if (lookahead == '6') ADVANCE(1765);
      END_STATE();
    case 1613:
      if (lookahead == '5') ADVANCE(1771);
      if (lookahead == '6') ADVANCE(1773);
      END_STATE();
    case 1614:
      if (lookahead == '5') ADVANCE(1781);
      END_STATE();
    case 1615:
      if (lookahead == '5') ADVANCE(1782);
      END_STATE();
    case 1616:
      if (lookahead == '6') ADVANCE(2161);
      END_STATE();
    case 1617:
      if (lookahead == '6') ADVANCE(1728);
      END_STATE();
    case 1618:
      if (lookahead == '6') ADVANCE(1728);
      if (lookahead == ';') ADVANCE(2399);
      END_STATE();
    case 1619:
      if (lookahead == '6') ADVANCE(1716);
      END_STATE();
    case 1620:
      if (lookahead == '6') ADVANCE(1717);
      END_STATE();
    case 1621:
      if (lookahead == '6') ADVANCE(1777);
      END_STATE();
    case 1622:
      if (lookahead == '6') ADVANCE(1776);
      END_STATE();
    case 1623:
      if (lookahead == '6') ADVANCE(1754);
      END_STATE();
    case 1624:
      if (lookahead == '6') ADVANCE(1756);
      END_STATE();
    case 1625:
      if (lookahead == '6') ADVANCE(1756);
      if (lookahead == '7') ADVANCE(1756);
      END_STATE();
    case 1626:
      if (lookahead == '6') ADVANCE(1780);
      END_STATE();
    case 1627:
      if (lookahead == '6') ADVANCE(1690);
      END_STATE();
    case 1628:
      if (lookahead == '6') ADVANCE(2153);
      END_STATE();
    case 1629:
      if (lookahead == '6') ADVANCE(1606);
      END_STATE();
    case 1630:
      if (lookahead == '6') ADVANCE(1781);
      END_STATE();
    case 1631:
      if (lookahead == '6') ADVANCE(1695);
      END_STATE();
    case 1632:
      if (lookahead == '6') ADVANCE(1231);
      END_STATE();
    case 1633:
      if (lookahead == '6') ADVANCE(1335);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1554);
      END_STATE();
    case 1634:
      if (lookahead == '6') ADVANCE(1698);
      END_STATE();
    case 1635:
      if (lookahead == '6') ADVANCE(1697);
      END_STATE();
    case 1636:
      if (lookahead == '6') ADVANCE(1240);
      END_STATE();
    case 1637:
      if (lookahead == '6') ADVANCE(1699);
      END_STATE();
    case 1638:
      if (lookahead == '6') ADVANCE(1257);
      END_STATE();
    case 1639:
      if (lookahead == '6') ADVANCE(2162);
      END_STATE();
    case 1640:
      if (lookahead == '6') ADVANCE(2164);
      END_STATE();
    case 1641:
      if (lookahead == '6') ADVANCE(2163);
      END_STATE();
    case 1642:
      if (lookahead == '6') ADVANCE(2165);
      END_STATE();
    case 1643:
      if (lookahead == '7') ADVANCE(1706);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1713);
      END_STATE();
    case 1644:
      if (lookahead == '7') ADVANCE(1745);
      END_STATE();
    case 1645:
      if (lookahead == '7') ADVANCE(1755);
      END_STATE();
    case 1646:
      if (lookahead == '7') ADVANCE(1756);
      END_STATE();
    case 1647:
      if (lookahead == '7') ADVANCE(1756);
      if (lookahead == '8') ADVANCE(1756);
      if (lookahead == '9') ADVANCE(1756);
      END_STATE();
    case 1648:
      if (lookahead == '7') ADVANCE(1756);
      if (lookahead == '8') ADVANCE(1756);
      if (lookahead == '9') ADVANCE(1756);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1740);
      END_STATE();
    case 1649:
      if (lookahead == '7') ADVANCE(1766);
      END_STATE();
    case 1650:
      if (lookahead == '7') ADVANCE(1775);
      END_STATE();
    case 1651:
      if (lookahead == '7') ADVANCE(1768);
      END_STATE();
    case 1652:
      if (lookahead == '7') ADVANCE(1779);
      END_STATE();
    case 1653:
      if (lookahead == '7') ADVANCE(1782);
      END_STATE();
    case 1654:
      if (lookahead == '7') ADVANCE(1697);
      END_STATE();
    case 1655:
      if (lookahead == '7') ADVANCE(1711);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1756);
      END_STATE();
    case 1656:
      if (lookahead == '7') ADVANCE(1558);
      END_STATE();
    case 1657:
      if (lookahead == '8') ADVANCE(1627);
      END_STATE();
    case 1658:
      if (lookahead == '8') ADVANCE(1656);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1458);
      END_STATE();
    case 1659:
      if (lookahead == '8') ADVANCE(1585);
      END_STATE();
    case 1660:
      if (lookahead == '8') ADVANCE(1720);
      if (lookahead == '9') ADVANCE(1720);
      END_STATE();
    case 1661:
      if (lookahead == '8') ADVANCE(1461);
      END_STATE();
    case 1662:
      if (lookahead == '8') ADVANCE(1725);
      END_STATE();
    case 1663:
      if (lookahead == '8') ADVANCE(1716);
      if (lookahead == '9') ADVANCE(1716);
      END_STATE();
    case 1664:
      if (lookahead == '8') ADVANCE(1717);
      if (lookahead == '9') ADVANCE(1717);
      END_STATE();
    case 1665:
      if (lookahead == '8') ADVANCE(1777);
      if (lookahead == '9') ADVANCE(1777);
      END_STATE();
    case 1666:
      if (lookahead == '8') ADVANCE(1743);
      if (lookahead == '9') ADVANCE(1749);
      END_STATE();
    case 1667:
      if (lookahead == '8') ADVANCE(1746);
      END_STATE();
    case 1668:
      if (lookahead == '8') ADVANCE(1776);
      if (lookahead == '9') ADVANCE(1776);
      END_STATE();
    case 1669:
      if (lookahead == '8') ADVANCE(1755);
      END_STATE();
    case 1670:
      if (lookahead == '8') ADVANCE(1756);
      if (lookahead == '9') ADVANCE(1756);
      END_STATE();
    case 1671:
      if (lookahead == '8') ADVANCE(1765);
      if (lookahead == '9') ADVANCE(1765);
      END_STATE();
    case 1672:
      if (lookahead == '8') ADVANCE(1766);
      END_STATE();
    case 1673:
      if (lookahead == '8') ADVANCE(1775);
      END_STATE();
    case 1674:
      if (lookahead == '8') ADVANCE(1767);
      if (lookahead == '9') ADVANCE(1767);
      END_STATE();
    case 1675:
      if (lookahead == '8') ADVANCE(1768);
      END_STATE();
    case 1676:
      if (lookahead == '8') ADVANCE(1780);
      if (lookahead == '9') ADVANCE(1780);
      END_STATE();
    case 1677:
      if (lookahead == '8') ADVANCE(1779);
      END_STATE();
    case 1678:
      if (lookahead == '8') ADVANCE(1773);
      if (lookahead == '9') ADVANCE(1773);
      END_STATE();
    case 1679:
      if (lookahead == '8') ADVANCE(1645);
      END_STATE();
    case 1680:
      if (lookahead == '8') ADVANCE(1781);
      if (lookahead == '9') ADVANCE(1781);
      END_STATE();
    case 1681:
      if (lookahead == '8') ADVANCE(1782);
      END_STATE();
    case 1682:
      if (lookahead == '8') ADVANCE(1696);
      END_STATE();
    case 1683:
      if (lookahead == '8') ADVANCE(1649);
      END_STATE();
    case 1684:
      if (lookahead == '8') ADVANCE(1653);
      END_STATE();
    case 1685:
      if (lookahead == '8') ADVANCE(1631);
      END_STATE();
    case 1686:
      if (lookahead == '8') ADVANCE(1634);
      END_STATE();
    case 1687:
      if (lookahead == '8') ADVANCE(1635);
      END_STATE();
    case 1688:
      if (lookahead == '8') ADVANCE(1637);
      END_STATE();
    case 1689:
      if (lookahead == '9') ADVANCE(1468);
      END_STATE();
    case 1690:
      if (lookahead == '9') ADVANCE(1714);
      END_STATE();
    case 1691:
      if (lookahead == '9') ADVANCE(1619);
      END_STATE();
    case 1692:
      if (lookahead == '9') ADVANCE(1336);
      if (lookahead == ';') ADVANCE(2358);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1624);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1573);
      END_STATE();
    case 1693:
      if (lookahead == '9') ADVANCE(1334);
      END_STATE();
    case 1694:
      if (lookahead == '9') ADVANCE(1724);
      END_STATE();
    case 1695:
      if (lookahead == '9') ADVANCE(1713);
      END_STATE();
    case 1696:
      if (lookahead == '9') ADVANCE(1723);
      END_STATE();
    case 1697:
      if (lookahead == '9') ADVANCE(1756);
      END_STATE();
    case 1698:
      if (lookahead == '9') ADVANCE(1763);
      END_STATE();
    case 1699:
      if (lookahead == '9') ADVANCE(1771);
      END_STATE();
    case 1700:
      if (lookahead == '9') ADVANCE(1774);
      END_STATE();
    case 1701:
      if (lookahead == '9') ADVANCE(1529);
      END_STATE();
    case 1702:
      if (lookahead == '9') ADVANCE(1620);
      END_STATE();
    case 1703:
      if (lookahead == '9') ADVANCE(1607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2139);
      END_STATE();
    case 1704:
      if (lookahead == '9') ADVANCE(1621);
      END_STATE();
    case 1705:
      if (lookahead == '9') ADVANCE(1622);
      END_STATE();
    case 1706:
      if (lookahead == '9') ADVANCE(1598);
      END_STATE();
    case 1707:
      if (lookahead == '9') ADVANCE(1599);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2138);
      END_STATE();
    case 1708:
      if (lookahead == '9') ADVANCE(1624);
      END_STATE();
    case 1709:
      if (lookahead == '9') ADVANCE(1624);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2138);
      END_STATE();
    case 1710:
      if (lookahead == '9') ADVANCE(1626);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2140);
      END_STATE();
    case 1711:
      if (lookahead == '9') ADVANCE(1605);
      END_STATE();
    case 1712:
      if (lookahead == '9') ADVANCE(1630);
      END_STATE();
    case 1713:
      if (lookahead == ';') ADVANCE(2339);
      END_STATE();
    case 1714:
      if (lookahead == ';') ADVANCE(2342);
      END_STATE();
    case 1715:
      if (lookahead == ';') ADVANCE(2342);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1725);
      END_STATE();
    case 1716:
      if (lookahead == ';') ADVANCE(2178);
      END_STATE();
    case 1717:
      if (lookahead == ';') ADVANCE(1094);
      END_STATE();
    case 1718:
      if (lookahead == ';') ADVANCE(2212);
      END_STATE();
    case 1719:
      if (lookahead == ';') ADVANCE(2417);
      END_STATE();
    case 1720:
      if (lookahead == ';') ADVANCE(2329);
      END_STATE();
    case 1721:
      if (lookahead == ';') ADVANCE(2329);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1726);
      END_STATE();
    case 1722:
      if (lookahead == ';') ADVANCE(2399);
      END_STATE();
    case 1723:
      if (lookahead == ';') ADVANCE(2441);
      END_STATE();
    case 1724:
      if (lookahead == ';') ADVANCE(2414);
      END_STATE();
    case 1725:
      if (lookahead == ';') ADVANCE(2232);
      END_STATE();
    case 1726:
      if (lookahead == ';') ADVANCE(2230);
      END_STATE();
    case 1727:
      if (lookahead == ';') ADVANCE(2236);
      END_STATE();
    case 1728:
      if (lookahead == ';') ADVANCE(2234);
      END_STATE();
    case 1729:
      if (lookahead == ';') ADVANCE(2370);
      END_STATE();
    case 1730:
      if (lookahead == ';') ADVANCE(2370);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1726);
      END_STATE();
    case 1731:
      if (lookahead == ';') ADVANCE(2238);
      END_STATE();
    case 1732:
      if (lookahead == ';') ADVANCE(2228);
      END_STATE();
    case 1733:
      if (lookahead == ';') ADVANCE(2433);
      END_STATE();
    case 1734:
      if (lookahead == ';') ADVANCE(2216);
      END_STATE();
    case 1735:
      if (lookahead == ';') ADVANCE(2218);
      END_STATE();
    case 1736:
      if (lookahead == ';') ADVANCE(2220);
      END_STATE();
    case 1737:
      if (lookahead == ';') ADVANCE(2222);
      END_STATE();
    case 1738:
      if (lookahead == ';') ADVANCE(2224);
      END_STATE();
    case 1739:
      if (lookahead == ';') ADVANCE(2403);
      END_STATE();
    case 1740:
      if (lookahead == ';') ADVANCE(2429);
      END_STATE();
    case 1741:
      if (lookahead == ';') ADVANCE(2401);
      END_STATE();
    case 1742:
      if (lookahead == ';') ADVANCE(2421);
      END_STATE();
    case 1743:
      if (lookahead == ';') ADVANCE(2374);
      END_STATE();
    case 1744:
      if (lookahead == ';') ADVANCE(2425);
      END_STATE();
    case 1745:
      if (lookahead == ';') ADVANCE(2405);
      END_STATE();
    case 1746:
      if (lookahead == ';') ADVANCE(2407);
      END_STATE();
    case 1747:
      if (lookahead == ';') ADVANCE(2226);
      END_STATE();
    case 1748:
      if (lookahead == ';') ADVANCE(2214);
      END_STATE();
    case 1749:
      if (lookahead == ';') ADVANCE(2376);
      END_STATE();
    case 1750:
      if (lookahead == ';') ADVANCE(2378);
      END_STATE();
    case 1751:
      if (lookahead == ';') ADVANCE(2380);
      END_STATE();
    case 1752:
      if (lookahead == ';') ADVANCE(2382);
      END_STATE();
    case 1753:
      if (lookahead == ';') ADVANCE(2372);
      END_STATE();
    case 1754:
      if (lookahead == ';') ADVANCE(2384);
      END_STATE();
    case 1755:
      if (lookahead == ';') ADVANCE(1158);
      END_STATE();
    case 1756:
      if (lookahead == ';') ADVANCE(2344);
      END_STATE();
    case 1757:
      if (lookahead == ';') ADVANCE(2344);
      if (lookahead == 'a') ADVANCE(2035);
      END_STATE();
    case 1758:
      if (lookahead == ';') ADVANCE(2344);
      if (lookahead == 'f') ADVANCE(2083);
      if (lookahead == 'q') ADVANCE(1756);
      END_STATE();
    case 1759:
      if (lookahead == ';') ADVANCE(2344);
      if (lookahead == 'o') ADVANCE(2119);
      END_STATE();
    case 1760:
      if (lookahead == ';') ADVANCE(2344);
      if (lookahead == 't') ADVANCE(1996);
      END_STATE();
    case 1761:
      if (lookahead == ';') ADVANCE(2356);
      END_STATE();
    case 1762:
      if (lookahead == ';') ADVANCE(2361);
      END_STATE();
    case 1763:
      if (lookahead == ';') ADVANCE(1159);
      END_STATE();
    case 1764:
      if (lookahead == ';') ADVANCE(1159);
      if (lookahead == 'b') ADVANCE(1756);
      if (lookahead == 'e') ADVANCE(1756);
      if (lookahead == 'm') ADVANCE(1975);
      END_STATE();
    case 1765:
      if (lookahead == ';') ADVANCE(2357);
      END_STATE();
    case 1766:
      if (lookahead == ';') ADVANCE(1160);
      END_STATE();
    case 1767:
      if (lookahead == ';') ADVANCE(2336);
      END_STATE();
    case 1768:
      if (lookahead == ';') ADVANCE(1165);
      END_STATE();
    case 1769:
      if (lookahead == ';') ADVANCE(2358);
      END_STATE();
    case 1770:
      if (lookahead == ';') ADVANCE(1162);
      END_STATE();
    case 1771:
      if (lookahead == ';') ADVANCE(2343);
      END_STATE();
    case 1772:
      if (lookahead == ';') ADVANCE(2343);
      if (lookahead == 'b') ADVANCE(1756);
      if (lookahead == 'e') ADVANCE(1756);
      if (lookahead == 'm') ADVANCE(1975);
      END_STATE();
    case 1773:
      if (lookahead == ';') ADVANCE(2331);
      END_STATE();
    case 1774:
      if (lookahead == ';') ADVANCE(2412);
      END_STATE();
    case 1775:
      if (lookahead == ';') ADVANCE(1168);
      END_STATE();
    case 1776:
      if (lookahead == ';') ADVANCE(2179);
      END_STATE();
    case 1777:
      if (lookahead == ';') ADVANCE(1095);
      END_STATE();
    case 1778:
      if (lookahead == ';') ADVANCE(2359);
      END_STATE();
    case 1779:
      if (lookahead == ';') ADVANCE(1099);
      END_STATE();
    case 1780:
      if (lookahead == ';') ADVANCE(1098);
      END_STATE();
    case 1781:
      if (lookahead == ';') ADVANCE(1100);
      END_STATE();
    case 1782:
      if (lookahead == ';') ADVANCE(1101);
      END_STATE();
    case 1783:
      if (lookahead == '=') ADVANCE(2344);
      END_STATE();
    case 1784:
      if (lookahead == 'A') ADVANCE(2036);
      END_STATE();
    case 1785:
      if (lookahead == 'A') ADVANCE(2036);
      if (lookahead == 'R') ADVANCE(1933);
      END_STATE();
    case 1786:
      if (lookahead == 'A') ADVANCE(2036);
      if (lookahead == 'T') ADVANCE(1873);
      if (lookahead == 'p') ADVANCE(1874);
      END_STATE();
    case 1787:
      if (lookahead == 'L') ADVANCE(1876);
      if (lookahead == 'R') ADVANCE(1933);
      if (lookahead == 'U') ADVANCE(2012);
      END_STATE();
    case 1788:
      if (lookahead == 'M') ADVANCE(1941);
      END_STATE();
    case 1789:
      if (lookahead == 'N') ADVANCE(2344);
      END_STATE();
    case 1790:
      if (lookahead == 'P') ADVANCE(1965);
      END_STATE();
    case 1791:
      if (lookahead == 'R') ADVANCE(1933);
      END_STATE();
    case 1792:
      if (lookahead == 'a') ADVANCE(2043);
      END_STATE();
    case 1793:
      if (lookahead == 'a') ADVANCE(1838);
      END_STATE();
    case 1794:
      if (lookahead == 'a') ADVANCE(1944);
      if (lookahead == 'y') ADVANCE(2018);
      END_STATE();
    case 1795:
      if (lookahead == 'a') ADVANCE(1944);
      if (lookahead == 'y') ADVANCE(2023);
      END_STATE();
    case 1796:
      if (lookahead == 'a') ADVANCE(1837);
      if (lookahead == 'd') ADVANCE(1827);
      if (lookahead == 'e') ADVANCE(1820);
      if (lookahead == 'v') ADVANCE(1960);
      END_STATE();
    case 1797:
      if (lookahead == 'a') ADVANCE(1837);
      if (lookahead == 'd') ADVANCE(1832);
      if (lookahead == 'e') ADVANCE(1820);
      if (lookahead == 'v') ADVANCE(1960);
      END_STATE();
    case 1798:
      if (lookahead == 'a') ADVANCE(2044);
      END_STATE();
    case 1799:
      if (lookahead == 'a') ADVANCE(1943);
      if (lookahead == 'y') ADVANCE(2010);
      END_STATE();
    case 1800:
      if (lookahead == 'a') ADVANCE(1943);
      if (lookahead == 'y') ADVANCE(2014);
      END_STATE();
    case 1801:
      if (lookahead == 'a') ADVANCE(2031);
      END_STATE();
    case 1802:
      if (lookahead == 'a') ADVANCE(2031);
      if (lookahead == 'i') ADVANCE(1903);
      END_STATE();
    case 1803:
      if (lookahead == 'a') ADVANCE(2031);
      if (lookahead == 'p') ADVANCE(1813);
      END_STATE();
    case 1804:
      if (lookahead == 'a') ADVANCE(2031);
      if (lookahead == 'y') ADVANCE(2018);
      END_STATE();
    case 1805:
      if (lookahead == 'a') ADVANCE(2031);
      if (lookahead == 'y') ADVANCE(2023);
      END_STATE();
    case 1806:
      if (lookahead == 'a') ADVANCE(1962);
      END_STATE();
    case 1807:
      if (lookahead == 'a') ADVANCE(1968);
      if (lookahead == 'e') ADVANCE(1891);
      END_STATE();
    case 1808:
      if (lookahead == 'a') ADVANCE(1968);
      if (lookahead == 'i') ADVANCE(1901);
      END_STATE();
    case 1809:
      if (lookahead == 'a') ADVANCE(1947);
      if (lookahead == 'd') ADVANCE(1827);
      if (lookahead == 'i') ADVANCE(1850);
      if (lookahead == 'n') ADVANCE(2024);
      if (lookahead == 'p') ADVANCE(1756);
      END_STATE();
    case 1810:
      if (lookahead == 'a') ADVANCE(1947);
      if (lookahead == 'd') ADVANCE(1827);
      if (lookahead == 'i') ADVANCE(1988);
      if (lookahead == 'n') ADVANCE(2024);
      if (lookahead == 'p') ADVANCE(1756);
      END_STATE();
    case 1811:
      if (lookahead == 'a') ADVANCE(1947);
      if (lookahead == 'd') ADVANCE(1832);
      if (lookahead == 'i') ADVANCE(1851);
      if (lookahead == 'n') ADVANCE(2024);
      if (lookahead == 'p') ADVANCE(1756);
      END_STATE();
    case 1812:
      if (lookahead == 'a') ADVANCE(1947);
      if (lookahead == 'd') ADVANCE(1832);
      if (lookahead == 'i') ADVANCE(1992);
      if (lookahead == 'n') ADVANCE(2024);
      if (lookahead == 'p') ADVANCE(1756);
      END_STATE();
    case 1813:
      if (lookahead == 'a') ADVANCE(2036);
      END_STATE();
    case 1814:
      if (lookahead == 'a') ADVANCE(2036);
      if (lookahead == 'r') ADVANCE(1940);
      END_STATE();
    case 1815:
      if (lookahead == 'a') ADVANCE(2035);
      END_STATE();
    case 1816:
      if (lookahead == 'a') ADVANCE(1756);
      END_STATE();
    case 1817:
      if (lookahead == 'a') ADVANCE(1961);
      if (lookahead == 'y') ADVANCE(2018);
      END_STATE();
    case 1818:
      if (lookahead == 'a') ADVANCE(2065);
      END_STATE();
    case 1819:
      if (lookahead == 'a') ADVANCE(1958);
      END_STATE();
    case 1820:
      if (lookahead == 'a') ADVANCE(2037);
      END_STATE();
    case 1821:
      if (lookahead == 'a') ADVANCE(2067);
      END_STATE();
    case 1822:
      if (lookahead == 'a') ADVANCE(2069);
      END_STATE();
    case 1823:
      if (lookahead == 'a') ADVANCE(2071);
      END_STATE();
    case 1824:
      if (lookahead == 'a') ADVANCE(2072);
      END_STATE();
    case 1825:
      if (lookahead == 'a') ADVANCE(2073);
      END_STATE();
    case 1826:
      if (lookahead == 'a') ADVANCE(2074);
      END_STATE();
    case 1827:
      if (lookahead == 'a') ADVANCE(2075);
      END_STATE();
    case 1828:
      if (lookahead == 'a') ADVANCE(2076);
      END_STATE();
    case 1829:
      if (lookahead == 'a') ADVANCE(2077);
      END_STATE();
    case 1830:
      if (lookahead == 'a') ADVANCE(2078);
      END_STATE();
    case 1831:
      if (lookahead == 'a') ADVANCE(2079);
      END_STATE();
    case 1832:
      if (lookahead == 'a') ADVANCE(2080);
      END_STATE();
    case 1833:
      if (lookahead == 'a') ADVANCE(2064);
      END_STATE();
    case 1834:
      if (lookahead == 'a') ADVANCE(1841);
      END_STATE();
    case 1835:
      if (lookahead == 'a') ADVANCE(1963);
      END_STATE();
    case 1836:
      if (lookahead == 'a') ADVANCE(1842);
      END_STATE();
    case 1837:
      if (lookahead == 'b') ADVANCE(1948);
      END_STATE();
    case 1838:
      if (lookahead == 'c') ADVANCE(1331);
      END_STATE();
    case 1839:
      if (lookahead == 'c') ADVANCE(1950);
      END_STATE();
    case 1840:
      if (lookahead == 'c') ADVANCE(1952);
      END_STATE();
    case 1841:
      if (lookahead == 'c') ADVANCE(1361);
      END_STATE();
    case 1842:
      if (lookahead == 'c') ADVANCE(1377);
      END_STATE();
    case 1843:
      if (lookahead == 'd') ADVANCE(1798);
      END_STATE();
    case 1844:
      if (lookahead == 'd') ADVANCE(1798);
      if (lookahead == 'i') ADVANCE(1848);
      END_STATE();
    case 1845:
      if (lookahead == 'd') ADVANCE(2002);
      if (lookahead == 'p') ADVANCE(1965);
      END_STATE();
    case 1846:
      if (lookahead == 'd') ADVANCE(1818);
      END_STATE();
    case 1847:
      if (lookahead == 'd') ADVANCE(1818);
      if (lookahead == 'i') ADVANCE(1983);
      END_STATE();
    case 1848:
      if (lookahead == 'd') ADVANCE(1792);
      if (lookahead == 'n') ADVANCE(2103);
      END_STATE();
    case 1849:
      if (lookahead == 'd') ADVANCE(1792);
      if (lookahead == 'n') ADVANCE(2106);
      END_STATE();
    case 1850:
      if (lookahead == 'd') ADVANCE(1792);
      if (lookahead == 'n') ADVANCE(2111);
      END_STATE();
    case 1851:
      if (lookahead == 'd') ADVANCE(1792);
      if (lookahead == 'n') ADVANCE(2115);
      END_STATE();
    case 1852:
      if (lookahead == 'd') ADVANCE(1822);
      END_STATE();
    case 1853:
      if (lookahead == 'd') ADVANCE(1822);
      if (lookahead == 'i') ADVANCE(1984);
      END_STATE();
    case 1854:
      if (lookahead == 'd') ADVANCE(1823);
      END_STATE();
    case 1855:
      if (lookahead == 'd') ADVANCE(1823);
      if (lookahead == 'i') ADVANCE(1985);
      END_STATE();
    case 1856:
      if (lookahead == 'd') ADVANCE(1824);
      if (lookahead == 'i') ADVANCE(1849);
      END_STATE();
    case 1857:
      if (lookahead == 'd') ADVANCE(1825);
      END_STATE();
    case 1858:
      if (lookahead == 'd') ADVANCE(1826);
      END_STATE();
    case 1859:
      if (lookahead == 'd') ADVANCE(1826);
      if (lookahead == 'i') ADVANCE(1986);
      END_STATE();
    case 1860:
      if (lookahead == 'd') ADVANCE(1828);
      END_STATE();
    case 1861:
      if (lookahead == 'd') ADVANCE(1828);
      if (lookahead == 'i') ADVANCE(1987);
      END_STATE();
    case 1862:
      if (lookahead == 'd') ADVANCE(1829);
      END_STATE();
    case 1863:
      if (lookahead == 'd') ADVANCE(1829);
      if (lookahead == 'i') ADVANCE(1989);
      END_STATE();
    case 1864:
      if (lookahead == 'd') ADVANCE(1830);
      END_STATE();
    case 1865:
      if (lookahead == 'd') ADVANCE(1830);
      if (lookahead == 'i') ADVANCE(1990);
      END_STATE();
    case 1866:
      if (lookahead == 'd') ADVANCE(1831);
      END_STATE();
    case 1867:
      if (lookahead == 'd') ADVANCE(1831);
      if (lookahead == 'i') ADVANCE(1991);
      END_STATE();
    case 1868:
      if (lookahead == 'e') ADVANCE(1758);
      if (lookahead == 'l') ADVANCE(2087);
      if (lookahead == 'o') ADVANCE(2118);
      if (lookahead == 'r') ADVANCE(1801);
      END_STATE();
    case 1869:
      if (lookahead == 'e') ADVANCE(1758);
      if (lookahead == 'l') ADVANCE(2087);
      if (lookahead == 'r') ADVANCE(1801);
      END_STATE();
    case 1870:
      if (lookahead == 'e') ADVANCE(1969);
      END_STATE();
    case 1871:
      if (lookahead == 'e') ADVANCE(2033);
      if (lookahead == 'l') ADVANCE(2097);
      if (lookahead == 'm') ADVANCE(1756);
      if (lookahead == 'r') ADVANCE(1999);
      END_STATE();
    case 1872:
      if (lookahead == 'e') ADVANCE(2033);
      if (lookahead == 'l') ADVANCE(2100);
      if (lookahead == 'm') ADVANCE(1756);
      if (lookahead == 'r') ADVANCE(1999);
      END_STATE();
    case 1873:
      if (lookahead == 'e') ADVANCE(1875);
      END_STATE();
    case 1874:
      if (lookahead == 'e') ADVANCE(2028);
      END_STATE();
    case 1875:
      if (lookahead == 'e') ADVANCE(1756);
      END_STATE();
    case 1876:
      if (lookahead == 'e') ADVANCE(1893);
      END_STATE();
    case 1877:
      if (lookahead == 'e') ADVANCE(1970);
      END_STATE();
    case 1878:
      if (lookahead == 'e') ADVANCE(1973);
      END_STATE();
    case 1879:
      if (lookahead == 'e') ADVANCE(1950);
      END_STATE();
    case 1880:
      if (lookahead == 'e') ADVANCE(1971);
      END_STATE();
    case 1881:
      if (lookahead == 'e') ADVANCE(1972);
      END_STATE();
    case 1882:
      if (lookahead == 'e') ADVANCE(1974);
      END_STATE();
    case 1883:
      if (lookahead == 'e') ADVANCE(1976);
      END_STATE();
    case 1884:
      if (lookahead == 'e') ADVANCE(1975);
      END_STATE();
    case 1885:
      if (lookahead == 'e') ADVANCE(1977);
      END_STATE();
    case 1886:
      if (lookahead == 'e') ADVANCE(1979);
      END_STATE();
    case 1887:
      if (lookahead == 'e') ADVANCE(1981);
      END_STATE();
    case 1888:
      if (lookahead == 'e') ADVANCE(1980);
      END_STATE();
    case 1889:
      if (lookahead == 'e') ADVANCE(2068);
      END_STATE();
    case 1890:
      if (lookahead == 'e') ADVANCE(2070);
      END_STATE();
    case 1891:
      if (lookahead == 'f') ADVANCE(2082);
      END_STATE();
    case 1892:
      if (lookahead == 'f') ADVANCE(1938);
      END_STATE();
    case 1893:
      if (lookahead == 'f') ADVANCE(2084);
      END_STATE();
    case 1894:
      if (lookahead == 'f') ADVANCE(1724);
      END_STATE();
    case 1895:
      if (lookahead == 'f') ADVANCE(2051);
      END_STATE();
    case 1896:
      if (lookahead == 'f') ADVANCE(1723);
      END_STATE();
    case 1897:
      if (lookahead == 'f') ADVANCE(1756);
      END_STATE();
    case 1898:
      if (lookahead == 'f') ADVANCE(1774);
      END_STATE();
    case 1899:
      if (lookahead == 'f') ADVANCE(1939);
      END_STATE();
    case 1900:
      if (lookahead == 'g') ADVANCE(1995);
      END_STATE();
    case 1901:
      if (lookahead == 'g') ADVANCE(1907);
      END_STATE();
    case 1902:
      if (lookahead == 'g') ADVANCE(1756);
      END_STATE();
    case 1903:
      if (lookahead == 'g') ADVANCE(1908);
      END_STATE();
    case 1904:
      if (lookahead == 'h') ADVANCE(1870);
      END_STATE();
    case 1905:
      if (lookahead == 'h') ADVANCE(2000);
      if (lookahead == 'q') ADVANCE(2101);
      END_STATE();
    case 1906:
      if (lookahead == 'h') ADVANCE(1720);
      END_STATE();
    case 1907:
      if (lookahead == 'h') ADVANCE(2084);
      END_STATE();
    case 1908:
      if (lookahead == 'h') ADVANCE(2092);
      END_STATE();
    case 1909:
      if (lookahead == 'h') ADVANCE(1716);
      END_STATE();
    case 1910:
      if (lookahead == 'h') ADVANCE(1717);
      END_STATE();
    case 1911:
      if (lookahead == 'h') ADVANCE(1777);
      END_STATE();
    case 1912:
      if (lookahead == 'h') ADVANCE(1743);
      END_STATE();
    case 1913:
      if (lookahead == 'h') ADVANCE(1776);
      END_STATE();
    case 1914:
      if (lookahead == 'h') ADVANCE(1751);
      END_STATE();
    case 1915:
      if (lookahead == 'h') ADVANCE(1752);
      END_STATE();
    case 1916:
      if (lookahead == 'h') ADVANCE(1756);
      END_STATE();
    case 1917:
      if (lookahead == 'h') ADVANCE(1765);
      END_STATE();
    case 1918:
      if (lookahead == 'h') ADVANCE(1767);
      END_STATE();
    case 1919:
      if (lookahead == 'h') ADVANCE(1780);
      END_STATE();
    case 1920:
      if (lookahead == 'h') ADVANCE(1773);
      END_STATE();
    case 1921:
      if (lookahead == 'h') ADVANCE(1781);
      END_STATE();
    case 1922:
      if (lookahead == 'h') ADVANCE(1877);
      END_STATE();
    case 1923:
      if (lookahead == 'h') ADVANCE(1878);
      END_STATE();
    case 1924:
      if (lookahead == 'h') ADVANCE(1880);
      END_STATE();
    case 1925:
      if (lookahead == 'h') ADVANCE(1881);
      END_STATE();
    case 1926:
      if (lookahead == 'h') ADVANCE(1882);
      END_STATE();
    case 1927:
      if (lookahead == 'h') ADVANCE(1883);
      END_STATE();
    case 1928:
      if (lookahead == 'h') ADVANCE(1884);
      END_STATE();
    case 1929:
      if (lookahead == 'h') ADVANCE(1885);
      END_STATE();
    case 1930:
      if (lookahead == 'h') ADVANCE(1886);
      END_STATE();
    case 1931:
      if (lookahead == 'h') ADVANCE(1887);
      END_STATE();
    case 1932:
      if (lookahead == 'h') ADVANCE(1888);
      END_STATE();
    case 1933:
      if (lookahead == 'i') ADVANCE(1901);
      END_STATE();
    case 1934:
      if (lookahead == 'i') ADVANCE(2038);
      END_STATE();
    case 1935:
      if (lookahead == 'i') ADVANCE(1900);
      if (lookahead == 'o') ADVANCE(2081);
      END_STATE();
    case 1936:
      if (lookahead == 'i') ADVANCE(1756);
      END_STATE();
    case 1937:
      if (lookahead == 'i') ADVANCE(1982);
      END_STATE();
    case 1938:
      if (lookahead == 'i') ADVANCE(1978);
      END_STATE();
    case 1939:
      if (lookahead == 'i') ADVANCE(1975);
      END_STATE();
    case 1940:
      if (lookahead == 'i') ADVANCE(1903);
      END_STATE();
    case 1941:
      if (lookahead == 'i') ADVANCE(1987);
      END_STATE();
    case 1942:
      if (lookahead == 'l') ADVANCE(2094);
      END_STATE();
    case 1943:
      if (lookahead == 'l') ADVANCE(1894);
      END_STATE();
    case 1944:
      if (lookahead == 'l') ADVANCE(1894);
      if (lookahead == 'r') ADVANCE(2038);
      END_STATE();
    case 1945:
      if (lookahead == 'l') ADVANCE(1722);
      END_STATE();
    case 1946:
      if (lookahead == 'l') ADVANCE(1801);
      if (lookahead == 'q') ADVANCE(2093);
      if (lookahead == 'r') ADVANCE(1801);
      END_STATE();
    case 1947:
      if (lookahead == 'l') ADVANCE(1875);
      END_STATE();
    case 1948:
      if (lookahead == 'l') ADVANCE(1816);
      END_STATE();
    case 1949:
      if (lookahead == 'l') ADVANCE(1755);
      END_STATE();
    case 1950:
      if (lookahead == 'l') ADVANCE(1756);
      END_STATE();
    case 1951:
      if (lookahead == 'l') ADVANCE(1756);
      if (lookahead == 'r') ADVANCE(1756);
      END_STATE();
    case 1952:
      if (lookahead == 'l') ADVANCE(1769);
      END_STATE();
    case 1953:
      if (lookahead == 'l') ADVANCE(1766);
      END_STATE();
    case 1954:
      if (lookahead == 'l') ADVANCE(1775);
      END_STATE();
    case 1955:
      if (lookahead == 'l') ADVANCE(1768);
      END_STATE();
    case 1956:
      if (lookahead == 'l') ADVANCE(1779);
      END_STATE();
    case 1957:
      if (lookahead == 'l') ADVANCE(2096);
      END_STATE();
    case 1958:
      if (lookahead == 'l') ADVANCE(1896);
      END_STATE();
    case 1959:
      if (lookahead == 'l') ADVANCE(1782);
      END_STATE();
    case 1960:
      if (lookahead == 'l') ADVANCE(2091);
      END_STATE();
    case 1961:
      if (lookahead == 'l') ADVANCE(1898);
      if (lookahead == 'r') ADVANCE(2038);
      END_STATE();
    case 1962:
      if (lookahead == 'l') ADVANCE(2058);
      END_STATE();
    case 1963:
      if (lookahead == 'l') ADVANCE(2060);
      END_STATE();
    case 1964:
      if (lookahead == 'l') ADVANCE(2104);
      END_STATE();
    case 1965:
      if (lookahead == 'l') ADVANCE(2110);
      END_STATE();
    case 1966:
      if (lookahead == 'm') ADVANCE(1756);
      END_STATE();
    case 1967:
      if (lookahead == 'n') ADVANCE(1892);
      END_STATE();
    case 1968:
      if (lookahead == 'n') ADVANCE(1902);
      END_STATE();
    case 1969:
      if (lookahead == 'n') ADVANCE(1720);
      END_STATE();
    case 1970:
      if (lookahead == 'n') ADVANCE(1716);
      END_STATE();
    case 1971:
      if (lookahead == 'n') ADVANCE(1717);
      END_STATE();
    case 1972:
      if (lookahead == 'n') ADVANCE(1777);
      END_STATE();
    case 1973:
      if (lookahead == 'n') ADVANCE(1743);
      END_STATE();
    case 1974:
      if (lookahead == 'n') ADVANCE(1776);
      END_STATE();
    case 1975:
      if (lookahead == 'n') ADVANCE(1756);
      END_STATE();
    case 1976:
      if (lookahead == 'n') ADVANCE(1765);
      END_STATE();
    case 1977:
      if (lookahead == 'n') ADVANCE(1767);
      END_STATE();
    case 1978:
      if (lookahead == 'n') ADVANCE(1761);
      END_STATE();
    case 1979:
      if (lookahead == 'n') ADVANCE(1780);
      END_STATE();
    case 1980:
      if (lookahead == 'n') ADVANCE(1773);
      END_STATE();
    case 1981:
      if (lookahead == 'n') ADVANCE(1781);
      END_STATE();
    case 1982:
      if (lookahead == 'n') ADVANCE(2099);
      END_STATE();
    case 1983:
      if (lookahead == 'n') ADVANCE(2105);
      END_STATE();
    case 1984:
      if (lookahead == 'n') ADVANCE(2107);
      END_STATE();
    case 1985:
      if (lookahead == 'n') ADVANCE(2108);
      END_STATE();
    case 1986:
      if (lookahead == 'n') ADVANCE(2109);
      END_STATE();
    case 1987:
      if (lookahead == 'n') ADVANCE(2110);
      END_STATE();
    case 1988:
      if (lookahead == 'n') ADVANCE(2111);
      END_STATE();
    case 1989:
      if (lookahead == 'n') ADVANCE(2112);
      END_STATE();
    case 1990:
      if (lookahead == 'n') ADVANCE(2113);
      END_STATE();
    case 1991:
      if (lookahead == 'n') ADVANCE(2114);
      END_STATE();
    case 1992:
      if (lookahead == 'n') ADVANCE(2115);
      END_STATE();
    case 1993:
      if (lookahead == 'n') ADVANCE(1899);
      END_STATE();
    case 1994:
      if (lookahead == 'o') ADVANCE(2118);
      END_STATE();
    case 1995:
      if (lookahead == 'o') ADVANCE(1845);
      END_STATE();
    case 1996:
      if (lookahead == 'o') ADVANCE(1966);
      END_STATE();
    case 1997:
      if (lookahead == 'o') ADVANCE(2119);
      END_STATE();
    case 1998:
      if (lookahead == 'o') ADVANCE(1945);
      END_STATE();
    case 1999:
      if (lookahead == 'o') ADVANCE(1895);
      END_STATE();
    case 2000:
      if (lookahead == 'o') ADVANCE(2034);
      END_STATE();
    case 2001:
      if (lookahead == 'o') ADVANCE(1949);
      END_STATE();
    case 2002:
      if (lookahead == 'o') ADVANCE(2089);
      END_STATE();
    case 2003:
      if (lookahead == 'o') ADVANCE(1953);
      END_STATE();
    case 2004:
      if (lookahead == 'o') ADVANCE(1954);
      END_STATE();
    case 2005:
      if (lookahead == 'o') ADVANCE(1955);
      END_STATE();
    case 2006:
      if (lookahead == 'o') ADVANCE(1956);
      END_STATE();
    case 2007:
      if (lookahead == 'o') ADVANCE(1959);
      END_STATE();
    case 2008:
      if (lookahead == 'p') ADVANCE(1786);
      END_STATE();
    case 2009:
      if (lookahead == 'p') ADVANCE(1174);
      END_STATE();
    case 2010:
      if (lookahead == 'p') ADVANCE(1904);
      END_STATE();
    case 2011:
      if (lookahead == 'p') ADVANCE(1756);
      END_STATE();
    case 2012:
      if (lookahead == 'p') ADVANCE(1813);
      END_STATE();
    case 2013:
      if (lookahead == 'p') ADVANCE(1922);
      END_STATE();
    case 2014:
      if (lookahead == 'p') ADVANCE(1923);
      END_STATE();
    case 2015:
      if (lookahead == 'p') ADVANCE(1924);
      END_STATE();
    case 2016:
      if (lookahead == 'p') ADVANCE(1925);
      END_STATE();
    case 2017:
      if (lookahead == 'p') ADVANCE(1926);
      END_STATE();
    case 2018:
      if (lookahead == 'p') ADVANCE(1927);
      END_STATE();
    case 2019:
      if (lookahead == 'p') ADVANCE(1928);
      END_STATE();
    case 2020:
      if (lookahead == 'p') ADVANCE(1929);
      END_STATE();
    case 2021:
      if (lookahead == 'p') ADVANCE(1930);
      END_STATE();
    case 2022:
      if (lookahead == 'p') ADVANCE(1931);
      END_STATE();
    case 2023:
      if (lookahead == 'p') ADVANCE(1932);
      END_STATE();
    case 2024:
      if (lookahead == 'p') ADVANCE(1965);
      END_STATE();
    case 2025:
      if (lookahead == 'p') ADVANCE(1965);
      if (lookahead == 'q') ADVANCE(2116);
      if (lookahead == 'x') ADVANCE(1840);
      END_STATE();
    case 2026:
      if (lookahead == 'p') ADVANCE(1965);
      if (lookahead == 'u') ADVANCE(1951);
      END_STATE();
    case 2027:
      if (lookahead == 'q') ADVANCE(2098);
      END_STATE();
    case 2028:
      if (lookahead == 'r') ADVANCE(1791);
      END_STATE();
    case 2029:
      if (lookahead == 'r') ADVANCE(1759);
      END_STATE();
    case 2030:
      if (lookahead == 'r') ADVANCE(1793);
      END_STATE();
    case 2031:
      if (lookahead == 'r') ADVANCE(2038);
      END_STATE();
    case 2032:
      if (lookahead == 'r') ADVANCE(1936);
      END_STATE();
    case 2033:
      if (lookahead == 'r') ADVANCE(2011);
      END_STATE();
    case 2034:
      if (lookahead == 'r') ADVANCE(2085);
      END_STATE();
    case 2035:
      if (lookahead == 'r') ADVANCE(1875);
      END_STATE();
    case 2036:
      if (lookahead == 'r') ADVANCE(2039);
      END_STATE();
    case 2037:
      if (lookahead == 'r') ADVANCE(2029);
      END_STATE();
    case 2038:
      if (lookahead == 'r') ADVANCE(1756);
      END_STATE();
    case 2039:
      if (lookahead == 'r') ADVANCE(1997);
      END_STATE();
    case 2040:
      if (lookahead == 'r') ADVANCE(1897);
      END_STATE();
    case 2041:
      if (lookahead == 'r') ADVANCE(1834);
      END_STATE();
    case 2042:
      if (lookahead == 'r') ADVANCE(1836);
      END_STATE();
    case 2043:
      if (lookahead == 's') ADVANCE(2086);
      END_STATE();
    case 2044:
      if (lookahead == 's') ADVANCE(1906);
      END_STATE();
    case 2045:
      if (lookahead == 's') ADVANCE(1788);
      END_STATE();
    case 2046:
      if (lookahead == 's') ADVANCE(1764);
      END_STATE();
    case 2047:
      if (lookahead == 's') ADVANCE(1790);
      END_STATE();
    case 2048:
      if (lookahead == 's') ADVANCE(1772);
      END_STATE();
    case 2049:
      if (lookahead == 's') ADVANCE(1714);
      END_STATE();
    case 2050:
      if (lookahead == 's') ADVANCE(1720);
      END_STATE();
    case 2051:
      if (lookahead == 's') ADVANCE(2102);
      END_STATE();
    case 2052:
      if (lookahead == 's') ADVANCE(1716);
      END_STATE();
    case 2053:
      if (lookahead == 's') ADVANCE(1713);
      END_STATE();
    case 2054:
      if (lookahead == 's') ADVANCE(1717);
      END_STATE();
    case 2055:
      if (lookahead == 's') ADVANCE(1777);
      END_STATE();
    case 2056:
      if (lookahead == 's') ADVANCE(1776);
      END_STATE();
    case 2057:
      if (lookahead == 's') ADVANCE(1753);
      END_STATE();
    case 2058:
      if (lookahead == 's') ADVANCE(1756);
      END_STATE();
    case 2059:
      if (lookahead == 's') ADVANCE(1765);
      END_STATE();
    case 2060:
      if (lookahead == 's') ADVANCE(1778);
      END_STATE();
    case 2061:
      if (lookahead == 's') ADVANCE(1767);
      END_STATE();
    case 2062:
      if (lookahead == 's') ADVANCE(1780);
      END_STATE();
    case 2063:
      if (lookahead == 's') ADVANCE(1773);
      END_STATE();
    case 2064:
      if (lookahead == 's') ADVANCE(2088);
      END_STATE();
    case 2065:
      if (lookahead == 's') ADVANCE(1909);
      END_STATE();
    case 2066:
      if (lookahead == 's') ADVANCE(1781);
      END_STATE();
    case 2067:
      if (lookahead == 's') ADVANCE(1912);
      END_STATE();
    case 2068:
      if (lookahead == 's') ADVANCE(2090);
      END_STATE();
    case 2069:
      if (lookahead == 's') ADVANCE(1910);
      END_STATE();
    case 2070:
      if (lookahead == 's') ADVANCE(2089);
      END_STATE();
    case 2071:
      if (lookahead == 's') ADVANCE(1911);
      END_STATE();
    case 2072:
      if (lookahead == 's') ADVANCE(1915);
      END_STATE();
    case 2073:
      if (lookahead == 's') ADVANCE(1914);
      END_STATE();
    case 2074:
      if (lookahead == 's') ADVANCE(1913);
      END_STATE();
    case 2075:
      if (lookahead == 's') ADVANCE(1917);
      END_STATE();
    case 2076:
      if (lookahead == 's') ADVANCE(1916);
      END_STATE();
    case 2077:
      if (lookahead == 's') ADVANCE(1918);
      END_STATE();
    case 2078:
      if (lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 2079:
      if (lookahead == 's') ADVANCE(1921);
      END_STATE();
    case 2080:
      if (lookahead == 's') ADVANCE(1920);
      END_STATE();
    case 2081:
      if (lookahead == 't') ADVANCE(1760);
      if (lookahead == 'x') ADVANCE(2026);
      END_STATE();
    case 2082:
      if (lookahead == 't') ADVANCE(1785);
      END_STATE();
    case 2083:
      if (lookahead == 't') ADVANCE(1814);
      END_STATE();
    case 2084:
      if (lookahead == 't') ADVANCE(1784);
      END_STATE();
    case 2085:
      if (lookahead == 't') ADVANCE(1787);
      END_STATE();
    case 2086:
      if (lookahead == 't') ADVANCE(1719);
      END_STATE();
    case 2087:
      if (lookahead == 't') ADVANCE(2032);
      END_STATE();
    case 2088:
      if (lookahead == 't') ADVANCE(1742);
      END_STATE();
    case 2089:
      if (lookahead == 't') ADVANCE(1756);
      END_STATE();
    case 2090:
      if (lookahead == 't') ADVANCE(1769);
      END_STATE();
    case 2091:
      if (lookahead == 't') ADVANCE(1770);
      END_STATE();
    case 2092:
      if (lookahead == 't') ADVANCE(1813);
      END_STATE();
    case 2093:
      if (lookahead == 'u') ADVANCE(1757);
      END_STATE();
    case 2094:
      if (lookahead == 'u') ADVANCE(2049);
      END_STATE();
    case 2095:
      if (lookahead == 'u') ADVANCE(1889);
      END_STATE();
    case 2096:
      if (lookahead == 'u') ADVANCE(2045);
      END_STATE();
    case 2097:
      if (lookahead == 'u') ADVANCE(2046);
      END_STATE();
    case 2098:
      if (lookahead == 'u') ADVANCE(1806);
      END_STATE();
    case 2099:
      if (lookahead == 'u') ADVANCE(2047);
      END_STATE();
    case 2100:
      if (lookahead == 'u') ADVANCE(2048);
      END_STATE();
    case 2101:
      if (lookahead == 'u') ADVANCE(1815);
      END_STATE();
    case 2102:
      if (lookahead == 'u') ADVANCE(2040);
      END_STATE();
    case 2103:
      if (lookahead == 'u') ADVANCE(2050);
      END_STATE();
    case 2104:
      if (lookahead == 'u') ADVANCE(2053);
      END_STATE();
    case 2105:
      if (lookahead == 'u') ADVANCE(2052);
      END_STATE();
    case 2106:
      if (lookahead == 'u') ADVANCE(2057);
      END_STATE();
    case 2107:
      if (lookahead == 'u') ADVANCE(2054);
      END_STATE();
    case 2108:
      if (lookahead == 'u') ADVANCE(2055);
      END_STATE();
    case 2109:
      if (lookahead == 'u') ADVANCE(2056);
      END_STATE();
    case 2110:
      if (lookahead == 'u') ADVANCE(2058);
      END_STATE();
    case 2111:
      if (lookahead == 'u') ADVANCE(2059);
      END_STATE();
    case 2112:
      if (lookahead == 'u') ADVANCE(2061);
      END_STATE();
    case 2113:
      if (lookahead == 'u') ADVANCE(2062);
      END_STATE();
    case 2114:
      if (lookahead == 'u') ADVANCE(2066);
      END_STATE();
    case 2115:
      if (lookahead == 'u') ADVANCE(2063);
      END_STATE();
    case 2116:
      if (lookahead == 'u') ADVANCE(1835);
      END_STATE();
    case 2117:
      if (lookahead == 'u') ADVANCE(1890);
      END_STATE();
    case 2118:
      if (lookahead == 'w') ADVANCE(1833);
      END_STATE();
    case 2119:
      if (lookahead == 'w') ADVANCE(1756);
      END_STATE();
    case 2120:
      if (lookahead == 'x') ADVANCE(1839);
      END_STATE();
    case 2121:
      if (lookahead == 'y') ADVANCE(2013);
      END_STATE();
    case 2122:
      if (lookahead == 'y') ADVANCE(2015);
      END_STATE();
    case 2123:
      if (lookahead == 'y') ADVANCE(2016);
      END_STATE();
    case 2124:
      if (lookahead == 'y') ADVANCE(2017);
      END_STATE();
    case 2125:
      if (lookahead == 'y') ADVANCE(2019);
      END_STATE();
    case 2126:
      if (lookahead == 'y') ADVANCE(2020);
      END_STATE();
    case 2127:
      if (lookahead == 'y') ADVANCE(2021);
      END_STATE();
    case 2128:
      if (lookahead == 'y') ADVANCE(2022);
      END_STATE();
    case 2129:
      if (lookahead == 0xfe0e) ADVANCE(2325);
      END_STATE();
    case 2130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2177);
      END_STATE();
    case 2131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1725);
      END_STATE();
    case 2132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1756);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1756);
      END_STATE();
    case 2133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1756);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1756);
      END_STATE();
    case 2134:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1745);
      END_STATE();
    case 2135:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1755);
      END_STATE();
    case 2136:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1756);
      END_STATE();
    case 2137:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1766);
      END_STATE();
    case 2138:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1775);
      END_STATE();
    case 2139:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1768);
      END_STATE();
    case 2140:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1779);
      END_STATE();
    case 2141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1782);
      END_STATE();
    case 2142:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2154);
      END_STATE();
    case 2143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1734);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1735);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1736);
      END_STATE();
    case 2144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1756);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1756);
      END_STATE();
    case 2145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1770);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1778);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1769);
      END_STATE();
    case 2146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2135);
      END_STATE();
    case 2147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2137);
      END_STATE();
    case 2148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2141);
      END_STATE();
    case 2149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1714);
      END_STATE();
    case 2150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1724);
      END_STATE();
    case 2151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1726);
      END_STATE();
    case 2152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1713);
      END_STATE();
    case 2153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1733);
      END_STATE();
    case 2154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1723);
      END_STATE();
    case 2155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1756);
      END_STATE();
    case 2156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1763);
      END_STATE();
    case 2157:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1771);
      END_STATE();
    case 2158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1585);
      END_STATE();
    case 2159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1727);
      END_STATE();
    case 2160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1756);
      END_STATE();
    case 2161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2149);
      END_STATE();
    case 2162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2152);
      END_STATE();
    case 2163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2155);
      END_STATE();
    case 2164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2156);
      END_STATE();
    case 2165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2157);
      END_STATE();
    case 2166:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1457);
      END_STATE();
    case 2167:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1211);
      END_STATE();
    case 2168:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1756);
      END_STATE();
    case 2169:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1667);
      END_STATE();
    case 2170:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1669);
      END_STATE();
    case 2171:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1672);
      END_STATE();
    case 2172:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1673);
      END_STATE();
    case 2173:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1675);
      END_STATE();
    case 2174:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1677);
      END_STATE();
    case 2175:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1681);
      END_STATE();
    case 2176:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2336);
      END_STATE();
    case 2177:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2176);
      END_STATE();
    case 2178:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2335);
      END_STATE();
    case 2179:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2332);
      END_STATE();
    case 2180:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2336);
      END_STATE();
    case 2181:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2435);
      END_STATE();
    case 2182:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2296);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      END_STATE();
    case 2183:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2296);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2364);
      END_STATE();
    case 2185:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '\n', 2199,
        '\r', 1085,
        '!', 2352,
        '$', 832,
        '&', 26,
        '(', 2280,
        '*', 2416,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'O', 2386,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1085,
        0x0b, 1085,
        '\f', 1085,
        ' ', 1085,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2186:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '\n', 2201,
        '\r', 1090,
        '!', 2352,
        '$', 832,
        '&', 10,
        '(', 2280,
        '0', 834,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'p', 791,
        '{', 2283,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2e40, 2347,
        'O', 34,
        'o', 34,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 1090,
        0x0b, 1090,
        '\f', 1090,
        ' ', 1090,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2187:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '!', 2352,
        '#', 2341,
        '$', 832,
        '&', 20,
        '(', 2280,
        '*', 2416,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'O', 2386,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        '\n', 1106,
        '\r', 1106,
        'Z', 828,
        'z', 828,
        '+', 2340,
        0x16ed, 2340,
        0x2795, 2340,
        ':', 2316,
        'X', 2316,
        'x', 2316,
        '\t', 1080,
        0x0b, 1080,
        '\f', 1080,
        ' ', 1080,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2299);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2188:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '!', 2352,
        '#', 2341,
        '$', 832,
        '&', 20,
        '(', 2280,
        '*', 2416,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2318,
        '?', 2352,
        '@', 2328,
        'O', 2386,
        'P', 2321,
        'R', 2306,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        '\n', 1106,
        '\r', 1106,
        'Z', 828,
        'z', 828,
        '+', 2340,
        0x16ed, 2340,
        0x2795, 2340,
        '\t', 1080,
        0x0b, 1080,
        '\f', 1080,
        ' ', 1080,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2299);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2307);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2189:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '!', 2352,
        '#', 2341,
        '$', 832,
        '&', 27,
        '(', 2280,
        '*', 2416,
        '0', 2390,
        '1', 2366,
        ';', 2197,
        '<', 492,
        '=', 2318,
        '?', 2352,
        '@', 2328,
        'O', 2386,
        'P', 2321,
        'R', 2306,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'o', 2395,
        'p', 791,
        '{', 2283,
        0xbd, 2410,
        0x66d, 2432,
        0x204e, 2428,
        0x2217, 2420,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2731, 2424,
        0x2e40, 2347,
        '\n', 1106,
        '\r', 1106,
        'Z', 828,
        'z', 828,
        '+', 2340,
        0x16ed, 2340,
        0x2795, 2340,
        ':', 2316,
        'X', 2316,
        'x', 2316,
        '\t', 1080,
        0x0b, 1080,
        '\f', 1080,
        ' ', 1080,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2330);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2299);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2307);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2190:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '!', 2352,
        '$', 832,
        '&', 10,
        '(', 2280,
        '0', 834,
        ';', 2197,
        '<', 492,
        '=', 2346,
        '?', 2352,
        '@', 2328,
        'P', 2321,
        'R', 2310,
        'T', 498,
        '[', 2208,
        'e', 2301,
        'p', 791,
        '{', 2283,
        0x221e, 2355,
        0x2659, 2324,
        0x265f, 790,
        0x2e40, 2347,
        '\n', 1104,
        '\r', 1104,
        'O', 34,
        'o', 34,
        'Z', 828,
        'z', 828,
        '+', 35,
        0x16ed, 35,
        0x2795, 35,
        '\t', 840,
        0x0b, 840,
        '\f', 840,
        ' ', 840,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2302);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2349);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2311);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2191:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '!', 2363,
        '#', 2339,
        '$', 2184,
        '&', 1133,
        '(', 2279,
        ')', 2281,
        '0', 1152,
        ';', 2196,
        '<', 1783,
        '=', 2360,
        '?', 2363,
        '@', 2327,
        'P', 2322,
        'R', 2313,
        'T', 1789,
        '[', 2207,
        'e', 2303,
        'p', 2130,
        '{', 2282,
        0xbd, 2409,
        0x221e, 2356,
        0x2659, 2323,
        0x265f, 2129,
        0x2e40, 2361,
        'O', 1153,
        'o', 1153,
        'Z', 2180,
        'z', 2180,
        '+', 2343,
        0x16ed, 2343,
        0x2795, 2343,
        ':', 2315,
        'X', 2315,
        'x', 2315,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1114);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2357);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      if (set_contains(sym_annotation_character_set_4, 44, lookahead)) ADVANCE(2344);
      END_STATE();
    case 2192:
      if (eof) ADVANCE(2193);
      ADVANCE_MAP(
        '"', 2211,
        '%', 2198,
        '&', 1122,
        '(', 2279,
        ')', 2281,
        '*', 2415,
        '-', 2369,
        '/', 2398,
        '0', 2392,
        '1', 2365,
        '2', 2408,
        ';', 2196,
        '@', 2327,
        'O', 2388,
        'P', 2320,
        '[', 2207,
        ']', 2209,
        'o', 2397,
        '{', 2282,
        '}', 2284,
        0xbd, 2411,
        0x2ba, 2231,
        0x2dd, 2229,
        0x2ee, 2235,
        0x2f6, 2233,
        0x5f2, 2237,
        0x5f4, 2227,
        0x66d, 2431,
        0x2010, 2373,
        0x2011, 2375,
        0x2012, 2377,
        0x2013, 2379,
        0x2014, 2381,
        0x201c, 2215,
        0x201d, 2217,
        0x201f, 2219,
        0x2033, 2221,
        0x2036, 2223,
        0x2044, 2402,
        0x204e, 2427,
        0x2212, 2371,
        0x2215, 2400,
        0x2217, 2419,
        0x2659, 2323,
        0x265f, 2129,
        0x2731, 2423,
        0x2796, 2383,
        0x27cb, 2404,
        0x29f8, 2406,
        0x3003, 2225,
        0xff02, 2213,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2192);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2300);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2298);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2309);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2194);
      if (lookahead == '\r') ADVANCE(1083);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1081);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2195);
      if (lookahead == '\r') ADVANCE(1093);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1086);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2199);
      if (lookahead == '\r') ADVANCE(1085);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1085);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2200);
      if (lookahead == '\r') ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1088);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2201);
      if (lookahead == '\r') ADVANCE(1090);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1090);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2202);
      if (lookahead == '\r') ADVANCE(1091);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1091);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2195);
      if (lookahead == '\r') ADVANCE(1093);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1086);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2204);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(1172);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(aux_sym_double_quote_token1);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(anon_sym_uff02);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(aux_sym_double_quote_token2);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(anon_sym_u201c);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(aux_sym_double_quote_token3);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(anon_sym_u201d);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(aux_sym_double_quote_token4);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(anon_sym_u201f);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(aux_sym_double_quote_token5);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(anon_sym_u2033);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(aux_sym_double_quote_token6);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(anon_sym_u2036);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(aux_sym_double_quote_token7);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(anon_sym_u3003);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(aux_sym_double_quote_token8);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(anon_sym_u05f4);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(aux_sym_double_quote_token9);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(anon_sym_u02dd);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(aux_sym_double_quote_token10);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(anon_sym_u02ba);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(aux_sym_double_quote_token11);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(anon_sym_u02f6);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(aux_sym_double_quote_token12);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(anon_sym_u02ee);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(aux_sym_double_quote_token13);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(anon_sym_u05f2);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(aux_sym_double_quote_token14);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2239);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(2240);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(2240);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '#') ADVANCE(2250);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2241);
      if (lookahead == ']') ADVANCE(2210);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2242);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2241);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2243);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2271);
      if (lookahead == '1') ADVANCE(2271);
      if (lookahead == '3') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2271);
      if (lookahead == '8') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2263);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      ADVANCE_MAP(
        '0', 2252,
        '2', 2271,
        'B', 2272,
        'b', 2272,
        'D', 2274,
        'd', 2274,
        'E', 2275,
        'e', 2275,
        'F', 2267,
        'f', 2267,
      );
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2246);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2254);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2259);
      if (lookahead == '3') ADVANCE(2265);
      if (lookahead == '6') ADVANCE(2266);
      if (lookahead == '7') ADVANCE(2264);
      if (lookahead == '8') ADVANCE(2255);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2256);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2273);
      if (lookahead == '3') ADVANCE(2262);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2271);
      if (lookahead == '4') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2258);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2247);
      if (lookahead == '3') ADVANCE(2248);
      if (lookahead == '5') ADVANCE(2276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2277);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2270);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2244);
      if (lookahead == '4') ADVANCE(2262);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2257);
      if (lookahead == '5') ADVANCE(2261);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2269);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2253);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2271);
      if (lookahead == '6') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2263);
      if (lookahead == '5') ADVANCE(2245);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '4') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '5') ADVANCE(2260);
      if (lookahead == '9') ADVANCE(2268);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '6') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2254);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '9') ADVANCE(2251);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ';') ADVANCE(2278);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2271);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2271);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2271);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2253);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2249);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2278);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(2285);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(sym_move_number);
      ADVANCE_MAP(
        '\n', 2294,
        '\r', 2289,
        '&', 23,
        '\t', 2288,
        0x0b, 2288,
        '\f', 2288,
        ' ', 2288,
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
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2294);
      if (lookahead == '\r') ADVANCE(2289);
      if (lookahead == '&') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2288);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2294);
      if (lookahead == '\r') ADVANCE(2289);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2288);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2296);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2295);
      if (lookahead == '\r') ADVANCE(2291);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2295);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1139);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2296);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1098);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2296);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1094);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1172);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2296);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1172);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(sym_move_number);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2296);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(sym_move_number);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(sym__misc_punctuation);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(sym__misc_punctuation);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(684);
      if (lookahead == 'p') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(2009);
      if (lookahead == 'p') ADVANCE(2344);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(2344);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(2362);
      if (lookahead == '\r') ADVANCE(2345);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(2344);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2344);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(anon_sym_EQ);
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 21,
        '=', 2354,
        '/', 36,
        0x2044, 36,
        0x2215, 36,
        0x27cb, 36,
        0x29f8, 36,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '&') ADVANCE(1145);
      if (lookahead == '=') ADVANCE(2344);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1160);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2177);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(anon_sym_u2659);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(anon_sym_u2659);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 12,
        '+', 2354,
        0x16ed, 2354,
        0x2795, 2354,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2338);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '&', 1126,
        '+', 2344,
        0x16ed, 2344,
        0x2795, 2344,
        '/', 1165,
        0x2044, 1165,
        0x2215, 1165,
        0x27cb, 1165,
        0x29f8, 1165,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2336);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(830);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(1149);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2179);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 25,
        '+', 2341,
        0x16ed, 2341,
        0x2795, 2341,
        '/', 40,
        0x2044, 40,
        0x2215, 40,
        0x27cb, 40,
        0x29f8, 40,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(1121);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2339);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '&', 1144,
        '+', 2339,
        0x16ed, 2339,
        0x2795, 2339,
        '/', 1168,
        0x2044, 1168,
        0x2215, 1168,
        0x27cb, 1168,
        0x29f8, 1168,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2344);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1173);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 21,
        '=', 2354,
        '/', 36,
        0x2044, 36,
        0x2215, 36,
        0x27cb, 36,
        0x29f8, 36,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 21,
        '/', 36,
        0x2044, 36,
        0x2215, 36,
        0x27cb, 36,
        0x29f8, 36,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 12,
        '-', 2337,
        '+', 2354,
        0x16ed, 2354,
        0x2795, 2354,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2338);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 12,
        '+', 2354,
        0x16ed, 2354,
        0x2795, 2354,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2338);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1173,
        '\r', 1,
        '&', 18,
        '/', 36,
        0x2044, 36,
        0x2215, 36,
        0x27cb, 36,
        0x29f8, 36,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2354);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2353);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1155,
        '\r', 838,
        '&', 29,
        '\t', 837,
        0x0b, 837,
        '\f', 837,
        ' ', 837,
        '/', 841,
        0x2044, 841,
        0x2215, 841,
        0x27cb, 841,
        0x29f8, 841,
      );
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1132);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1156);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1126,
        '+', 2344,
        0x16ed, 2344,
        0x2795, 2344,
        '/', 1165,
        0x2044, 1165,
        0x2215, 1165,
        0x27cb, 1165,
        0x29f8, 1165,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2336);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1128);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1130);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1160);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1145);
      if (lookahead == '=') ADVANCE(2344);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1160);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1145);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1160);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(1172);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2344);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2364);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(2294);
      if (lookahead == '\r') ADVANCE(2289);
      if (lookahead == ' ') ADVANCE(2286);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2288);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(836);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(2292);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2183);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2296);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(1163);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(anon_sym_u2212);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(anon_sym_u2010);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(anon_sym_u2011);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(anon_sym_u2012);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(anon_sym_u2013);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(anon_sym_u2014);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(anon_sym_u2796);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(829);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1164);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1164);
      if (lookahead == '&') ADVANCE(1120);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2178);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '\n', 2294,
        '\r', 2289,
        ' ', 2287,
        '&', 11,
        '\t', 2288,
        0x0b, 2288,
        '\f', 2288,
        'A', 836,
        'B', 836,
        'a', 836,
        'b', 836,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(829);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1164);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1164);
      if (lookahead == '&') ADVANCE(1120);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2178);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(2293);
      if (lookahead == '&') ADVANCE(1120);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2183);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2296);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2178);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2182);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(829);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1164);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1164);
      if (lookahead == '&') ADVANCE(1120);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2178);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(anon_sym_u2215);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(anon_sym_u2044);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(anon_sym_u27cb);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(anon_sym_u29f8);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(anon_sym_u00bd);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == ' ') ADVANCE(1166);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == ' ') ADVANCE(1166);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(anon_sym_u2217);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(anon_sym_u2217);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(anon_sym_u2731);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(anon_sym_u2731);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(anon_sym_u204e);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(anon_sym_u204e);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(anon_sym_u066d);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(anon_sym_u066d);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      if (lookahead == '\n') ADVANCE(1173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2190, .external_lex_state = 1},
  [2] = {.lex_state = 2187, .external_lex_state = 1},
  [3] = {.lex_state = 1082, .external_lex_state = 1},
  [4] = {.lex_state = 2187, .external_lex_state = 1},
  [5] = {.lex_state = 1109, .external_lex_state = 1},
  [6] = {.lex_state = 1109, .external_lex_state = 1},
  [7] = {.lex_state = 1109, .external_lex_state = 1},
  [8] = {.lex_state = 2189, .external_lex_state = 1},
  [9] = {.lex_state = 2188, .external_lex_state = 1},
  [10] = {.lex_state = 2188, .external_lex_state = 1},
  [11] = {.lex_state = 2188, .external_lex_state = 1},
  [12] = {.lex_state = 2189, .external_lex_state = 1},
  [13] = {.lex_state = 2190, .external_lex_state = 1},
  [14] = {.lex_state = 2190, .external_lex_state = 1},
  [15] = {.lex_state = 1111, .external_lex_state = 1},
  [16] = {.lex_state = 2187, .external_lex_state = 1},
  [17] = {.lex_state = 2188, .external_lex_state = 1},
  [18] = {.lex_state = 1082, .external_lex_state = 1},
  [19] = {.lex_state = 1110, .external_lex_state = 1},
  [20] = {.lex_state = 1111, .external_lex_state = 1},
  [21] = {.lex_state = 1110, .external_lex_state = 1},
  [22] = {.lex_state = 1082, .external_lex_state = 1},
  [23] = {.lex_state = 1110, .external_lex_state = 1},
  [24] = {.lex_state = 1082, .external_lex_state = 1},
  [25] = {.lex_state = 2187, .external_lex_state = 1},
  [26] = {.lex_state = 2187, .external_lex_state = 1},
  [27] = {.lex_state = 2187, .external_lex_state = 1},
  [28] = {.lex_state = 2187, .external_lex_state = 1},
  [29] = {.lex_state = 2187, .external_lex_state = 1},
  [30] = {.lex_state = 2187, .external_lex_state = 1},
  [31] = {.lex_state = 2187, .external_lex_state = 1},
  [32] = {.lex_state = 2187, .external_lex_state = 1},
  [33] = {.lex_state = 2187, .external_lex_state = 1},
  [34] = {.lex_state = 2187, .external_lex_state = 1},
  [35] = {.lex_state = 2187, .external_lex_state = 1},
  [36] = {.lex_state = 2187, .external_lex_state = 1},
  [37] = {.lex_state = 2187, .external_lex_state = 1},
  [38] = {.lex_state = 2187, .external_lex_state = 1},
  [39] = {.lex_state = 2187, .external_lex_state = 1},
  [40] = {.lex_state = 1110, .external_lex_state = 1},
  [41] = {.lex_state = 2187, .external_lex_state = 1},
  [42] = {.lex_state = 1109, .external_lex_state = 1},
  [43] = {.lex_state = 2191, .external_lex_state = 1},
  [44] = {.lex_state = 2187, .external_lex_state = 1},
  [45] = {.lex_state = 2187, .external_lex_state = 1},
  [46] = {.lex_state = 2187, .external_lex_state = 1},
  [47] = {.lex_state = 2191, .external_lex_state = 1},
  [48] = {.lex_state = 2185, .external_lex_state = 1},
  [49] = {.lex_state = 2187, .external_lex_state = 1},
  [50] = {.lex_state = 2187, .external_lex_state = 1},
  [51] = {.lex_state = 2187, .external_lex_state = 1},
  [52] = {.lex_state = 2187, .external_lex_state = 1},
  [53] = {.lex_state = 2187, .external_lex_state = 1},
  [54] = {.lex_state = 2187, .external_lex_state = 1},
  [55] = {.lex_state = 2187, .external_lex_state = 1},
  [56] = {.lex_state = 2185, .external_lex_state = 1},
  [57] = {.lex_state = 2187, .external_lex_state = 1},
  [58] = {.lex_state = 1087, .external_lex_state = 1},
  [59] = {.lex_state = 2187, .external_lex_state = 1},
  [60] = {.lex_state = 2187, .external_lex_state = 1},
  [61] = {.lex_state = 2187, .external_lex_state = 1},
  [62] = {.lex_state = 2187, .external_lex_state = 1},
  [63] = {.lex_state = 2187, .external_lex_state = 1},
  [64] = {.lex_state = 2187, .external_lex_state = 1},
  [65] = {.lex_state = 2191, .external_lex_state = 1},
  [66] = {.lex_state = 2187, .external_lex_state = 1},
  [67] = {.lex_state = 2187, .external_lex_state = 1},
  [68] = {.lex_state = 2187, .external_lex_state = 1},
  [69] = {.lex_state = 1109, .external_lex_state = 1},
  [70] = {.lex_state = 1109, .external_lex_state = 1},
  [71] = {.lex_state = 1109, .external_lex_state = 1},
  [72] = {.lex_state = 1082, .external_lex_state = 1},
  [73] = {.lex_state = 1082, .external_lex_state = 1},
  [74] = {.lex_state = 1109, .external_lex_state = 1},
  [75] = {.lex_state = 1082, .external_lex_state = 1},
  [76] = {.lex_state = 1109, .external_lex_state = 1},
  [77] = {.lex_state = 1109, .external_lex_state = 1},
  [78] = {.lex_state = 1109, .external_lex_state = 1},
  [79] = {.lex_state = 1109, .external_lex_state = 1},
  [80] = {.lex_state = 1109, .external_lex_state = 1},
  [81] = {.lex_state = 2187, .external_lex_state = 1},
  [82] = {.lex_state = 2187, .external_lex_state = 1},
  [83] = {.lex_state = 1109, .external_lex_state = 1},
  [84] = {.lex_state = 1109, .external_lex_state = 1},
  [85] = {.lex_state = 1109, .external_lex_state = 1},
  [86] = {.lex_state = 1109, .external_lex_state = 1},
  [87] = {.lex_state = 1082, .external_lex_state = 1},
  [88] = {.lex_state = 1109, .external_lex_state = 1},
  [89] = {.lex_state = 1109, .external_lex_state = 1},
  [90] = {.lex_state = 1109, .external_lex_state = 1},
  [91] = {.lex_state = 1109, .external_lex_state = 1},
  [92] = {.lex_state = 1109, .external_lex_state = 1},
  [93] = {.lex_state = 1109, .external_lex_state = 1},
  [94] = {.lex_state = 1089, .external_lex_state = 1},
  [95] = {.lex_state = 1109, .external_lex_state = 1},
  [96] = {.lex_state = 1109, .external_lex_state = 1},
  [97] = {.lex_state = 1109, .external_lex_state = 1},
  [98] = {.lex_state = 2191, .external_lex_state = 1},
  [99] = {.lex_state = 1109, .external_lex_state = 1},
  [100] = {.lex_state = 1109, .external_lex_state = 1},
  [101] = {.lex_state = 1109, .external_lex_state = 1},
  [102] = {.lex_state = 1109, .external_lex_state = 1},
  [103] = {.lex_state = 1109, .external_lex_state = 1},
  [104] = {.lex_state = 1109, .external_lex_state = 1},
  [105] = {.lex_state = 1109, .external_lex_state = 1},
  [106] = {.lex_state = 1109, .external_lex_state = 1},
  [107] = {.lex_state = 2191, .external_lex_state = 1},
  [108] = {.lex_state = 1109, .external_lex_state = 1},
  [109] = {.lex_state = 1109, .external_lex_state = 1},
  [110] = {.lex_state = 2191, .external_lex_state = 1},
  [111] = {.lex_state = 1109, .external_lex_state = 1},
  [112] = {.lex_state = 2191, .external_lex_state = 1},
  [113] = {.lex_state = 2191, .external_lex_state = 1},
  [114] = {.lex_state = 1116},
  [115] = {.lex_state = 1115},
  [116] = {.lex_state = 1116},
  [117] = {.lex_state = 1116},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1116},
  [121] = {.lex_state = 1161},
  [122] = {.lex_state = 1107, .external_lex_state = 1},
  [123] = {.lex_state = 1108, .external_lex_state = 1},
  [124] = {.lex_state = 1108, .external_lex_state = 1},
  [125] = {.lex_state = 1108, .external_lex_state = 1},
  [126] = {.lex_state = 1107, .external_lex_state = 1},
  [127] = {.lex_state = 1161},
  [128] = {.lex_state = 2190, .external_lex_state = 1},
  [129] = {.lex_state = 2190, .external_lex_state = 1},
  [130] = {.lex_state = 2191, .external_lex_state = 1},
  [131] = {.lex_state = 2190, .external_lex_state = 1},
  [132] = {.lex_state = 1108, .external_lex_state = 1},
  [133] = {.lex_state = 2190, .external_lex_state = 1},
  [134] = {.lex_state = 2186, .external_lex_state = 1},
  [135] = {.lex_state = 2190, .external_lex_state = 1},
  [136] = {.lex_state = 2190, .external_lex_state = 1},
  [137] = {.lex_state = 2191, .external_lex_state = 1},
  [138] = {.lex_state = 2190, .external_lex_state = 1},
  [139] = {.lex_state = 2191, .external_lex_state = 1},
  [140] = {.lex_state = 2190, .external_lex_state = 1},
  [141] = {.lex_state = 2190, .external_lex_state = 1},
  [142] = {.lex_state = 2191, .external_lex_state = 1},
  [143] = {.lex_state = 2191, .external_lex_state = 1},
  [144] = {.lex_state = 2190, .external_lex_state = 1},
  [145] = {.lex_state = 2191, .external_lex_state = 1},
  [146] = {.lex_state = 2191, .external_lex_state = 1},
  [147] = {.lex_state = 2191, .external_lex_state = 1},
  [148] = {.lex_state = 2190, .external_lex_state = 1},
  [149] = {.lex_state = 2191, .external_lex_state = 1},
  [150] = {.lex_state = 2191, .external_lex_state = 1},
  [151] = {.lex_state = 2191, .external_lex_state = 1},
  [152] = {.lex_state = 2190, .external_lex_state = 1},
  [153] = {.lex_state = 2186, .external_lex_state = 1},
  [154] = {.lex_state = 2190, .external_lex_state = 1},
  [155] = {.lex_state = 2190, .external_lex_state = 1},
  [156] = {.lex_state = 2191, .external_lex_state = 1},
  [157] = {.lex_state = 2190, .external_lex_state = 1},
  [158] = {.lex_state = 2191, .external_lex_state = 1},
  [159] = {.lex_state = 2191, .external_lex_state = 1},
  [160] = {.lex_state = 2191, .external_lex_state = 1},
  [161] = {.lex_state = 2191, .external_lex_state = 1},
  [162] = {.lex_state = 1161},
  [163] = {.lex_state = 2191, .external_lex_state = 1},
  [164] = {.lex_state = 2191, .external_lex_state = 1},
  [165] = {.lex_state = 1161},
  [166] = {.lex_state = 2191, .external_lex_state = 1},
  [167] = {.lex_state = 2191, .external_lex_state = 1},
  [168] = {.lex_state = 1161},
  [169] = {.lex_state = 2190, .external_lex_state = 1},
  [170] = {.lex_state = 1092, .external_lex_state = 1},
  [171] = {.lex_state = 2191, .external_lex_state = 1},
  [172] = {.lex_state = 2191, .external_lex_state = 1},
  [173] = {.lex_state = 2191, .external_lex_state = 1},
  [174] = {.lex_state = 2191, .external_lex_state = 1},
  [175] = {.lex_state = 2191, .external_lex_state = 1},
  [176] = {.lex_state = 2191, .external_lex_state = 1},
  [177] = {.lex_state = 2191, .external_lex_state = 1},
  [178] = {.lex_state = 2191, .external_lex_state = 1},
  [179] = {.lex_state = 2191, .external_lex_state = 1},
  [180] = {.lex_state = 2191, .external_lex_state = 1},
  [181] = {.lex_state = 2191, .external_lex_state = 1},
  [182] = {.lex_state = 2191, .external_lex_state = 1},
  [183] = {.lex_state = 2191, .external_lex_state = 1},
  [184] = {.lex_state = 2191, .external_lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1188},
  [187] = {.lex_state = 1188},
  [188] = {.lex_state = 1188},
  [189] = {.lex_state = 1188},
  [190] = {.lex_state = 1188},
  [191] = {.lex_state = 1188},
  [192] = {.lex_state = 1188},
  [193] = {.lex_state = 1188},
  [194] = {.lex_state = 1188},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1188},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 2191},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
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
  [227] = {.lex_state = 1188},
  [228] = {.lex_state = 2204},
  [229] = {.lex_state = 2285},
  [230] = {.lex_state = 1097},
  [231] = {.lex_state = 2204},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 2204},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 2204},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1188},
  [241] = {.lex_state = 2204},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 1188},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 1161},
  [247] = {.lex_state = 1303},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 1161},
  [250] = {.lex_state = 1303},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 2204},
  [255] = {.lex_state = 1188},
  [256] = {.lex_state = 2204},
  [257] = {.lex_state = 1188},
  [258] = {.lex_state = 2204},
  [259] = {.lex_state = 1188},
  [260] = {.lex_state = 2204},
  [261] = {.lex_state = 2285},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 2285},
  [264] = {.lex_state = 0},
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
    [sym_inline_comment_delimiter_open] = ACTIONS(1),
    [sym_inline_comment_delimiter_close] = ACTIONS(1),
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
    [sym_series_of_games] = STATE(234),
    [sym_game] = STATE(138),
    [sym_freestanding_comment] = STATE(47),
    [sym_rest_of_line_comment_delimiter_open] = STATE(233),
    [sym_rest_of_line_comment] = STATE(59),
    [sym_header] = STATE(3),
    [sym_tagpair] = STATE(22),
    [sym_movetext] = STATE(127),
    [sym__movetext_element] = STATE(96),
    [sym_variation] = STATE(96),
    [sym_inline_comment] = STATE(100),
    [sym__san_move] = STATE(99),
    [sym_san_move] = STATE(95),
    [sym__san_move_piece] = STATE(79),
    [sym__lan_move] = STATE(106),
    [sym_lan_move] = STATE(92),
    [sym__san_square] = STATE(15),
    [sym__san_move_pawn] = STATE(79),
    [sym__san_drop_pawn] = STATE(79),
    [sym__san_move_major_or_minor_piece] = STATE(79),
    [sym__san_drop_major_or_minor_piece] = STATE(79),
    [sym__lan_move_by_coordinates] = STATE(74),
    [sym__annotation] = STATE(104),
    [aux_sym_series_of_games_repeat1] = STATE(13),
    [aux_sym_freestanding_comment_repeat1] = STATE(129),
    [aux_sym_movetext_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_old_style_twic_section_comment] = ACTIONS(7),
    [sym_tagpair_delimiter_open] = ACTIONS(9),
    [sym_variation_delimiter_open] = ACTIONS(11),
    [sym_inline_comment_delimiter_open] = ACTIONS(13),
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
  [0] = 25,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      sym_variation_delimiter_open,
    ACTIONS(41), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(44), 1,
      sym_move_number,
    ACTIONS(47), 1,
      sym__san_file,
    ACTIONS(50), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      sym_annotation,
    ACTIONS(65), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(38), 1,
      sym__lan_move_by_coordinates,
    STATE(44), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(53), 1,
      sym__lan_move,
    STATE(54), 1,
      sym__annotation,
    STATE(62), 1,
      sym__san_move,
    STATE(233), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(59), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(55), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(68), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(53), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(34), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(36), 21,
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
  [106] = 30,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(68), 1,
      sym__empty_line,
    ACTIONS(70), 1,
      sym_variation_delimiter_open,
    ACTIONS(72), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_annotation,
    ACTIONS(88), 1,
      anon_sym_1,
    STATE(4), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(38), 1,
      sym__lan_move_by_coordinates,
    STATE(44), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(50), 1,
      sym_movetext,
    STATE(53), 1,
      sym__lan_move,
    STATE(54), 1,
      sym__annotation,
    STATE(62), 1,
      sym__san_move,
    STATE(141), 1,
      sym_result_code,
    STATE(233), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(84), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(92), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(55), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(68), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(80), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(34), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(94), 14,
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
  [222] = 25,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(70), 1,
      sym_variation_delimiter_open,
    ACTIONS(72), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(38), 1,
      sym__lan_move_by_coordinates,
    STATE(44), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(53), 1,
      sym__lan_move,
    STATE(54), 1,
      sym__annotation,
    STATE(62), 1,
      sym__san_move,
    STATE(233), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(84), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    STATE(55), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(68), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(80), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(34), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(98), 21,
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
  [328] = 30,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(80), 1,
      anon_sym_P,
    ACTIONS(86), 1,
      sym_annotation,
    ACTIONS(88), 1,
      anon_sym_1,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      sym_variation_delimiter_open,
    ACTIONS(104), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(108), 1,
      anon_sym_AT,
    STATE(4), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(38), 1,
      sym__lan_move_by_coordinates,
    STATE(44), 1,
      sym_lan_move,
    STATE(45), 1,
      sym_movetext,
    STATE(46), 1,
      sym_san_move,
    STATE(53), 1,
      sym__lan_move,
    STATE(54), 1,
      sym__annotation,
    STATE(62), 1,
      sym__san_move,
    STATE(148), 1,
      sym_result_code,
    STATE(233), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(92), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(106), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(110), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(55), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(68), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(34), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(112), 14,
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
  [443] = 26,
    ACTIONS(65), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      sym_variation_delimiter_open,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(123), 1,
      sym_move_number,
    ACTIONS(126), 1,
      sym__san_file,
    ACTIONS(129), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(132), 1,
      anon_sym_P,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(144), 1,
      sym_annotation,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(74), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_san_move,
    STATE(99), 1,
      sym__san_move,
    STATE(104), 1,
      sym__annotation,
    STATE(106), 1,
      sym__lan_move,
    STATE(241), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(135), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(96), 2,
      sym__movetext_element,
      sym_variation,
    STATE(100), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(36), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(31), 14,
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
  [548] = 26,
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
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(153), 1,
      anon_sym_AT,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(74), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_san_move,
    STATE(99), 1,
      sym__san_move,
    STATE(104), 1,
      sym__annotation,
    STATE(106), 1,
      sym__lan_move,
    STATE(241), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(155), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(96), 2,
      sym__movetext_element,
      sym_variation,
    STATE(100), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(98), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
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
  [653] = 7,
    ACTIONS(161), 1,
      sym__san_promotable_piece,
    ACTIONS(165), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym__san_promotion,
    STATE(251), 1,
      sym__san_promotion_symbol,
    ACTIONS(163), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(157), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(159), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [713] = 6,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(171), 1,
      sym__san_promotable_piece,
    STATE(26), 1,
      sym__san_promotion,
    STATE(251), 1,
      sym__san_promotion_symbol,
    ACTIONS(167), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(169), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [769] = 6,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(177), 1,
      sym__san_promotable_piece,
    STATE(39), 1,
      sym__san_promotion,
    STATE(251), 1,
      sym__san_promotion_symbol,
    ACTIONS(173), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(175), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [825] = 6,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      sym__san_promotable_piece,
    STATE(35), 1,
      sym__san_promotion,
    STATE(251), 1,
      sym__san_promotion_symbol,
    ACTIONS(179), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(181), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [881] = 2,
    ACTIONS(185), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(187), 40,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [929] = 34,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(11), 1,
      sym_variation_delimiter_open,
    ACTIONS(13), 1,
      sym_inline_comment_delimiter_open,
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
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(14), 1,
      aux_sym_series_of_games_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(22), 1,
      sym_tagpair,
    STATE(43), 1,
      sym_freestanding_comment,
    STATE(59), 1,
      sym_rest_of_line_comment,
    STATE(74), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_san_move,
    STATE(99), 1,
      sym__san_move,
    STATE(100), 1,
      sym_inline_comment,
    STATE(104), 1,
      sym__annotation,
    STATE(106), 1,
      sym__lan_move,
    STATE(127), 1,
      sym_movetext,
    STATE(129), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(138), 1,
      sym_game,
    STATE(233), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(25), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(96), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(21), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1040] = 34,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(199), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(202), 1,
      sym_variation_delimiter_open,
    ACTIONS(205), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(208), 1,
      sym_move_number,
    ACTIONS(211), 1,
      sym__san_file,
    ACTIONS(214), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(220), 1,
      anon_sym_AT,
    ACTIONS(226), 1,
      sym_annotation,
    ACTIONS(229), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(3), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(14), 1,
      aux_sym_series_of_games_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(22), 1,
      sym_tagpair,
    STATE(65), 1,
      sym_freestanding_comment,
    STATE(74), 1,
      sym__lan_move_by_coordinates,
    STATE(81), 1,
      sym_rest_of_line_comment,
    STATE(92), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_san_move,
    STATE(99), 1,
      sym__san_move,
    STATE(100), 1,
      sym_inline_comment,
    STATE(104), 1,
      sym__annotation,
    STATE(106), 1,
      sym__lan_move,
    STATE(127), 1,
      sym_movetext,
    STATE(133), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(138), 1,
      sym_game,
    STATE(258), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(223), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(96), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(217), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1151] = 8,
    ACTIONS(232), 1,
      sym__san_promotable_piece,
    ACTIONS(234), 1,
      sym__san_capture_symbol,
    ACTIONS(236), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(80), 1,
      sym__san_promotion,
    STATE(244), 1,
      sym__san_promotion_symbol,
    ACTIONS(159), 12,
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
    ACTIONS(157), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1210] = 4,
    ACTIONS(240), 1,
      sym__san_capture_symbol,
    STATE(33), 1,
      sym__san_square,
    ACTIONS(185), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(187), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1260] = 2,
    ACTIONS(185), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(187), 38,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1306] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(242), 1,
      sym__empty_line,
    STATE(24), 1,
      aux_sym_header_repeat1,
    STATE(72), 1,
      sym_rest_of_line_comment,
    STATE(73), 1,
      sym_tagpair,
    STATE(254), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(244), 32,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1365] = 6,
    ACTIONS(236), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      sym__san_promotable_piece,
    STATE(86), 1,
      sym__san_promotion,
    STATE(244), 1,
      sym__san_promotion_symbol,
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
    ACTIONS(173), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1418] = 2,
    ACTIONS(187), 15,
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
    ACTIONS(185), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1463] = 6,
    ACTIONS(236), 1,
      anon_sym_EQ,
    ACTIONS(248), 1,
      sym__san_promotable_piece,
    STATE(69), 1,
      sym__san_promotion,
    STATE(244), 1,
      sym__san_promotion_symbol,
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
    ACTIONS(167), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1516] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(250), 1,
      sym__empty_line,
    STATE(18), 1,
      aux_sym_header_repeat1,
    STATE(72), 1,
      sym_rest_of_line_comment,
    STATE(73), 1,
      sym_tagpair,
    STATE(254), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(252), 32,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1575] = 6,
    ACTIONS(236), 1,
      anon_sym_EQ,
    ACTIONS(254), 1,
      sym__san_promotable_piece,
    STATE(77), 1,
      sym__san_promotion,
    STATE(244), 1,
      sym__san_promotion_symbol,
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
    ACTIONS(179), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1628] = 9,
    ACTIONS(256), 1,
      sym__empty_line,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(267), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(24), 1,
      aux_sym_header_repeat1,
    STATE(72), 1,
      sym_rest_of_line_comment,
    STATE(73), 1,
      sym_tagpair,
    STATE(254), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(265), 32,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1687] = 2,
    ACTIONS(270), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(272), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1731] = 2,
    ACTIONS(274), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(276), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1775] = 2,
    ACTIONS(185), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(187), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1819] = 2,
    ACTIONS(173), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(175), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1863] = 2,
    ACTIONS(278), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(280), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1907] = 2,
    ACTIONS(282), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(284), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1951] = 2,
    ACTIONS(286), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(288), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [1995] = 2,
    ACTIONS(290), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(292), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2039] = 2,
    ACTIONS(294), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(296), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2083] = 3,
    ACTIONS(302), 1,
      sym_check_or_mate_condition,
    ACTIONS(298), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(300), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2129] = 2,
    ACTIONS(304), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(306), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2173] = 2,
    ACTIONS(308), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(310), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2217] = 2,
    ACTIONS(312), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(314), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2261] = 3,
    ACTIONS(320), 1,
      sym_check_or_mate_condition,
    ACTIONS(316), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(318), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2307] = 2,
    ACTIONS(167), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(169), 36,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2351] = 2,
    ACTIONS(187), 14,
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
    ACTIONS(185), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2394] = 2,
    ACTIONS(322), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(324), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2437] = 4,
    ACTIONS(326), 1,
      sym__san_capture_symbol,
    STATE(76), 1,
      sym__san_square,
    ACTIONS(187), 12,
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
    ACTIONS(185), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2484] = 30,
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
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(153), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(332), 1,
      sym_move_number,
    STATE(3), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(22), 1,
      sym_tagpair,
    STATE(74), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_san_move,
    STATE(99), 1,
      sym__san_move,
    STATE(104), 1,
      sym__annotation,
    STATE(106), 1,
      sym__lan_move,
    STATE(127), 1,
      sym_movetext,
    STATE(136), 1,
      sym_game,
    STATE(241), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(155), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(96), 2,
      sym__movetext_element,
      sym_variation,
    STATE(100), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2583] = 3,
    ACTIONS(338), 1,
      sym__misc_punctuation,
    ACTIONS(334), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(336), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2628] = 7,
    ACTIONS(88), 1,
      anon_sym_1,
    STATE(155), 1,
      sym_result_code,
    ACTIONS(92), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(340), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(94), 14,
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
    ACTIONS(342), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2681] = 3,
    ACTIONS(348), 1,
      sym__misc_punctuation,
    ACTIONS(344), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(346), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2726] = 30,
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
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(153), 1,
      anon_sym_AT,
    ACTIONS(330), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(332), 1,
      sym_move_number,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(22), 1,
      sym_tagpair,
    STATE(74), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_san_move,
    STATE(99), 1,
      sym__san_move,
    STATE(104), 1,
      sym__annotation,
    STATE(106), 1,
      sym__lan_move,
    STATE(127), 1,
      sym_movetext,
    STATE(136), 1,
      sym_game,
    STATE(241), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(155), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(96), 2,
      sym__movetext_element,
      sym_variation,
    STATE(100), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2825] = 3,
    ACTIONS(356), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(352), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(354), 35,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2870] = 2,
    ACTIONS(358), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(360), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2913] = 7,
    ACTIONS(88), 1,
      anon_sym_1,
    STATE(157), 1,
      sym_result_code,
    ACTIONS(92), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(362), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(94), 14,
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
    ACTIONS(364), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [2966] = 3,
    ACTIONS(370), 1,
      sym__misc_punctuation,
    ACTIONS(366), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(368), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3011] = 2,
    ACTIONS(372), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(374), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3053] = 2,
    ACTIONS(376), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(378), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3095] = 2,
    ACTIONS(380), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(382), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3137] = 2,
    ACTIONS(384), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(386), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3179] = 3,
    ACTIONS(352), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(388), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(354), 35,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3223] = 2,
    ACTIONS(390), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(392), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3265] = 3,
    ACTIONS(352), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(394), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(354), 35,
      sym__empty_line,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3309] = 5,
    ACTIONS(401), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(403), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(398), 13,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
    ACTIONS(386), 20,
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
  [3357] = 2,
    ACTIONS(406), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(408), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3399] = 2,
    ACTIONS(410), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(412), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3441] = 2,
    ACTIONS(414), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(416), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3483] = 2,
    ACTIONS(418), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(420), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3525] = 2,
    ACTIONS(422), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(424), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3567] = 29,
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
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(153), 1,
      anon_sym_AT,
    ACTIONS(330), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(332), 1,
      sym_move_number,
    STATE(3), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(15), 1,
      sym__san_square,
    STATE(22), 1,
      sym_tagpair,
    STATE(74), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_san_move,
    STATE(99), 1,
      sym__san_move,
    STATE(104), 1,
      sym__annotation,
    STATE(106), 1,
      sym__lan_move,
    STATE(127), 1,
      sym_movetext,
    STATE(136), 1,
      sym_game,
    STATE(241), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(155), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(96), 2,
      sym__movetext_element,
      sym_variation,
    STATE(100), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3663] = 2,
    ACTIONS(426), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(428), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3705] = 2,
    ACTIONS(430), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(432), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3747] = 2,
    ACTIONS(434), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(436), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3789] = 2,
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
    ACTIONS(274), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3830] = 2,
    ACTIONS(187), 12,
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
    ACTIONS(185), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3871] = 2,
    ACTIONS(292), 12,
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
    ACTIONS(290), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3912] = 2,
    ACTIONS(438), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(440), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3953] = 2,
    ACTIONS(442), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(444), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [3994] = 3,
    ACTIONS(446), 1,
      sym_check_or_mate_condition,
    ACTIONS(318), 11,
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
    ACTIONS(316), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4037] = 2,
    ACTIONS(448), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(450), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4078] = 2,
    ACTIONS(296), 12,
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
    ACTIONS(294), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4119] = 2,
    ACTIONS(306), 12,
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
    ACTIONS(304), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4160] = 2,
    ACTIONS(310), 12,
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
    ACTIONS(308), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4201] = 3,
    ACTIONS(452), 1,
      sym_check_or_mate_condition,
    ACTIONS(300), 11,
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
    ACTIONS(298), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4244] = 2,
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
    ACTIONS(173), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4285] = 5,
    ACTIONS(396), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(401), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(403), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(398), 13,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
    ACTIONS(386), 20,
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
  [4332] = 2,
    ACTIONS(418), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(420), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4373] = 2,
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
    ACTIONS(282), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4414] = 2,
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
      sym_inline_comment_delimiter_open,
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
  [4455] = 2,
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
    ACTIONS(278), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4496] = 2,
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
    ACTIONS(167), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4537] = 2,
    ACTIONS(418), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(420), 34,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4578] = 2,
    ACTIONS(314), 12,
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
    ACTIONS(312), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4619] = 2,
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
      sym_inline_comment_delimiter_open,
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
  [4660] = 2,
    ACTIONS(324), 11,
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
    ACTIONS(322), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4700] = 3,
    ACTIONS(454), 1,
      sym__misc_punctuation,
    ACTIONS(368), 11,
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
    ACTIONS(366), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4742] = 3,
    ACTIONS(456), 1,
      sym__misc_punctuation,
    ACTIONS(336), 11,
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
    ACTIONS(334), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4784] = 2,
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
      sym_inline_comment_delimiter_open,
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
  [4824] = 3,
    ACTIONS(352), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(458), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(354), 33,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4866] = 3,
    ACTIONS(460), 1,
      sym__misc_punctuation,
    ACTIONS(346), 11,
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
    ACTIONS(344), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4908] = 2,
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
    ACTIONS(434), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [4947] = 2,
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
      sym_inline_comment_delimiter_open,
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
  [4986] = 26,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      sym_variation_delimiter_open,
    ACTIONS(464), 1,
      sym_variation_delimiter_close,
    ACTIONS(466), 1,
      sym_inline_comment_delimiter_open,
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
    STATE(113), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(122), 1,
      sym__san_square,
    STATE(139), 1,
      sym__lan_move_by_coordinates,
    STATE(164), 1,
      sym_lan_move,
    STATE(166), 1,
      sym_san_move,
    STATE(172), 1,
      sym__variation_san_move,
    STATE(174), 1,
      sym__variation_lan_move,
    STATE(176), 1,
      sym__variation_annotation,
    STATE(236), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(245), 1,
      sym_variation_movetext,
    ACTIONS(476), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(480), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(173), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(179), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(137), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5073] = 2,
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
      sym_inline_comment_delimiter_open,
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
  [5112] = 2,
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
    ACTIONS(384), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [5151] = 2,
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
      sym_inline_comment_delimiter_open,
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
  [5190] = 2,
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
      sym_inline_comment_delimiter_open,
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
  [5229] = 2,
    ACTIONS(374), 11,
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
    ACTIONS(372), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [5268] = 2,
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
    ACTIONS(380), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [5307] = 2,
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
      sym_inline_comment_delimiter_open,
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
  [5346] = 2,
    ACTIONS(378), 11,
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
    ACTIONS(376), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [5385] = 26,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      sym_variation_delimiter_open,
    ACTIONS(466), 1,
      sym_inline_comment_delimiter_open,
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
      sym_variation_delimiter_close,
    STATE(113), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(122), 1,
      sym__san_square,
    STATE(139), 1,
      sym__lan_move_by_coordinates,
    STATE(164), 1,
      sym_lan_move,
    STATE(166), 1,
      sym_san_move,
    STATE(172), 1,
      sym__variation_san_move,
    STATE(174), 1,
      sym__variation_lan_move,
    STATE(176), 1,
      sym__variation_annotation,
    STATE(225), 1,
      sym_variation_movetext,
    STATE(236), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(476), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(480), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(173), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(179), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(137), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5472] = 2,
    ACTIONS(428), 11,
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
    ACTIONS(426), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [5511] = 2,
    ACTIONS(424), 11,
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
    ACTIONS(422), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [5550] = 26,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      sym_variation_delimiter_open,
    ACTIONS(466), 1,
      sym_inline_comment_delimiter_open,
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
    ACTIONS(486), 1,
      sym_variation_delimiter_close,
    STATE(113), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(122), 1,
      sym__san_square,
    STATE(139), 1,
      sym__lan_move_by_coordinates,
    STATE(164), 1,
      sym_lan_move,
    STATE(166), 1,
      sym_san_move,
    STATE(172), 1,
      sym__variation_san_move,
    STATE(174), 1,
      sym__variation_lan_move,
    STATE(176), 1,
      sym__variation_annotation,
    STATE(236), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(238), 1,
      sym_variation_movetext,
    ACTIONS(476), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(480), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(173), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(179), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(137), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5637] = 2,
    ACTIONS(432), 11,
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
    ACTIONS(430), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [5676] = 25,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    ACTIONS(491), 1,
      sym_variation_delimiter_open,
    ACTIONS(494), 1,
      sym_variation_delimiter_close,
    ACTIONS(496), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(499), 1,
      sym_move_number,
    ACTIONS(502), 1,
      sym__san_file,
    ACTIONS(505), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(508), 1,
      anon_sym_P,
    ACTIONS(514), 1,
      anon_sym_AT,
    ACTIONS(520), 1,
      sym_annotation,
    ACTIONS(523), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(112), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(122), 1,
      sym__san_square,
    STATE(139), 1,
      sym__lan_move_by_coordinates,
    STATE(164), 1,
      sym_lan_move,
    STATE(166), 1,
      sym_san_move,
    STATE(172), 1,
      sym__variation_san_move,
    STATE(174), 1,
      sym__variation_lan_move,
    STATE(176), 1,
      sym__variation_annotation,
    STATE(236), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(511), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(517), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(173), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(179), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(137), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5760] = 25,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      sym_variation_delimiter_open,
    ACTIONS(466), 1,
      sym_inline_comment_delimiter_open,
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
    ACTIONS(526), 1,
      sym_variation_delimiter_close,
    STATE(112), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(122), 1,
      sym__san_square,
    STATE(139), 1,
      sym__lan_move_by_coordinates,
    STATE(164), 1,
      sym_lan_move,
    STATE(166), 1,
      sym_san_move,
    STATE(172), 1,
      sym__variation_san_move,
    STATE(174), 1,
      sym__variation_lan_move,
    STATE(176), 1,
      sym__variation_annotation,
    STATE(236), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(476), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(480), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(173), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(179), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(137), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5844] = 5,
    ACTIONS(530), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(116), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(119), 1,
      sym_tagpair_value_contents,
    STATE(252), 1,
      sym_double_quote,
    ACTIONS(528), 28,
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
  [5887] = 2,
    ACTIONS(532), 1,
      sym_tagpair_delimiter_close,
    ACTIONS(534), 29,
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
  [5922] = 3,
    ACTIONS(539), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(117), 1,
      aux_sym_tagpair_value_contents_repeat1,
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
  [5959] = 3,
    ACTIONS(544), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(117), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(541), 28,
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
  [5996] = 3,
    STATE(114), 1,
      sym_double_quote,
    STATE(224), 1,
      sym__tagpair_value,
    ACTIONS(547), 28,
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
  [6033] = 2,
    STATE(237), 1,
      sym_double_quote,
    ACTIONS(549), 28,
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
  [6067] = 2,
    ACTIONS(551), 1,
      aux_sym_tagpair_value_contents_token1,
    ACTIONS(532), 28,
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
  [6101] = 2,
    ACTIONS(555), 10,
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
    ACTIONS(553), 16,
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
  [6132] = 8,
    ACTIONS(557), 1,
      sym__san_promotable_piece,
    ACTIONS(559), 1,
      sym__san_capture_symbol,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(563), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(151), 1,
      sym__san_promotion,
    STATE(235), 1,
      sym__san_promotion_symbol,
    ACTIONS(159), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(157), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6172] = 6,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(565), 1,
      sym__san_promotable_piece,
    STATE(143), 1,
      sym__san_promotion,
    STATE(235), 1,
      sym__san_promotion_symbol,
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
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6206] = 6,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(567), 1,
      sym__san_promotable_piece,
    STATE(150), 1,
      sym__san_promotion,
    STATE(235), 1,
      sym__san_promotion_symbol,
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
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6240] = 6,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(569), 1,
      sym__san_promotable_piece,
    STATE(156), 1,
      sym__san_promotion,
    STATE(235), 1,
      sym__san_promotion_symbol,
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
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6274] = 2,
    ACTIONS(187), 8,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(185), 13,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      sym__san_capture_symbol,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6300] = 5,
    ACTIONS(88), 1,
      anon_sym_1,
    STATE(154), 1,
      sym_result_code,
    ACTIONS(92), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(112), 14,
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
  [6332] = 7,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    ACTIONS(576), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(581), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(256), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(128), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(579), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6367] = 7,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    ACTIONS(586), 1,
      sym_old_style_twic_section_comment,
    STATE(256), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(128), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(588), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6402] = 4,
    ACTIONS(590), 1,
      sym__san_capture_symbol,
    STATE(145), 1,
      sym__san_square,
    ACTIONS(187), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(185), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6430] = 6,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(592), 1,
      sym_old_style_twic_section_comment,
    STATE(260), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(131), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(579), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6462] = 2,
    ACTIONS(187), 7,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(185), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6486] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(595), 1,
      sym_old_style_twic_section_comment,
    STATE(260), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(131), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(588), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6518] = 3,
    ACTIONS(597), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(352), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(354), 15,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6543] = 2,
    ACTIONS(599), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(601), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6565] = 2,
    ACTIONS(603), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(605), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6587] = 3,
    ACTIONS(607), 1,
      sym_check_or_mate_condition,
    ACTIONS(300), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(298), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6611] = 2,
    ACTIONS(609), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(611), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6633] = 3,
    ACTIONS(613), 1,
      sym_check_or_mate_condition,
    ACTIONS(318), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(316), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6657] = 2,
    ACTIONS(418), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(420), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6679] = 2,
    ACTIONS(615), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(617), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6701] = 2,
    ACTIONS(310), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(308), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6723] = 2,
    ACTIONS(306), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(304), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6745] = 2,
    ACTIONS(619), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(621), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6767] = 2,
    ACTIONS(296), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(294), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6789] = 2,
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
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6811] = 2,
    ACTIONS(314), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(312), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6833] = 2,
    ACTIONS(623), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(625), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6855] = 2,
    ACTIONS(187), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(185), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6877] = 2,
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
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6899] = 2,
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
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6921] = 2,
    ACTIONS(627), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(629), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6943] = 3,
    ACTIONS(352), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(631), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(354), 15,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6967] = 2,
    ACTIONS(633), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(635), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [6989] = 2,
    ACTIONS(637), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(639), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [7011] = 2,
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
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7033] = 2,
    ACTIONS(641), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(643), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [7055] = 2,
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
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7077] = 2,
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
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7099] = 2,
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
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7121] = 2,
    ACTIONS(292), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(290), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7143] = 1,
    ACTIONS(645), 16,
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
  [7162] = 2,
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
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7183] = 3,
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
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7206] = 1,
    ACTIONS(653), 16,
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
  [7225] = 3,
    ACTIONS(657), 1,
      sym__misc_punctuation,
    ACTIONS(659), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(655), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7248] = 3,
    ACTIONS(663), 1,
      sym__misc_punctuation,
    ACTIONS(665), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(661), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7271] = 1,
    ACTIONS(667), 16,
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
  [7290] = 2,
    ACTIONS(418), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(420), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
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
  [7311] = 3,
    ACTIONS(352), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(669), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(354), 14,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
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
  [7334] = 2,
    ACTIONS(324), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(322), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__misc_punctuation,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7355] = 2,
    ACTIONS(673), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(671), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7375] = 2,
    ACTIONS(677), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(675), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7395] = 2,
    ACTIONS(681), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(679), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7415] = 2,
    ACTIONS(420), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(418), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7435] = 2,
    ACTIONS(685), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(683), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7455] = 2,
    ACTIONS(689), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(687), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7475] = 2,
    ACTIONS(392), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(390), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7495] = 2,
    ACTIONS(693), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(691), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7515] = 2,
    ACTIONS(697), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(695), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7535] = 2,
    ACTIONS(701), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(699), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7555] = 2,
    ACTIONS(705), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(703), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7575] = 2,
    ACTIONS(709), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(707), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7595] = 2,
    ACTIONS(713), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(711), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7615] = 1,
    ACTIONS(715), 10,
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
  [7628] = 5,
    ACTIONS(717), 1,
      sym__san_file,
    ACTIONS(719), 1,
      sym__san_rank,
    ACTIONS(721), 1,
      sym__san_capture_symbol,
    ACTIONS(723), 1,
      anon_sym_AT,
    STATE(146), 1,
      sym__san_square,
  [7644] = 5,
    ACTIONS(725), 1,
      sym__san_file,
    ACTIONS(727), 1,
      sym__san_rank,
    ACTIONS(729), 1,
      sym__san_capture_symbol,
    ACTIONS(731), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__san_square,
  [7660] = 5,
    ACTIONS(733), 1,
      sym__san_file,
    ACTIONS(735), 1,
      sym__san_rank,
    ACTIONS(737), 1,
      sym__san_capture_symbol,
    ACTIONS(739), 1,
      anon_sym_AT,
    STATE(89), 1,
      sym__san_square,
  [7676] = 4,
    ACTIONS(741), 1,
      sym__san_file,
    ACTIONS(743), 1,
      sym__san_rank,
    ACTIONS(745), 1,
      sym__san_capture_symbol,
    STATE(19), 1,
      sym__san_square,
  [7689] = 4,
    ACTIONS(747), 1,
      sym__san_file,
    ACTIONS(749), 1,
      sym__san_rank,
    ACTIONS(751), 1,
      sym__san_capture_symbol,
    STATE(29), 1,
      sym__san_square,
  [7702] = 4,
    ACTIONS(753), 1,
      sym__san_file,
    ACTIONS(755), 1,
      sym__san_rank,
    ACTIONS(757), 1,
      sym__san_capture_symbol,
    STATE(125), 1,
      sym__san_square,
  [7715] = 4,
    ACTIONS(759), 1,
      sym__san_file,
    ACTIONS(761), 1,
      sym__san_rank,
    ACTIONS(763), 1,
      sym__san_capture_symbol,
    STATE(85), 1,
      sym__san_square,
  [7728] = 4,
    ACTIONS(765), 1,
      sym__san_file,
    ACTIONS(767), 1,
      sym__san_rank,
    ACTIONS(769), 1,
      sym__san_capture_symbol,
    STATE(10), 1,
      sym__san_square,
  [7741] = 4,
    ACTIONS(771), 1,
      sym__san_file,
    ACTIONS(773), 1,
      sym__san_rank,
    ACTIONS(775), 1,
      sym__san_capture_symbol,
    STATE(158), 1,
      sym__san_square,
  [7754] = 3,
    ACTIONS(771), 1,
      sym__san_file,
    ACTIONS(775), 1,
      sym__san_capture_symbol,
    STATE(158), 1,
      sym__san_square,
  [7764] = 1,
    ACTIONS(777), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [7770] = 3,
    ACTIONS(759), 1,
      sym__san_file,
    ACTIONS(763), 1,
      sym__san_capture_symbol,
    STATE(85), 1,
      sym__san_square,
  [7780] = 3,
    ACTIONS(747), 1,
      sym__san_file,
    ACTIONS(751), 1,
      sym__san_capture_symbol,
    STATE(29), 1,
      sym__san_square,
  [7790] = 2,
    ACTIONS(747), 1,
      sym__san_file,
    STATE(29), 1,
      sym__san_square,
  [7797] = 2,
    ACTIONS(759), 1,
      sym__san_file,
    STATE(84), 1,
      sym__san_square,
  [7804] = 2,
    ACTIONS(741), 1,
      sym__san_file,
    STATE(21), 1,
      sym__san_square,
  [7811] = 2,
    ACTIONS(759), 1,
      sym__san_file,
    STATE(85), 1,
      sym__san_square,
  [7818] = 2,
    ACTIONS(759), 1,
      sym__san_file,
    STATE(83), 1,
      sym__san_square,
  [7825] = 2,
    ACTIONS(747), 1,
      sym__san_file,
    STATE(36), 1,
      sym__san_square,
  [7832] = 2,
    ACTIONS(741), 1,
      sym__san_file,
    STATE(23), 1,
      sym__san_square,
  [7839] = 2,
    ACTIONS(771), 1,
      sym__san_file,
    STATE(142), 1,
      sym__san_square,
  [7846] = 2,
    ACTIONS(747), 1,
      sym__san_file,
    STATE(37), 1,
      sym__san_square,
  [7853] = 2,
    ACTIONS(765), 1,
      sym__san_file,
    STATE(9), 1,
      sym__san_square,
  [7860] = 2,
    ACTIONS(759), 1,
      sym__san_file,
    STATE(76), 1,
      sym__san_square,
  [7867] = 2,
    ACTIONS(759), 1,
      sym__san_file,
    STATE(88), 1,
      sym__san_square,
  [7874] = 1,
    ACTIONS(777), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
  [7879] = 2,
    ACTIONS(771), 1,
      sym__san_file,
    STATE(145), 1,
      sym__san_square,
  [7886] = 2,
    ACTIONS(747), 1,
      sym__san_file,
    STATE(25), 1,
      sym__san_square,
  [7893] = 2,
    ACTIONS(747), 1,
      sym__san_file,
    STATE(30), 1,
      sym__san_square,
  [7900] = 2,
    ACTIONS(759), 1,
      sym__san_file,
    STATE(78), 1,
      sym__san_square,
  [7907] = 2,
    ACTIONS(771), 1,
      sym__san_file,
    STATE(147), 1,
      sym__san_square,
  [7914] = 2,
    ACTIONS(753), 1,
      sym__san_file,
    STATE(124), 1,
      sym__san_square,
  [7921] = 2,
    ACTIONS(765), 1,
      sym__san_file,
    STATE(11), 1,
      sym__san_square,
  [7928] = 2,
    ACTIONS(747), 1,
      sym__san_file,
    STATE(33), 1,
      sym__san_square,
  [7935] = 2,
    ACTIONS(771), 1,
      sym__san_file,
    STATE(158), 1,
      sym__san_square,
  [7942] = 2,
    ACTIONS(771), 1,
      sym__san_file,
    STATE(159), 1,
      sym__san_square,
  [7949] = 2,
    ACTIONS(771), 1,
      sym__san_file,
    STATE(160), 1,
      sym__san_square,
  [7956] = 2,
    ACTIONS(753), 1,
      sym__san_file,
    STATE(123), 1,
      sym__san_square,
  [7963] = 1,
    ACTIONS(779), 1,
      sym_tagpair_delimiter_close,
  [7967] = 1,
    ACTIONS(781), 1,
      sym_variation_delimiter_close,
  [7971] = 1,
    ACTIONS(783), 1,
      sym_inline_comment_delimiter_close,
  [7975] = 1,
    ACTIONS(785), 1,
      sym__san_rank,
  [7979] = 1,
    ACTIONS(787), 1,
      sym_rest_of_line_comment_text,
  [7983] = 1,
    ACTIONS(789), 1,
      sym_inline_comment_text,
  [7987] = 1,
    ACTIONS(791), 1,
      sym_tagpair_key,
  [7991] = 1,
    ACTIONS(793), 1,
      sym_rest_of_line_comment_text,
  [7995] = 1,
    ACTIONS(795), 1,
      anon_sym_AT,
  [7999] = 1,
    ACTIONS(797), 1,
      sym_rest_of_line_comment_text,
  [8003] = 1,
    ACTIONS(799), 1,
      ts_builtin_sym_end,
  [8007] = 1,
    ACTIONS(801), 1,
      sym__san_promotable_piece,
  [8011] = 1,
    ACTIONS(803), 1,
      sym_rest_of_line_comment_text,
  [8015] = 1,
    ACTIONS(805), 1,
      sym_tagpair_delimiter_close,
  [8019] = 1,
    ACTIONS(807), 1,
      sym_variation_delimiter_close,
  [8023] = 1,
    ACTIONS(809), 1,
      sym_inline_comment_delimiter_close,
  [8027] = 1,
    ACTIONS(811), 1,
      sym__san_rank,
  [8031] = 1,
    ACTIONS(813), 1,
      sym_rest_of_line_comment_text,
  [8035] = 1,
    ACTIONS(815), 1,
      sym_inline_comment_delimiter_close,
  [8039] = 1,
    ACTIONS(817), 1,
      sym__san_rank,
  [8043] = 1,
    ACTIONS(819), 1,
      sym__san_promotable_piece,
  [8047] = 1,
    ACTIONS(821), 1,
      sym_variation_delimiter_close,
  [8051] = 1,
    ACTIONS(823), 1,
      anon_sym_2,
  [8055] = 1,
    ACTIONS(777), 1,
      anon_sym_1,
  [8059] = 1,
    ACTIONS(825), 1,
      anon_sym_PERCENT,
  [8063] = 1,
    ACTIONS(827), 1,
      anon_sym_2,
  [8067] = 1,
    ACTIONS(829), 1,
      anon_sym_1,
  [8071] = 1,
    ACTIONS(831), 1,
      sym__san_promotable_piece,
  [8075] = 1,
    ACTIONS(833), 1,
      sym_tagpair_delimiter_close,
  [8079] = 1,
    ACTIONS(551), 1,
      sym_tagpair_delimiter_close,
  [8083] = 1,
    ACTIONS(835), 1,
      sym_rest_of_line_comment_text,
  [8087] = 1,
    ACTIONS(837), 1,
      sym__san_rank,
  [8091] = 1,
    ACTIONS(839), 1,
      sym_rest_of_line_comment_text,
  [8095] = 1,
    ACTIONS(841), 1,
      sym__san_rank,
  [8099] = 1,
    ACTIONS(843), 1,
      sym_rest_of_line_comment_text,
  [8103] = 1,
    ACTIONS(845), 1,
      sym__san_rank,
  [8107] = 1,
    ACTIONS(847), 1,
      sym_rest_of_line_comment_text,
  [8111] = 1,
    ACTIONS(849), 1,
      sym_inline_comment_text,
  [8115] = 1,
    ACTIONS(851), 1,
      anon_sym_AT,
  [8119] = 1,
    ACTIONS(853), 1,
      sym_inline_comment_text,
  [8123] = 1,
    ACTIONS(855), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 106,
  [SMALL_STATE(4)] = 222,
  [SMALL_STATE(5)] = 328,
  [SMALL_STATE(6)] = 443,
  [SMALL_STATE(7)] = 548,
  [SMALL_STATE(8)] = 653,
  [SMALL_STATE(9)] = 713,
  [SMALL_STATE(10)] = 769,
  [SMALL_STATE(11)] = 825,
  [SMALL_STATE(12)] = 881,
  [SMALL_STATE(13)] = 929,
  [SMALL_STATE(14)] = 1040,
  [SMALL_STATE(15)] = 1151,
  [SMALL_STATE(16)] = 1210,
  [SMALL_STATE(17)] = 1260,
  [SMALL_STATE(18)] = 1306,
  [SMALL_STATE(19)] = 1365,
  [SMALL_STATE(20)] = 1418,
  [SMALL_STATE(21)] = 1463,
  [SMALL_STATE(22)] = 1516,
  [SMALL_STATE(23)] = 1575,
  [SMALL_STATE(24)] = 1628,
  [SMALL_STATE(25)] = 1687,
  [SMALL_STATE(26)] = 1731,
  [SMALL_STATE(27)] = 1775,
  [SMALL_STATE(28)] = 1819,
  [SMALL_STATE(29)] = 1863,
  [SMALL_STATE(30)] = 1907,
  [SMALL_STATE(31)] = 1951,
  [SMALL_STATE(32)] = 1995,
  [SMALL_STATE(33)] = 2039,
  [SMALL_STATE(34)] = 2083,
  [SMALL_STATE(35)] = 2129,
  [SMALL_STATE(36)] = 2173,
  [SMALL_STATE(37)] = 2217,
  [SMALL_STATE(38)] = 2261,
  [SMALL_STATE(39)] = 2307,
  [SMALL_STATE(40)] = 2351,
  [SMALL_STATE(41)] = 2394,
  [SMALL_STATE(42)] = 2437,
  [SMALL_STATE(43)] = 2484,
  [SMALL_STATE(44)] = 2583,
  [SMALL_STATE(45)] = 2628,
  [SMALL_STATE(46)] = 2681,
  [SMALL_STATE(47)] = 2726,
  [SMALL_STATE(48)] = 2825,
  [SMALL_STATE(49)] = 2870,
  [SMALL_STATE(50)] = 2913,
  [SMALL_STATE(51)] = 2966,
  [SMALL_STATE(52)] = 3011,
  [SMALL_STATE(53)] = 3053,
  [SMALL_STATE(54)] = 3095,
  [SMALL_STATE(55)] = 3137,
  [SMALL_STATE(56)] = 3179,
  [SMALL_STATE(57)] = 3223,
  [SMALL_STATE(58)] = 3265,
  [SMALL_STATE(59)] = 3309,
  [SMALL_STATE(60)] = 3357,
  [SMALL_STATE(61)] = 3399,
  [SMALL_STATE(62)] = 3441,
  [SMALL_STATE(63)] = 3483,
  [SMALL_STATE(64)] = 3525,
  [SMALL_STATE(65)] = 3567,
  [SMALL_STATE(66)] = 3663,
  [SMALL_STATE(67)] = 3705,
  [SMALL_STATE(68)] = 3747,
  [SMALL_STATE(69)] = 3789,
  [SMALL_STATE(70)] = 3830,
  [SMALL_STATE(71)] = 3871,
  [SMALL_STATE(72)] = 3912,
  [SMALL_STATE(73)] = 3953,
  [SMALL_STATE(74)] = 3994,
  [SMALL_STATE(75)] = 4037,
  [SMALL_STATE(76)] = 4078,
  [SMALL_STATE(77)] = 4119,
  [SMALL_STATE(78)] = 4160,
  [SMALL_STATE(79)] = 4201,
  [SMALL_STATE(80)] = 4244,
  [SMALL_STATE(81)] = 4285,
  [SMALL_STATE(82)] = 4332,
  [SMALL_STATE(83)] = 4373,
  [SMALL_STATE(84)] = 4414,
  [SMALL_STATE(85)] = 4455,
  [SMALL_STATE(86)] = 4496,
  [SMALL_STATE(87)] = 4537,
  [SMALL_STATE(88)] = 4578,
  [SMALL_STATE(89)] = 4619,
  [SMALL_STATE(90)] = 4660,
  [SMALL_STATE(91)] = 4700,
  [SMALL_STATE(92)] = 4742,
  [SMALL_STATE(93)] = 4784,
  [SMALL_STATE(94)] = 4824,
  [SMALL_STATE(95)] = 4866,
  [SMALL_STATE(96)] = 4908,
  [SMALL_STATE(97)] = 4947,
  [SMALL_STATE(98)] = 4986,
  [SMALL_STATE(99)] = 5073,
  [SMALL_STATE(100)] = 5112,
  [SMALL_STATE(101)] = 5151,
  [SMALL_STATE(102)] = 5190,
  [SMALL_STATE(103)] = 5229,
  [SMALL_STATE(104)] = 5268,
  [SMALL_STATE(105)] = 5307,
  [SMALL_STATE(106)] = 5346,
  [SMALL_STATE(107)] = 5385,
  [SMALL_STATE(108)] = 5472,
  [SMALL_STATE(109)] = 5511,
  [SMALL_STATE(110)] = 5550,
  [SMALL_STATE(111)] = 5637,
  [SMALL_STATE(112)] = 5676,
  [SMALL_STATE(113)] = 5760,
  [SMALL_STATE(114)] = 5844,
  [SMALL_STATE(115)] = 5887,
  [SMALL_STATE(116)] = 5922,
  [SMALL_STATE(117)] = 5959,
  [SMALL_STATE(118)] = 5996,
  [SMALL_STATE(119)] = 6033,
  [SMALL_STATE(120)] = 6067,
  [SMALL_STATE(121)] = 6101,
  [SMALL_STATE(122)] = 6132,
  [SMALL_STATE(123)] = 6172,
  [SMALL_STATE(124)] = 6206,
  [SMALL_STATE(125)] = 6240,
  [SMALL_STATE(126)] = 6274,
  [SMALL_STATE(127)] = 6300,
  [SMALL_STATE(128)] = 6332,
  [SMALL_STATE(129)] = 6367,
  [SMALL_STATE(130)] = 6402,
  [SMALL_STATE(131)] = 6430,
  [SMALL_STATE(132)] = 6462,
  [SMALL_STATE(133)] = 6486,
  [SMALL_STATE(134)] = 6518,
  [SMALL_STATE(135)] = 6543,
  [SMALL_STATE(136)] = 6565,
  [SMALL_STATE(137)] = 6587,
  [SMALL_STATE(138)] = 6611,
  [SMALL_STATE(139)] = 6633,
  [SMALL_STATE(140)] = 6657,
  [SMALL_STATE(141)] = 6679,
  [SMALL_STATE(142)] = 6701,
  [SMALL_STATE(143)] = 6723,
  [SMALL_STATE(144)] = 6745,
  [SMALL_STATE(145)] = 6767,
  [SMALL_STATE(146)] = 6789,
  [SMALL_STATE(147)] = 6811,
  [SMALL_STATE(148)] = 6833,
  [SMALL_STATE(149)] = 6855,
  [SMALL_STATE(150)] = 6877,
  [SMALL_STATE(151)] = 6899,
  [SMALL_STATE(152)] = 6921,
  [SMALL_STATE(153)] = 6943,
  [SMALL_STATE(154)] = 6967,
  [SMALL_STATE(155)] = 6989,
  [SMALL_STATE(156)] = 7011,
  [SMALL_STATE(157)] = 7033,
  [SMALL_STATE(158)] = 7055,
  [SMALL_STATE(159)] = 7077,
  [SMALL_STATE(160)] = 7099,
  [SMALL_STATE(161)] = 7121,
  [SMALL_STATE(162)] = 7143,
  [SMALL_STATE(163)] = 7162,
  [SMALL_STATE(164)] = 7183,
  [SMALL_STATE(165)] = 7206,
  [SMALL_STATE(166)] = 7225,
  [SMALL_STATE(167)] = 7248,
  [SMALL_STATE(168)] = 7271,
  [SMALL_STATE(169)] = 7290,
  [SMALL_STATE(170)] = 7311,
  [SMALL_STATE(171)] = 7334,
  [SMALL_STATE(172)] = 7355,
  [SMALL_STATE(173)] = 7375,
  [SMALL_STATE(174)] = 7395,
  [SMALL_STATE(175)] = 7415,
  [SMALL_STATE(176)] = 7435,
  [SMALL_STATE(177)] = 7455,
  [SMALL_STATE(178)] = 7475,
  [SMALL_STATE(179)] = 7495,
  [SMALL_STATE(180)] = 7515,
  [SMALL_STATE(181)] = 7535,
  [SMALL_STATE(182)] = 7555,
  [SMALL_STATE(183)] = 7575,
  [SMALL_STATE(184)] = 7595,
  [SMALL_STATE(185)] = 7615,
  [SMALL_STATE(186)] = 7628,
  [SMALL_STATE(187)] = 7644,
  [SMALL_STATE(188)] = 7660,
  [SMALL_STATE(189)] = 7676,
  [SMALL_STATE(190)] = 7689,
  [SMALL_STATE(191)] = 7702,
  [SMALL_STATE(192)] = 7715,
  [SMALL_STATE(193)] = 7728,
  [SMALL_STATE(194)] = 7741,
  [SMALL_STATE(195)] = 7754,
  [SMALL_STATE(196)] = 7764,
  [SMALL_STATE(197)] = 7770,
  [SMALL_STATE(198)] = 7780,
  [SMALL_STATE(199)] = 7790,
  [SMALL_STATE(200)] = 7797,
  [SMALL_STATE(201)] = 7804,
  [SMALL_STATE(202)] = 7811,
  [SMALL_STATE(203)] = 7818,
  [SMALL_STATE(204)] = 7825,
  [SMALL_STATE(205)] = 7832,
  [SMALL_STATE(206)] = 7839,
  [SMALL_STATE(207)] = 7846,
  [SMALL_STATE(208)] = 7853,
  [SMALL_STATE(209)] = 7860,
  [SMALL_STATE(210)] = 7867,
  [SMALL_STATE(211)] = 7874,
  [SMALL_STATE(212)] = 7879,
  [SMALL_STATE(213)] = 7886,
  [SMALL_STATE(214)] = 7893,
  [SMALL_STATE(215)] = 7900,
  [SMALL_STATE(216)] = 7907,
  [SMALL_STATE(217)] = 7914,
  [SMALL_STATE(218)] = 7921,
  [SMALL_STATE(219)] = 7928,
  [SMALL_STATE(220)] = 7935,
  [SMALL_STATE(221)] = 7942,
  [SMALL_STATE(222)] = 7949,
  [SMALL_STATE(223)] = 7956,
  [SMALL_STATE(224)] = 7963,
  [SMALL_STATE(225)] = 7967,
  [SMALL_STATE(226)] = 7971,
  [SMALL_STATE(227)] = 7975,
  [SMALL_STATE(228)] = 7979,
  [SMALL_STATE(229)] = 7983,
  [SMALL_STATE(230)] = 7987,
  [SMALL_STATE(231)] = 7991,
  [SMALL_STATE(232)] = 7995,
  [SMALL_STATE(233)] = 7999,
  [SMALL_STATE(234)] = 8003,
  [SMALL_STATE(235)] = 8007,
  [SMALL_STATE(236)] = 8011,
  [SMALL_STATE(237)] = 8015,
  [SMALL_STATE(238)] = 8019,
  [SMALL_STATE(239)] = 8023,
  [SMALL_STATE(240)] = 8027,
  [SMALL_STATE(241)] = 8031,
  [SMALL_STATE(242)] = 8035,
  [SMALL_STATE(243)] = 8039,
  [SMALL_STATE(244)] = 8043,
  [SMALL_STATE(245)] = 8047,
  [SMALL_STATE(246)] = 8051,
  [SMALL_STATE(247)] = 8055,
  [SMALL_STATE(248)] = 8059,
  [SMALL_STATE(249)] = 8063,
  [SMALL_STATE(250)] = 8067,
  [SMALL_STATE(251)] = 8071,
  [SMALL_STATE(252)] = 8075,
  [SMALL_STATE(253)] = 8079,
  [SMALL_STATE(254)] = 8083,
  [SMALL_STATE(255)] = 8087,
  [SMALL_STATE(256)] = 8091,
  [SMALL_STATE(257)] = 8095,
  [SMALL_STATE(258)] = 8099,
  [SMALL_STATE(259)] = 8103,
  [SMALL_STATE(260)] = 8107,
  [SMALL_STATE(261)] = 8111,
  [SMALL_STATE(262)] = 8115,
  [SMALL_STATE(263)] = 8119,
  [SMALL_STATE(264)] = 8123,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(231),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(107),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(263),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(67),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(193),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(187),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(264),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(207),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(34),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(51),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(248),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, 0, 7),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, 0, 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(231),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(110),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(229),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(111),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(189),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(188),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(232),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(232),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(210),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(79),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 32), SHIFT_REPEAT(91),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 13),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(231),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(133),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(230),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(110),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(229),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(111),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(189),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(188),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(232),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(210),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(79),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(91),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 31), SHIFT_REPEAT(248),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 28),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, 0, 6),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(24),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(231),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(230),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 40), SHIFT_REPEAT(248),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, 0, 30),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move, 1, 0, 11),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move, 1, 0, 11),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 37),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 37),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move, 1, 0, 9),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move, 1, 0, 9),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, 0, 25),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, 0, 25),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 26),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 26),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation, 1, 0, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation, 1, 0, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, 0, 34),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, 0, 34),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 10),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 10),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 12),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 12),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, 0, 36),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, 0, 36),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, 0, 14),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, 0, 14),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation, 2, 0, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation, 2, 0, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, 0, 25),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, 0, 25),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move, 2, 0, 9),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move, 2, 0, 9),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move, 2, 0, 11),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move, 2, 0, 11),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, 0, 42),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, 0, 42),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(231),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(98),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(261),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(177),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(191),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(186),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(262),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(262),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(216),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(137),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(167),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 35), SHIFT_REPEAT(248),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, 0, 18),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1, 0, 0),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1, 0, 0), SHIFT(117),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 24),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 24),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 27),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 27),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 38),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 38),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 29),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 29),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 44),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 44),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 39),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 39),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_lan_move, 1, 0, 22),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_lan_move, 1, 0, 22),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_san_move, 1, 0, 20),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_san_move, 1, 0, 20),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_annotation, 1, 0, 16),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_annotation, 1, 0, 16),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 19),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 19),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 21),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 21),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 23),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 23),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 15),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 15),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 18),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 18),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, 0, 43),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, 0, 43),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, 0, 33),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, 0, 33),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_lan_move, 2, 0, 22),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_lan_move, 2, 0, 22),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_san_move, 2, 0, 20),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_san_move, 2, 0, 20),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_annotation, 2, 0, 16),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_annotation, 2, 0, 16),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 2, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 1, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [799] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, 0, 45),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, 0, 41),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
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
