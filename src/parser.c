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
  {0x25fa, 0x25fa}, {0x25ff, 0x25ff}, {0x2642, 0x2642}, {0x2715, 0x2715}, {0x2795, 0x2796}, {0x27ea, 0x27eb}, {0x27f3, 0x27f3}, {0x2a00, 0x2a01},
  {0x2a71, 0x2a72}, {0x2b12, 0x2b13},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '"', 2057,
        '#', 2185,
        '%', 2044,
        '&', 1042,
        '(', 2125,
        ')', 2127,
        '*', 2257,
        '-', 2211,
        '/', 2240,
        '0', 2234,
        '1', 2207,
        '2', 2250,
        ';', 2042,
        '=', 2163,
        '@', 2173,
        'O', 2230,
        'P', 2166,
        '[', 2053,
        ']', 2055,
        'o', 2239,
        '{', 2128,
        '}', 2130,
        0xbd, 2253,
        0x2ba, 2077,
        0x2dd, 2075,
        0x2ee, 2081,
        0x2f6, 2079,
        0x5f2, 2083,
        0x5f4, 2073,
        0x66d, 2273,
        0x2010, 2215,
        0x2011, 2217,
        0x2012, 2219,
        0x2013, 2221,
        0x2014, 2223,
        0x201c, 2061,
        0x201d, 2063,
        0x201f, 2065,
        0x2033, 2067,
        0x2036, 2069,
        0x2044, 2244,
        0x204e, 2269,
        0x2212, 2213,
        0x2215, 2242,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        0x2796, 2225,
        0x27cb, 2246,
        0x29f8, 2248,
        0x3003, 2071,
        0xff02, 2059,
        '+', 2188,
        0x16ed, 2188,
        0x2795, 2188,
        ':', 2161,
        'X', 2161,
        'x', 2161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2038);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(2150);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2151);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1086);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '#', 125,
        'D', 505,
        'L', 447,
        'M', 561,
        'P', 568,
        'R', 448,
        'S', 535,
        'U', 616,
        'b', 560,
        'c', 558,
        'd', 443,
        'e', 630,
        'h', 451,
        'i', 585,
        'l', 503,
        'm', 457,
        'n', 445,
        'p', 506,
        'q', 692,
        'r', 449,
        's', 567,
        'u', 450,
        'x', 606,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(716);
      if (lookahead == 'm') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '#', 173,
        'd', 471,
        'h', 718,
        'm', 490,
        'n', 491,
        'p', 581,
        's', 613,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'q') ADVANCE(712);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'h') ADVANCE(464);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '#', 139,
        'D', 505,
        'L', 447,
        'M', 561,
        'P', 568,
        'R', 448,
        'S', 535,
        'U', 616,
        'a', 669,
        'b', 560,
        'c', 558,
        'd', 443,
        'e', 630,
        'f', 642,
        'h', 454,
        'i', 585,
        'l', 502,
        'm', 456,
        'n', 445,
        'p', 507,
        'q', 692,
        'r', 449,
        's', 567,
        'u', 450,
        'x', 606,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '#', 151,
        'd', 465,
        'h', 717,
        'm', 484,
        'n', 485,
        's', 611,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '#', 180,
        'd', 474,
        'h', 721,
        'm', 496,
        'n', 497,
        's', 614,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '#', 177,
        'd', 465,
        'h', 717,
        'm', 484,
        'n', 485,
        'p', 582,
        's', 611,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '#', 197,
        'D', 505,
        'L', 447,
        'M', 561,
        'P', 568,
        'R', 448,
        'S', 535,
        'U', 616,
        'a', 669,
        'b', 560,
        'c', 558,
        'd', 443,
        'e', 630,
        'f', 642,
        'h', 454,
        'i', 585,
        'l', 502,
        'm', 456,
        'n', 445,
        'p', 506,
        'q', 692,
        'r', 449,
        's', 567,
        'u', 450,
        'x', 606,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '#', 202,
        'D', 505,
        'L', 447,
        'M', 561,
        'P', 568,
        'R', 448,
        'S', 535,
        'U', 616,
        'a', 669,
        'b', 560,
        'c', 558,
        'd', 477,
        'e', 630,
        'f', 642,
        'h', 455,
        'i', 585,
        'l', 502,
        'm', 458,
        'n', 446,
        'p', 507,
        'q', 692,
        'r', 449,
        's', 567,
        'u', 450,
        'x', 606,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'h') ADVANCE(719);
      if (lookahead == 'm') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead == 'h') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'h') ADVANCE(723);
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '&', 18,
        '/', 35,
        0x2044, 35,
        0x2215, 35,
        0x27cb, 35,
        0x29f8, 35,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == 0xbd) ADVANCE(2284);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '&', 20,
        '/', 7,
        0x2044, 7,
        0x2215, 7,
        0x27cb, 7,
        0x29f8, 7,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(8);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(363);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '5') ADVANCE(203);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(88);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(363);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '5') ADVANCE(203);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '7') ADVANCE(126);
      if (lookahead == ';') ADVANCE(2260);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '7') ADVANCE(126);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == '6') ADVANCE(207);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 134,
        '1', 389,
        '2', 53,
        '3', 166,
        '5', 136,
        '6', 300,
        '7', 155,
        'A', 49,
        'a', 49,
        'B', 129,
        'b', 129,
        'D', 403,
        'd', 403,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 53:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 332,
        '1', 227,
        '6', 296,
        '9', 743,
        'A', 318,
        'a', 318,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 54:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 332,
        '1', 225,
        '6', 296,
        '9', 743,
        'A', 318,
        'a', 318,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 55:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 332,
        '1', 246,
        '6', 296,
        '9', 743,
        'A', 318,
        'a', 318,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 56:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 145,
        '2', 138,
        '7', 387,
        '9', 749,
        'D', 408,
        'd', 408,
        'F', 425,
        'f', 425,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 145,
        '2', 138,
        '7', 390,
        '9', 749,
        'B', 413,
        'b', 413,
        'D', 408,
        'd', 408,
        'F', 425,
        'f', 425,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '6') ADVANCE(311);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(361);
      if (lookahead == '1') ADVANCE(42);
      if (lookahead == '6') ADVANCE(80);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(361);
      if (lookahead == '1') ADVANCE(42);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '1') ADVANCE(272);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '7') ADVANCE(319);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '1') ADVANCE(287);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '7') ADVANCE(319);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '1') ADVANCE(288);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '7') ADVANCE(319);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 64:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 135,
        '1', 389,
        '2', 54,
        '3', 166,
        '5', 136,
        '6', 300,
        '7', 153,
        'A', 48,
        'a', 48,
        'B', 130,
        'b', 130,
        'D', 403,
        'd', 403,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 65:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 135,
        '1', 389,
        '2', 54,
        '3', 166,
        '5', 136,
        '6', 300,
        '7', 152,
        'A', 48,
        'a', 48,
        'B', 129,
        'b', 129,
        'D', 403,
        'd', 403,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 175,
        '2', 148,
        '7', 386,
        '9', 750,
        'B', 408,
        'b', 408,
        'D', 409,
        'd', 409,
        'F', 410,
        'f', 410,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(318);
      if (lookahead == '3') ADVANCE(283);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(318);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == '1') ADVANCE(403);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(403);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == '1') ADVANCE(403);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(272);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '7') ADVANCE(319);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == '7') ADVANCE(391);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == '1') ADVANCE(427);
      if (lookahead == '3') ADVANCE(411);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == '1') ADVANCE(426);
      if (lookahead == '2') ADVANCE(426);
      if (lookahead == '3') ADVANCE(426);
      if (lookahead == '4') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == '1') ADVANCE(426);
      if (lookahead == '2') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(157);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(409);
      if (lookahead == '1') ADVANCE(409);
      if (lookahead == '2') ADVANCE(409);
      if (lookahead == '3') ADVANCE(409);
      if (lookahead == '4') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(409);
      if (lookahead == '1') ADVANCE(409);
      if (lookahead == '2') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == '2') ADVANCE(162);
      if (lookahead == '7') ADVANCE(388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == '1') ADVANCE(429);
      if (lookahead == '2') ADVANCE(429);
      if (lookahead == '3') ADVANCE(429);
      if (lookahead == '4') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == '1') ADVANCE(429);
      if (lookahead == '2') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(421);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(416);
      if (lookahead == '1') ADVANCE(416);
      if (lookahead == '2') ADVANCE(416);
      if (lookahead == '3') ADVANCE(416);
      if (lookahead == '4') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(416);
      if (lookahead == '1') ADVANCE(416);
      if (lookahead == '2') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(430);
      if (lookahead == '1') ADVANCE(430);
      if (lookahead == '2') ADVANCE(430);
      if (lookahead == '3') ADVANCE(430);
      if (lookahead == '4') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(430);
      if (lookahead == '1') ADVANCE(430);
      if (lookahead == '2') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == '1') ADVANCE(431);
      if (lookahead == '2') ADVANCE(431);
      if (lookahead == '3') ADVANCE(431);
      if (lookahead == '4') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == '1') ADVANCE(431);
      if (lookahead == '2') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '1') ADVANCE(424);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead == '3') ADVANCE(424);
      if (lookahead == '4') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '1') ADVANCE(424);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 100:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 189,
        '1', 389,
        '2', 55,
        '3', 166,
        '5', 136,
        '6', 300,
        '7', 154,
        'A', 48,
        'a', 48,
        'B', 130,
        'b', 130,
        'D', 424,
        'd', 424,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(432);
      if (lookahead == '1') ADVANCE(432);
      if (lookahead == '2') ADVANCE(432);
      if (lookahead == '3') ADVANCE(432);
      if (lookahead == '4') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(432);
      if (lookahead == '1') ADVANCE(432);
      if (lookahead == '2') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(366);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(368);
      if (lookahead == '1') ADVANCE(87);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(369);
      if (lookahead == '1') ADVANCE(90);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '6') ADVANCE(93);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(375);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(373);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '5') ADVANCE(203);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(88);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '6') ADVANCE(311);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 114:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 184,
        '2', 172,
        '7', 398,
        '9', 751,
        'D', 430,
        'd', 430,
        'F', 428,
        'f', 428,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(192);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '7') ADVANCE(396);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == '7') ADVANCE(397);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 120:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '0', 314,
        '2', 186,
        '7', 736,
        '9', 752,
        'F', 433,
        'f', 433,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(187);
      if (lookahead == '2') ADVANCE(181);
      if (lookahead == '7') ADVANCE(399);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(196);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(188);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == '7') ADVANCE(400);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '6') ADVANCE(311);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 125:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 45,
        '3', 271,
        '4', 275,
        '5', 362,
        '6', 76,
        '8', 209,
        '9', 297,
        'X', 142,
        'x', 142,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(419);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == ';') ADVANCE(2186);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(226);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(247);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(734);
      if (lookahead == '4') ADVANCE(353);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(734);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 136:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 295,
        'A', 128,
        'a', 128,
        'C', 728,
        'c', 728,
        'F', 727,
        'f', 727,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(269);
      if (lookahead == '7') ADVANCE(308);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(204);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 139:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 58,
        '3', 271,
        '4', 239,
        '5', 377,
        '6', 76,
        '8', 216,
        '9', 297,
        'X', 190,
        'x', 190,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(2280);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '4') ADVANCE(321);
      if (lookahead == '8') ADVANCE(219);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(211);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(335);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '3') ADVANCE(735);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 143:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 335,
        '2', 65,
        '3', 735,
        '6', 345,
        'B', 127,
        'b', 127,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '2') ADVANCE(354);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '4') ADVANCE(301);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(276);
      if (lookahead == '7') ADVANCE(312);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(278);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(380);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(733);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '4') ADVANCE(317);
      if (lookahead == '8') ADVANCE(212);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(213);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 152:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 318,
        '3', 165,
        '9', 320,
        'E', 726,
        'e', 726,
        'F', 268,
        'f', 268,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 153:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 318,
        '3', 165,
        '9', 323,
        'E', 726,
        'e', 726,
        'F', 268,
        'f', 268,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 318,
        '3', 165,
        '9', 324,
        'E', 726,
        'e', 726,
        'F', 268,
        'f', 268,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 155:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 318,
        '9', 320,
        'E', 726,
        'e', 726,
        'F', 268,
        'f', 268,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(291);
      if (lookahead == '7') ADVANCE(313);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(270);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(379);
      if (lookahead == '7') ADVANCE(314);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(286);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '4') ADVANCE(360);
      if (lookahead == '8') ADVANCE(232);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(218);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(208);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(237);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(423);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(268);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '4') ADVANCE(318);
      if (lookahead == '8') ADVANCE(224);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(344);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(344);
      if (lookahead == '2') ADVANCE(356);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(277);
      if (lookahead == '7') ADVANCE(308);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 173:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 99,
        '4', 267,
        '5', 374,
        '8', 221,
        'X', 169,
        'x', 169,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(241);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '4') ADVANCE(302);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '4') ADVANCE(268);
      if (lookahead == '5') ADVANCE(374);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 177:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 105,
        '4', 282,
        '5', 378,
        '8', 212,
        'X', 193,
        'x', 193,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(242);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == '4') ADVANCE(328);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(222);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(244);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(89);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '4') ADVANCE(306);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(251);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(331);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(101);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(96);
      if (lookahead == '3') ADVANCE(734);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 190:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 350,
        '2', 64,
        '3', 735,
        '6', 345,
        'B', 127,
        'b', 127,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 191:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 350,
        '2', 100,
        '3', 735,
        '6', 345,
        'B', 127,
        'b', 127,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(289);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(351);
      if (lookahead == '2') ADVANCE(57);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(290);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(292);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(293);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 113,
        '3', 271,
        '4', 238,
        '5', 362,
        '6', 76,
        '8', 216,
        '9', 297,
        'X', 143,
        'x', 143,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(115);
      if (lookahead == '4') ADVANCE(322);
      if (lookahead == '8') ADVANCE(259);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == '4') ADVANCE(327);
      if (lookahead == '8') ADVANCE(261);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(252);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(119);
      if (lookahead == '4') ADVANCE(329);
      if (lookahead == '8') ADVANCE(262);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(254);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == '4') ADVANCE(330);
      if (lookahead == '8') ADVANCE(263);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 202:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '1', 124,
        '3', 271,
        '4', 240,
        '5', 377,
        '6', 76,
        '8', 249,
        '9', 297,
        'X', 191,
        'x', 191,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '5') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 209:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '2', 47,
        '5', 382,
        '6', 298,
        '7', 132,
        '8', 50,
        '9', 355,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '3') ADVANCE(748);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(75);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(59);
      if (lookahead == '7') ADVANCE(215);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(56);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(332);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 216:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '2', 46,
        '5', 382,
        '6', 298,
        '7', 131,
        '8', 50,
        '9', 355,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(2282);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(120);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(98);
      if (lookahead == '7') ADVANCE(234);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '7') ADVANCE(223);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(235);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(60);
      if (lookahead == '7') ADVANCE(233);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '7') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '7') ADVANCE(422);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == '9') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(349);
      if (lookahead == '7') ADVANCE(258);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(231);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(409);
      if (lookahead == '5') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(237);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(417);
      if (lookahead == '3') ADVANCE(402);
      if (lookahead == '5') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(417);
      if (lookahead == '3') ADVANCE(415);
      if (lookahead == '5') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(417);
      if (lookahead == '3') ADVANCE(415);
      if (lookahead == '5') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(419);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(430);
      if (lookahead == '5') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(418);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '7') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '7') ADVANCE(422);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(116);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 249:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '2', 112,
        '5', 382,
        '6', 298,
        '7', 133,
        '8', 50,
        '9', 355,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(243);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(242);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(121);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(244);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(123);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(251);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(331);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(106);
      if (lookahead == '7') ADVANCE(236);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(109);
      if (lookahead == '7') ADVANCE(250);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(108);
      if (lookahead == '7') ADVANCE(253);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(110);
      if (lookahead == '7') ADVANCE(255);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(111);
      if (lookahead == '7') ADVANCE(257);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '4') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '5') ADVANCE(409);
      if (lookahead == '7') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead == '8') ADVANCE(357);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(411);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(274);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(737);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(402);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(402);
      if (lookahead == '5') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(266);
      if (lookahead == '8') ADVANCE(358);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(281);
      if (lookahead == '8') ADVANCE(357);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(299);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(415);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(415);
      if (lookahead == '4') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(413);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(413);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead == '7') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(423);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(268);
      if (lookahead == '6') ADVANCE(268);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(210);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(268);
      if (lookahead == '7') ADVANCE(318);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(268);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(279);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(280);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(303);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(304);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(305);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(307);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(309);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(383);
      if (lookahead == '6') ADVANCE(285);
      if (lookahead == '7') ADVANCE(229);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(333);
      if (lookahead == '6') ADVANCE(44);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(208);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(301);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(326);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(302);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(306);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(310);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead == '6') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead == '7') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(203);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(402);
      if (lookahead == '6') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(415);
      if (lookahead == '6') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(415);
      if (lookahead == '6') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(413);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(420);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(430);
      if (lookahead == '7') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(128);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(273);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(744);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(315);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(384);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(381);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(745);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(741);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(392);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(394);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(103);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(746);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(747);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(381);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(385);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(337);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(403);
      if (lookahead == '9') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(426);
      if (lookahead == '9') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(409);
      if (lookahead == '9') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(429);
      if (lookahead == '9') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(416);
      if (lookahead == '9') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(430);
      if (lookahead == '9') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(431);
      if (lookahead == '9') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(424);
      if (lookahead == '9') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(338);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(432);
      if (lookahead == '9') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(346);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(348);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(360);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(395);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(205);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(402);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(318);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(316);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(730);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(333);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(729);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(333);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 389:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '9', 126,
        ';', 2194,
        'C', 333,
        'c', 333,
        'D', 294,
        'd', 294,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(325);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(729);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(339);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(415);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(419);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(413);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(418);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(340);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(341);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(342);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(731);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(343);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(347);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(584);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2193);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2199);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2199);
      if (lookahead == 'f') ADVANCE(682);
      if (lookahead == 'q') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2199);
      if (lookahead == 'o') ADVANCE(713);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2199);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2184);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2194);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2187);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2186);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(584);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2186);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2260);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2284);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2255);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2276);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2272);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2264);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2268);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2176);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(756);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2195);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(757);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(645);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(645);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'p') ADVANCE(513);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(645);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(514);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead == 'U') ADVANCE(621);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(564);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(581);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'v') ADVANCE(571);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'v') ADVANCE(571);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'y') ADVANCE(619);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'y') ADVANCE(619);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'y') ADVANCE(629);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(570);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(566);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(612);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'n') ADVANCE(711);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(600);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(714);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'l') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(681);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(418);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(562);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(606);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(542);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(610);
      if (lookahead == 'q') ADVANCE(708);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(683);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(508);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(690);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(516);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(517);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(519);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(520);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(521);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'o') ADVANCE(680);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == 'q') ADVANCE(691);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(693);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(697);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(699);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(701);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(713);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(541);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(551);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(553);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(555);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead == 'q') ADVANCE(694);
      if (lookahead == 'x') ADVANCE(480);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(565);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(705);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(684);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(644);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(700);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(679);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(544);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == 'x') ADVANCE(631);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(412);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(638);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(509);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(650);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(651);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(648);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(654);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(659);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(639);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(661);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(662);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(663);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(463);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(664);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(666);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(670);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(667);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(515);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(468);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(479);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(620);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(622);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(623);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(624);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(625);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(626);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(627);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(628);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 0xfe0e) ADVANCE(2172);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(742);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 735:
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        'C', 412,
        'c', 412,
        'D', 427,
        'd', 427,
        'F', 411,
        'f', 411,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(415);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(413);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(371);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2184);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(753);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2184);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2179);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2180);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2278);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2198);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 761:
      ADVANCE_MAP(
        '\n', 2140,
        '\r', 2135,
        '&', 11,
        '\t', 2134,
        0x0b, 2134,
        '\f', 2134,
        ' ', 2134,
        'A', 763,
        'B', 763,
        'a', 763,
        'b', 763,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(2140);
      if (lookahead == '\r') ADVANCE(2135);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2134);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(763);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(2140);
      if (lookahead == '\r') ADVANCE(2135);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2134);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 764:
      ADVANCE_MAP(
        '\n', 1026,
        '\r', 1027,
        '!', 2197,
        '$', 759,
        '&', 10,
        '(', 2126,
        '0', 761,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'p', 725,
        '{', 2129,
        0x2659, 2170,
        0x265f, 724,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 765:
      ADVANCE_MAP(
        '\n', 1026,
        '\r', 764,
        '!', 2197,
        '$', 759,
        '&', 10,
        '(', 2126,
        '0', 761,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'p', 725,
        '{', 2129,
        0x2659, 2170,
        0x265f, 724,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(2051);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(767);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(768);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(769);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(770);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(771);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(772);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(773);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(774);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(775);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(776);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(777);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(778);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(779);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(780);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(781);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(782);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(783);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(784);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(785);
      END_STATE();
    case 787:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(786);
      END_STATE();
    case 788:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(787);
      END_STATE();
    case 789:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(788);
      END_STATE();
    case 790:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(789);
      END_STATE();
    case 791:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(790);
      END_STATE();
    case 792:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(791);
      END_STATE();
    case 793:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(792);
      END_STATE();
    case 794:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(793);
      END_STATE();
    case 795:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(794);
      END_STATE();
    case 796:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(795);
      END_STATE();
    case 797:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(796);
      END_STATE();
    case 798:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(797);
      END_STATE();
    case 799:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(798);
      END_STATE();
    case 800:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(799);
      END_STATE();
    case 801:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(800);
      END_STATE();
    case 802:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(801);
      END_STATE();
    case 803:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(802);
      END_STATE();
    case 804:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(803);
      END_STATE();
    case 805:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(804);
      END_STATE();
    case 806:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(805);
      END_STATE();
    case 807:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(806);
      END_STATE();
    case 808:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(807);
      END_STATE();
    case 809:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(808);
      END_STATE();
    case 810:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(809);
      END_STATE();
    case 811:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(810);
      END_STATE();
    case 812:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(811);
      END_STATE();
    case 813:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(812);
      END_STATE();
    case 814:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(813);
      END_STATE();
    case 815:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(814);
      END_STATE();
    case 816:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(815);
      END_STATE();
    case 817:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(816);
      END_STATE();
    case 818:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(817);
      END_STATE();
    case 819:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(818);
      END_STATE();
    case 820:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(819);
      END_STATE();
    case 821:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 822:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(821);
      END_STATE();
    case 823:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(822);
      END_STATE();
    case 824:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(823);
      END_STATE();
    case 825:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(824);
      END_STATE();
    case 826:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(825);
      END_STATE();
    case 827:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(826);
      END_STATE();
    case 828:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(827);
      END_STATE();
    case 829:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(828);
      END_STATE();
    case 830:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(829);
      END_STATE();
    case 831:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(830);
      END_STATE();
    case 832:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(831);
      END_STATE();
    case 833:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(832);
      END_STATE();
    case 834:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(833);
      END_STATE();
    case 835:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(834);
      END_STATE();
    case 836:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(835);
      END_STATE();
    case 837:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(836);
      END_STATE();
    case 838:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(837);
      END_STATE();
    case 839:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(838);
      END_STATE();
    case 840:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(839);
      END_STATE();
    case 841:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(840);
      END_STATE();
    case 842:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(841);
      END_STATE();
    case 843:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(842);
      END_STATE();
    case 844:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(843);
      END_STATE();
    case 845:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(844);
      END_STATE();
    case 846:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(845);
      END_STATE();
    case 847:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(846);
      END_STATE();
    case 848:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(847);
      END_STATE();
    case 849:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(848);
      END_STATE();
    case 850:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(849);
      END_STATE();
    case 851:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(850);
      END_STATE();
    case 852:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(851);
      END_STATE();
    case 853:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(852);
      END_STATE();
    case 854:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(853);
      END_STATE();
    case 855:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(854);
      END_STATE();
    case 856:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(855);
      END_STATE();
    case 857:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(856);
      END_STATE();
    case 858:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(857);
      END_STATE();
    case 859:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(858);
      END_STATE();
    case 860:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(859);
      END_STATE();
    case 861:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(860);
      END_STATE();
    case 862:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(861);
      END_STATE();
    case 863:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(862);
      END_STATE();
    case 864:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(863);
      END_STATE();
    case 865:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(864);
      END_STATE();
    case 866:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(865);
      END_STATE();
    case 867:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(866);
      END_STATE();
    case 868:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(867);
      END_STATE();
    case 869:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(868);
      END_STATE();
    case 870:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(869);
      END_STATE();
    case 871:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(870);
      END_STATE();
    case 872:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 873:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 874:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 875:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(874);
      END_STATE();
    case 876:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(875);
      END_STATE();
    case 877:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(876);
      END_STATE();
    case 878:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(877);
      END_STATE();
    case 879:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(878);
      END_STATE();
    case 880:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 881:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(880);
      END_STATE();
    case 882:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(881);
      END_STATE();
    case 883:
      if (lookahead == '\n') ADVANCE(2051);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(882);
      END_STATE();
    case 884:
      if (lookahead == '\n') ADVANCE(2052);
      END_STATE();
    case 885:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 886:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(885);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 887:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(886);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 888:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(887);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 889:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(888);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 890:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(889);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 891:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 892:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(891);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 893:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 894:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(893);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 895:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(894);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 896:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(895);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 897:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(896);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 898:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(897);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 899:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(898);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 900:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(899);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 901:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(900);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 902:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(901);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 903:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(902);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 904:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(903);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 905:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(904);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 906:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(905);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 907:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(906);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 908:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(907);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 909:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(908);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 910:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(909);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 911:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(910);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 912:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(911);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 913:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(912);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 914:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(913);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 915:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(914);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 916:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(915);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 917:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(916);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 918:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 919:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(918);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 920:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(919);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 921:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(920);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 922:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(921);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 923:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(922);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 924:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(923);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 925:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(924);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 926:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(925);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 927:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(926);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 928:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(927);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 929:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 930:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(929);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 931:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(930);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 932:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 933:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(932);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 934:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(933);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 935:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(934);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 936:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(935);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 937:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(936);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 938:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(937);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 939:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 940:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(939);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 941:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(940);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 942:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(941);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 943:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(942);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 944:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(943);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 945:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(944);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 946:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(945);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 947:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(946);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 948:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(947);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 949:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(948);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 950:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(949);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 951:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 952:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(951);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 953:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(952);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 954:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 955:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(954);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 956:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(955);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 957:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 958:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(957);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 959:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(958);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 960:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(959);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 961:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(960);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 962:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(961);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 963:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(962);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 964:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(963);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 965:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(964);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 966:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(965);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 967:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(966);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 968:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(967);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 969:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 970:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(969);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 971:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 972:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 973:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 974:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(973);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 975:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 976:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(975);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 977:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(976);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 978:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(977);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 979:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(978);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 980:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(979);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 981:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 982:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(981);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 983:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(982);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 984:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(983);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 985:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 986:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(985);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 987:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(986);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 988:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(987);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 989:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 990:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 991:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(990);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 992:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(991);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 993:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 994:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 995:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 996:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(995);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 997:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 998:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(997);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 999:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(998);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1000:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(999);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1001:
      if (lookahead == '\n') ADVANCE(2052);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1002:
      ADVANCE_MAP(
        '\n', 1028,
        '\r', 1029,
        '!', 2197,
        '$', 759,
        '&', 23,
        '(', 2126,
        '*', 2258,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'O', 2228,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1003,
        0x0b, 1003,
        '\f', 1003,
        ' ', 1003,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1003:
      ADVANCE_MAP(
        '\n', 1028,
        '\r', 1002,
        '!', 2197,
        '$', 759,
        '&', 23,
        '(', 2126,
        '*', 2258,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'O', 2228,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1003,
        0x0b, 1003,
        '\f', 1003,
        ' ', 1003,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1004:
      ADVANCE_MAP(
        '\n', 1007,
        '\r', 1004,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1004,
        0x0b, 1004,
        '\f', 1004,
        ' ', 1004,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1005:
      ADVANCE_MAP(
        '\n', 1007,
        '\r', 1004,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1004,
        0x0b, 1004,
        '\f', 1004,
        ' ', 1004,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1006:
      ADVANCE_MAP(
        '\n', 2040,
        '\r', 1004,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1004,
        0x0b, 1004,
        '\f', 1004,
        ' ', 1004,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1007:
      ADVANCE_MAP(
        '\n', 2040,
        '\r', 1006,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1004,
        0x0b, 1004,
        '\f', 1004,
        ' ', 1004,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1008:
      ADVANCE_MAP(
        '\n', 2045,
        '\r', 1008,
        '!', 2197,
        '$', 759,
        '&', 23,
        '(', 2126,
        '*', 2258,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'O', 2228,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1008,
        0x0b, 1008,
        '\f', 1008,
        ' ', 1008,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1009:
      ADVANCE_MAP(
        '\n', 2049,
        '\r', 1009,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1009,
        0x0b, 1009,
        '\f', 1009,
        ' ', 1009,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1010:
      ADVANCE_MAP(
        '\n', 2049,
        '\r', 1009,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1009,
        0x0b, 1009,
        '\f', 1009,
        ' ', 1009,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1011:
      ADVANCE_MAP(
        '\n', 2046,
        '\r', 1011,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1011,
        0x0b, 1011,
        '\f', 1011,
        ' ', 1011,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1012:
      ADVANCE_MAP(
        '\n', 2046,
        '\r', 1011,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1011,
        0x0b, 1011,
        '\f', 1011,
        ' ', 1011,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1013:
      ADVANCE_MAP(
        '\n', 2047,
        '\r', 1013,
        '!', 2197,
        '$', 759,
        '&', 10,
        '(', 2126,
        '0', 761,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'p', 725,
        '{', 2129,
        0x2659, 2170,
        0x265f, 724,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1013,
        0x0b, 1013,
        '\f', 1013,
        ' ', 1013,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1014:
      ADVANCE_MAP(
        '\n', 2048,
        '\r', 1014,
        '!', 2205,
        '$', 2030,
        '&', 1057,
        '(', 2125,
        ')', 2127,
        '0', 1070,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        'e', 2149,
        'p', 1983,
        '{', 2128,
        0x2659, 2169,
        0x265f, 1982,
        'O', 1071,
        'o', 1071,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1014,
        0x0b, 1014,
        '\f', 1014,
        ' ', 1014,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1015:
      ADVANCE_MAP(
        '\n', 2048,
        '\r', 1014,
        '!', 2205,
        '$', 2030,
        '&', 1057,
        '(', 2125,
        ')', 2127,
        '0', 1070,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        'e', 2149,
        'p', 1983,
        '{', 2128,
        0x2659, 2169,
        0x265f, 1982,
        'O', 1071,
        'o', 1071,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1014,
        0x0b, 1014,
        '\f', 1014,
        ' ', 1014,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1016:
      ADVANCE_MAP(
        '\n', 2041,
        '\r', 1009,
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
        '\t', 1009,
        0x0b, 1009,
        '\f', 1009,
        ' ', 1009,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1017:
      if (lookahead == ' ') ADVANCE(1210);
      END_STATE();
    case 1018:
      if (lookahead == ' ') ADVANCE(1072);
      END_STATE();
    case 1019:
      if (lookahead == ' ') ADVANCE(1075);
      END_STATE();
    case 1020:
      if (lookahead == ' ') SKIP(1020);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2085);
      if (lookahead != 0) ADVANCE(2086);
      END_STATE();
    case 1021:
      if (lookahead == ' ') ADVANCE(2027);
      END_STATE();
    case 1022:
      if (lookahead == ' ') ADVANCE(1345);
      END_STATE();
    case 1023:
      if (lookahead == ' ') ADVANCE(1231);
      END_STATE();
    case 1024:
      if (lookahead == ' ') ADVANCE(1328);
      END_STATE();
    case 1025:
      if (lookahead == ' ') ADVANCE(1082);
      END_STATE();
    case 1026:
      ADVANCE_MAP(
        '!', 2197,
        '$', 759,
        '&', 10,
        '(', 2126,
        '-', 2192,
        '0', 761,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'p', 725,
        '{', 2129,
        0x2659, 2170,
        0x265f, 724,
        '\n', 1027,
        '\r', 1027,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1027:
      ADVANCE_MAP(
        '!', 2197,
        '$', 759,
        '&', 10,
        '(', 2126,
        '0', 761,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'p', 725,
        '{', 2129,
        0x2659, 2170,
        0x265f, 724,
        '\n', 1027,
        '\r', 1027,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1028:
      ADVANCE_MAP(
        '!', 2197,
        '$', 759,
        '&', 23,
        '(', 2126,
        '*', 2258,
        '-', 2192,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'O', 2228,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1003,
        0x0b, 1003,
        '\f', 1003,
        ' ', 1003,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1029:
      ADVANCE_MAP(
        '!', 2197,
        '$', 759,
        '&', 23,
        '(', 2126,
        '*', 2258,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'N', 2158,
        'O', 2228,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1003,
        0x0b, 1003,
        '\f', 1003,
        ' ', 1003,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1030:
      ADVANCE_MAP(
        '!', 2205,
        '#', 2185,
        '$', 2030,
        '&', 1055,
        '(', 2125,
        ')', 2127,
        '0', 1070,
        ';', 2042,
        '<', 1644,
        '=', 2165,
        '?', 2205,
        '@', 2173,
        'P', 2168,
        'R', 2154,
        'T', 1650,
        'e', 2149,
        'p', 1983,
        '{', 2128,
        0x2659, 2169,
        0x265f, 1982,
        'O', 1071,
        'o', 1071,
        'Z', 2026,
        'z', 2026,
        '+', 2189,
        0x16ed, 2189,
        0x2795, 2189,
        ':', 2161,
        'X', 2161,
        'x', 2161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1036);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2151);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1031:
      ADVANCE_MAP(
        '!', 2205,
        '#', 2185,
        '$', 2030,
        '&', 1060,
        '(', 2125,
        ')', 2127,
        '0', 1070,
        ';', 2042,
        '<', 1644,
        '=', 2165,
        '?', 2205,
        '@', 2173,
        'P', 2168,
        'R', 2154,
        'T', 1650,
        'e', 2149,
        'p', 1983,
        '{', 2128,
        0x2659, 2169,
        0x265f, 1982,
        'O', 1071,
        'o', 1071,
        'Z', 2026,
        'z', 2026,
        '+', 2189,
        0x16ed, 2189,
        0x2795, 2189,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1036);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2151);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1032:
      ADVANCE_MAP(
        '!', 2205,
        '#', 2185,
        '$', 2030,
        '&', 1063,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 2189,
        0x16ed, 2189,
        0x2795, 2189,
        ':', 2161,
        'X', 2161,
        'x', 2161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1033:
      ADVANCE_MAP(
        '!', 2205,
        '#', 2185,
        '$', 2030,
        '&', 1063,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2165,
        '?', 2205,
        '@', 2173,
        'O', 2230,
        'P', 2168,
        'R', 2154,
        'T', 1650,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 2189,
        0x16ed, 2189,
        0x2795, 2189,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2151);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1034:
      ADVANCE_MAP(
        '!', 2205,
        '#', 2185,
        '$', 2030,
        '&', 1066,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2165,
        '?', 2205,
        '@', 2173,
        'O', 2230,
        'P', 2168,
        'R', 2154,
        'T', 1650,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 2189,
        0x16ed, 2189,
        0x2795, 2189,
        ':', 2161,
        'X', 2161,
        'x', 2161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2177);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2151);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1035:
      ADVANCE_MAP(
        '!', 2205,
        '$', 2030,
        '&', 1047,
        '(', 2125,
        '*', 2257,
        '0', 2235,
        '1', 2209,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'O', 2230,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        'e', 2149,
        'o', 2239,
        'p', 1983,
        '{', 2128,
        0xbd, 2253,
        0x66d, 2273,
        0x204e, 2269,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1036:
      ADVANCE_MAP(
        '!', 2205,
        '$', 2030,
        '&', 1057,
        '(', 2125,
        ')', 2127,
        '0', 1070,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        'e', 2149,
        'p', 1983,
        '{', 2128,
        0x2659, 2169,
        0x265f, 1982,
        'O', 1071,
        'o', 1071,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1036);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1037:
      ADVANCE_MAP(
        '!', 2205,
        '$', 2030,
        '&', 1059,
        '(', 2125,
        ')', 2127,
        '0', 1070,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'N', 2160,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'p', 1983,
        '{', 2128,
        0xbd, 2251,
        0x2659, 2169,
        0x265f, 1982,
        'O', 1071,
        'o', 1071,
        'Z', 2026,
        'z', 2026,
        '+', 1073,
        0x16ed, 1073,
        0x2795, 1073,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1037);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 1038:
      ADVANCE_MAP(
        '"', 2057,
        '&', 2087,
        ']', 2056,
        0x2ba, 2077,
        0x2dd, 2075,
        0x2ee, 2081,
        0x2f6, 2079,
        0x5f2, 2083,
        0x5f4, 2073,
        0x201c, 2061,
        0x201d, 2063,
        0x201f, 2065,
        0x2033, 2067,
        0x2036, 2069,
        0x3003, 2071,
        0xff02, 2059,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1040);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2088);
      if (lookahead != 0) ADVANCE(2124);
      END_STATE();
    case 1039:
      ADVANCE_MAP(
        '"', 2057,
        '&', 2087,
        0x2ba, 2077,
        0x2dd, 2075,
        0x2ee, 2081,
        0x2f6, 2079,
        0x5f2, 2083,
        0x5f4, 2073,
        0x201c, 2061,
        0x201d, 2063,
        0x201f, 2065,
        0x2033, 2067,
        0x2036, 2069,
        0x3003, 2071,
        0xff02, 2059,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1041);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2089);
      if (lookahead != 0) ADVANCE(2124);
      END_STATE();
    case 1040:
      ADVANCE_MAP(
        '"', 2057,
        '&', 1051,
        ']', 2055,
        0x2ba, 2077,
        0x2dd, 2075,
        0x2ee, 2081,
        0x2f6, 2079,
        0x5f2, 2083,
        0x5f4, 2073,
        0x201c, 2061,
        0x201d, 2063,
        0x201f, 2065,
        0x2033, 2067,
        0x2036, 2069,
        0x3003, 2071,
        0xff02, 2059,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1040);
      END_STATE();
    case 1041:
      ADVANCE_MAP(
        '"', 2057,
        '&', 1051,
        0x2ba, 2077,
        0x2dd, 2075,
        0x2ee, 2081,
        0x2f6, 2079,
        0x5f2, 2083,
        0x5f4, 2073,
        0x201c, 2061,
        0x201d, 2063,
        0x201f, 2065,
        0x2033, 2067,
        0x2036, 2069,
        0x3003, 2071,
        0xff02, 2059,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1041);
      END_STATE();
    case 1042:
      ADVANCE_MAP(
        '#', 1209,
        'a', 1896,
        'd', 1659,
        'f', 1883,
        'h', 1660,
        'l', 1849,
        'm', 1705,
        'n', 1704,
        'p', 1801,
        's', 1853,
      );
      END_STATE();
    case 1043:
      if (lookahead == '#') ADVANCE(1222);
      if (lookahead == 'd') ADVANCE(1679);
      if (lookahead == 'h') ADVANCE(1974);
      if (lookahead == 'm') ADVANCE(1708);
      if (lookahead == 'n') ADVANCE(1707);
      END_STATE();
    case 1044:
      if (lookahead == '#') ADVANCE(1247);
      if (lookahead == 'p') ADVANCE(1821);
      END_STATE();
    case 1045:
      ADVANCE_MAP(
        '#', 1281,
        'a', 1896,
        'd', 1682,
        'f', 1883,
        'h', 1661,
        'l', 1849,
        'm', 1717,
        'n', 1718,
        's', 1853,
      );
      END_STATE();
    case 1046:
      if (lookahead == '#') ADVANCE(1229);
      if (lookahead == 'f') ADVANCE(1894);
      if (lookahead == 'h') ADVANCE(1680);
      END_STATE();
    case 1047:
      ADVANCE_MAP(
        '#', 1213,
        'D', 1739,
        'L', 1671,
        'M', 1797,
        'P', 1814,
        'R', 1672,
        'S', 1765,
        'U', 1861,
        'a', 1896,
        'b', 1795,
        'c', 1794,
        'd', 1688,
        'e', 1878,
        'f', 1883,
        'h', 1655,
        'i', 1824,
        'l', 1729,
        'm', 1667,
        'n', 1657,
        'p', 1732,
        'q', 1948,
        'r', 1663,
        's', 1804,
        'u', 1664,
        'x', 1850,
      );
      END_STATE();
    case 1048:
      if (lookahead == '#') ADVANCE(1233);
      if (lookahead == 'd') ADVANCE(1690);
      if (lookahead == 'h') ADVANCE(1979);
      if (lookahead == 'm') ADVANCE(1724);
      if (lookahead == 'n') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(1822);
      if (lookahead == 's') ADVANCE(1858);
      END_STATE();
    case 1049:
      if (lookahead == '#') ADVANCE(1436);
      if (lookahead == 'e') ADVANCE(1973);
      if (lookahead == 'q') ADVANCE(1969);
      END_STATE();
    case 1050:
      if (lookahead == '#') ADVANCE(1508);
      if (lookahead == 'e') ADVANCE(1880);
      END_STATE();
    case 1051:
      if (lookahead == '#') ADVANCE(1227);
      END_STATE();
    case 1052:
      if (lookahead == '#') ADVANCE(1232);
      if (lookahead == 'd') ADVANCE(1689);
      if (lookahead == 'h') ADVANCE(1978);
      if (lookahead == 'm') ADVANCE(1722);
      if (lookahead == 'n') ADVANCE(1721);
      if (lookahead == 's') ADVANCE(1856);
      END_STATE();
    case 1053:
      ADVANCE_MAP(
        '#', 1218,
        'D', 1739,
        'L', 1671,
        'M', 1797,
        'P', 1814,
        'R', 1672,
        'S', 1765,
        'U', 1861,
        'b', 1795,
        'c', 1794,
        'd', 1688,
        'e', 1878,
        'f', 1895,
        'h', 1678,
        'i', 1824,
        'l', 1730,
        'm', 1668,
        'n', 1657,
        'p', 1733,
        'q', 1948,
        'r', 1663,
        's', 1804,
        'u', 1664,
        'x', 1850,
      );
      END_STATE();
    case 1054:
      if (lookahead == '#') ADVANCE(1235);
      if (lookahead == 's') ADVANCE(1860);
      END_STATE();
    case 1055:
      ADVANCE_MAP(
        '#', 1220,
        'D', 1739,
        'L', 1671,
        'M', 1797,
        'P', 1814,
        'R', 1672,
        'S', 1765,
        'U', 1861,
        'b', 1795,
        'c', 1794,
        'd', 1693,
        'e', 1878,
        'h', 1666,
        'i', 1824,
        'l', 1730,
        'm', 1670,
        'n', 1658,
        'p', 1733,
        'q', 1948,
        'r', 1663,
        's', 1804,
        'u', 1664,
        'x', 1850,
      );
      END_STATE();
    case 1056:
      ADVANCE_MAP(
        '#', 1219,
        'a', 1896,
        'd', 1682,
        'f', 1883,
        'h', 1661,
        'l', 1849,
        'm', 1717,
        'n', 1718,
        's', 1853,
      );
      END_STATE();
    case 1057:
      ADVANCE_MAP(
        '#', 1314,
        'D', 1739,
        'L', 1671,
        'M', 1797,
        'P', 1814,
        'R', 1672,
        'S', 1765,
        'U', 1861,
        'b', 1795,
        'c', 1794,
        'd', 1688,
        'e', 1878,
        'h', 1665,
        'i', 1824,
        'l', 1730,
        'm', 1668,
        'n', 1657,
        'p', 1732,
        'q', 1948,
        'r', 1663,
        's', 1804,
        'u', 1664,
        'x', 1850,
      );
      END_STATE();
    case 1058:
      if (lookahead == '#') ADVANCE(1305);
      if (lookahead == 'd') ADVANCE(1691);
      if (lookahead == 'h') ADVANCE(1980);
      if (lookahead == 'm') ADVANCE(1726);
      if (lookahead == 'n') ADVANCE(1725);
      if (lookahead == 's') ADVANCE(1859);
      END_STATE();
    case 1059:
      ADVANCE_MAP(
        '#', 1313,
        'D', 1739,
        'L', 1671,
        'M', 1797,
        'P', 1814,
        'R', 1672,
        'S', 1765,
        'U', 1861,
        'b', 1795,
        'c', 1794,
        'd', 1688,
        'e', 1878,
        'f', 1895,
        'h', 1678,
        'i', 1824,
        'l', 1730,
        'm', 1668,
        'n', 1657,
        'p', 1732,
        'q', 1948,
        'r', 1663,
        's', 1804,
        'u', 1664,
        'x', 1850,
      );
      END_STATE();
    case 1060:
      ADVANCE_MAP(
        '#', 1316,
        'D', 1739,
        'L', 1671,
        'M', 1797,
        'P', 1814,
        'R', 1672,
        'S', 1765,
        'U', 1861,
        'b', 1795,
        'c', 1794,
        'd', 1688,
        'e', 1878,
        'h', 1665,
        'i', 1824,
        'l', 1730,
        'm', 1668,
        'n', 1657,
        'p', 1733,
        'q', 1948,
        'r', 1663,
        's', 1804,
        'u', 1664,
        'x', 1850,
      );
      END_STATE();
    case 1061:
      if (lookahead == '#') ADVANCE(1304);
      if (lookahead == 'd') ADVANCE(1683);
      if (lookahead == 'h') ADVANCE(1975);
      if (lookahead == 'm') ADVANCE(1714);
      if (lookahead == 'n') ADVANCE(1713);
      END_STATE();
    case 1062:
      if (lookahead == '#') ADVANCE(1307);
      if (lookahead == 'p') ADVANCE(1822);
      END_STATE();
    case 1063:
      ADVANCE_MAP(
        '#', 1312,
        'D', 1739,
        'L', 1671,
        'M', 1797,
        'P', 1814,
        'R', 1672,
        'S', 1765,
        'U', 1861,
        'a', 1896,
        'b', 1795,
        'c', 1794,
        'd', 1688,
        'e', 1878,
        'f', 1883,
        'h', 1655,
        'i', 1824,
        'l', 1729,
        'm', 1667,
        'n', 1657,
        'p', 1733,
        'q', 1948,
        'r', 1663,
        's', 1804,
        'u', 1664,
        'x', 1850,
      );
      END_STATE();
    case 1064:
      if (lookahead == '#') ADVANCE(1306);
      if (lookahead == 'd') ADVANCE(1689);
      if (lookahead == 'h') ADVANCE(1978);
      if (lookahead == 'm') ADVANCE(1722);
      if (lookahead == 'n') ADVANCE(1721);
      if (lookahead == 'p') ADVANCE(1821);
      if (lookahead == 's') ADVANCE(1856);
      END_STATE();
    case 1065:
      if (lookahead == '#') ADVANCE(1308);
      if (lookahead == 'd') ADVANCE(1684);
      if (lookahead == 'h') ADVANCE(1976);
      if (lookahead == 'm') ADVANCE(1716);
      if (lookahead == 'n') ADVANCE(1715);
      END_STATE();
    case 1066:
      ADVANCE_MAP(
        '#', 1315,
        'D', 1739,
        'L', 1671,
        'M', 1797,
        'P', 1814,
        'R', 1672,
        'S', 1765,
        'U', 1861,
        'a', 1896,
        'b', 1795,
        'c', 1794,
        'd', 1693,
        'e', 1878,
        'f', 1883,
        'h', 1656,
        'i', 1824,
        'l', 1729,
        'm', 1669,
        'n', 1658,
        'p', 1733,
        'q', 1948,
        'r', 1663,
        's', 1804,
        'u', 1664,
        'x', 1850,
      );
      END_STATE();
    case 1067:
      if (lookahead == '#') ADVANCE(1309);
      if (lookahead == 'd') ADVANCE(1687);
      if (lookahead == 'h') ADVANCE(1977);
      if (lookahead == 'm') ADVANCE(1720);
      if (lookahead == 'n') ADVANCE(1719);
      END_STATE();
    case 1068:
      if (lookahead == '#') ADVANCE(1310);
      if (lookahead == 'd') ADVANCE(1689);
      if (lookahead == 'h') ADVANCE(1978);
      if (lookahead == 'm') ADVANCE(1722);
      if (lookahead == 'n') ADVANCE(1721);
      END_STATE();
    case 1069:
      if (lookahead == '#') ADVANCE(1311);
      if (lookahead == 'd') ADVANCE(1692);
      if (lookahead == 'h') ADVANCE(1981);
      if (lookahead == 'm') ADVANCE(1728);
      if (lookahead == 'n') ADVANCE(1727);
      END_STATE();
    case 1070:
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2029);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2142);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2024);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      END_STATE();
    case 1071:
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2024);
      END_STATE();
    case 1072:
      if (lookahead == '&') ADVANCE(1046);
      if (lookahead == 0xbd) ADVANCE(2283);
      END_STATE();
    case 1073:
      if (lookahead == '&') ADVANCE(1052);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1081);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2190);
      END_STATE();
    case 1074:
      if (lookahead == '&') ADVANCE(1050);
      END_STATE();
    case 1075:
      if (lookahead == '&') ADVANCE(1054);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1024);
      END_STATE();
    case 1076:
      ADVANCE_MAP(
        '&', 1056,
        '*', 2257,
        '-', 2211,
        '/', 2240,
        '0', 2233,
        '1', 2210,
        '2', 2250,
        'O', 2229,
        'o', 2238,
        0xbd, 2253,
        0x66d, 2273,
        0x2010, 2215,
        0x2011, 2217,
        0x2012, 2219,
        0x2013, 2221,
        0x2014, 2223,
        0x2044, 2244,
        0x204e, 2269,
        0x2212, 2213,
        0x2215, 2242,
        0x2217, 2261,
        0x2731, 2265,
        0x2796, 2225,
        0x27cb, 2246,
        0x29f8, 2248,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1076);
      END_STATE();
    case 1077:
      if (lookahead == '&') ADVANCE(1058);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1022);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1021);
      END_STATE();
    case 1078:
      if (lookahead == '&') ADVANCE(1061);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1017);
      END_STATE();
    case 1079:
      if (lookahead == '&') ADVANCE(1062);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2190);
      END_STATE();
    case 1080:
      if (lookahead == '&') ADVANCE(1065);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1018);
      END_STATE();
    case 1081:
      if (lookahead == '&') ADVANCE(1068);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2190);
      END_STATE();
    case 1082:
      if (lookahead == '&') ADVANCE(1069);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1023);
      END_STATE();
    case 1083:
      if (lookahead == '-') ADVANCE(883);
      END_STATE();
    case 1084:
      if (lookahead == '-') ADVANCE(1083);
      END_STATE();
    case 1085:
      if (lookahead == '-') ADVANCE(1084);
      END_STATE();
    case 1086:
      if (lookahead == '-') ADVANCE(1085);
      END_STATE();
    case 1087:
      if (lookahead == '.') ADVANCE(2190);
      END_STATE();
    case 1088:
      if (lookahead == '0') ADVANCE(1105);
      if (lookahead == '2') ADVANCE(1334);
      if (lookahead == '5') ADVANCE(1319);
      if (lookahead == '6') ADVANCE(1463);
      if (lookahead == '8') ADVANCE(1559);
      END_STATE();
    case 1089:
      if (lookahead == '0') ADVANCE(1529);
      if (lookahead == '1') ADVANCE(1119);
      if (lookahead == '2') ADVANCE(1132);
      if (lookahead == '4') ADVANCE(1409);
      if (lookahead == '6') ADVANCE(1133);
      if (lookahead == '7') ADVANCE(1134);
      END_STATE();
    case 1090:
      ADVANCE_MAP(
        '0', 1211,
        '2', 1242,
        '7', 1425,
        '9', 2017,
        'A', 1584,
        'a', 1584,
        'B', 1580,
        'b', 1580,
        'D', 1586,
        'd', 1586,
        'E', 2007,
        'e', 2007,
        'F', 1494,
        'f', 1494,
      );
      END_STATE();
    case 1091:
      if (lookahead == '0') ADVANCE(1092);
      if (lookahead == '1') ADVANCE(1129);
      if (lookahead == '6') ADVANCE(1463);
      if (lookahead == '7') ADVANCE(1519);
      if (lookahead == '8') ADVANCE(1559);
      END_STATE();
    case 1092:
      if (lookahead == '0') ADVANCE(1177);
      if (lookahead == '1') ADVANCE(1429);
      if (lookahead == '2') ADVANCE(1272);
      if (lookahead == '7') ADVANCE(1472);
      if (lookahead == '8') ADVANCE(1505);
      END_STATE();
    case 1093:
      if (lookahead == '0') ADVANCE(1177);
      if (lookahead == '1') ADVANCE(1433);
      if (lookahead == '2') ADVANCE(1272);
      if (lookahead == '7') ADVANCE(1472);
      if (lookahead == '8') ADVANCE(1505);
      END_STATE();
    case 1094:
      if (lookahead == '0') ADVANCE(1177);
      if (lookahead == '1') ADVANCE(1441);
      if (lookahead == '2') ADVANCE(1272);
      if (lookahead == '7') ADVANCE(1472);
      if (lookahead == '8') ADVANCE(1505);
      END_STATE();
    case 1095:
      if (lookahead == '0') ADVANCE(1248);
      END_STATE();
    case 1096:
      if (lookahead == '0') ADVANCE(1501);
      if (lookahead == '1') ADVANCE(1364);
      if (lookahead == '6') ADVANCE(1455);
      if (lookahead == '9') ADVANCE(2008);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1482);
      END_STATE();
    case 1097:
      if (lookahead == '0') ADVANCE(1501);
      if (lookahead == '1') ADVANCE(1365);
      if (lookahead == '6') ADVANCE(1455);
      if (lookahead == '9') ADVANCE(2008);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1482);
      END_STATE();
    case 1098:
      if (lookahead == '0') ADVANCE(1501);
      if (lookahead == '1') ADVANCE(1370);
      if (lookahead == '6') ADVANCE(1455);
      if (lookahead == '9') ADVANCE(2008);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1482);
      END_STATE();
    case 1099:
      if (lookahead == '0') ADVANCE(1501);
      if (lookahead == '1') ADVANCE(1371);
      if (lookahead == '6') ADVANCE(1455);
      if (lookahead == '9') ADVANCE(2008);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1482);
      END_STATE();
    case 1100:
      ADVANCE_MAP(
        '0', 1262,
        '2', 1217,
        '7', 1574,
        '9', 2018,
        'D', 1623,
        'd', 1623,
        'F', 1636,
        'f', 1636,
      );
      END_STATE();
    case 1101:
      ADVANCE_MAP(
        '0', 1262,
        '2', 1217,
        '7', 1572,
        '9', 2018,
        'B', 1578,
        'b', 1578,
        'D', 1623,
        'd', 1623,
        'F', 1636,
        'f', 1636,
      );
      END_STATE();
    case 1102:
      ADVANCE_MAP(
        '0', 1245,
        '2', 1583,
        'B', 1984,
        'b', 1984,
        'D', 2000,
        'd', 2000,
        'E', 2007,
        'e', 2007,
        'F', 1493,
        'f', 1493,
      );
      END_STATE();
    case 1103:
      if (lookahead == '0') ADVANCE(2231);
      if (lookahead == '@') ADVANCE(2173);
      if (lookahead == 'O') ADVANCE(2227);
      if (lookahead == 'o') ADVANCE(2236);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2161);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1104);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(2150);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      END_STATE();
    case 1104:
      if (lookahead == '0') ADVANCE(2231);
      if (lookahead == '@') ADVANCE(2173);
      if (lookahead == 'O') ADVANCE(2227);
      if (lookahead == 'o') ADVANCE(2236);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1104);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      END_STATE();
    case 1105:
      if (lookahead == '0') ADVANCE(1428);
      if (lookahead == '1') ADVANCE(1403);
      if (lookahead == '7') ADVANCE(1462);
      END_STATE();
    case 1106:
      if (lookahead == '0') ADVANCE(1428);
      if (lookahead == '1') ADVANCE(1430);
      if (lookahead == '7') ADVANCE(1462);
      END_STATE();
    case 1107:
      ADVANCE_MAP(
        '0', 1257,
        '1', 1557,
        '2', 1096,
        '3', 1260,
        '5', 1216,
        '6', 1467,
        '7', 1264,
        'A', 1110,
        'a', 1110,
        'B', 1214,
        'b', 1214,
        'D', 1622,
        'd', 1622,
      );
      END_STATE();
    case 1108:
      ADVANCE_MAP(
        '0', 1257,
        '1', 1557,
        '2', 1096,
        '3', 1260,
        '5', 1216,
        '6', 1467,
        '7', 1265,
        'A', 1110,
        'a', 1110,
        'B', 1215,
        'b', 1215,
        'D', 1622,
        'd', 1622,
      );
      END_STATE();
    case 1109:
      if (lookahead == '0') ADVANCE(1144);
      if (lookahead == '7') ADVANCE(1239);
      END_STATE();
    case 1110:
      if (lookahead == '0') ADVANCE(1144);
      if (lookahead == '7') ADVANCE(1239);
      if (lookahead == ';') ADVANCE(2259);
      END_STATE();
    case 1111:
      if (lookahead == '0') ADVANCE(1127);
      if (lookahead == '1') ADVANCE(1129);
      if (lookahead == '7') ADVANCE(1519);
      END_STATE();
    case 1112:
      if (lookahead == '0') ADVANCE(1127);
      if (lookahead == '1') ADVANCE(1129);
      if (lookahead == '7') ADVANCE(1519);
      if (lookahead == '8') ADVANCE(1565);
      END_STATE();
    case 1113:
      if (lookahead == '0') ADVANCE(1282);
      END_STATE();
    case 1114:
      ADVANCE_MAP(
        '0', 1280,
        '2', 1250,
        '7', 1426,
        '9', 2017,
        'A', 1584,
        'a', 1584,
        'D', 1594,
        'd', 1594,
        'F', 1587,
        'f', 1587,
      );
      END_STATE();
    case 1115:
      if (lookahead == '0') ADVANCE(1228);
      END_STATE();
    case 1116:
      ADVANCE_MAP(
        '0', 1258,
        '1', 1557,
        '2', 1097,
        '3', 1260,
        '5', 1216,
        '6', 1467,
        '7', 1268,
        'A', 1109,
        'a', 1109,
        'B', 1215,
        'b', 1215,
        'D', 1622,
        'd', 1622,
      );
      END_STATE();
    case 1117:
      ADVANCE_MAP(
        '0', 1258,
        '1', 1557,
        '2', 1097,
        '3', 1260,
        '5', 1216,
        '6', 1467,
        '7', 1267,
        'A', 1109,
        'a', 1109,
        'B', 1214,
        'b', 1214,
        'D', 1622,
        'd', 1622,
      );
      END_STATE();
    case 1118:
      if (lookahead == '0') ADVANCE(1230);
      END_STATE();
    case 1119:
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1585);
      if (lookahead == '2') ADVANCE(1585);
      END_STATE();
    case 1120:
      ADVANCE_MAP(
        '0', 1585,
        '1', 1585,
        '2', 1585,
        '3', 1585,
        '4', 1585,
        'C', 1599,
        'c', 1599,
        'D', 1600,
        'd', 1600,
        'F', 1601,
        'f', 1601,
      );
      END_STATE();
    case 1121:
      if (lookahead == '0') ADVANCE(1170);
      END_STATE();
    case 1122:
      if (lookahead == '0') ADVANCE(1285);
      END_STATE();
    case 1123:
      if (lookahead == '0') ADVANCE(1212);
      if (lookahead == '2') ADVANCE(1249);
      if (lookahead == '7') ADVANCE(1556);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1581);
      END_STATE();
    case 1124:
      if (lookahead == '0') ADVANCE(1352);
      END_STATE();
    case 1125:
      if (lookahead == '0') ADVANCE(1592);
      if (lookahead == '8') ADVANCE(1593);
      END_STATE();
    case 1126:
      if (lookahead == '0') ADVANCE(1176);
      if (lookahead == '1') ADVANCE(1429);
      if (lookahead == '2') ADVANCE(1272);
      if (lookahead == '7') ADVANCE(1472);
      if (lookahead == '8') ADVANCE(1505);
      END_STATE();
    case 1127:
      if (lookahead == '0') ADVANCE(1176);
      if (lookahead == '1') ADVANCE(1433);
      if (lookahead == '2') ADVANCE(1272);
      if (lookahead == '7') ADVANCE(1472);
      if (lookahead == '8') ADVANCE(1505);
      END_STATE();
    case 1128:
      if (lookahead == '0') ADVANCE(1176);
      if (lookahead == '1') ADVANCE(1441);
      if (lookahead == '2') ADVANCE(1272);
      if (lookahead == '7') ADVANCE(1472);
      if (lookahead == '8') ADVANCE(1505);
      END_STATE();
    case 1129:
      if (lookahead == '0') ADVANCE(1326);
      END_STATE();
    case 1130:
      if (lookahead == '0') ADVANCE(1581);
      if (lookahead == '1') ADVANCE(1581);
      if (lookahead == '2') ADVANCE(1581);
      END_STATE();
    case 1131:
      if (lookahead == '0') ADVANCE(1581);
      if (lookahead == '1') ADVANCE(1581);
      if (lookahead == '2') ADVANCE(1581);
      if (lookahead == '3') ADVANCE(1581);
      if (lookahead == '4') ADVANCE(1581);
      END_STATE();
    case 1132:
      if (lookahead == '0') ADVANCE(1599);
      if (lookahead == '1') ADVANCE(1600);
      if (lookahead == '3') ADVANCE(1601);
      END_STATE();
    case 1133:
      if (lookahead == '0') ADVANCE(1604);
      END_STATE();
    case 1134:
      if (lookahead == '0') ADVANCE(1605);
      END_STATE();
    case 1135:
      if (lookahead == '0') ADVANCE(1582);
      if (lookahead == '1') ADVANCE(1582);
      if (lookahead == '2') ADVANCE(1582);
      END_STATE();
    case 1136:
      if (lookahead == '0') ADVANCE(1582);
      if (lookahead == '1') ADVANCE(1582);
      if (lookahead == '2') ADVANCE(1582);
      if (lookahead == '3') ADVANCE(1582);
      if (lookahead == '4') ADVANCE(1582);
      END_STATE();
    case 1137:
      if (lookahead == '0') ADVANCE(1638);
      if (lookahead == '1') ADVANCE(1638);
      if (lookahead == '2') ADVANCE(1638);
      END_STATE();
    case 1138:
      if (lookahead == '0') ADVANCE(1638);
      if (lookahead == '1') ADVANCE(1638);
      if (lookahead == '2') ADVANCE(1638);
      if (lookahead == '3') ADVANCE(1638);
      if (lookahead == '4') ADVANCE(1638);
      END_STATE();
    case 1139:
      if (lookahead == '0') ADVANCE(1608);
      if (lookahead == '1') ADVANCE(1614);
      if (lookahead == '2') ADVANCE(1615);
      if (lookahead == '3') ADVANCE(1616);
      if (lookahead == '4') ADVANCE(1617);
      END_STATE();
    case 1140:
      ADVANCE_MAP(
        '0', 1608,
        '1', 1614,
        '2', 1615,
        '3', 1616,
        '4', 1617,
        'C', 1599,
        'c', 1599,
        'D', 1600,
        'd', 1600,
        'F', 1601,
        'f', 1601,
      );
      END_STATE();
    case 1141:
      if (lookahead == '0') ADVANCE(1637);
      if (lookahead == '1') ADVANCE(1637);
      if (lookahead == '2') ADVANCE(1637);
      END_STATE();
    case 1142:
      if (lookahead == '0') ADVANCE(1637);
      if (lookahead == '1') ADVANCE(1637);
      if (lookahead == '2') ADVANCE(1637);
      if (lookahead == '3') ADVANCE(1637);
      if (lookahead == '4') ADVANCE(1637);
      END_STATE();
    case 1143:
      if (lookahead == '0') ADVANCE(1615);
      if (lookahead == '1') ADVANCE(1616);
      if (lookahead == '2') ADVANCE(1617);
      END_STATE();
    case 1144:
      if (lookahead == '0') ADVANCE(1623);
      if (lookahead == '1') ADVANCE(1623);
      END_STATE();
    case 1145:
      if (lookahead == '0') ADVANCE(1623);
      if (lookahead == '1') ADVANCE(1623);
      if (lookahead == '2') ADVANCE(1623);
      END_STATE();
    case 1146:
      if (lookahead == '0') ADVANCE(1623);
      if (lookahead == '1') ADVANCE(1623);
      if (lookahead == '2') ADVANCE(1623);
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '4') ADVANCE(1623);
      END_STATE();
    case 1147:
      if (lookahead == '0') ADVANCE(1623);
      if (lookahead == '3') ADVANCE(1623);
      END_STATE();
    case 1148:
      if (lookahead == '0') ADVANCE(1622);
      if (lookahead == '1') ADVANCE(1622);
      if (lookahead == '2') ADVANCE(1622);
      END_STATE();
    case 1149:
      if (lookahead == '0') ADVANCE(1622);
      if (lookahead == '1') ADVANCE(1622);
      if (lookahead == '2') ADVANCE(1622);
      if (lookahead == '3') ADVANCE(1622);
      if (lookahead == '4') ADVANCE(1622);
      END_STATE();
    case 1150:
      if (lookahead == '0') ADVANCE(1631);
      if (lookahead == '1') ADVANCE(1639);
      if (lookahead == '3') ADVANCE(1630);
      END_STATE();
    case 1151:
      if (lookahead == '0') ADVANCE(1636);
      END_STATE();
    case 1152:
      if (lookahead == '0') ADVANCE(1628);
      if (lookahead == '1') ADVANCE(1628);
      if (lookahead == '2') ADVANCE(1628);
      END_STATE();
    case 1153:
      if (lookahead == '0') ADVANCE(1628);
      if (lookahead == '1') ADVANCE(1628);
      if (lookahead == '2') ADVANCE(1628);
      if (lookahead == '3') ADVANCE(1628);
      if (lookahead == '4') ADVANCE(1628);
      END_STATE();
    case 1154:
      if (lookahead == '0') ADVANCE(1629);
      END_STATE();
    case 1155:
      if (lookahead == '0') ADVANCE(1641);
      if (lookahead == '1') ADVANCE(1641);
      if (lookahead == '2') ADVANCE(1641);
      END_STATE();
    case 1156:
      if (lookahead == '0') ADVANCE(1641);
      if (lookahead == '1') ADVANCE(1641);
      if (lookahead == '2') ADVANCE(1641);
      if (lookahead == '3') ADVANCE(1641);
      if (lookahead == '4') ADVANCE(1641);
      END_STATE();
    case 1157:
      if (lookahead == '0') ADVANCE(1640);
      END_STATE();
    case 1158:
      if (lookahead == '0') ADVANCE(1634);
      if (lookahead == '1') ADVANCE(1634);
      if (lookahead == '2') ADVANCE(1634);
      END_STATE();
    case 1159:
      if (lookahead == '0') ADVANCE(1634);
      if (lookahead == '1') ADVANCE(1634);
      if (lookahead == '2') ADVANCE(1634);
      if (lookahead == '3') ADVANCE(1634);
      if (lookahead == '4') ADVANCE(1634);
      END_STATE();
    case 1160:
      if (lookahead == '0') ADVANCE(1106);
      if (lookahead == '2') ADVANCE(1334);
      if (lookahead == '5') ADVANCE(1319);
      if (lookahead == '6') ADVANCE(1463);
      if (lookahead == '8') ADVANCE(1559);
      END_STATE();
    case 1161:
      if (lookahead == '0') ADVANCE(1106);
      if (lookahead == '6') ADVANCE(1463);
      if (lookahead == '8') ADVANCE(1559);
      END_STATE();
    case 1162:
      if (lookahead == '0') ADVANCE(1532);
      if (lookahead == '1') ADVANCE(1130);
      END_STATE();
    case 1163:
      if (lookahead == '0') ADVANCE(1244);
      if (lookahead == '2') ADVANCE(1254);
      if (lookahead == '7') ADVANCE(1567);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1582);
      END_STATE();
    case 1164:
      if (lookahead == '0') ADVANCE(1642);
      if (lookahead == '1') ADVANCE(1642);
      if (lookahead == '2') ADVANCE(1642);
      END_STATE();
    case 1165:
      if (lookahead == '0') ADVANCE(1642);
      if (lookahead == '1') ADVANCE(1642);
      if (lookahead == '2') ADVANCE(1642);
      if (lookahead == '3') ADVANCE(1642);
      if (lookahead == '4') ADVANCE(1642);
      END_STATE();
    case 1166:
      if (lookahead == '0') ADVANCE(1643);
      END_STATE();
    case 1167:
      if (lookahead == '0') ADVANCE(1535);
      if (lookahead == '1') ADVANCE(1143);
      if (lookahead == '2') ADVANCE(1132);
      if (lookahead == '4') ADVANCE(1409);
      if (lookahead == '6') ADVANCE(1133);
      if (lookahead == '7') ADVANCE(1134);
      END_STATE();
    case 1168:
      if (lookahead == '0') ADVANCE(1535);
      if (lookahead == '1') ADVANCE(1143);
      if (lookahead == '6') ADVANCE(1133);
      if (lookahead == '7') ADVANCE(1134);
      END_STATE();
    case 1169:
      if (lookahead == '0') ADVANCE(1252);
      if (lookahead == '2') ADVANCE(1256);
      if (lookahead == '7') ADVANCE(1569);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1638);
      END_STATE();
    case 1170:
      if (lookahead == '0') ADVANCE(1411);
      END_STATE();
    case 1171:
      if (lookahead == '0') ADVANCE(1533);
      if (lookahead == '1') ADVANCE(1135);
      END_STATE();
    case 1172:
      if (lookahead == '0') ADVANCE(1255);
      if (lookahead == '2') ADVANCE(1259);
      if (lookahead == '7') ADVANCE(1570);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1637);
      END_STATE();
    case 1173:
      if (lookahead == '0') ADVANCE(1534);
      if (lookahead == '1') ADVANCE(1137);
      END_STATE();
    case 1174:
      if (lookahead == '0') ADVANCE(1261);
      if (lookahead == '2') ADVANCE(1271);
      if (lookahead == '7') ADVANCE(1573);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1623);
      END_STATE();
    case 1175:
      if (lookahead == '0') ADVANCE(1537);
      if (lookahead == '1') ADVANCE(1141);
      END_STATE();
    case 1176:
      if (lookahead == '0') ADVANCE(1482);
      END_STATE();
    case 1177:
      if (lookahead == '0') ADVANCE(1482);
      if (lookahead == '3') ADVANCE(1410);
      END_STATE();
    case 1178:
      if (lookahead == '0') ADVANCE(1539);
      if (lookahead == '1') ADVANCE(1148);
      if (lookahead == '5') ADVANCE(1357);
      if (lookahead == '6') ADVANCE(1414);
      END_STATE();
    case 1179:
      if (lookahead == '0') ADVANCE(1539);
      if (lookahead == '1') ADVANCE(1148);
      if (lookahead == '5') ADVANCE(1357);
      if (lookahead == '6') ADVANCE(1414);
      if (lookahead == '7') ADVANCE(1134);
      END_STATE();
    case 1180:
      if (lookahead == '0') ADVANCE(1455);
      if (lookahead == '6') ADVANCE(1361);
      END_STATE();
    case 1181:
      if (lookahead == '0') ADVANCE(1538);
      if (lookahead == '1') ADVANCE(1145);
      END_STATE();
    case 1182:
      if (lookahead == '0') ADVANCE(1538);
      if (lookahead == '1') ADVANCE(1145);
      if (lookahead == '6') ADVANCE(1151);
      END_STATE();
    case 1183:
      if (lookahead == '0') ADVANCE(1541);
      if (lookahead == '1') ADVANCE(1152);
      if (lookahead == '6') ADVANCE(1154);
      END_STATE();
    case 1184:
      if (lookahead == '0') ADVANCE(1543);
      if (lookahead == '1') ADVANCE(1155);
      if (lookahead == '6') ADVANCE(1157);
      END_STATE();
    case 1185:
      if (lookahead == '0') ADVANCE(1546);
      if (lookahead == '1') ADVANCE(1164);
      END_STATE();
    case 1186:
      if (lookahead == '0') ADVANCE(1545);
      if (lookahead == '1') ADVANCE(1158);
      if (lookahead == '5') ADVANCE(1357);
      if (lookahead == '6') ADVANCE(1414);
      END_STATE();
    case 1187:
      if (lookahead == '0') ADVANCE(1545);
      if (lookahead == '1') ADVANCE(1158);
      if (lookahead == '5') ADVANCE(1357);
      if (lookahead == '6') ADVANCE(1414);
      if (lookahead == '7') ADVANCE(1134);
      END_STATE();
    case 1188:
      ADVANCE_MAP(
        '0', 1243,
        '2', 1251,
        '7', 1426,
        '9', 2017,
        'A', 1584,
        'a', 1584,
        'B', 1984,
        'b', 1984,
        'D', 1595,
        'd', 1595,
        'E', 2007,
        'e', 2007,
        'F', 1494,
        'f', 1494,
      );
      END_STATE();
    case 1189:
      ADVANCE_MAP(
        '0', 1270,
        '2', 1246,
        '7', 1568,
        '9', 2019,
        'B', 1623,
        'b', 1623,
        'D', 1628,
        'd', 1628,
        'F', 1629,
        'f', 1629,
      );
      END_STATE();
    case 1190:
      ADVANCE_MAP(
        '0', 1278,
        '1', 1557,
        '2', 1098,
        '3', 1260,
        '5', 1216,
        '6', 1467,
        '7', 1266,
        'A', 1110,
        'a', 1110,
        'B', 1215,
        'b', 1215,
        'D', 1634,
        'd', 1634,
      );
      END_STATE();
    case 1191:
      if (lookahead == '0') ADVANCE(1286);
      END_STATE();
    case 1192:
      ADVANCE_MAP(
        '0', 1279,
        '1', 1557,
        '2', 1099,
        '3', 1260,
        '5', 1216,
        '6', 1467,
        '7', 1269,
        'A', 1109,
        'a', 1109,
        'B', 1215,
        'b', 1215,
        'D', 1634,
        'd', 1634,
      );
      END_STATE();
    case 1193:
      if (lookahead == '0') ADVANCE(1276);
      if (lookahead == '2') ADVANCE(1274);
      if (lookahead == '7') ADVANCE(1577);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1642);
      END_STATE();
    case 1194:
      ADVANCE_MAP(
        '0', 1273,
        '2', 1253,
        '7', 1576,
        '9', 2020,
        'D', 1641,
        'd', 1641,
        'F', 1640,
        'f', 1640,
      );
      END_STATE();
    case 1195:
      if (lookahead == '0') ADVANCE(1293);
      END_STATE();
    case 1196:
      if (lookahead == '0') ADVANCE(1296);
      END_STATE();
    case 1197:
      if (lookahead == '0') ADVANCE(1471);
      if (lookahead == '2') ADVANCE(1275);
      if (lookahead == '7') ADVANCE(1997);
      if (lookahead == '9') ADVANCE(2021);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1643);
      END_STATE();
    case 1198:
      if (lookahead == '0') ADVANCE(1302);
      END_STATE();
    case 1199:
      if (lookahead == '0') ADVANCE(1303);
      END_STATE();
    case 1200:
      if (lookahead == '0') ADVANCE(1093);
      if (lookahead == '1') ADVANCE(1129);
      if (lookahead == '6') ADVANCE(1463);
      if (lookahead == '7') ADVANCE(1519);
      if (lookahead == '8') ADVANCE(1559);
      END_STATE();
    case 1201:
      if (lookahead == '0') ADVANCE(1287);
      END_STATE();
    case 1202:
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '1') ADVANCE(1129);
      if (lookahead == '7') ADVANCE(1519);
      END_STATE();
    case 1203:
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '1') ADVANCE(1129);
      if (lookahead == '7') ADVANCE(1519);
      if (lookahead == '8') ADVANCE(1565);
      END_STATE();
    case 1204:
      if (lookahead == '0') ADVANCE(1288);
      END_STATE();
    case 1205:
      if (lookahead == '0') ADVANCE(1292);
      END_STATE();
    case 1206:
      if (lookahead == '0') ADVANCE(1094);
      if (lookahead == '1') ADVANCE(1129);
      if (lookahead == '6') ADVANCE(1463);
      if (lookahead == '7') ADVANCE(1519);
      if (lookahead == '8') ADVANCE(1559);
      END_STATE();
    case 1207:
      if (lookahead == '0') ADVANCE(1128);
      if (lookahead == '1') ADVANCE(1129);
      if (lookahead == '7') ADVANCE(1519);
      END_STATE();
    case 1208:
      if (lookahead == '1') ADVANCE(2207);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1208);
      END_STATE();
    case 1209:
      ADVANCE_MAP(
        '1', 1088,
        '3', 1446,
        '4', 1335,
        '5', 1528,
        '6', 1473,
        '7', 1402,
        '8', 1318,
        'X', 1221,
        'x', 1221,
      );
      END_STATE();
    case 1210:
      if (lookahead == '1') ADVANCE(2279);
      END_STATE();
    case 1211:
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '3') ADVANCE(1409);
      if (lookahead == '4') ADVANCE(1449);
      END_STATE();
    case 1212:
      if (lookahead == '1') ADVANCE(1131);
      END_STATE();
    case 1213:
      ADVANCE_MAP(
        '1', 1091,
        '3', 1417,
        '4', 1336,
        '5', 1551,
        '6', 1150,
        '8', 1323,
        '9', 1447,
        'X', 1289,
        'x', 1289,
      );
      END_STATE();
    case 1214:
      if (lookahead == '1') ADVANCE(1357);
      if (lookahead == ';') ADVANCE(1073);
      END_STATE();
    case 1215:
      if (lookahead == '1') ADVANCE(1357);
      if (lookahead == ';') ADVANCE(2189);
      END_STATE();
    case 1216:
      if (lookahead == '1') ADVANCE(1457);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1238);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1988);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1986);
      END_STATE();
    case 1217:
      if (lookahead == '1') ADVANCE(1358);
      END_STATE();
    case 1218:
      ADVANCE_MAP(
        '1', 1112,
        '3', 1417,
        '4', 1422,
        '5', 1553,
        '6', 1150,
        '8', 1330,
        '9', 1447,
        'X', 1297,
        'x', 1297,
      );
      END_STATE();
    case 1219:
      if (lookahead == '1') ADVANCE(1161);
      if (lookahead == '4') ADVANCE(1339);
      if (lookahead == '8') ADVANCE(1332);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1333);
      END_STATE();
    case 1220:
      ADVANCE_MAP(
        '1', 1207,
        '3', 1417,
        '4', 1423,
        '5', 1553,
        '6', 1150,
        '8', 1396,
        '9', 1447,
        'X', 1300,
        'x', 1300,
      );
      END_STATE();
    case 1221:
      ADVANCE_MAP(
        '1', 1492,
        '2', 1090,
        '3', 1121,
        '5', 2014,
        '6', 1504,
        'B', 1999,
        'b', 1999,
        'F', 2015,
        'f', 2015,
      );
      END_STATE();
    case 1222:
      if (lookahead == '1') ADVANCE(1115);
      if (lookahead == '4') ADVANCE(1475);
      if (lookahead == '8') ADVANCE(1321);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1322);
      END_STATE();
    case 1223:
      if (lookahead == '1') ADVANCE(1144);
      if (lookahead == '2') ADVANCE(1363);
      if (lookahead == '3') ADVANCE(1455);
      END_STATE();
    case 1224:
      if (lookahead == '1') ADVANCE(1144);
      if (lookahead == '2') ADVANCE(1362);
      if (lookahead == '3') ADVANCE(1455);
      END_STATE();
    case 1225:
      if (lookahead == '1') ADVANCE(1144);
      if (lookahead == '2') ADVANCE(1369);
      if (lookahead == '3') ADVANCE(1455);
      END_STATE();
    case 1226:
      if (lookahead == '1') ADVANCE(1144);
      if (lookahead == '2') ADVANCE(1368);
      if (lookahead == '3') ADVANCE(1455);
      END_STATE();
    case 1227:
      if (lookahead == '1') ADVANCE(1317);
      if (lookahead == '3') ADVANCE(1446);
      if (lookahead == '6') ADVANCE(1473);
      if (lookahead == '7') ADVANCE(1402);
      if (lookahead == '8') ADVANCE(1341);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1331);
      END_STATE();
    case 1228:
      if (lookahead == '1') ADVANCE(1427);
      END_STATE();
    case 1229:
      if (lookahead == '1') ADVANCE(1548);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1993);
      END_STATE();
    case 1230:
      if (lookahead == '1') ADVANCE(1549);
      if (lookahead == '7') ADVANCE(1471);
      END_STATE();
    case 1231:
      if (lookahead == '1') ADVANCE(1019);
      END_STATE();
    case 1232:
      if (lookahead == '1') ADVANCE(1095);
      if (lookahead == '4') ADVANCE(1485);
      if (lookahead == '8') ADVANCE(1324);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1325);
      END_STATE();
    case 1233:
      if (lookahead == '1') ADVANCE(1113);
      if (lookahead == '4') ADVANCE(1416);
      if (lookahead == '5') ADVANCE(1552);
      if (lookahead == '8') ADVANCE(1395);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1294);
      END_STATE();
    case 1234:
      if (lookahead == '1') ADVANCE(1346);
      END_STATE();
    case 1235:
      if (lookahead == '1') ADVANCE(1118);
      if (lookahead == '4') ADVANCE(1525);
      if (lookahead == '8') ADVANCE(1347);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1329);
      END_STATE();
    case 1236:
      if (lookahead == '1') ADVANCE(1609);
      END_STATE();
    case 1237:
      if (lookahead == '1') ADVANCE(1612);
      END_STATE();
    case 1238:
      if (lookahead == '1') ADVANCE(1623);
      END_STATE();
    case 1239:
      if (lookahead == '1') ADVANCE(1623);
      if (lookahead == '2') ADVANCE(1623);
      END_STATE();
    case 1240:
      if (lookahead == '1') ADVANCE(1623);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1589);
      END_STATE();
    case 1241:
      if (lookahead == '1') ADVANCE(1623);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1635);
      END_STATE();
    case 1242:
      if (lookahead == '1') ADVANCE(1344);
      if (lookahead == ';') ADVANCE(2058);
      END_STATE();
    case 1243:
      if (lookahead == '1') ADVANCE(1140);
      if (lookahead == '3') ADVANCE(1409);
      if (lookahead == '4') ADVANCE(1449);
      END_STATE();
    case 1244:
      if (lookahead == '1') ADVANCE(1136);
      END_STATE();
    case 1245:
      if (lookahead == '1') ADVANCE(1994);
      if (lookahead == '3') ADVANCE(1409);
      END_STATE();
    case 1246:
      if (lookahead == '1') ADVANCE(1366);
      END_STATE();
    case 1247:
      if (lookahead == '1') ADVANCE(1122);
      if (lookahead == '4') ADVANCE(1406);
      if (lookahead == '5') ADVANCE(1550);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1283);
      END_STATE();
    case 1248:
      if (lookahead == '1') ADVANCE(1443);
      if (lookahead == '7') ADVANCE(1468);
      END_STATE();
    case 1249:
      if (lookahead == '1') ADVANCE(1348);
      END_STATE();
    case 1250:
      if (lookahead == '1') ADVANCE(1354);
      END_STATE();
    case 1251:
      if (lookahead == '1') ADVANCE(1354);
      if (lookahead == ';') ADVANCE(2058);
      END_STATE();
    case 1252:
      if (lookahead == '1') ADVANCE(1138);
      END_STATE();
    case 1253:
      if (lookahead == '1') ADVANCE(1367);
      END_STATE();
    case 1254:
      if (lookahead == '1') ADVANCE(1350);
      END_STATE();
    case 1255:
      if (lookahead == '1') ADVANCE(1142);
      END_STATE();
    case 1256:
      if (lookahead == '1') ADVANCE(1351);
      END_STATE();
    case 1257:
      if (lookahead == '1') ADVANCE(1149);
      if (lookahead == '3') ADVANCE(1995);
      if (lookahead == '4') ADVANCE(1521);
      END_STATE();
    case 1258:
      if (lookahead == '1') ADVANCE(1149);
      if (lookahead == '3') ADVANCE(1995);
      if (lookahead == '4') ADVANCE(1520);
      END_STATE();
    case 1259:
      if (lookahead == '1') ADVANCE(1353);
      END_STATE();
    case 1260:
      if (lookahead == '1') ADVANCE(1412);
      END_STATE();
    case 1261:
      if (lookahead == '1') ADVANCE(1146);
      END_STATE();
    case 1262:
      if (lookahead == '1') ADVANCE(1146);
      if (lookahead == '4') ADVANCE(1458);
      END_STATE();
    case 1263:
      if (lookahead == '1') ADVANCE(1355);
      END_STATE();
    case 1264:
      if (lookahead == '1') ADVANCE(1482);
      if (lookahead == '3') ADVANCE(1236);
      if (lookahead == '9') ADVANCE(1486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1985);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1412);
      END_STATE();
    case 1265:
      if (lookahead == '1') ADVANCE(1482);
      if (lookahead == '3') ADVANCE(1236);
      if (lookahead == '9') ADVANCE(1488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1985);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1412);
      END_STATE();
    case 1266:
      if (lookahead == '1') ADVANCE(1482);
      if (lookahead == '3') ADVANCE(1236);
      if (lookahead == '9') ADVANCE(1489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1985);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1412);
      END_STATE();
    case 1267:
      if (lookahead == '1') ADVANCE(1482);
      if (lookahead == '9') ADVANCE(1486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1985);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1412);
      END_STATE();
    case 1268:
      if (lookahead == '1') ADVANCE(1482);
      if (lookahead == '9') ADVANCE(1488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1985);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1412);
      END_STATE();
    case 1269:
      if (lookahead == '1') ADVANCE(1482);
      if (lookahead == '9') ADVANCE(1489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1985);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1412);
      END_STATE();
    case 1270:
      if (lookahead == '1') ADVANCE(1153);
      if (lookahead == '4') ADVANCE(1459);
      END_STATE();
    case 1271:
      if (lookahead == '1') ADVANCE(1356);
      END_STATE();
    case 1272:
      if (lookahead == '1') ADVANCE(1538);
      if (lookahead == '2') ADVANCE(1519);
      END_STATE();
    case 1273:
      if (lookahead == '1') ADVANCE(1156);
      if (lookahead == '4') ADVANCE(1461);
      END_STATE();
    case 1274:
      if (lookahead == '1') ADVANCE(1378);
      END_STATE();
    case 1275:
      if (lookahead == '1') ADVANCE(1491);
      END_STATE();
    case 1276:
      if (lookahead == '1') ADVANCE(1165);
      END_STATE();
    case 1277:
      if (lookahead == '1') ADVANCE(1372);
      END_STATE();
    case 1278:
      if (lookahead == '1') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1995);
      if (lookahead == '4') ADVANCE(1521);
      END_STATE();
    case 1279:
      if (lookahead == '1') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1995);
      if (lookahead == '4') ADVANCE(1520);
      END_STATE();
    case 1280:
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '4') ADVANCE(1449);
      END_STATE();
    case 1281:
      ADVANCE_MAP(
        '1', 1160,
        '3', 1446,
        '4', 1339,
        '6', 1473,
        '7', 1402,
        '8', 1392,
        'X', 1340,
        'x', 1340,
      );
      END_STATE();
    case 1282:
      if (lookahead == '1') ADVANCE(1431);
      if (lookahead == '7') ADVANCE(1469);
      END_STATE();
    case 1283:
      if (lookahead == '1') ADVANCE(1513);
      if (lookahead == '2') ADVANCE(1517);
      END_STATE();
    case 1284:
      if (lookahead == '1') ADVANCE(1513);
      if (lookahead == '2') ADVANCE(1101);
      END_STATE();
    case 1285:
      if (lookahead == '1') ADVANCE(1424);
      END_STATE();
    case 1286:
      if (lookahead == '1') ADVANCE(1432);
      END_STATE();
    case 1287:
      if (lookahead == '1') ADVANCE(1444);
      if (lookahead == '7') ADVANCE(1470);
      END_STATE();
    case 1288:
      if (lookahead == '1') ADVANCE(1438);
      if (lookahead == '7') ADVANCE(1468);
      END_STATE();
    case 1289:
      if (lookahead == '1') ADVANCE(1514);
      if (lookahead == '2') ADVANCE(1107);
      if (lookahead == '3') ADVANCE(1996);
      if (lookahead == '6') ADVANCE(1504);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1240);
      END_STATE();
    case 1290:
      if (lookahead == '1') ADVANCE(1514);
      if (lookahead == '2') ADVANCE(1117);
      if (lookahead == '3') ADVANCE(1996);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1241);
      END_STATE();
    case 1291:
      if (lookahead == '1') ADVANCE(1514);
      if (lookahead == '2') ADVANCE(1117);
      if (lookahead == '3') ADVANCE(1996);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1238);
      END_STATE();
    case 1292:
      if (lookahead == '1') ADVANCE(1435);
      END_STATE();
    case 1293:
      if (lookahead == '1') ADVANCE(1434);
      END_STATE();
    case 1294:
      if (lookahead == '1') ADVANCE(1515);
      if (lookahead == '2') ADVANCE(1189);
      END_STATE();
    case 1295:
      if (lookahead == '1') ADVANCE(1515);
      if (lookahead == '2') ADVANCE(1527);
      END_STATE();
    case 1296:
      if (lookahead == '1') ADVANCE(1439);
      END_STATE();
    case 1297:
      if (lookahead == '1') ADVANCE(1516);
      if (lookahead == '2') ADVANCE(1116);
      if (lookahead == '3') ADVANCE(1996);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1241);
      END_STATE();
    case 1298:
      if (lookahead == '1') ADVANCE(1516);
      if (lookahead == '2') ADVANCE(1116);
      if (lookahead == '3') ADVANCE(1996);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1238);
      END_STATE();
    case 1299:
      if (lookahead == '1') ADVANCE(1516);
      if (lookahead == '2') ADVANCE(1108);
      if (lookahead == '3') ADVANCE(1996);
      if (lookahead == '6') ADVANCE(1504);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1240);
      END_STATE();
    case 1300:
      if (lookahead == '1') ADVANCE(1516);
      if (lookahead == '2') ADVANCE(1192);
      if (lookahead == '3') ADVANCE(1996);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1238);
      END_STATE();
    case 1301:
      if (lookahead == '1') ADVANCE(1516);
      if (lookahead == '2') ADVANCE(1190);
      if (lookahead == '3') ADVANCE(1996);
      if (lookahead == '6') ADVANCE(1504);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1240);
      END_STATE();
    case 1302:
      if (lookahead == '1') ADVANCE(1442);
      END_STATE();
    case 1303:
      if (lookahead == '1') ADVANCE(1445);
      END_STATE();
    case 1304:
      if (lookahead == '1') ADVANCE(1191);
      if (lookahead == '4') ADVANCE(1479);
      if (lookahead == '8') ADVANCE(1393);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1374);
      END_STATE();
    case 1305:
      if (lookahead == '1') ADVANCE(1201);
      if (lookahead == '4') ADVANCE(1487);
      if (lookahead == '8') ADVANCE(1398);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1375);
      END_STATE();
    case 1306:
      if (lookahead == '1') ADVANCE(1204);
      if (lookahead == '4') ADVANCE(1408);
      if (lookahead == '5') ADVANCE(1550);
      if (lookahead == '8') ADVANCE(1324);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1284);
      END_STATE();
    case 1307:
      if (lookahead == '1') ADVANCE(1205);
      if (lookahead == '4') ADVANCE(1412);
      if (lookahead == '5') ADVANCE(1552);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1295);
      END_STATE();
    case 1308:
      if (lookahead == '1') ADVANCE(1195);
      if (lookahead == '4') ADVANCE(1480);
      if (lookahead == '8') ADVANCE(1397);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1380);
      END_STATE();
    case 1309:
      if (lookahead == '1') ADVANCE(1196);
      if (lookahead == '4') ADVANCE(1481);
      if (lookahead == '8') ADVANCE(1399);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1384);
      END_STATE();
    case 1310:
      if (lookahead == '1') ADVANCE(1198);
      if (lookahead == '4') ADVANCE(1482);
      if (lookahead == '8') ADVANCE(1400);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1386);
      END_STATE();
    case 1311:
      if (lookahead == '1') ADVANCE(1199);
      if (lookahead == '4') ADVANCE(1490);
      if (lookahead == '8') ADVANCE(1401);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1388);
      END_STATE();
    case 1312:
      ADVANCE_MAP(
        '1', 1200,
        '3', 1417,
        '4', 1337,
        '5', 1553,
        '6', 1150,
        '8', 1323,
        '9', 1447,
        'X', 1299,
        'x', 1299,
      );
      END_STATE();
    case 1313:
      ADVANCE_MAP(
        '1', 1203,
        '3', 1417,
        '4', 1419,
        '5', 1551,
        '6', 1150,
        '8', 1330,
        '9', 1447,
        'X', 1290,
        'x', 1290,
      );
      END_STATE();
    case 1314:
      ADVANCE_MAP(
        '1', 1202,
        '3', 1417,
        '4', 1419,
        '5', 1551,
        '6', 1150,
        '8', 1330,
        '9', 1447,
        'X', 1291,
        'x', 1291,
      );
      END_STATE();
    case 1315:
      ADVANCE_MAP(
        '1', 1206,
        '3', 1417,
        '4', 1338,
        '5', 1553,
        '6', 1150,
        '8', 1394,
        '9', 1447,
        'X', 1301,
        'x', 1301,
      );
      END_STATE();
    case 1316:
      ADVANCE_MAP(
        '1', 1111,
        '3', 1417,
        '4', 1422,
        '5', 1553,
        '6', 1150,
        '8', 1330,
        '9', 1447,
        'X', 1298,
        'x', 1298,
      );
      END_STATE();
    case 1317:
      if (lookahead == '2') ADVANCE(1334);
      if (lookahead == '5') ADVANCE(1319);
      END_STATE();
    case 1318:
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '7') ADVANCE(1373);
      END_STATE();
    case 1319:
      if (lookahead == '2') ADVANCE(1349);
      END_STATE();
    case 1320:
      if (lookahead == '2') ADVANCE(1132);
      if (lookahead == '4') ADVANCE(1409);
      END_STATE();
    case 1321:
      if (lookahead == '2') ADVANCE(1162);
      if (lookahead == '7') ADVANCE(1377);
      END_STATE();
    case 1322:
      if (lookahead == '2') ADVANCE(1123);
      END_STATE();
    case 1323:
      if (lookahead == '2') ADVANCE(1179);
      if (lookahead == '5') ADVANCE(1566);
      if (lookahead == '6') ADVANCE(1466);
      if (lookahead == '7') ADVANCE(1223);
      if (lookahead == '8') ADVANCE(1180);
      if (lookahead == '9') ADVANCE(1526);
      END_STATE();
    case 1324:
      if (lookahead == '2') ADVANCE(1182);
      if (lookahead == '7') ADVANCE(1327);
      END_STATE();
    case 1325:
      if (lookahead == '2') ADVANCE(1100);
      END_STATE();
    case 1326:
      if (lookahead == '2') ADVANCE(1501);
      END_STATE();
    case 1327:
      if (lookahead == '2') ADVANCE(1358);
      END_STATE();
    case 1328:
      if (lookahead == '2') ADVANCE(2281);
      END_STATE();
    case 1329:
      if (lookahead == '2') ADVANCE(1197);
      END_STATE();
    case 1330:
      if (lookahead == '2') ADVANCE(1178);
      if (lookahead == '5') ADVANCE(1566);
      if (lookahead == '6') ADVANCE(1466);
      if (lookahead == '7') ADVANCE(1224);
      if (lookahead == '8') ADVANCE(1180);
      if (lookahead == '9') ADVANCE(1526);
      END_STATE();
    case 1331:
      if (lookahead == '2') ADVANCE(1102);
      if (lookahead == '3') ADVANCE(1121);
      if (lookahead == '5') ADVANCE(2014);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2015);
      END_STATE();
    case 1332:
      if (lookahead == '2') ADVANCE(1168);
      if (lookahead == '7') ADVANCE(1379);
      END_STATE();
    case 1333:
      if (lookahead == '2') ADVANCE(1114);
      if (lookahead == '6') ADVANCE(1504);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1999);
      END_STATE();
    case 1334:
      if (lookahead == '2') ADVANCE(1558);
      END_STATE();
    case 1335:
      if (lookahead == '2') ADVANCE(1584);
      if (lookahead == '3') ADVANCE(1579);
      if (lookahead == '5') ADVANCE(1585);
      if (lookahead == '7') ADVANCE(1587);
      END_STATE();
    case 1336:
      if (lookahead == '2') ADVANCE(1584);
      if (lookahead == '3') ADVANCE(1620);
      if (lookahead == '5') ADVANCE(1622);
      END_STATE();
    case 1337:
      if (lookahead == '2') ADVANCE(1584);
      if (lookahead == '3') ADVANCE(1632);
      if (lookahead == '5') ADVANCE(1622);
      END_STATE();
    case 1338:
      if (lookahead == '2') ADVANCE(1584);
      if (lookahead == '3') ADVANCE(1632);
      if (lookahead == '5') ADVANCE(1634);
      END_STATE();
    case 1339:
      if (lookahead == '2') ADVANCE(1584);
      if (lookahead == '5') ADVANCE(1594);
      if (lookahead == '7') ADVANCE(1587);
      END_STATE();
    case 1340:
      ADVANCE_MAP(
        '2', 1188,
        '3', 1121,
        '5', 2014,
        '6', 1504,
        'B', 1999,
        'b', 1999,
        'F', 2015,
        'f', 2015,
      );
      END_STATE();
    case 1341:
      if (lookahead == '2') ADVANCE(1320);
      END_STATE();
    case 1342:
      if (lookahead == '2') ADVANCE(1530);
      END_STATE();
    case 1343:
      if (lookahead == '2') ADVANCE(1360);
      if (lookahead == '9') ADVANCE(1455);
      END_STATE();
    case 1344:
      if (lookahead == '2') ADVANCE(1585);
      if (lookahead == '5') ADVANCE(1606);
      if (lookahead == '7') ADVANCE(1607);
      END_STATE();
    case 1345:
      if (lookahead == '2') ADVANCE(1025);
      END_STATE();
    case 1346:
      if (lookahead == '2') ADVANCE(1589);
      END_STATE();
    case 1347:
      if (lookahead == '2') ADVANCE(1511);
      if (lookahead == '7') ADVANCE(1391);
      END_STATE();
    case 1348:
      if (lookahead == '2') ADVANCE(1581);
      END_STATE();
    case 1349:
      if (lookahead == '2') ADVANCE(1596);
      if (lookahead == '4') ADVANCE(1597);
      END_STATE();
    case 1350:
      if (lookahead == '2') ADVANCE(1582);
      END_STATE();
    case 1351:
      if (lookahead == '2') ADVANCE(1638);
      END_STATE();
    case 1352:
      if (lookahead == '2') ADVANCE(1613);
      END_STATE();
    case 1353:
      if (lookahead == '2') ADVANCE(1637);
      END_STATE();
    case 1354:
      if (lookahead == '2') ADVANCE(1618);
      if (lookahead == '5') ADVANCE(1606);
      if (lookahead == '7') ADVANCE(1607);
      END_STATE();
    case 1355:
      if (lookahead == '2') ADVANCE(1588);
      END_STATE();
    case 1356:
      if (lookahead == '2') ADVANCE(1623);
      END_STATE();
    case 1357:
      if (lookahead == '2') ADVANCE(1623);
      if (lookahead == '3') ADVANCE(1623);
      END_STATE();
    case 1358:
      if (lookahead == '2') ADVANCE(1623);
      if (lookahead == '5') ADVANCE(1636);
      END_STATE();
    case 1359:
      if (lookahead == '2') ADVANCE(1623);
      if (lookahead == '6') ADVANCE(1623);
      END_STATE();
    case 1360:
      if (lookahead == '2') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1623);
      END_STATE();
    case 1361:
      if (lookahead == '2') ADVANCE(1623);
      if (lookahead == '9') ADVANCE(1623);
      END_STATE();
    case 1362:
      if (lookahead == '2') ADVANCE(1622);
      if (lookahead == '3') ADVANCE(1623);
      END_STATE();
    case 1363:
      if (lookahead == '2') ADVANCE(1622);
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1607);
      END_STATE();
    case 1364:
      if (lookahead == '2') ADVANCE(1622);
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1365:
      if (lookahead == '2') ADVANCE(1622);
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1366:
      if (lookahead == '2') ADVANCE(1628);
      if (lookahead == '5') ADVANCE(1629);
      END_STATE();
    case 1367:
      if (lookahead == '2') ADVANCE(1641);
      if (lookahead == '5') ADVANCE(1640);
      END_STATE();
    case 1368:
      if (lookahead == '2') ADVANCE(1634);
      if (lookahead == '3') ADVANCE(1623);
      END_STATE();
    case 1369:
      if (lookahead == '2') ADVANCE(1634);
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1607);
      END_STATE();
    case 1370:
      if (lookahead == '2') ADVANCE(1634);
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1371:
      if (lookahead == '2') ADVANCE(1634);
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1372:
      if (lookahead == '2') ADVANCE(1635);
      END_STATE();
    case 1373:
      if (lookahead == '2') ADVANCE(1344);
      END_STATE();
    case 1374:
      if (lookahead == '2') ADVANCE(1163);
      END_STATE();
    case 1375:
      if (lookahead == '2') ADVANCE(1194);
      END_STATE();
    case 1376:
      if (lookahead == '2') ADVANCE(1366);
      END_STATE();
    case 1377:
      if (lookahead == '2') ADVANCE(1348);
      END_STATE();
    case 1378:
      if (lookahead == '2') ADVANCE(1642);
      END_STATE();
    case 1379:
      if (lookahead == '2') ADVANCE(1354);
      END_STATE();
    case 1380:
      if (lookahead == '2') ADVANCE(1169);
      END_STATE();
    case 1381:
      if (lookahead == '2') ADVANCE(1367);
      END_STATE();
    case 1382:
      if (lookahead == '2') ADVANCE(1238);
      if (lookahead == '3') ADVANCE(2016);
      END_STATE();
    case 1383:
      if (lookahead == '2') ADVANCE(1350);
      END_STATE();
    case 1384:
      if (lookahead == '2') ADVANCE(1172);
      END_STATE();
    case 1385:
      if (lookahead == '2') ADVANCE(1351);
      END_STATE();
    case 1386:
      if (lookahead == '2') ADVANCE(1174);
      END_STATE();
    case 1387:
      if (lookahead == '2') ADVANCE(1353);
      END_STATE();
    case 1388:
      if (lookahead == '2') ADVANCE(1193);
      END_STATE();
    case 1389:
      if (lookahead == '2') ADVANCE(1356);
      END_STATE();
    case 1390:
      if (lookahead == '2') ADVANCE(1378);
      END_STATE();
    case 1391:
      if (lookahead == '2') ADVANCE(1491);
      END_STATE();
    case 1392:
      if (lookahead == '2') ADVANCE(1167);
      if (lookahead == '7') ADVANCE(1379);
      END_STATE();
    case 1393:
      if (lookahead == '2') ADVANCE(1171);
      if (lookahead == '7') ADVANCE(1383);
      END_STATE();
    case 1394:
      if (lookahead == '2') ADVANCE(1187);
      if (lookahead == '5') ADVANCE(1566);
      if (lookahead == '6') ADVANCE(1466);
      if (lookahead == '7') ADVANCE(1225);
      if (lookahead == '8') ADVANCE(1180);
      if (lookahead == '9') ADVANCE(1526);
      END_STATE();
    case 1395:
      if (lookahead == '2') ADVANCE(1183);
      if (lookahead == '7') ADVANCE(1376);
      END_STATE();
    case 1396:
      if (lookahead == '2') ADVANCE(1186);
      if (lookahead == '5') ADVANCE(1566);
      if (lookahead == '6') ADVANCE(1466);
      if (lookahead == '7') ADVANCE(1226);
      if (lookahead == '8') ADVANCE(1180);
      if (lookahead == '9') ADVANCE(1526);
      END_STATE();
    case 1397:
      if (lookahead == '2') ADVANCE(1173);
      if (lookahead == '7') ADVANCE(1385);
      END_STATE();
    case 1398:
      if (lookahead == '2') ADVANCE(1184);
      if (lookahead == '7') ADVANCE(1381);
      END_STATE();
    case 1399:
      if (lookahead == '2') ADVANCE(1175);
      if (lookahead == '7') ADVANCE(1387);
      END_STATE();
    case 1400:
      if (lookahead == '2') ADVANCE(1181);
      if (lookahead == '7') ADVANCE(1389);
      END_STATE();
    case 1401:
      if (lookahead == '2') ADVANCE(1185);
      if (lookahead == '7') ADVANCE(1390);
      END_STATE();
    case 1402:
      if (lookahead == '3') ADVANCE(1405);
      if (lookahead == '5') ADVANCE(1125);
      END_STATE();
    case 1403:
      if (lookahead == '3') ADVANCE(1404);
      if (lookahead == '8') ADVANCE(1518);
      END_STATE();
    case 1404:
      if (lookahead == '3') ADVANCE(1579);
      if (lookahead == '4') ADVANCE(1585);
      END_STATE();
    case 1405:
      if (lookahead == '3') ADVANCE(1591);
      END_STATE();
    case 1406:
      if (lookahead == '3') ADVANCE(1578);
      END_STATE();
    case 1407:
      if (lookahead == '3') ADVANCE(1578);
      if (lookahead == '4') ADVANCE(1623);
      END_STATE();
    case 1408:
      if (lookahead == '3') ADVANCE(1578);
      if (lookahead == '5') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1636);
      END_STATE();
    case 1409:
      if (lookahead == '3') ADVANCE(1602);
      if (lookahead == '6') ADVANCE(1603);
      END_STATE();
    case 1410:
      if (lookahead == '3') ADVANCE(1609);
      END_STATE();
    case 1411:
      if (lookahead == '3') ADVANCE(1612);
      END_STATE();
    case 1412:
      if (lookahead == '3') ADVANCE(1623);
      END_STATE();
    case 1413:
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '4') ADVANCE(1623);
      END_STATE();
    case 1414:
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '4') ADVANCE(1623);
      if (lookahead == '5') ADVANCE(1623);
      END_STATE();
    case 1415:
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '4') ADVANCE(1628);
      END_STATE();
    case 1416:
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '5') ADVANCE(1628);
      if (lookahead == '7') ADVANCE(1629);
      END_STATE();
    case 1417:
      if (lookahead == '3') ADVANCE(1630);
      END_STATE();
    case 1418:
      if (lookahead == '3') ADVANCE(1620);
      if (lookahead == '4') ADVANCE(1622);
      END_STATE();
    case 1419:
      if (lookahead == '3') ADVANCE(1620);
      if (lookahead == '5') ADVANCE(1622);
      END_STATE();
    case 1420:
      if (lookahead == '3') ADVANCE(1632);
      if (lookahead == '4') ADVANCE(1622);
      END_STATE();
    case 1421:
      if (lookahead == '3') ADVANCE(1632);
      if (lookahead == '4') ADVANCE(1634);
      END_STATE();
    case 1422:
      if (lookahead == '3') ADVANCE(1632);
      if (lookahead == '5') ADVANCE(1622);
      END_STATE();
    case 1423:
      if (lookahead == '3') ADVANCE(1632);
      if (lookahead == '5') ADVANCE(1634);
      END_STATE();
    case 1424:
      if (lookahead == '3') ADVANCE(1406);
      END_STATE();
    case 1425:
      if (lookahead == '3') ADVANCE(1236);
      if (lookahead == '9') ADVANCE(1474);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1987);
      END_STATE();
    case 1426:
      if (lookahead == '3') ADVANCE(1236);
      if (lookahead == '9') ADVANCE(1499);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1987);
      END_STATE();
    case 1427:
      if (lookahead == '3') ADVANCE(1448);
      END_STATE();
    case 1428:
      if (lookahead == '3') ADVANCE(1410);
      END_STATE();
    case 1429:
      if (lookahead == '3') ADVANCE(1418);
      END_STATE();
    case 1430:
      if (lookahead == '3') ADVANCE(1454);
      if (lookahead == '8') ADVANCE(1518);
      END_STATE();
    case 1431:
      if (lookahead == '3') ADVANCE(1415);
      if (lookahead == '8') ADVANCE(1523);
      END_STATE();
    case 1432:
      if (lookahead == '3') ADVANCE(1450);
      END_STATE();
    case 1433:
      if (lookahead == '3') ADVANCE(1420);
      END_STATE();
    case 1434:
      if (lookahead == '3') ADVANCE(1451);
      END_STATE();
    case 1435:
      if (lookahead == '3') ADVANCE(1412);
      END_STATE();
    case 1436:
      if (lookahead == '3') ADVANCE(1412);
      if (lookahead == '6') ADVANCE(1412);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1382);
      END_STATE();
    case 1437:
      if (lookahead == '3') ADVANCE(1412);
      if (lookahead == '7') ADVANCE(1482);
      END_STATE();
    case 1438:
      if (lookahead == '3') ADVANCE(1407);
      if (lookahead == '8') ADVANCE(1522);
      END_STATE();
    case 1439:
      if (lookahead == '3') ADVANCE(1453);
      END_STATE();
    case 1440:
      if (lookahead == '3') ADVANCE(2004);
      END_STATE();
    case 1441:
      if (lookahead == '3') ADVANCE(1421);
      END_STATE();
    case 1442:
      if (lookahead == '3') ADVANCE(1455);
      END_STATE();
    case 1443:
      if (lookahead == '3') ADVANCE(1455);
      if (lookahead == '8') ADVANCE(1522);
      END_STATE();
    case 1444:
      if (lookahead == '3') ADVANCE(1460);
      if (lookahead == '8') ADVANCE(1524);
      END_STATE();
    case 1445:
      if (lookahead == '3') ADVANCE(1464);
      END_STATE();
    case 1446:
      if (lookahead == '4') ADVANCE(1583);
      END_STATE();
    case 1447:
      if (lookahead == '4') ADVANCE(1554);
      if (lookahead == '6') ADVANCE(1437);
      if (lookahead == '7') ADVANCE(1343);
      END_STATE();
    case 1448:
      if (lookahead == '4') ADVANCE(1581);
      END_STATE();
    case 1449:
      if (lookahead == '4') ADVANCE(1604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1605);
      END_STATE();
    case 1450:
      if (lookahead == '4') ADVANCE(1582);
      END_STATE();
    case 1451:
      if (lookahead == '4') ADVANCE(1638);
      END_STATE();
    case 1452:
      if (lookahead == '4') ADVANCE(1611);
      END_STATE();
    case 1453:
      if (lookahead == '4') ADVANCE(1637);
      END_STATE();
    case 1454:
      if (lookahead == '4') ADVANCE(1619);
      END_STATE();
    case 1455:
      if (lookahead == '4') ADVANCE(1623);
      END_STATE();
    case 1456:
      if (lookahead == '4') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1623);
      END_STATE();
    case 1457:
      if (lookahead == '4') ADVANCE(1623);
      if (lookahead == '8') ADVANCE(1623);
      END_STATE();
    case 1458:
      if (lookahead == '4') ADVANCE(1636);
      END_STATE();
    case 1459:
      if (lookahead == '4') ADVANCE(1629);
      END_STATE();
    case 1460:
      if (lookahead == '4') ADVANCE(1641);
      END_STATE();
    case 1461:
      if (lookahead == '4') ADVANCE(1640);
      END_STATE();
    case 1462:
      if (lookahead == '4') ADVANCE(1452);
      END_STATE();
    case 1463:
      if (lookahead == '4') ADVANCE(1478);
      END_STATE();
    case 1464:
      if (lookahead == '4') ADVANCE(1642);
      END_STATE();
    case 1465:
      if (lookahead == '4') ADVANCE(1643);
      END_STATE();
    case 1466:
      if (lookahead == '4') ADVANCE(1500);
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 1467:
      if (lookahead == '4') ADVANCE(1356);
      END_STATE();
    case 1468:
      if (lookahead == '4') ADVANCE(1458);
      END_STATE();
    case 1469:
      if (lookahead == '4') ADVANCE(1459);
      END_STATE();
    case 1470:
      if (lookahead == '4') ADVANCE(1461);
      END_STATE();
    case 1471:
      if (lookahead == '4') ADVANCE(1465);
      END_STATE();
    case 1472:
      if (lookahead == '5') ADVANCE(1357);
      END_STATE();
    case 1473:
      if (lookahead == '5') ADVANCE(1342);
      if (lookahead == '9') ADVANCE(1531);
      END_STATE();
    case 1474:
      if (lookahead == '5') ADVANCE(1579);
      if (lookahead == '6') ADVANCE(1585);
      END_STATE();
    case 1475:
      if (lookahead == '5') ADVANCE(1581);
      END_STATE();
    case 1476:
      if (lookahead == '5') ADVANCE(1578);
      END_STATE();
    case 1477:
      if (lookahead == '5') ADVANCE(1578);
      if (lookahead == '6') ADVANCE(1623);
      END_STATE();
    case 1478:
      if (lookahead == '5') ADVANCE(1598);
      END_STATE();
    case 1479:
      if (lookahead == '5') ADVANCE(1582);
      END_STATE();
    case 1480:
      if (lookahead == '5') ADVANCE(1638);
      END_STATE();
    case 1481:
      if (lookahead == '5') ADVANCE(1637);
      END_STATE();
    case 1482:
      if (lookahead == '5') ADVANCE(1623);
      END_STATE();
    case 1483:
      if (lookahead == '5') ADVANCE(1623);
      if (lookahead == '6') ADVANCE(1623);
      END_STATE();
    case 1484:
      if (lookahead == '5') ADVANCE(1623);
      if (lookahead == '6') ADVANCE(1628);
      END_STATE();
    case 1485:
      if (lookahead == '5') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1636);
      END_STATE();
    case 1486:
      if (lookahead == '5') ADVANCE(1620);
      if (lookahead == '6') ADVANCE(1622);
      END_STATE();
    case 1487:
      if (lookahead == '5') ADVANCE(1641);
      if (lookahead == '7') ADVANCE(1640);
      END_STATE();
    case 1488:
      if (lookahead == '5') ADVANCE(1632);
      if (lookahead == '6') ADVANCE(1622);
      END_STATE();
    case 1489:
      if (lookahead == '5') ADVANCE(1632);
      if (lookahead == '6') ADVANCE(1634);
      END_STATE();
    case 1490:
      if (lookahead == '5') ADVANCE(1642);
      END_STATE();
    case 1491:
      if (lookahead == '5') ADVANCE(1643);
      END_STATE();
    case 1492:
      if (lookahead == '6') ADVANCE(2009);
      END_STATE();
    case 1493:
      if (lookahead == '6') ADVANCE(1593);
      END_STATE();
    case 1494:
      if (lookahead == '6') ADVANCE(1593);
      if (lookahead == ';') ADVANCE(2241);
      END_STATE();
    case 1495:
      if (lookahead == '6') ADVANCE(1581);
      END_STATE();
    case 1496:
      if (lookahead == '6') ADVANCE(1582);
      END_STATE();
    case 1497:
      if (lookahead == '6') ADVANCE(1638);
      END_STATE();
    case 1498:
      if (lookahead == '6') ADVANCE(1637);
      END_STATE();
    case 1499:
      if (lookahead == '6') ADVANCE(1619);
      END_STATE();
    case 1500:
      if (lookahead == '6') ADVANCE(1623);
      END_STATE();
    case 1501:
      if (lookahead == '6') ADVANCE(1623);
      if (lookahead == '7') ADVANCE(1623);
      END_STATE();
    case 1502:
      if (lookahead == '6') ADVANCE(1641);
      END_STATE();
    case 1503:
      if (lookahead == '6') ADVANCE(1555);
      END_STATE();
    case 1504:
      if (lookahead == '6') ADVANCE(2002);
      END_STATE();
    case 1505:
      if (lookahead == '6') ADVANCE(1483);
      END_STATE();
    case 1506:
      if (lookahead == '6') ADVANCE(1642);
      END_STATE();
    case 1507:
      if (lookahead == '6') ADVANCE(1560);
      END_STATE();
    case 1508:
      if (lookahead == '6') ADVANCE(1238);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1440);
      END_STATE();
    case 1509:
      if (lookahead == '6') ADVANCE(1563);
      END_STATE();
    case 1510:
      if (lookahead == '6') ADVANCE(1562);
      END_STATE();
    case 1511:
      if (lookahead == '6') ADVANCE(1166);
      END_STATE();
    case 1512:
      if (lookahead == '6') ADVANCE(1564);
      END_STATE();
    case 1513:
      if (lookahead == '6') ADVANCE(2010);
      END_STATE();
    case 1514:
      if (lookahead == '6') ADVANCE(2011);
      END_STATE();
    case 1515:
      if (lookahead == '6') ADVANCE(2012);
      END_STATE();
    case 1516:
      if (lookahead == '6') ADVANCE(2013);
      END_STATE();
    case 1517:
      if (lookahead == '7') ADVANCE(1571);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1578);
      END_STATE();
    case 1518:
      if (lookahead == '7') ADVANCE(1610);
      END_STATE();
    case 1519:
      if (lookahead == '7') ADVANCE(1623);
      END_STATE();
    case 1520:
      if (lookahead == '7') ADVANCE(1623);
      if (lookahead == '8') ADVANCE(1623);
      if (lookahead == '9') ADVANCE(1623);
      END_STATE();
    case 1521:
      if (lookahead == '7') ADVANCE(1623);
      if (lookahead == '8') ADVANCE(1623);
      if (lookahead == '9') ADVANCE(1623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1605);
      END_STATE();
    case 1522:
      if (lookahead == '7') ADVANCE(1636);
      END_STATE();
    case 1523:
      if (lookahead == '7') ADVANCE(1629);
      END_STATE();
    case 1524:
      if (lookahead == '7') ADVANCE(1640);
      END_STATE();
    case 1525:
      if (lookahead == '7') ADVANCE(1643);
      END_STATE();
    case 1526:
      if (lookahead == '7') ADVANCE(1562);
      END_STATE();
    case 1527:
      if (lookahead == '7') ADVANCE(1575);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1623);
      END_STATE();
    case 1528:
      if (lookahead == '8') ADVANCE(1503);
      END_STATE();
    case 1529:
      if (lookahead == '8') ADVANCE(1585);
      if (lookahead == '9') ADVANCE(1585);
      END_STATE();
    case 1530:
      if (lookahead == '8') ADVANCE(1352);
      END_STATE();
    case 1531:
      if (lookahead == '8') ADVANCE(1590);
      END_STATE();
    case 1532:
      if (lookahead == '8') ADVANCE(1581);
      if (lookahead == '9') ADVANCE(1581);
      END_STATE();
    case 1533:
      if (lookahead == '8') ADVANCE(1582);
      if (lookahead == '9') ADVANCE(1582);
      END_STATE();
    case 1534:
      if (lookahead == '8') ADVANCE(1638);
      if (lookahead == '9') ADVANCE(1638);
      END_STATE();
    case 1535:
      if (lookahead == '8') ADVANCE(1608);
      if (lookahead == '9') ADVANCE(1614);
      END_STATE();
    case 1536:
      if (lookahead == '8') ADVANCE(1611);
      END_STATE();
    case 1537:
      if (lookahead == '8') ADVANCE(1637);
      if (lookahead == '9') ADVANCE(1637);
      END_STATE();
    case 1538:
      if (lookahead == '8') ADVANCE(1623);
      if (lookahead == '9') ADVANCE(1623);
      END_STATE();
    case 1539:
      if (lookahead == '8') ADVANCE(1622);
      if (lookahead == '9') ADVANCE(1622);
      END_STATE();
    case 1540:
      if (lookahead == '8') ADVANCE(1636);
      END_STATE();
    case 1541:
      if (lookahead == '8') ADVANCE(1628);
      if (lookahead == '9') ADVANCE(1628);
      END_STATE();
    case 1542:
      if (lookahead == '8') ADVANCE(1629);
      END_STATE();
    case 1543:
      if (lookahead == '8') ADVANCE(1641);
      if (lookahead == '9') ADVANCE(1641);
      END_STATE();
    case 1544:
      if (lookahead == '8') ADVANCE(1640);
      END_STATE();
    case 1545:
      if (lookahead == '8') ADVANCE(1634);
      if (lookahead == '9') ADVANCE(1634);
      END_STATE();
    case 1546:
      if (lookahead == '8') ADVANCE(1642);
      if (lookahead == '9') ADVANCE(1642);
      END_STATE();
    case 1547:
      if (lookahead == '8') ADVANCE(1643);
      END_STATE();
    case 1548:
      if (lookahead == '8') ADVANCE(1561);
      END_STATE();
    case 1549:
      if (lookahead == '8') ADVANCE(1525);
      END_STATE();
    case 1550:
      if (lookahead == '8') ADVANCE(1507);
      END_STATE();
    case 1551:
      if (lookahead == '8') ADVANCE(1509);
      END_STATE();
    case 1552:
      if (lookahead == '8') ADVANCE(1510);
      END_STATE();
    case 1553:
      if (lookahead == '8') ADVANCE(1512);
      END_STATE();
    case 1554:
      if (lookahead == '9') ADVANCE(1359);
      END_STATE();
    case 1555:
      if (lookahead == '9') ADVANCE(1579);
      END_STATE();
    case 1556:
      if (lookahead == '9') ADVANCE(1495);
      END_STATE();
    case 1557:
      if (lookahead == '9') ADVANCE(1239);
      if (lookahead == ';') ADVANCE(2201);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1500);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1456);
      END_STATE();
    case 1558:
      if (lookahead == '9') ADVANCE(1237);
      END_STATE();
    case 1559:
      if (lookahead == '9') ADVANCE(1589);
      END_STATE();
    case 1560:
      if (lookahead == '9') ADVANCE(1578);
      END_STATE();
    case 1561:
      if (lookahead == '9') ADVANCE(1588);
      END_STATE();
    case 1562:
      if (lookahead == '9') ADVANCE(1623);
      END_STATE();
    case 1563:
      if (lookahead == '9') ADVANCE(1620);
      END_STATE();
    case 1564:
      if (lookahead == '9') ADVANCE(1632);
      END_STATE();
    case 1565:
      if (lookahead == '9') ADVANCE(1635);
      END_STATE();
    case 1566:
      if (lookahead == '9') ADVANCE(1413);
      END_STATE();
    case 1567:
      if (lookahead == '9') ADVANCE(1496);
      END_STATE();
    case 1568:
      if (lookahead == '9') ADVANCE(1484);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1990);
      END_STATE();
    case 1569:
      if (lookahead == '9') ADVANCE(1497);
      END_STATE();
    case 1570:
      if (lookahead == '9') ADVANCE(1498);
      END_STATE();
    case 1571:
      if (lookahead == '9') ADVANCE(1476);
      END_STATE();
    case 1572:
      if (lookahead == '9') ADVANCE(1477);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1989);
      END_STATE();
    case 1573:
      if (lookahead == '9') ADVANCE(1500);
      END_STATE();
    case 1574:
      if (lookahead == '9') ADVANCE(1500);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1989);
      END_STATE();
    case 1575:
      if (lookahead == '9') ADVANCE(1482);
      END_STATE();
    case 1576:
      if (lookahead == '9') ADVANCE(1502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1991);
      END_STATE();
    case 1577:
      if (lookahead == '9') ADVANCE(1506);
      END_STATE();
    case 1578:
      if (lookahead == ';') ADVANCE(2185);
      END_STATE();
    case 1579:
      if (lookahead == ';') ADVANCE(2188);
      END_STATE();
    case 1580:
      if (lookahead == ';') ADVANCE(2188);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1590);
      END_STATE();
    case 1581:
      if (lookahead == ';') ADVANCE(2024);
      END_STATE();
    case 1582:
      if (lookahead == ';') ADVANCE(1017);
      END_STATE();
    case 1583:
      if (lookahead == ';') ADVANCE(2058);
      END_STATE();
    case 1584:
      if (lookahead == ';') ADVANCE(2259);
      END_STATE();
    case 1585:
      if (lookahead == ';') ADVANCE(2175);
      END_STATE();
    case 1586:
      if (lookahead == ';') ADVANCE(2175);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1591);
      END_STATE();
    case 1587:
      if (lookahead == ';') ADVANCE(2241);
      END_STATE();
    case 1588:
      if (lookahead == ';') ADVANCE(2283);
      END_STATE();
    case 1589:
      if (lookahead == ';') ADVANCE(2256);
      END_STATE();
    case 1590:
      if (lookahead == ';') ADVANCE(2078);
      END_STATE();
    case 1591:
      if (lookahead == ';') ADVANCE(2076);
      END_STATE();
    case 1592:
      if (lookahead == ';') ADVANCE(2082);
      END_STATE();
    case 1593:
      if (lookahead == ';') ADVANCE(2080);
      END_STATE();
    case 1594:
      if (lookahead == ';') ADVANCE(2212);
      END_STATE();
    case 1595:
      if (lookahead == ';') ADVANCE(2212);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1591);
      END_STATE();
    case 1596:
      if (lookahead == ';') ADVANCE(2084);
      END_STATE();
    case 1597:
      if (lookahead == ';') ADVANCE(2074);
      END_STATE();
    case 1598:
      if (lookahead == ';') ADVANCE(2275);
      END_STATE();
    case 1599:
      if (lookahead == ';') ADVANCE(2062);
      END_STATE();
    case 1600:
      if (lookahead == ';') ADVANCE(2064);
      END_STATE();
    case 1601:
      if (lookahead == ';') ADVANCE(2066);
      END_STATE();
    case 1602:
      if (lookahead == ';') ADVANCE(2068);
      END_STATE();
    case 1603:
      if (lookahead == ';') ADVANCE(2070);
      END_STATE();
    case 1604:
      if (lookahead == ';') ADVANCE(2245);
      END_STATE();
    case 1605:
      if (lookahead == ';') ADVANCE(2271);
      END_STATE();
    case 1606:
      if (lookahead == ';') ADVANCE(2243);
      END_STATE();
    case 1607:
      if (lookahead == ';') ADVANCE(2263);
      END_STATE();
    case 1608:
      if (lookahead == ';') ADVANCE(2216);
      END_STATE();
    case 1609:
      if (lookahead == ';') ADVANCE(2267);
      END_STATE();
    case 1610:
      if (lookahead == ';') ADVANCE(2247);
      END_STATE();
    case 1611:
      if (lookahead == ';') ADVANCE(2249);
      END_STATE();
    case 1612:
      if (lookahead == ';') ADVANCE(2072);
      END_STATE();
    case 1613:
      if (lookahead == ';') ADVANCE(2060);
      END_STATE();
    case 1614:
      if (lookahead == ';') ADVANCE(2218);
      END_STATE();
    case 1615:
      if (lookahead == ';') ADVANCE(2220);
      END_STATE();
    case 1616:
      if (lookahead == ';') ADVANCE(2222);
      END_STATE();
    case 1617:
      if (lookahead == ';') ADVANCE(2224);
      END_STATE();
    case 1618:
      if (lookahead == ';') ADVANCE(2214);
      END_STATE();
    case 1619:
      if (lookahead == ';') ADVANCE(2226);
      END_STATE();
    case 1620:
      if (lookahead == ';') ADVANCE(1073);
      END_STATE();
    case 1621:
      if (lookahead == ';') ADVANCE(1073);
      if (lookahead == 'b') ADVANCE(1623);
      if (lookahead == 'e') ADVANCE(1623);
      if (lookahead == 'm') ADVANCE(1832);
      END_STATE();
    case 1622:
      if (lookahead == ';') ADVANCE(2200);
      END_STATE();
    case 1623:
      if (lookahead == ';') ADVANCE(2190);
      END_STATE();
    case 1624:
      if (lookahead == ';') ADVANCE(2190);
      if (lookahead == 'a') ADVANCE(1888);
      END_STATE();
    case 1625:
      if (lookahead == ';') ADVANCE(2190);
      if (lookahead == 'f') ADVANCE(1936);
      if (lookahead == 'q') ADVANCE(1623);
      END_STATE();
    case 1626:
      if (lookahead == ';') ADVANCE(2190);
      if (lookahead == 'o') ADVANCE(1972);
      END_STATE();
    case 1627:
      if (lookahead == ';') ADVANCE(2190);
      if (lookahead == 't') ADVANCE(1851);
      END_STATE();
    case 1628:
      if (lookahead == ';') ADVANCE(2182);
      END_STATE();
    case 1629:
      if (lookahead == ';') ADVANCE(1079);
      END_STATE();
    case 1630:
      if (lookahead == ';') ADVANCE(2201);
      END_STATE();
    case 1631:
      if (lookahead == ';') ADVANCE(1074);
      END_STATE();
    case 1632:
      if (lookahead == ';') ADVANCE(2189);
      END_STATE();
    case 1633:
      if (lookahead == ';') ADVANCE(2189);
      if (lookahead == 'b') ADVANCE(1623);
      if (lookahead == 'e') ADVANCE(1623);
      if (lookahead == 'm') ADVANCE(1832);
      END_STATE();
    case 1634:
      if (lookahead == ';') ADVANCE(2177);
      END_STATE();
    case 1635:
      if (lookahead == ';') ADVANCE(2254);
      END_STATE();
    case 1636:
      if (lookahead == ';') ADVANCE(1081);
      END_STATE();
    case 1637:
      if (lookahead == ';') ADVANCE(2025);
      END_STATE();
    case 1638:
      if (lookahead == ';') ADVANCE(1018);
      END_STATE();
    case 1639:
      if (lookahead == ';') ADVANCE(2202);
      END_STATE();
    case 1640:
      if (lookahead == ';') ADVANCE(1022);
      END_STATE();
    case 1641:
      if (lookahead == ';') ADVANCE(1021);
      END_STATE();
    case 1642:
      if (lookahead == ';') ADVANCE(1023);
      END_STATE();
    case 1643:
      if (lookahead == ';') ADVANCE(1024);
      END_STATE();
    case 1644:
      if (lookahead == '=') ADVANCE(2190);
      END_STATE();
    case 1645:
      if (lookahead == 'A') ADVANCE(1889);
      END_STATE();
    case 1646:
      if (lookahead == 'A') ADVANCE(1889);
      if (lookahead == 'R') ADVANCE(1793);
      END_STATE();
    case 1647:
      if (lookahead == 'A') ADVANCE(1889);
      if (lookahead == 'T') ADVANCE(1734);
      if (lookahead == 'p') ADVANCE(1735);
      END_STATE();
    case 1648:
      if (lookahead == 'L') ADVANCE(1737);
      if (lookahead == 'R') ADVANCE(1793);
      if (lookahead == 'U') ADVANCE(1866);
      END_STATE();
    case 1649:
      if (lookahead == 'M') ADVANCE(1800);
      END_STATE();
    case 1650:
      if (lookahead == 'N') ADVANCE(2190);
      END_STATE();
    case 1651:
      if (lookahead == 'P') ADVANCE(1822);
      END_STATE();
    case 1652:
      if (lookahead == 'R') ADVANCE(1793);
      END_STATE();
    case 1653:
      if (lookahead == 'a') ADVANCE(1896);
      END_STATE();
    case 1654:
      if (lookahead == 'a') ADVANCE(1699);
      END_STATE();
    case 1655:
      if (lookahead == 'a') ADVANCE(1803);
      if (lookahead == 'y') ADVANCE(1871);
      END_STATE();
    case 1656:
      if (lookahead == 'a') ADVANCE(1803);
      if (lookahead == 'y') ADVANCE(1876);
      END_STATE();
    case 1657:
      if (lookahead == 'a') ADVANCE(1698);
      if (lookahead == 'd') ADVANCE(1688);
      if (lookahead == 'e') ADVANCE(1681);
      if (lookahead == 'v') ADVANCE(1817);
      END_STATE();
    case 1658:
      if (lookahead == 'a') ADVANCE(1698);
      if (lookahead == 'd') ADVANCE(1693);
      if (lookahead == 'e') ADVANCE(1681);
      if (lookahead == 'v') ADVANCE(1817);
      END_STATE();
    case 1659:
      if (lookahead == 'a') ADVANCE(1897);
      END_STATE();
    case 1660:
      if (lookahead == 'a') ADVANCE(1802);
      if (lookahead == 'y') ADVANCE(1863);
      END_STATE();
    case 1661:
      if (lookahead == 'a') ADVANCE(1802);
      if (lookahead == 'y') ADVANCE(1867);
      END_STATE();
    case 1662:
      if (lookahead == 'a') ADVANCE(1884);
      END_STATE();
    case 1663:
      if (lookahead == 'a') ADVANCE(1884);
      if (lookahead == 'i') ADVANCE(1763);
      END_STATE();
    case 1664:
      if (lookahead == 'a') ADVANCE(1884);
      if (lookahead == 'p') ADVANCE(1673);
      END_STATE();
    case 1665:
      if (lookahead == 'a') ADVANCE(1884);
      if (lookahead == 'y') ADVANCE(1871);
      END_STATE();
    case 1666:
      if (lookahead == 'a') ADVANCE(1884);
      if (lookahead == 'y') ADVANCE(1876);
      END_STATE();
    case 1667:
      if (lookahead == 'a') ADVANCE(1806);
      if (lookahead == 'd') ADVANCE(1688);
      if (lookahead == 'i') ADVANCE(1711);
      if (lookahead == 'n') ADVANCE(1877);
      if (lookahead == 'p') ADVANCE(1623);
      END_STATE();
    case 1668:
      if (lookahead == 'a') ADVANCE(1806);
      if (lookahead == 'd') ADVANCE(1688);
      if (lookahead == 'i') ADVANCE(1844);
      if (lookahead == 'n') ADVANCE(1877);
      if (lookahead == 'p') ADVANCE(1623);
      END_STATE();
    case 1669:
      if (lookahead == 'a') ADVANCE(1806);
      if (lookahead == 'd') ADVANCE(1693);
      if (lookahead == 'i') ADVANCE(1712);
      if (lookahead == 'n') ADVANCE(1877);
      if (lookahead == 'p') ADVANCE(1623);
      END_STATE();
    case 1670:
      if (lookahead == 'a') ADVANCE(1806);
      if (lookahead == 'd') ADVANCE(1693);
      if (lookahead == 'i') ADVANCE(1848);
      if (lookahead == 'n') ADVANCE(1877);
      if (lookahead == 'p') ADVANCE(1623);
      END_STATE();
    case 1671:
      if (lookahead == 'a') ADVANCE(1825);
      if (lookahead == 'e') ADVANCE(1752);
      END_STATE();
    case 1672:
      if (lookahead == 'a') ADVANCE(1825);
      if (lookahead == 'i') ADVANCE(1761);
      END_STATE();
    case 1673:
      if (lookahead == 'a') ADVANCE(1889);
      END_STATE();
    case 1674:
      if (lookahead == 'a') ADVANCE(1889);
      if (lookahead == 'r') ADVANCE(1799);
      END_STATE();
    case 1675:
      if (lookahead == 'a') ADVANCE(1820);
      END_STATE();
    case 1676:
      if (lookahead == 'a') ADVANCE(1888);
      END_STATE();
    case 1677:
      if (lookahead == 'a') ADVANCE(1623);
      END_STATE();
    case 1678:
      if (lookahead == 'a') ADVANCE(1818);
      if (lookahead == 'y') ADVANCE(1871);
      END_STATE();
    case 1679:
      if (lookahead == 'a') ADVANCE(1918);
      END_STATE();
    case 1680:
      if (lookahead == 'a') ADVANCE(1815);
      END_STATE();
    case 1681:
      if (lookahead == 'a') ADVANCE(1890);
      END_STATE();
    case 1682:
      if (lookahead == 'a') ADVANCE(1920);
      END_STATE();
    case 1683:
      if (lookahead == 'a') ADVANCE(1922);
      END_STATE();
    case 1684:
      if (lookahead == 'a') ADVANCE(1924);
      END_STATE();
    case 1685:
      if (lookahead == 'a') ADVANCE(1925);
      END_STATE();
    case 1686:
      if (lookahead == 'a') ADVANCE(1926);
      END_STATE();
    case 1687:
      if (lookahead == 'a') ADVANCE(1927);
      END_STATE();
    case 1688:
      if (lookahead == 'a') ADVANCE(1928);
      END_STATE();
    case 1689:
      if (lookahead == 'a') ADVANCE(1929);
      END_STATE();
    case 1690:
      if (lookahead == 'a') ADVANCE(1930);
      END_STATE();
    case 1691:
      if (lookahead == 'a') ADVANCE(1931);
      END_STATE();
    case 1692:
      if (lookahead == 'a') ADVANCE(1932);
      END_STATE();
    case 1693:
      if (lookahead == 'a') ADVANCE(1933);
      END_STATE();
    case 1694:
      if (lookahead == 'a') ADVANCE(1917);
      END_STATE();
    case 1695:
      if (lookahead == 'a') ADVANCE(1702);
      END_STATE();
    case 1696:
      if (lookahead == 'a') ADVANCE(1819);
      END_STATE();
    case 1697:
      if (lookahead == 'a') ADVANCE(1703);
      END_STATE();
    case 1698:
      if (lookahead == 'b') ADVANCE(1807);
      END_STATE();
    case 1699:
      if (lookahead == 'c') ADVANCE(1234);
      END_STATE();
    case 1700:
      if (lookahead == 'c') ADVANCE(1808);
      END_STATE();
    case 1701:
      if (lookahead == 'c') ADVANCE(1810);
      END_STATE();
    case 1702:
      if (lookahead == 'c') ADVANCE(1263);
      END_STATE();
    case 1703:
      if (lookahead == 'c') ADVANCE(1277);
      END_STATE();
    case 1704:
      if (lookahead == 'd') ADVANCE(1659);
      END_STATE();
    case 1705:
      if (lookahead == 'd') ADVANCE(1659);
      if (lookahead == 'i') ADVANCE(1709);
      END_STATE();
    case 1706:
      if (lookahead == 'd') ADVANCE(1857);
      if (lookahead == 'p') ADVANCE(1822);
      END_STATE();
    case 1707:
      if (lookahead == 'd') ADVANCE(1679);
      END_STATE();
    case 1708:
      if (lookahead == 'd') ADVANCE(1679);
      if (lookahead == 'i') ADVANCE(1839);
      END_STATE();
    case 1709:
      if (lookahead == 'd') ADVANCE(1653);
      if (lookahead == 'n') ADVANCE(1955);
      END_STATE();
    case 1710:
      if (lookahead == 'd') ADVANCE(1653);
      if (lookahead == 'n') ADVANCE(1959);
      END_STATE();
    case 1711:
      if (lookahead == 'd') ADVANCE(1653);
      if (lookahead == 'n') ADVANCE(1964);
      END_STATE();
    case 1712:
      if (lookahead == 'd') ADVANCE(1653);
      if (lookahead == 'n') ADVANCE(1968);
      END_STATE();
    case 1713:
      if (lookahead == 'd') ADVANCE(1683);
      END_STATE();
    case 1714:
      if (lookahead == 'd') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1840);
      END_STATE();
    case 1715:
      if (lookahead == 'd') ADVANCE(1684);
      END_STATE();
    case 1716:
      if (lookahead == 'd') ADVANCE(1684);
      if (lookahead == 'i') ADVANCE(1841);
      END_STATE();
    case 1717:
      if (lookahead == 'd') ADVANCE(1685);
      if (lookahead == 'i') ADVANCE(1710);
      END_STATE();
    case 1718:
      if (lookahead == 'd') ADVANCE(1686);
      END_STATE();
    case 1719:
      if (lookahead == 'd') ADVANCE(1687);
      END_STATE();
    case 1720:
      if (lookahead == 'd') ADVANCE(1687);
      if (lookahead == 'i') ADVANCE(1842);
      END_STATE();
    case 1721:
      if (lookahead == 'd') ADVANCE(1689);
      END_STATE();
    case 1722:
      if (lookahead == 'd') ADVANCE(1689);
      if (lookahead == 'i') ADVANCE(1843);
      END_STATE();
    case 1723:
      if (lookahead == 'd') ADVANCE(1690);
      END_STATE();
    case 1724:
      if (lookahead == 'd') ADVANCE(1690);
      if (lookahead == 'i') ADVANCE(1845);
      END_STATE();
    case 1725:
      if (lookahead == 'd') ADVANCE(1691);
      END_STATE();
    case 1726:
      if (lookahead == 'd') ADVANCE(1691);
      if (lookahead == 'i') ADVANCE(1846);
      END_STATE();
    case 1727:
      if (lookahead == 'd') ADVANCE(1692);
      END_STATE();
    case 1728:
      if (lookahead == 'd') ADVANCE(1692);
      if (lookahead == 'i') ADVANCE(1847);
      END_STATE();
    case 1729:
      if (lookahead == 'e') ADVANCE(1625);
      if (lookahead == 'l') ADVANCE(1940);
      if (lookahead == 'o') ADVANCE(1971);
      if (lookahead == 'r') ADVANCE(1662);
      END_STATE();
    case 1730:
      if (lookahead == 'e') ADVANCE(1625);
      if (lookahead == 'l') ADVANCE(1940);
      if (lookahead == 'r') ADVANCE(1662);
      END_STATE();
    case 1731:
      if (lookahead == 'e') ADVANCE(1826);
      END_STATE();
    case 1732:
      if (lookahead == 'e') ADVANCE(1886);
      if (lookahead == 'l') ADVANCE(1950);
      if (lookahead == 'm') ADVANCE(1623);
      if (lookahead == 'r') ADVANCE(1854);
      END_STATE();
    case 1733:
      if (lookahead == 'e') ADVANCE(1886);
      if (lookahead == 'l') ADVANCE(1953);
      if (lookahead == 'm') ADVANCE(1623);
      if (lookahead == 'r') ADVANCE(1854);
      END_STATE();
    case 1734:
      if (lookahead == 'e') ADVANCE(1736);
      END_STATE();
    case 1735:
      if (lookahead == 'e') ADVANCE(1881);
      END_STATE();
    case 1736:
      if (lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1737:
      if (lookahead == 'e') ADVANCE(1754);
      END_STATE();
    case 1738:
      if (lookahead == 'e') ADVANCE(1827);
      END_STATE();
    case 1739:
      if (lookahead == 'e') ADVANCE(1808);
      END_STATE();
    case 1740:
      if (lookahead == 'e') ADVANCE(1830);
      END_STATE();
    case 1741:
      if (lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 1742:
      if (lookahead == 'e') ADVANCE(1829);
      END_STATE();
    case 1743:
      if (lookahead == 'e') ADVANCE(1831);
      END_STATE();
    case 1744:
      if (lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 1745:
      if (lookahead == 'e') ADVANCE(1833);
      END_STATE();
    case 1746:
      if (lookahead == 'e') ADVANCE(1834);
      END_STATE();
    case 1747:
      if (lookahead == 'e') ADVANCE(1835);
      END_STATE();
    case 1748:
      if (lookahead == 'e') ADVANCE(1837);
      END_STATE();
    case 1749:
      if (lookahead == 'e') ADVANCE(1836);
      END_STATE();
    case 1750:
      if (lookahead == 'e') ADVANCE(1921);
      END_STATE();
    case 1751:
      if (lookahead == 'e') ADVANCE(1923);
      END_STATE();
    case 1752:
      if (lookahead == 'f') ADVANCE(1935);
      END_STATE();
    case 1753:
      if (lookahead == 'f') ADVANCE(1798);
      END_STATE();
    case 1754:
      if (lookahead == 'f') ADVANCE(1937);
      END_STATE();
    case 1755:
      if (lookahead == 'f') ADVANCE(1589);
      END_STATE();
    case 1756:
      if (lookahead == 'f') ADVANCE(1904);
      END_STATE();
    case 1757:
      if (lookahead == 'f') ADVANCE(1588);
      END_STATE();
    case 1758:
      if (lookahead == 'f') ADVANCE(1623);
      END_STATE();
    case 1759:
      if (lookahead == 'f') ADVANCE(1635);
      END_STATE();
    case 1760:
      if (lookahead == 'g') ADVANCE(1850);
      END_STATE();
    case 1761:
      if (lookahead == 'g') ADVANCE(1767);
      END_STATE();
    case 1762:
      if (lookahead == 'g') ADVANCE(1623);
      END_STATE();
    case 1763:
      if (lookahead == 'g') ADVANCE(1768);
      END_STATE();
    case 1764:
      if (lookahead == 'h') ADVANCE(1731);
      END_STATE();
    case 1765:
      if (lookahead == 'h') ADVANCE(1855);
      if (lookahead == 'q') ADVANCE(1956);
      END_STATE();
    case 1766:
      if (lookahead == 'h') ADVANCE(1585);
      END_STATE();
    case 1767:
      if (lookahead == 'h') ADVANCE(1937);
      END_STATE();
    case 1768:
      if (lookahead == 'h') ADVANCE(1945);
      END_STATE();
    case 1769:
      if (lookahead == 'h') ADVANCE(1581);
      END_STATE();
    case 1770:
      if (lookahead == 'h') ADVANCE(1582);
      END_STATE();
    case 1771:
      if (lookahead == 'h') ADVANCE(1638);
      END_STATE();
    case 1772:
      if (lookahead == 'h') ADVANCE(1608);
      END_STATE();
    case 1773:
      if (lookahead == 'h') ADVANCE(1637);
      END_STATE();
    case 1774:
      if (lookahead == 'h') ADVANCE(1616);
      END_STATE();
    case 1775:
      if (lookahead == 'h') ADVANCE(1617);
      END_STATE();
    case 1776:
      if (lookahead == 'h') ADVANCE(1623);
      END_STATE();
    case 1777:
      if (lookahead == 'h') ADVANCE(1622);
      END_STATE();
    case 1778:
      if (lookahead == 'h') ADVANCE(1628);
      END_STATE();
    case 1779:
      if (lookahead == 'h') ADVANCE(1641);
      END_STATE();
    case 1780:
      if (lookahead == 'h') ADVANCE(1634);
      END_STATE();
    case 1781:
      if (lookahead == 'h') ADVANCE(1642);
      END_STATE();
    case 1782:
      if (lookahead == 'h') ADVANCE(1738);
      END_STATE();
    case 1783:
      if (lookahead == 'h') ADVANCE(1740);
      END_STATE();
    case 1784:
      if (lookahead == 'h') ADVANCE(1741);
      END_STATE();
    case 1785:
      if (lookahead == 'h') ADVANCE(1742);
      END_STATE();
    case 1786:
      if (lookahead == 'h') ADVANCE(1743);
      END_STATE();
    case 1787:
      if (lookahead == 'h') ADVANCE(1745);
      END_STATE();
    case 1788:
      if (lookahead == 'h') ADVANCE(1744);
      END_STATE();
    case 1789:
      if (lookahead == 'h') ADVANCE(1746);
      END_STATE();
    case 1790:
      if (lookahead == 'h') ADVANCE(1747);
      END_STATE();
    case 1791:
      if (lookahead == 'h') ADVANCE(1748);
      END_STATE();
    case 1792:
      if (lookahead == 'h') ADVANCE(1749);
      END_STATE();
    case 1793:
      if (lookahead == 'i') ADVANCE(1761);
      END_STATE();
    case 1794:
      if (lookahead == 'i') ADVANCE(1891);
      END_STATE();
    case 1795:
      if (lookahead == 'i') ADVANCE(1760);
      if (lookahead == 'o') ADVANCE(1934);
      END_STATE();
    case 1796:
      if (lookahead == 'i') ADVANCE(1623);
      END_STATE();
    case 1797:
      if (lookahead == 'i') ADVANCE(1838);
      END_STATE();
    case 1798:
      if (lookahead == 'i') ADVANCE(1832);
      END_STATE();
    case 1799:
      if (lookahead == 'i') ADVANCE(1763);
      END_STATE();
    case 1800:
      if (lookahead == 'i') ADVANCE(1843);
      END_STATE();
    case 1801:
      if (lookahead == 'l') ADVANCE(1947);
      END_STATE();
    case 1802:
      if (lookahead == 'l') ADVANCE(1755);
      END_STATE();
    case 1803:
      if (lookahead == 'l') ADVANCE(1755);
      if (lookahead == 'r') ADVANCE(1891);
      END_STATE();
    case 1804:
      if (lookahead == 'l') ADVANCE(1662);
      if (lookahead == 'q') ADVANCE(1946);
      if (lookahead == 'r') ADVANCE(1662);
      END_STATE();
    case 1805:
      if (lookahead == 'l') ADVANCE(1587);
      END_STATE();
    case 1806:
      if (lookahead == 'l') ADVANCE(1736);
      END_STATE();
    case 1807:
      if (lookahead == 'l') ADVANCE(1677);
      END_STATE();
    case 1808:
      if (lookahead == 'l') ADVANCE(1623);
      END_STATE();
    case 1809:
      if (lookahead == 'l') ADVANCE(1623);
      if (lookahead == 'r') ADVANCE(1623);
      END_STATE();
    case 1810:
      if (lookahead == 'l') ADVANCE(1630);
      END_STATE();
    case 1811:
      if (lookahead == 'l') ADVANCE(1636);
      END_STATE();
    case 1812:
      if (lookahead == 'l') ADVANCE(1629);
      END_STATE();
    case 1813:
      if (lookahead == 'l') ADVANCE(1640);
      END_STATE();
    case 1814:
      if (lookahead == 'l') ADVANCE(1949);
      END_STATE();
    case 1815:
      if (lookahead == 'l') ADVANCE(1757);
      END_STATE();
    case 1816:
      if (lookahead == 'l') ADVANCE(1643);
      END_STATE();
    case 1817:
      if (lookahead == 'l') ADVANCE(1944);
      END_STATE();
    case 1818:
      if (lookahead == 'l') ADVANCE(1759);
      if (lookahead == 'r') ADVANCE(1891);
      END_STATE();
    case 1819:
      if (lookahead == 'l') ADVANCE(1911);
      END_STATE();
    case 1820:
      if (lookahead == 'l') ADVANCE(1913);
      END_STATE();
    case 1821:
      if (lookahead == 'l') ADVANCE(1957);
      END_STATE();
    case 1822:
      if (lookahead == 'l') ADVANCE(1963);
      END_STATE();
    case 1823:
      if (lookahead == 'm') ADVANCE(1623);
      END_STATE();
    case 1824:
      if (lookahead == 'n') ADVANCE(1753);
      END_STATE();
    case 1825:
      if (lookahead == 'n') ADVANCE(1762);
      END_STATE();
    case 1826:
      if (lookahead == 'n') ADVANCE(1585);
      END_STATE();
    case 1827:
      if (lookahead == 'n') ADVANCE(1581);
      END_STATE();
    case 1828:
      if (lookahead == 'n') ADVANCE(1582);
      END_STATE();
    case 1829:
      if (lookahead == 'n') ADVANCE(1638);
      END_STATE();
    case 1830:
      if (lookahead == 'n') ADVANCE(1608);
      END_STATE();
    case 1831:
      if (lookahead == 'n') ADVANCE(1637);
      END_STATE();
    case 1832:
      if (lookahead == 'n') ADVANCE(1623);
      END_STATE();
    case 1833:
      if (lookahead == 'n') ADVANCE(1622);
      END_STATE();
    case 1834:
      if (lookahead == 'n') ADVANCE(1628);
      END_STATE();
    case 1835:
      if (lookahead == 'n') ADVANCE(1641);
      END_STATE();
    case 1836:
      if (lookahead == 'n') ADVANCE(1634);
      END_STATE();
    case 1837:
      if (lookahead == 'n') ADVANCE(1642);
      END_STATE();
    case 1838:
      if (lookahead == 'n') ADVANCE(1951);
      END_STATE();
    case 1839:
      if (lookahead == 'n') ADVANCE(1958);
      END_STATE();
    case 1840:
      if (lookahead == 'n') ADVANCE(1960);
      END_STATE();
    case 1841:
      if (lookahead == 'n') ADVANCE(1961);
      END_STATE();
    case 1842:
      if (lookahead == 'n') ADVANCE(1962);
      END_STATE();
    case 1843:
      if (lookahead == 'n') ADVANCE(1963);
      END_STATE();
    case 1844:
      if (lookahead == 'n') ADVANCE(1964);
      END_STATE();
    case 1845:
      if (lookahead == 'n') ADVANCE(1965);
      END_STATE();
    case 1846:
      if (lookahead == 'n') ADVANCE(1966);
      END_STATE();
    case 1847:
      if (lookahead == 'n') ADVANCE(1967);
      END_STATE();
    case 1848:
      if (lookahead == 'n') ADVANCE(1968);
      END_STATE();
    case 1849:
      if (lookahead == 'o') ADVANCE(1971);
      END_STATE();
    case 1850:
      if (lookahead == 'o') ADVANCE(1706);
      END_STATE();
    case 1851:
      if (lookahead == 'o') ADVANCE(1823);
      END_STATE();
    case 1852:
      if (lookahead == 'o') ADVANCE(1972);
      END_STATE();
    case 1853:
      if (lookahead == 'o') ADVANCE(1805);
      END_STATE();
    case 1854:
      if (lookahead == 'o') ADVANCE(1756);
      END_STATE();
    case 1855:
      if (lookahead == 'o') ADVANCE(1887);
      END_STATE();
    case 1856:
      if (lookahead == 'o') ADVANCE(1811);
      END_STATE();
    case 1857:
      if (lookahead == 'o') ADVANCE(1942);
      END_STATE();
    case 1858:
      if (lookahead == 'o') ADVANCE(1812);
      END_STATE();
    case 1859:
      if (lookahead == 'o') ADVANCE(1813);
      END_STATE();
    case 1860:
      if (lookahead == 'o') ADVANCE(1816);
      END_STATE();
    case 1861:
      if (lookahead == 'p') ADVANCE(1647);
      END_STATE();
    case 1862:
      if (lookahead == 'p') ADVANCE(1087);
      END_STATE();
    case 1863:
      if (lookahead == 'p') ADVANCE(1764);
      END_STATE();
    case 1864:
      if (lookahead == 'p') ADVANCE(1623);
      END_STATE();
    case 1865:
      if (lookahead == 'p') ADVANCE(1782);
      END_STATE();
    case 1866:
      if (lookahead == 'p') ADVANCE(1673);
      END_STATE();
    case 1867:
      if (lookahead == 'p') ADVANCE(1783);
      END_STATE();
    case 1868:
      if (lookahead == 'p') ADVANCE(1784);
      END_STATE();
    case 1869:
      if (lookahead == 'p') ADVANCE(1785);
      END_STATE();
    case 1870:
      if (lookahead == 'p') ADVANCE(1786);
      END_STATE();
    case 1871:
      if (lookahead == 'p') ADVANCE(1787);
      END_STATE();
    case 1872:
      if (lookahead == 'p') ADVANCE(1788);
      END_STATE();
    case 1873:
      if (lookahead == 'p') ADVANCE(1789);
      END_STATE();
    case 1874:
      if (lookahead == 'p') ADVANCE(1790);
      END_STATE();
    case 1875:
      if (lookahead == 'p') ADVANCE(1791);
      END_STATE();
    case 1876:
      if (lookahead == 'p') ADVANCE(1792);
      END_STATE();
    case 1877:
      if (lookahead == 'p') ADVANCE(1822);
      END_STATE();
    case 1878:
      if (lookahead == 'p') ADVANCE(1822);
      if (lookahead == 'q') ADVANCE(1952);
      if (lookahead == 'x') ADVANCE(1701);
      END_STATE();
    case 1879:
      if (lookahead == 'p') ADVANCE(1822);
      if (lookahead == 'u') ADVANCE(1809);
      END_STATE();
    case 1880:
      if (lookahead == 'q') ADVANCE(1970);
      END_STATE();
    case 1881:
      if (lookahead == 'r') ADVANCE(1652);
      END_STATE();
    case 1882:
      if (lookahead == 'r') ADVANCE(1626);
      END_STATE();
    case 1883:
      if (lookahead == 'r') ADVANCE(1654);
      END_STATE();
    case 1884:
      if (lookahead == 'r') ADVANCE(1891);
      END_STATE();
    case 1885:
      if (lookahead == 'r') ADVANCE(1796);
      END_STATE();
    case 1886:
      if (lookahead == 'r') ADVANCE(1864);
      END_STATE();
    case 1887:
      if (lookahead == 'r') ADVANCE(1938);
      END_STATE();
    case 1888:
      if (lookahead == 'r') ADVANCE(1736);
      END_STATE();
    case 1889:
      if (lookahead == 'r') ADVANCE(1892);
      END_STATE();
    case 1890:
      if (lookahead == 'r') ADVANCE(1882);
      END_STATE();
    case 1891:
      if (lookahead == 'r') ADVANCE(1623);
      END_STATE();
    case 1892:
      if (lookahead == 'r') ADVANCE(1852);
      END_STATE();
    case 1893:
      if (lookahead == 'r') ADVANCE(1758);
      END_STATE();
    case 1894:
      if (lookahead == 'r') ADVANCE(1695);
      END_STATE();
    case 1895:
      if (lookahead == 'r') ADVANCE(1697);
      END_STATE();
    case 1896:
      if (lookahead == 's') ADVANCE(1939);
      END_STATE();
    case 1897:
      if (lookahead == 's') ADVANCE(1766);
      END_STATE();
    case 1898:
      if (lookahead == 's') ADVANCE(1649);
      END_STATE();
    case 1899:
      if (lookahead == 's') ADVANCE(1621);
      END_STATE();
    case 1900:
      if (lookahead == 's') ADVANCE(1651);
      END_STATE();
    case 1901:
      if (lookahead == 's') ADVANCE(1633);
      END_STATE();
    case 1902:
      if (lookahead == 's') ADVANCE(1579);
      END_STATE();
    case 1903:
      if (lookahead == 's') ADVANCE(1585);
      END_STATE();
    case 1904:
      if (lookahead == 's') ADVANCE(1954);
      END_STATE();
    case 1905:
      if (lookahead == 's') ADVANCE(1581);
      END_STATE();
    case 1906:
      if (lookahead == 's') ADVANCE(1578);
      END_STATE();
    case 1907:
      if (lookahead == 's') ADVANCE(1582);
      END_STATE();
    case 1908:
      if (lookahead == 's') ADVANCE(1638);
      END_STATE();
    case 1909:
      if (lookahead == 's') ADVANCE(1637);
      END_STATE();
    case 1910:
      if (lookahead == 's') ADVANCE(1618);
      END_STATE();
    case 1911:
      if (lookahead == 's') ADVANCE(1623);
      END_STATE();
    case 1912:
      if (lookahead == 's') ADVANCE(1622);
      END_STATE();
    case 1913:
      if (lookahead == 's') ADVANCE(1639);
      END_STATE();
    case 1914:
      if (lookahead == 's') ADVANCE(1628);
      END_STATE();
    case 1915:
      if (lookahead == 's') ADVANCE(1641);
      END_STATE();
    case 1916:
      if (lookahead == 's') ADVANCE(1634);
      END_STATE();
    case 1917:
      if (lookahead == 's') ADVANCE(1941);
      END_STATE();
    case 1918:
      if (lookahead == 's') ADVANCE(1769);
      END_STATE();
    case 1919:
      if (lookahead == 's') ADVANCE(1642);
      END_STATE();
    case 1920:
      if (lookahead == 's') ADVANCE(1772);
      END_STATE();
    case 1921:
      if (lookahead == 's') ADVANCE(1943);
      END_STATE();
    case 1922:
      if (lookahead == 's') ADVANCE(1770);
      END_STATE();
    case 1923:
      if (lookahead == 's') ADVANCE(1942);
      END_STATE();
    case 1924:
      if (lookahead == 's') ADVANCE(1771);
      END_STATE();
    case 1925:
      if (lookahead == 's') ADVANCE(1775);
      END_STATE();
    case 1926:
      if (lookahead == 's') ADVANCE(1774);
      END_STATE();
    case 1927:
      if (lookahead == 's') ADVANCE(1773);
      END_STATE();
    case 1928:
      if (lookahead == 's') ADVANCE(1777);
      END_STATE();
    case 1929:
      if (lookahead == 's') ADVANCE(1776);
      END_STATE();
    case 1930:
      if (lookahead == 's') ADVANCE(1778);
      END_STATE();
    case 1931:
      if (lookahead == 's') ADVANCE(1779);
      END_STATE();
    case 1932:
      if (lookahead == 's') ADVANCE(1781);
      END_STATE();
    case 1933:
      if (lookahead == 's') ADVANCE(1780);
      END_STATE();
    case 1934:
      if (lookahead == 't') ADVANCE(1627);
      if (lookahead == 'x') ADVANCE(1879);
      END_STATE();
    case 1935:
      if (lookahead == 't') ADVANCE(1646);
      END_STATE();
    case 1936:
      if (lookahead == 't') ADVANCE(1674);
      END_STATE();
    case 1937:
      if (lookahead == 't') ADVANCE(1645);
      END_STATE();
    case 1938:
      if (lookahead == 't') ADVANCE(1648);
      END_STATE();
    case 1939:
      if (lookahead == 't') ADVANCE(1584);
      END_STATE();
    case 1940:
      if (lookahead == 't') ADVANCE(1885);
      END_STATE();
    case 1941:
      if (lookahead == 't') ADVANCE(1607);
      END_STATE();
    case 1942:
      if (lookahead == 't') ADVANCE(1623);
      END_STATE();
    case 1943:
      if (lookahead == 't') ADVANCE(1630);
      END_STATE();
    case 1944:
      if (lookahead == 't') ADVANCE(1631);
      END_STATE();
    case 1945:
      if (lookahead == 't') ADVANCE(1673);
      END_STATE();
    case 1946:
      if (lookahead == 'u') ADVANCE(1624);
      END_STATE();
    case 1947:
      if (lookahead == 'u') ADVANCE(1902);
      END_STATE();
    case 1948:
      if (lookahead == 'u') ADVANCE(1750);
      END_STATE();
    case 1949:
      if (lookahead == 'u') ADVANCE(1898);
      END_STATE();
    case 1950:
      if (lookahead == 'u') ADVANCE(1899);
      END_STATE();
    case 1951:
      if (lookahead == 'u') ADVANCE(1900);
      END_STATE();
    case 1952:
      if (lookahead == 'u') ADVANCE(1675);
      END_STATE();
    case 1953:
      if (lookahead == 'u') ADVANCE(1901);
      END_STATE();
    case 1954:
      if (lookahead == 'u') ADVANCE(1893);
      END_STATE();
    case 1955:
      if (lookahead == 'u') ADVANCE(1903);
      END_STATE();
    case 1956:
      if (lookahead == 'u') ADVANCE(1676);
      END_STATE();
    case 1957:
      if (lookahead == 'u') ADVANCE(1906);
      END_STATE();
    case 1958:
      if (lookahead == 'u') ADVANCE(1905);
      END_STATE();
    case 1959:
      if (lookahead == 'u') ADVANCE(1910);
      END_STATE();
    case 1960:
      if (lookahead == 'u') ADVANCE(1907);
      END_STATE();
    case 1961:
      if (lookahead == 'u') ADVANCE(1908);
      END_STATE();
    case 1962:
      if (lookahead == 'u') ADVANCE(1909);
      END_STATE();
    case 1963:
      if (lookahead == 'u') ADVANCE(1911);
      END_STATE();
    case 1964:
      if (lookahead == 'u') ADVANCE(1912);
      END_STATE();
    case 1965:
      if (lookahead == 'u') ADVANCE(1914);
      END_STATE();
    case 1966:
      if (lookahead == 'u') ADVANCE(1915);
      END_STATE();
    case 1967:
      if (lookahead == 'u') ADVANCE(1919);
      END_STATE();
    case 1968:
      if (lookahead == 'u') ADVANCE(1916);
      END_STATE();
    case 1969:
      if (lookahead == 'u') ADVANCE(1751);
      END_STATE();
    case 1970:
      if (lookahead == 'u') ADVANCE(1696);
      END_STATE();
    case 1971:
      if (lookahead == 'w') ADVANCE(1694);
      END_STATE();
    case 1972:
      if (lookahead == 'w') ADVANCE(1623);
      END_STATE();
    case 1973:
      if (lookahead == 'x') ADVANCE(1700);
      END_STATE();
    case 1974:
      if (lookahead == 'y') ADVANCE(1865);
      END_STATE();
    case 1975:
      if (lookahead == 'y') ADVANCE(1868);
      END_STATE();
    case 1976:
      if (lookahead == 'y') ADVANCE(1869);
      END_STATE();
    case 1977:
      if (lookahead == 'y') ADVANCE(1870);
      END_STATE();
    case 1978:
      if (lookahead == 'y') ADVANCE(1872);
      END_STATE();
    case 1979:
      if (lookahead == 'y') ADVANCE(1873);
      END_STATE();
    case 1980:
      if (lookahead == 'y') ADVANCE(1874);
      END_STATE();
    case 1981:
      if (lookahead == 'y') ADVANCE(1875);
      END_STATE();
    case 1982:
      if (lookahead == 0xfe0e) ADVANCE(2171);
      END_STATE();
    case 1983:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2023);
      END_STATE();
    case 1984:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1590);
      END_STATE();
    case 1985:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1623);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1623);
      END_STATE();
    case 1986:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1623);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1623);
      END_STATE();
    case 1987:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1610);
      END_STATE();
    case 1988:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1623);
      END_STATE();
    case 1989:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1636);
      END_STATE();
    case 1990:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1629);
      END_STATE();
    case 1991:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1640);
      END_STATE();
    case 1992:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1643);
      END_STATE();
    case 1993:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2003);
      END_STATE();
    case 1994:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1599);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1600);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1601);
      END_STATE();
    case 1995:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1623);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1623);
      END_STATE();
    case 1996:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1631);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1639);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1630);
      END_STATE();
    case 1997:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1992);
      END_STATE();
    case 1998:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1579);
      END_STATE();
    case 1999:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1589);
      END_STATE();
    case 2000:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1591);
      END_STATE();
    case 2001:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1578);
      END_STATE();
    case 2002:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1598);
      END_STATE();
    case 2003:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1588);
      END_STATE();
    case 2004:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1623);
      END_STATE();
    case 2005:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1620);
      END_STATE();
    case 2006:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1632);
      END_STATE();
    case 2007:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1592);
      END_STATE();
    case 2008:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 2009:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1998);
      END_STATE();
    case 2010:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2001);
      END_STATE();
    case 2011:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2005);
      END_STATE();
    case 2012:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2004);
      END_STATE();
    case 2013:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2006);
      END_STATE();
    case 2014:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1349);
      END_STATE();
    case 2015:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1124);
      END_STATE();
    case 2016:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1623);
      END_STATE();
    case 2017:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1536);
      END_STATE();
    case 2018:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1540);
      END_STATE();
    case 2019:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1542);
      END_STATE();
    case 2020:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1544);
      END_STATE();
    case 2021:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1547);
      END_STATE();
    case 2022:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2182);
      END_STATE();
    case 2023:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2022);
      END_STATE();
    case 2024:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2181);
      END_STATE();
    case 2025:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2178);
      END_STATE();
    case 2026:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2182);
      END_STATE();
    case 2027:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2277);
      END_STATE();
    case 2028:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2029);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2142);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      END_STATE();
    case 2029:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2142);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2030:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2206);
      END_STATE();
    case 2031:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '\n', 2045,
        '\r', 1008,
        '!', 2197,
        '$', 759,
        '&', 23,
        '(', 2126,
        '*', 2258,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'O', 2228,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1008,
        0x0b, 1008,
        '\f', 1008,
        ' ', 1008,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2032:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '\n', 2047,
        '\r', 1013,
        '!', 2197,
        '$', 759,
        '&', 10,
        '(', 2126,
        '0', 761,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'p', 725,
        '{', 2129,
        0x2659, 2170,
        0x265f, 724,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1013,
        0x0b, 1013,
        '\f', 1013,
        ' ', 1013,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2033:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '!', 2197,
        '#', 2187,
        '$', 759,
        '&', 17,
        '(', 2126,
        '*', 2258,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'O', 2228,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 2186,
        0x16ed, 2186,
        0x2795, 2186,
        ':', 2162,
        'X', 2162,
        'x', 2162,
        '\t', 1003,
        0x0b, 1003,
        '\f', 1003,
        ' ', 1003,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2034:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '!', 2197,
        '#', 2187,
        '$', 759,
        '&', 17,
        '(', 2126,
        '*', 2258,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2164,
        '?', 2197,
        '@', 2174,
        'O', 2228,
        'P', 2167,
        'R', 2152,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 2186,
        0x16ed, 2186,
        0x2795, 2186,
        '\t', 1003,
        0x0b, 1003,
        '\f', 1003,
        ' ', 1003,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2153);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2035:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '!', 2197,
        '#', 2187,
        '$', 759,
        '&', 24,
        '(', 2126,
        '*', 2258,
        '0', 2232,
        '1', 2208,
        ';', 2043,
        '<', 434,
        '=', 2164,
        '?', 2197,
        '@', 2174,
        'O', 2228,
        'P', 2167,
        'R', 2152,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'o', 2237,
        'p', 725,
        '{', 2129,
        0xbd, 2252,
        0x66d, 2274,
        0x204e, 2270,
        0x2217, 2262,
        0x2659, 2170,
        0x265f, 724,
        0x2731, 2266,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 2186,
        0x16ed, 2186,
        0x2795, 2186,
        ':', 2162,
        'X', 2162,
        'x', 2162,
        '\t', 1003,
        0x0b, 1003,
        '\f', 1003,
        ' ', 1003,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2176);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2145);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2153);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2036:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '!', 2197,
        '$', 759,
        '&', 10,
        '(', 2126,
        '0', 761,
        ';', 2043,
        '<', 434,
        '=', 2196,
        '?', 2197,
        '@', 2174,
        'P', 2167,
        'R', 2156,
        'T', 440,
        '[', 2054,
        'e', 2147,
        'p', 725,
        '{', 2129,
        0x2659, 2170,
        0x265f, 724,
        '\n', 1027,
        '\r', 1027,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2148);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2157);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2037:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '!', 2205,
        '#', 2185,
        '$', 2030,
        '&', 1053,
        '(', 2125,
        ')', 2127,
        '0', 1070,
        ';', 2042,
        '<', 1644,
        '=', 2204,
        '?', 2205,
        '@', 2173,
        'P', 2168,
        'R', 2159,
        'T', 1650,
        '[', 2053,
        'e', 2149,
        'p', 1983,
        '{', 2128,
        0xbd, 2251,
        0x2659, 2169,
        0x265f, 1982,
        'O', 1071,
        'o', 1071,
        'Z', 2026,
        'z', 2026,
        '+', 2189,
        0x16ed, 2189,
        0x2795, 2189,
        ':', 2161,
        'X', 2161,
        'x', 2161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1037);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2200);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2190);
      END_STATE();
    case 2038:
      if (eof) ADVANCE(2039);
      ADVANCE_MAP(
        '"', 2057,
        '%', 2044,
        '&', 1045,
        '(', 2125,
        ')', 2127,
        '*', 2257,
        '-', 2211,
        '/', 2240,
        '0', 2234,
        '1', 2207,
        '2', 2250,
        ';', 2042,
        '@', 2173,
        'O', 2230,
        'P', 2166,
        '[', 2053,
        ']', 2055,
        'o', 2239,
        '{', 2128,
        '}', 2130,
        0xbd, 2253,
        0x2ba, 2077,
        0x2dd, 2075,
        0x2ee, 2081,
        0x2f6, 2079,
        0x5f2, 2083,
        0x5f4, 2073,
        0x66d, 2273,
        0x2010, 2215,
        0x2011, 2217,
        0x2012, 2219,
        0x2013, 2221,
        0x2014, 2223,
        0x201c, 2061,
        0x201d, 2063,
        0x201f, 2065,
        0x2033, 2067,
        0x2036, 2069,
        0x2044, 2244,
        0x204e, 2269,
        0x2212, 2213,
        0x2215, 2242,
        0x2217, 2261,
        0x2659, 2169,
        0x265f, 1982,
        0x2731, 2265,
        0x2796, 2225,
        0x27cb, 2246,
        0x29f8, 2248,
        0x3003, 2071,
        0xff02, 2059,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2038);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2146);
      if (set_contains(sym__misc_punctuation_character_set_1, 10, lookahead)) ADVANCE(2144);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2155);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2040);
      if (lookahead == '\r') ADVANCE(1006);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1004);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2041);
      if (lookahead == '\r') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1009);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2045);
      if (lookahead == '\r') ADVANCE(1008);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1008);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2046);
      if (lookahead == '\r') ADVANCE(1011);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1011);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1013);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1013);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2048);
      if (lookahead == '\r') ADVANCE(1014);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1014);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2041);
      if (lookahead == '\r') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1009);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2050);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(1085);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(aux_sym_double_quote_token1);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(anon_sym_uff02);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(aux_sym_double_quote_token2);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_u201c);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(aux_sym_double_quote_token3);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(anon_sym_u201d);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(aux_sym_double_quote_token4);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_u201f);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(aux_sym_double_quote_token5);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_u2033);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(aux_sym_double_quote_token6);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_u2036);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(aux_sym_double_quote_token7);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(anon_sym_u3003);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(aux_sym_double_quote_token8);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_u05f4);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(aux_sym_double_quote_token9);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_u02dd);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(aux_sym_double_quote_token10);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(anon_sym_u02ba);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(aux_sym_double_quote_token11);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(anon_sym_u02f6);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(aux_sym_double_quote_token12);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_u02ee);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(aux_sym_double_quote_token13);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_u05f2);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(aux_sym_double_quote_token14);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2085);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(2086);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(2086);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '#') ADVANCE(2096);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2087);
      if (lookahead == ']') ADVANCE(2056);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2088);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2087);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2089);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2117);
      if (lookahead == '1') ADVANCE(2117);
      if (lookahead == '3') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2117);
      if (lookahead == '8') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2109);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      ADVANCE_MAP(
        '0', 2098,
        '2', 2117,
        'B', 2118,
        'b', 2118,
        'D', 2120,
        'd', 2120,
        'E', 2121,
        'e', 2121,
        'F', 2113,
        'f', 2113,
      );
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2092);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2100);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2105);
      if (lookahead == '3') ADVANCE(2111);
      if (lookahead == '6') ADVANCE(2112);
      if (lookahead == '7') ADVANCE(2110);
      if (lookahead == '8') ADVANCE(2101);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2102);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2119);
      if (lookahead == '3') ADVANCE(2108);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2117);
      if (lookahead == '4') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2104);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2093);
      if (lookahead == '3') ADVANCE(2094);
      if (lookahead == '5') ADVANCE(2122);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2123);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2116);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2090);
      if (lookahead == '4') ADVANCE(2108);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2103);
      if (lookahead == '5') ADVANCE(2107);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2115);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2099);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2117);
      if (lookahead == '6') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2109);
      if (lookahead == '5') ADVANCE(2091);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '4') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '5') ADVANCE(2106);
      if (lookahead == '9') ADVANCE(2114);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '6') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2100);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '9') ADVANCE(2097);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ';') ADVANCE(2124);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2117);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2117);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2099);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2095);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2124);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(2131);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(sym_move_number);
      ADVANCE_MAP(
        '\n', 2140,
        '\r', 2135,
        '&', 19,
        '\t', 2134,
        0x0b, 2134,
        '\f', 2134,
        ' ', 2134,
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
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2140);
      if (lookahead == '\r') ADVANCE(2135);
      if (lookahead == '&') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2134);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2140);
      if (lookahead == '\r') ADVANCE(2135);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2134);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2142);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2141);
      if (lookahead == '\r') ADVANCE(2137);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2141);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1058);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1022);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2142);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1021);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1061);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2142);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1017);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1085);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2142);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1085);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(sym_move_number);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2142);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(sym_move_number);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(sym__misc_punctuation);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(sym__misc_punctuation);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(618);
      if (lookahead == 'p') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(1862);
      if (lookahead == 'p') ADVANCE(2190);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(2190);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(2203);
      if (lookahead == '\r') ADVANCE(2191);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(2190);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2190);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(2190);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2023);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(anon_sym_u2659);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(anon_sym_u2659);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '&', 12,
        '+', 2199,
        0x16ed, 2199,
        0x2795, 2199,
        '/', 31,
        0x2044, 31,
        0x2215, 31,
        0x27cb, 31,
        0x29f8, 31,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2184);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '&', 1048,
        '+', 2190,
        0x16ed, 2190,
        0x2795, 2190,
        '/', 1079,
        0x2044, 1079,
        0x2215, 1079,
        0x27cb, 1079,
        0x29f8, 1079,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2182);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(757);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(1067);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2025);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '&', 22,
        '+', 2187,
        0x16ed, 2187,
        0x2795, 2187,
        '/', 35,
        0x2044, 35,
        0x2215, 35,
        0x27cb, 35,
        0x29f8, 35,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(1044);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2185);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '&', 1064,
        '+', 2185,
        0x16ed, 2185,
        0x2795, 2185,
        '/', 1081,
        0x2044, 1081,
        0x2215, 1081,
        0x27cb, 1081,
        0x29f8, 1081,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2190);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1086);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '&', 12,
        '-', 2183,
        '+', 2199,
        0x16ed, 2199,
        0x2795, 2199,
        '/', 31,
        0x2044, 31,
        0x2215, 31,
        0x27cb, 31,
        0x29f8, 31,
      );
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2184);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1086,
        '\r', 1,
        '&', 12,
        '+', 2199,
        0x16ed, 2199,
        0x2795, 2199,
        '/', 31,
        0x2044, 31,
        0x2215, 31,
        0x27cb, 31,
        0x29f8, 31,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2184);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2199);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2198);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1048,
        '+', 2190,
        0x16ed, 2190,
        0x2795, 2190,
        '/', 1079,
        0x2044, 1079,
        0x2215, 1079,
        0x27cb, 1079,
        0x29f8, 1079,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2182);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1049);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1050);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(1085);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(2190);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2190);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2206);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(2140);
      if (lookahead == '\r') ADVANCE(2135);
      if (lookahead == ' ') ADVANCE(2132);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2134);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(763);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(2138);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2029);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2142);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(1077);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(anon_sym_u2212);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(anon_sym_u2010);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(anon_sym_u2011);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(anon_sym_u2012);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(anon_sym_u2013);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(anon_sym_u2014);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(anon_sym_u2796);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1078);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1078);
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2024);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '\n', 2140,
        '\r', 2135,
        ' ', 2133,
        '&', 11,
        '\t', 2134,
        0x0b, 2134,
        '\f', 2134,
        'A', 763,
        'B', 763,
        'a', 763,
        'b', 763,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1078);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1078);
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2024);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(2139);
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2029);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2142);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2024);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1078);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1078);
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2024);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(anon_sym_u2215);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(anon_sym_u2044);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(anon_sym_u27cb);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(anon_sym_u29f8);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(anon_sym_u00bd);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == ' ') ADVANCE(1080);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == ' ') ADVANCE(1080);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(anon_sym_u2217);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(anon_sym_u2217);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(anon_sym_u2731);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(anon_sym_u2731);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(anon_sym_u204e);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(anon_sym_u204e);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(anon_sym_u066d);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(anon_sym_u066d);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      if (lookahead == '\n') ADVANCE(1086);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2036, .external_lex_state = 1},
  [2] = {.lex_state = 2033, .external_lex_state = 1},
  [3] = {.lex_state = 1005, .external_lex_state = 1},
  [4] = {.lex_state = 2033, .external_lex_state = 1},
  [5] = {.lex_state = 1032, .external_lex_state = 1},
  [6] = {.lex_state = 1032, .external_lex_state = 1},
  [7] = {.lex_state = 1032, .external_lex_state = 1},
  [8] = {.lex_state = 2035, .external_lex_state = 1},
  [9] = {.lex_state = 2034, .external_lex_state = 1},
  [10] = {.lex_state = 2034, .external_lex_state = 1},
  [11] = {.lex_state = 2034, .external_lex_state = 1},
  [12] = {.lex_state = 2035, .external_lex_state = 1},
  [13] = {.lex_state = 2036, .external_lex_state = 1},
  [14] = {.lex_state = 2036, .external_lex_state = 1},
  [15] = {.lex_state = 1034, .external_lex_state = 1},
  [16] = {.lex_state = 2033, .external_lex_state = 1},
  [17] = {.lex_state = 2034, .external_lex_state = 1},
  [18] = {.lex_state = 1005, .external_lex_state = 1},
  [19] = {.lex_state = 1033, .external_lex_state = 1},
  [20] = {.lex_state = 1034, .external_lex_state = 1},
  [21] = {.lex_state = 1033, .external_lex_state = 1},
  [22] = {.lex_state = 1005, .external_lex_state = 1},
  [23] = {.lex_state = 1033, .external_lex_state = 1},
  [24] = {.lex_state = 1005, .external_lex_state = 1},
  [25] = {.lex_state = 2033, .external_lex_state = 1},
  [26] = {.lex_state = 2033, .external_lex_state = 1},
  [27] = {.lex_state = 2033, .external_lex_state = 1},
  [28] = {.lex_state = 2033, .external_lex_state = 1},
  [29] = {.lex_state = 2033, .external_lex_state = 1},
  [30] = {.lex_state = 2033, .external_lex_state = 1},
  [31] = {.lex_state = 2033, .external_lex_state = 1},
  [32] = {.lex_state = 2033, .external_lex_state = 1},
  [33] = {.lex_state = 2033, .external_lex_state = 1},
  [34] = {.lex_state = 2033, .external_lex_state = 1},
  [35] = {.lex_state = 2033, .external_lex_state = 1},
  [36] = {.lex_state = 2033, .external_lex_state = 1},
  [37] = {.lex_state = 2033, .external_lex_state = 1},
  [38] = {.lex_state = 2033, .external_lex_state = 1},
  [39] = {.lex_state = 2033, .external_lex_state = 1},
  [40] = {.lex_state = 1033, .external_lex_state = 1},
  [41] = {.lex_state = 2033, .external_lex_state = 1},
  [42] = {.lex_state = 1032, .external_lex_state = 1},
  [43] = {.lex_state = 2037, .external_lex_state = 1},
  [44] = {.lex_state = 2033, .external_lex_state = 1},
  [45] = {.lex_state = 2033, .external_lex_state = 1},
  [46] = {.lex_state = 2033, .external_lex_state = 1},
  [47] = {.lex_state = 2037, .external_lex_state = 1},
  [48] = {.lex_state = 2031, .external_lex_state = 1},
  [49] = {.lex_state = 2033, .external_lex_state = 1},
  [50] = {.lex_state = 2033, .external_lex_state = 1},
  [51] = {.lex_state = 2033, .external_lex_state = 1},
  [52] = {.lex_state = 2033, .external_lex_state = 1},
  [53] = {.lex_state = 2033, .external_lex_state = 1},
  [54] = {.lex_state = 2033, .external_lex_state = 1},
  [55] = {.lex_state = 2033, .external_lex_state = 1},
  [56] = {.lex_state = 2031, .external_lex_state = 1},
  [57] = {.lex_state = 2033, .external_lex_state = 1},
  [58] = {.lex_state = 1010, .external_lex_state = 1},
  [59] = {.lex_state = 2033, .external_lex_state = 1},
  [60] = {.lex_state = 2033, .external_lex_state = 1},
  [61] = {.lex_state = 2033, .external_lex_state = 1},
  [62] = {.lex_state = 2033, .external_lex_state = 1},
  [63] = {.lex_state = 2033, .external_lex_state = 1},
  [64] = {.lex_state = 2033, .external_lex_state = 1},
  [65] = {.lex_state = 2037, .external_lex_state = 1},
  [66] = {.lex_state = 2033, .external_lex_state = 1},
  [67] = {.lex_state = 2033, .external_lex_state = 1},
  [68] = {.lex_state = 2033, .external_lex_state = 1},
  [69] = {.lex_state = 1032, .external_lex_state = 1},
  [70] = {.lex_state = 1032, .external_lex_state = 1},
  [71] = {.lex_state = 1032, .external_lex_state = 1},
  [72] = {.lex_state = 1005, .external_lex_state = 1},
  [73] = {.lex_state = 1005, .external_lex_state = 1},
  [74] = {.lex_state = 1032, .external_lex_state = 1},
  [75] = {.lex_state = 1005, .external_lex_state = 1},
  [76] = {.lex_state = 1032, .external_lex_state = 1},
  [77] = {.lex_state = 1032, .external_lex_state = 1},
  [78] = {.lex_state = 1032, .external_lex_state = 1},
  [79] = {.lex_state = 1032, .external_lex_state = 1},
  [80] = {.lex_state = 1032, .external_lex_state = 1},
  [81] = {.lex_state = 2033, .external_lex_state = 1},
  [82] = {.lex_state = 2033, .external_lex_state = 1},
  [83] = {.lex_state = 1032, .external_lex_state = 1},
  [84] = {.lex_state = 1032, .external_lex_state = 1},
  [85] = {.lex_state = 1032, .external_lex_state = 1},
  [86] = {.lex_state = 1032, .external_lex_state = 1},
  [87] = {.lex_state = 1005, .external_lex_state = 1},
  [88] = {.lex_state = 1032, .external_lex_state = 1},
  [89] = {.lex_state = 1032, .external_lex_state = 1},
  [90] = {.lex_state = 1032, .external_lex_state = 1},
  [91] = {.lex_state = 1032, .external_lex_state = 1},
  [92] = {.lex_state = 1032, .external_lex_state = 1},
  [93] = {.lex_state = 1032, .external_lex_state = 1},
  [94] = {.lex_state = 1012, .external_lex_state = 1},
  [95] = {.lex_state = 1032, .external_lex_state = 1},
  [96] = {.lex_state = 1032, .external_lex_state = 1},
  [97] = {.lex_state = 1032, .external_lex_state = 1},
  [98] = {.lex_state = 2037, .external_lex_state = 1},
  [99] = {.lex_state = 1032, .external_lex_state = 1},
  [100] = {.lex_state = 1032, .external_lex_state = 1},
  [101] = {.lex_state = 1032, .external_lex_state = 1},
  [102] = {.lex_state = 1032, .external_lex_state = 1},
  [103] = {.lex_state = 1032, .external_lex_state = 1},
  [104] = {.lex_state = 1032, .external_lex_state = 1},
  [105] = {.lex_state = 1032, .external_lex_state = 1},
  [106] = {.lex_state = 1032, .external_lex_state = 1},
  [107] = {.lex_state = 2037, .external_lex_state = 1},
  [108] = {.lex_state = 1032, .external_lex_state = 1},
  [109] = {.lex_state = 1032, .external_lex_state = 1},
  [110] = {.lex_state = 2037, .external_lex_state = 1},
  [111] = {.lex_state = 1032, .external_lex_state = 1},
  [112] = {.lex_state = 2037, .external_lex_state = 1},
  [113] = {.lex_state = 2037, .external_lex_state = 1},
  [114] = {.lex_state = 1039},
  [115] = {.lex_state = 1038},
  [116] = {.lex_state = 1039},
  [117] = {.lex_state = 1039},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1039},
  [121] = {.lex_state = 1076},
  [122] = {.lex_state = 1030, .external_lex_state = 1},
  [123] = {.lex_state = 1031, .external_lex_state = 1},
  [124] = {.lex_state = 1031, .external_lex_state = 1},
  [125] = {.lex_state = 1031, .external_lex_state = 1},
  [126] = {.lex_state = 1030, .external_lex_state = 1},
  [127] = {.lex_state = 1076},
  [128] = {.lex_state = 2036, .external_lex_state = 1},
  [129] = {.lex_state = 2036, .external_lex_state = 1},
  [130] = {.lex_state = 2037, .external_lex_state = 1},
  [131] = {.lex_state = 2036, .external_lex_state = 1},
  [132] = {.lex_state = 1031, .external_lex_state = 1},
  [133] = {.lex_state = 2036, .external_lex_state = 1},
  [134] = {.lex_state = 2032, .external_lex_state = 1},
  [135] = {.lex_state = 2036, .external_lex_state = 1},
  [136] = {.lex_state = 2036, .external_lex_state = 1},
  [137] = {.lex_state = 2037, .external_lex_state = 1},
  [138] = {.lex_state = 2036, .external_lex_state = 1},
  [139] = {.lex_state = 2037, .external_lex_state = 1},
  [140] = {.lex_state = 2036, .external_lex_state = 1},
  [141] = {.lex_state = 2036, .external_lex_state = 1},
  [142] = {.lex_state = 2037, .external_lex_state = 1},
  [143] = {.lex_state = 2037, .external_lex_state = 1},
  [144] = {.lex_state = 2036, .external_lex_state = 1},
  [145] = {.lex_state = 2037, .external_lex_state = 1},
  [146] = {.lex_state = 2037, .external_lex_state = 1},
  [147] = {.lex_state = 2037, .external_lex_state = 1},
  [148] = {.lex_state = 2036, .external_lex_state = 1},
  [149] = {.lex_state = 2037, .external_lex_state = 1},
  [150] = {.lex_state = 2037, .external_lex_state = 1},
  [151] = {.lex_state = 2037, .external_lex_state = 1},
  [152] = {.lex_state = 2036, .external_lex_state = 1},
  [153] = {.lex_state = 2032, .external_lex_state = 1},
  [154] = {.lex_state = 2036, .external_lex_state = 1},
  [155] = {.lex_state = 2036, .external_lex_state = 1},
  [156] = {.lex_state = 2037, .external_lex_state = 1},
  [157] = {.lex_state = 2036, .external_lex_state = 1},
  [158] = {.lex_state = 2037, .external_lex_state = 1},
  [159] = {.lex_state = 2037, .external_lex_state = 1},
  [160] = {.lex_state = 2037, .external_lex_state = 1},
  [161] = {.lex_state = 2037, .external_lex_state = 1},
  [162] = {.lex_state = 1076},
  [163] = {.lex_state = 2037, .external_lex_state = 1},
  [164] = {.lex_state = 2037, .external_lex_state = 1},
  [165] = {.lex_state = 1076},
  [166] = {.lex_state = 2037, .external_lex_state = 1},
  [167] = {.lex_state = 2037, .external_lex_state = 1},
  [168] = {.lex_state = 1076},
  [169] = {.lex_state = 2036, .external_lex_state = 1},
  [170] = {.lex_state = 1015, .external_lex_state = 1},
  [171] = {.lex_state = 2037, .external_lex_state = 1},
  [172] = {.lex_state = 2037, .external_lex_state = 1},
  [173] = {.lex_state = 2037, .external_lex_state = 1},
  [174] = {.lex_state = 2037, .external_lex_state = 1},
  [175] = {.lex_state = 2037, .external_lex_state = 1},
  [176] = {.lex_state = 2037, .external_lex_state = 1},
  [177] = {.lex_state = 2037, .external_lex_state = 1},
  [178] = {.lex_state = 2037, .external_lex_state = 1},
  [179] = {.lex_state = 2037, .external_lex_state = 1},
  [180] = {.lex_state = 2037, .external_lex_state = 1},
  [181] = {.lex_state = 2037, .external_lex_state = 1},
  [182] = {.lex_state = 2037, .external_lex_state = 1},
  [183] = {.lex_state = 2037, .external_lex_state = 1},
  [184] = {.lex_state = 2037, .external_lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1103},
  [187] = {.lex_state = 1103},
  [188] = {.lex_state = 1103},
  [189] = {.lex_state = 1103},
  [190] = {.lex_state = 1103},
  [191] = {.lex_state = 1103},
  [192] = {.lex_state = 1103},
  [193] = {.lex_state = 1103},
  [194] = {.lex_state = 1103},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1103},
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
  [211] = {.lex_state = 2037},
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
  [227] = {.lex_state = 1103},
  [228] = {.lex_state = 2050},
  [229] = {.lex_state = 2131},
  [230] = {.lex_state = 1020},
  [231] = {.lex_state = 2050},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 2050},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 2050},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1103},
  [241] = {.lex_state = 2050},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 1103},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 1076},
  [247] = {.lex_state = 1208},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 1076},
  [250] = {.lex_state = 1208},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 2050},
  [255] = {.lex_state = 1103},
  [256] = {.lex_state = 2050},
  [257] = {.lex_state = 1103},
  [258] = {.lex_state = 2050},
  [259] = {.lex_state = 1103},
  [260] = {.lex_state = 2050},
  [261] = {.lex_state = 2131},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 2131},
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
