#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 179
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 38

enum {
  sym__empty_line = 1,
  sym_rest_of_line_comment_delimiter_open = 2,
  aux_sym_rest_of_line_comment_token1 = 3,
  sym_rest_of_line_comment_text = 4,
  sym_old_style_twic_section_comment = 5,
  sym_tagpair_delimiter_open = 6,
  sym_tagpair_delimiter_close = 7,
  anon_sym_DQUOTE = 8,
  sym_tagpair_key = 9,
  aux_sym_tagpair_value_contents_token1 = 10,
  aux_sym_tagpair_value_contents_token2 = 11,
  sym_variation_delimiter_open = 12,
  sym_variation_delimiter_close = 13,
  sym_inline_comment_delimiter_open = 14,
  sym_inline_comment_delimiter_close = 15,
  sym_inline_comment_text = 16,
  sym_move_number = 17,
  sym__san_file = 18,
  sym__san_rank = 19,
  sym__san_promotable_piece = 20,
  sym__san_major_or_minor_piece = 21,
  sym__san_capture_symbol = 22,
  sym__san_promotion_symbol = 23,
  anon_sym_P = 24,
  anon_sym_ = 25,
  anon_sym_2 = 26,
  anon_sym_AT = 27,
  aux_sym__lan_move_by_coordinates_token1 = 28,
  sym__san_move_castle = 29,
  sym__san_null_move = 30,
  sym_check_or_mate_condition = 31,
  sym_annotation = 32,
  anon_sym_1 = 33,
  anon_sym_DASH = 34,
  aux_sym_result_code_token1 = 35,
  anon_sym_3 = 36,
  aux_sym_result_code_token2 = 37,
  anon_sym_4 = 38,
  aux_sym_result_code_token3 = 39,
  anon_sym_5 = 40,
  aux_sym_result_code_token4 = 41,
  anon_sym_6 = 42,
  aux_sym_result_code_token5 = 43,
  anon_sym_7 = 44,
  aux_sym_result_code_token6 = 45,
  anon_sym_8 = 46,
  aux_sym_result_code_token7 = 47,
  anon_sym_9 = 48,
  aux_sym_result_code_token8 = 49,
  anon_sym_O = 50,
  anon_sym_0 = 51,
  anon_sym_o = 52,
  anon_sym_SLASH = 53,
  aux_sym_result_code_token9 = 54,
  anon_sym_10 = 55,
  aux_sym_result_code_token10 = 56,
  anon_sym_11 = 57,
  aux_sym_result_code_token11 = 58,
  anon_sym_12 = 59,
  aux_sym_result_code_token12 = 60,
  anon_sym_13 = 61,
  aux_sym_result_code_token13 = 62,
  anon_sym_22 = 63,
  anon_sym_14 = 64,
  aux_sym_result_code_token14 = 65,
  anon_sym_STAR = 66,
  aux_sym_result_code_token15 = 67,
  anon_sym_15 = 68,
  aux_sym_result_code_token16 = 69,
  anon_sym_16 = 70,
  aux_sym_result_code_token17 = 71,
  anon_sym_17 = 72,
  aux_sym_result_code_token18 = 73,
  anon_sym_18 = 74,
  aux_sym_result_code_token19 = 75,
  sym_series_of_games = 76,
  sym_game = 77,
  sym_freestanding_comment = 78,
  sym_rest_of_line_comment = 79,
  sym_header = 80,
  sym_double_quote = 81,
  sym_tagpair = 82,
  sym__tagpair_value = 83,
  sym_tagpair_value_contents = 84,
  sym_movetext = 85,
  sym_variation_movetext = 86,
  sym__movetext_element = 87,
  sym__variation_movetext_element = 88,
  sym_variation = 89,
  sym_recursive_variation = 90,
  sym_inline_comment = 91,
  sym_san_move = 92,
  sym__san_move_piece = 93,
  sym_lan_move = 94,
  sym__san_square = 95,
  sym__san_promotion = 96,
  sym__san_move_pawn = 97,
  sym__san_drop_pawn = 98,
  sym__san_move_major_or_minor_piece = 99,
  sym__san_drop_major_or_minor_piece = 100,
  sym__lan_move_by_coordinates = 101,
  sym_result_code = 102,
  aux_sym_series_of_games_repeat1 = 103,
  aux_sym_freestanding_comment_repeat1 = 104,
  aux_sym_header_repeat1 = 105,
  aux_sym_tagpair_value_contents_repeat1 = 106,
  aux_sym_movetext_repeat1 = 107,
  aux_sym_variation_movetext_repeat1 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__empty_line] = "_empty_line",
  [sym_rest_of_line_comment_delimiter_open] = "rest_of_line_comment_delimiter_open",
  [aux_sym_rest_of_line_comment_token1] = "rest_of_line_comment_token1",
  [sym_rest_of_line_comment_text] = "rest_of_line_comment_text",
  [sym_old_style_twic_section_comment] = "old_style_twic_section_comment",
  [sym_tagpair_delimiter_open] = "tagpair_delimiter_open",
  [sym_tagpair_delimiter_close] = "tagpair_delimiter_close",
  [anon_sym_DQUOTE] = "\"",
  [sym_tagpair_key] = "tagpair_key",
  [aux_sym_tagpair_value_contents_token1] = "tagpair_value_contents_token1",
  [aux_sym_tagpair_value_contents_token2] = "tagpair_value_contents_token2",
  [sym_variation_delimiter_open] = "variation_delimiter_open",
  [sym_variation_delimiter_close] = "variation_delimiter_close",
  [sym_inline_comment_delimiter_open] = "inline_comment_delimiter_open",
  [sym_inline_comment_delimiter_close] = "inline_comment_delimiter_close",
  [sym_inline_comment_text] = "inline_comment_text",
  [sym_move_number] = "move_number",
  [sym__san_file] = "_san_file",
  [sym__san_rank] = "_san_rank",
  [sym__san_promotable_piece] = "_san_promotable_piece",
  [sym__san_major_or_minor_piece] = "_san_major_or_minor_piece",
  [sym__san_capture_symbol] = "_san_capture_symbol",
  [sym__san_promotion_symbol] = "_san_promotion_symbol",
  [anon_sym_P] = "P",
  [anon_sym_] = "♙",
  [anon_sym_2] = "♟︎",
  [anon_sym_AT] = "@",
  [aux_sym__lan_move_by_coordinates_token1] = "_lan_move_by_coordinates_token1",
  [sym__san_move_castle] = "_san_move_castle",
  [sym__san_null_move] = "_san_null_move",
  [sym_check_or_mate_condition] = "check_or_mate_condition",
  [sym_annotation] = "annotation",
  [anon_sym_1] = "1",
  [anon_sym_DASH] = "-",
  [aux_sym_result_code_token1] = "result_code_token1",
  [anon_sym_3] = "−",
  [aux_sym_result_code_token2] = "result_code_token2",
  [anon_sym_4] = "‐",
  [aux_sym_result_code_token3] = "result_code_token3",
  [anon_sym_5] = "‑",
  [aux_sym_result_code_token4] = "result_code_token4",
  [anon_sym_6] = "‒",
  [aux_sym_result_code_token5] = "result_code_token5",
  [anon_sym_7] = "–",
  [aux_sym_result_code_token6] = "result_code_token6",
  [anon_sym_8] = "—",
  [aux_sym_result_code_token7] = "result_code_token7",
  [anon_sym_9] = "➖",
  [aux_sym_result_code_token8] = "result_code_token8",
  [anon_sym_O] = "O",
  [anon_sym_0] = "0",
  [anon_sym_o] = "o",
  [anon_sym_SLASH] = "/",
  [aux_sym_result_code_token9] = "result_code_token9",
  [anon_sym_10] = "∕",
  [aux_sym_result_code_token10] = "result_code_token10",
  [anon_sym_11] = "⁄",
  [aux_sym_result_code_token11] = "result_code_token11",
  [anon_sym_12] = "⟋",
  [aux_sym_result_code_token12] = "result_code_token12",
  [anon_sym_13] = "⧸",
  [aux_sym_result_code_token13] = "result_code_token13",
  [anon_sym_22] = "2",
  [anon_sym_14] = "½",
  [aux_sym_result_code_token14] = "result_code_token14",
  [anon_sym_STAR] = "*",
  [aux_sym_result_code_token15] = "result_code_token15",
  [anon_sym_15] = "∗",
  [aux_sym_result_code_token16] = "result_code_token16",
  [anon_sym_16] = "✱",
  [aux_sym_result_code_token17] = "result_code_token17",
  [anon_sym_17] = "⁎",
  [aux_sym_result_code_token18] = "result_code_token18",
  [anon_sym_18] = "٭",
  [aux_sym_result_code_token19] = "result_code_token19",
  [sym_series_of_games] = "series_of_games",
  [sym_game] = "game",
  [sym_freestanding_comment] = "freestanding_comment",
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
  [sym_san_move] = "san_move",
  [sym__san_move_piece] = "_san_move_piece",
  [sym_lan_move] = "lan_move",
  [sym__san_square] = "_san_square",
  [sym__san_promotion] = "_san_promotion",
  [sym__san_move_pawn] = "_san_move_pawn",
  [sym__san_drop_pawn] = "_san_drop_pawn",
  [sym__san_move_major_or_minor_piece] = "_san_move_major_or_minor_piece",
  [sym__san_drop_major_or_minor_piece] = "_san_drop_major_or_minor_piece",
  [sym__lan_move_by_coordinates] = "_lan_move_by_coordinates",
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
  [sym_rest_of_line_comment_delimiter_open] = sym_rest_of_line_comment_delimiter_open,
  [aux_sym_rest_of_line_comment_token1] = aux_sym_rest_of_line_comment_token1,
  [sym_rest_of_line_comment_text] = sym_rest_of_line_comment_text,
  [sym_old_style_twic_section_comment] = sym_old_style_twic_section_comment,
  [sym_tagpair_delimiter_open] = sym_tagpair_delimiter_open,
  [sym_tagpair_delimiter_close] = sym_tagpair_delimiter_close,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_tagpair_key] = sym_tagpair_key,
  [aux_sym_tagpair_value_contents_token1] = aux_sym_tagpair_value_contents_token1,
  [aux_sym_tagpair_value_contents_token2] = aux_sym_tagpair_value_contents_token2,
  [sym_variation_delimiter_open] = sym_variation_delimiter_open,
  [sym_variation_delimiter_close] = sym_variation_delimiter_close,
  [sym_inline_comment_delimiter_open] = sym_inline_comment_delimiter_open,
  [sym_inline_comment_delimiter_close] = sym_inline_comment_delimiter_close,
  [sym_inline_comment_text] = sym_inline_comment_text,
  [sym_move_number] = sym_move_number,
  [sym__san_file] = sym__san_file,
  [sym__san_rank] = sym__san_rank,
  [sym__san_promotable_piece] = sym__san_promotable_piece,
  [sym__san_major_or_minor_piece] = sym__san_major_or_minor_piece,
  [sym__san_capture_symbol] = sym__san_capture_symbol,
  [sym__san_promotion_symbol] = sym__san_promotion_symbol,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__lan_move_by_coordinates_token1] = aux_sym__lan_move_by_coordinates_token1,
  [sym__san_move_castle] = sym__san_move_castle,
  [sym__san_null_move] = sym__san_null_move,
  [sym_check_or_mate_condition] = sym_check_or_mate_condition,
  [sym_annotation] = sym_annotation,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_result_code_token1] = aux_sym_result_code_token1,
  [anon_sym_3] = anon_sym_3,
  [aux_sym_result_code_token2] = aux_sym_result_code_token2,
  [anon_sym_4] = anon_sym_4,
  [aux_sym_result_code_token3] = aux_sym_result_code_token3,
  [anon_sym_5] = anon_sym_5,
  [aux_sym_result_code_token4] = aux_sym_result_code_token4,
  [anon_sym_6] = anon_sym_6,
  [aux_sym_result_code_token5] = aux_sym_result_code_token5,
  [anon_sym_7] = anon_sym_7,
  [aux_sym_result_code_token6] = aux_sym_result_code_token6,
  [anon_sym_8] = anon_sym_8,
  [aux_sym_result_code_token7] = aux_sym_result_code_token7,
  [anon_sym_9] = anon_sym_9,
  [aux_sym_result_code_token8] = aux_sym_result_code_token8,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_result_code_token9] = aux_sym_result_code_token9,
  [anon_sym_10] = anon_sym_10,
  [aux_sym_result_code_token10] = aux_sym_result_code_token10,
  [anon_sym_11] = anon_sym_11,
  [aux_sym_result_code_token11] = aux_sym_result_code_token11,
  [anon_sym_12] = anon_sym_12,
  [aux_sym_result_code_token12] = aux_sym_result_code_token12,
  [anon_sym_13] = anon_sym_13,
  [aux_sym_result_code_token13] = aux_sym_result_code_token13,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_14] = anon_sym_14,
  [aux_sym_result_code_token14] = aux_sym_result_code_token14,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_result_code_token15] = aux_sym_result_code_token15,
  [anon_sym_15] = anon_sym_15,
  [aux_sym_result_code_token16] = aux_sym_result_code_token16,
  [anon_sym_16] = anon_sym_16,
  [aux_sym_result_code_token17] = aux_sym_result_code_token17,
  [anon_sym_17] = anon_sym_17,
  [aux_sym_result_code_token18] = aux_sym_result_code_token18,
  [anon_sym_18] = anon_sym_18,
  [aux_sym_result_code_token19] = aux_sym_result_code_token19,
  [sym_series_of_games] = sym_series_of_games,
  [sym_game] = sym_game,
  [sym_freestanding_comment] = sym_freestanding_comment,
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
  [sym_san_move] = sym_san_move,
  [sym__san_move_piece] = sym__san_move_piece,
  [sym_lan_move] = sym_lan_move,
  [sym__san_square] = sym__san_square,
  [sym__san_promotion] = sym__san_promotion,
  [sym__san_move_pawn] = sym__san_move_pawn,
  [sym__san_drop_pawn] = sym__san_drop_pawn,
  [sym__san_move_major_or_minor_piece] = sym__san_move_major_or_minor_piece,
  [sym__san_drop_major_or_minor_piece] = sym__san_drop_major_or_minor_piece,
  [sym__lan_move_by_coordinates] = sym__lan_move_by_coordinates,
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
  [sym_rest_of_line_comment_delimiter_open] = {
    .visible = true,
    .named = true,
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
  [sym_tagpair_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tagpair_value_contents_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tagpair_value_contents_token2] = {
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
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
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_9] = {
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
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token13] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
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
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token16] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token17] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token18] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token19] = {
    .visible = false,
    .named = false,
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
  [sym_san_move] = {
    .visible = true,
    .named = true,
  },
  [sym__san_move_piece] = {
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

enum {
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
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 5},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 1},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 3},
  [22] = {.index = 36, .length = 2},
  [23] = {.index = 38, .length = 4},
  [24] = {.index = 42, .length = 10},
  [25] = {.index = 52, .length = 2},
  [26] = {.index = 54, .length = 3},
  [27] = {.index = 57, .length = 10},
  [28] = {.index = 67, .length = 3},
  [29] = {.index = 70, .length = 2},
  [30] = {.index = 72, .length = 2},
  [31] = {.index = 74, .length = 3},
  [32] = {.index = 77, .length = 4},
  [33] = {.index = 81, .length = 2},
  [34] = {.index = 83, .length = 5},
  [35] = {.index = 88, .length = 3},
  [36] = {.index = 91, .length = 3},
  [37] = {.index = 94, .length = 3},
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
    {field_san_move, 0},
  [12] =
    {field_lan_move, 0},
  [13] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_game, 0, .inherited = true},
  [15] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
  [17] =
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [19] =
    {field_variation_move_number, 0},
  [20] =
    {field_variation_annotation, 0},
  [21] =
    {field_variation_comment, 0},
  [22] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
  [27] =
    {field_variation_san_move, 0},
  [28] =
    {field_variation_lan_move, 0},
  [29] =
    {field_header, 0},
    {field_movetext, 1},
  [31] =
    {field_header, 0},
    {field_result_code, 1},
  [33] =
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0},
    {field_tagpair, 1, .inherited = true},
  [36] =
    {field_movetext, 0},
    {field_result_code, 1},
  [38] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
  [42] =
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
  [52] =
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 1},
  [54] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [57] =
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
  [67] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [70] =
    {field_header, 0},
    {field_movetext, 2},
  [72] =
    {field_header, 0},
    {field_result_code, 2},
  [74] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 2},
  [77] =
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [81] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [83] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [88] =
    {field_recursive_variation_content, 1},
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 2},
  [91] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [94] =
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
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 9,
  [16] = 9,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 9,
  [33] = 33,
  [34] = 34,
  [35] = 9,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
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
  [54] = 30,
  [55] = 55,
  [56] = 27,
  [57] = 25,
  [58] = 43,
  [59] = 59,
  [60] = 60,
  [61] = 40,
  [62] = 34,
  [63] = 29,
  [64] = 64,
  [65] = 9,
  [66] = 28,
  [67] = 31,
  [68] = 33,
  [69] = 30,
  [70] = 41,
  [71] = 37,
  [72] = 39,
  [73] = 38,
  [74] = 24,
  [75] = 43,
  [76] = 44,
  [77] = 46,
  [78] = 47,
  [79] = 79,
  [80] = 80,
  [81] = 49,
  [82] = 80,
  [83] = 55,
  [84] = 53,
  [85] = 52,
  [86] = 51,
  [87] = 50,
  [88] = 45,
  [89] = 42,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 123,
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 133,
  [141] = 135,
  [142] = 142,
  [143] = 142,
  [144] = 134,
  [145] = 145,
  [146] = 137,
  [147] = 138,
  [148] = 131,
  [149] = 139,
  [150] = 145,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 154,
  [163] = 163,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 156,
  [168] = 168,
  [169] = 157,
  [170] = 127,
  [171] = 158,
  [172] = 172,
  [173] = 173,
  [174] = 156,
  [175] = 157,
  [176] = 157,
  [177] = 159,
  [178] = 153,
};

static inline bool sym_annotation_character_set_1(int32_t c) {
  return (c < 8979
    ? (c < 8663
      ? (c < 8593
        ? (c < 8252
          ? c == 177
          : (c <= 8253 || (c >= 8263 && c <= 8265)))
        : (c <= 8594 || (c < 8660
          ? c == 8646
          : c <= 8660)))
      : (c <= 8663 || (c < 8804
        ? (c < 8723
          ? (c >= 8710 && c <= 8711)
          : (c <= 8723 || c == 8734))
        : (c <= 8804 || (c < 8869
          ? c == 8862
          : c <= 8869)))))
    : (c <= 8979 || (c < 9794
      ? (c < 9675
        ? (c < 9496
          ? c == 9492
          : (c <= 9496 || c == 9633))
        : (c <= 9675 || (c < 9727
          ? c == 9722
          : c <= 9727)))
      : (c <= 9794 || (c < 10752
        ? (c < 10218
          ? c == 10005
          : (c <= 10219 || c == 10227))
        : (c <= 10753 || (c < 11026
          ? (c >= 10865 && c <= 10866)
          : c <= 11027)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1466);
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '#') ADVANCE(1538);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(798);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == ')') ADVANCE(1490);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1541);
      if (lookahead == '-') ADVANCE(1563);
      if (lookahead == '/') ADVANCE(1589);
      if (lookahead == '0') ADVANCE(1584);
      if (lookahead == '1') ADVANCE(1560);
      if (lookahead == '2') ADVANCE(1599);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(1503);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1514);
      if (lookahead == '=') ADVANCE(1516);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1504);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1508);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1519);
      if (lookahead == '[') ADVANCE(1477);
      if (lookahead == '\\') ADVANCE(1460);
      if (lookahead == ']') ADVANCE(1479);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == '{') ADVANCE(1491);
      if (lookahead == '}') ADVANCE(1493);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8208) ADVANCE(1567);
      if (lookahead == 8209) ADVANCE(1569);
      if (lookahead == 8210) ADVANCE(1571);
      if (lookahead == 8211) ADVANCE(1573);
      if (lookahead == 8212) ADVANCE(1575);
      if (lookahead == 8260) ADVANCE(1593);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8722) ADVANCE(1565);
      if (lookahead == 8725) ADVANCE(1591);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == 10134) ADVANCE(1577);
      if (lookahead == 10187) ADVANCE(1595);
      if (lookahead == 10744) ADVANCE(1597);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1465)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(821);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(336);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(379);
      if (lookahead == 'P') ADVANCE(385);
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'U') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'b') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == 'q') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(412);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(397);
      if (lookahead == 's') ADVANCE(417);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'h') ADVANCE(505);
      if (lookahead == 'm') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 'q') ADVANCE(499);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 's') ADVANCE(417);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == 'D') ADVANCE(336);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(379);
      if (lookahead == 'P') ADVANCE(385);
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'U') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'b') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(338);
      if (lookahead == 'q') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(412);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'm') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(336);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'M') ADVANCE(379);
      if (lookahead == 'P') ADVANCE(385);
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'U') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'b') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == 'q') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(412);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1552);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(17);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(775);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '6') ADVANCE(195);
      if (lookahead == '7') ADVANCE(225);
      if (lookahead == '8') ADVANCE(253);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '1') ADVANCE(167);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '7') ADVANCE(201);
      if (lookahead == '8') ADVANCE(213);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '7') ADVANCE(201);
      if (lookahead == '8') ADVANCE(213);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '1') ADVANCE(181);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '7') ADVANCE(201);
      if (lookahead == '8') ADVANCE(213);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(232);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '5') ADVANCE(123);
      if (lookahead == '6') ADVANCE(159);
      if (lookahead == '7') ADVANCE(57);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == '7') ADVANCE(74);
      if (lookahead == ';') ADVANCE(1607);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '1') ADVANCE(248);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '5') ADVANCE(82);
      if (lookahead == '6') ADVANCE(190);
      if (lookahead == '7') ADVANCE(95);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '1') ADVANCE(248);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '5') ADVANCE(82);
      if (lookahead == '6') ADVANCE(190);
      if (lookahead == '7') ADVANCE(96);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(78);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '1') ADVANCE(145);
      if (lookahead == '6') ADVANCE(186);
      if (lookahead == '9') ADVANCE(521);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '1') ADVANCE(153);
      if (lookahead == '6') ADVANCE(186);
      if (lookahead == '9') ADVANCE(521);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == '7') ADVANCE(246);
      if (lookahead == '9') ADVANCE(527);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(257);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == '7') ADVANCE(250);
      if (lookahead == '9') ADVANCE(527);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(186);
      if (lookahead == '6') ADVANCE(127);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead == '7') ADVANCE(249);
      if (lookahead == '9') ADVANCE(528);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '3') ADVANCE(176);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(273);
      if (lookahead == '1') ADVANCE(281);
      if (lookahead == '3') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == '2') ADVANCE(102);
      if (lookahead == '7') ADVANCE(252);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == '1') ADVANCE(267);
      if (lookahead == '2') ADVANCE(267);
      if (lookahead == '3') ADVANCE(267);
      if (lookahead == '4') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == '1') ADVANCE(267);
      if (lookahead == '2') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '2') ADVANCE(100);
      if (lookahead == '7') ADVANCE(251);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == '1') ADVANCE(280);
      if (lookahead == '2') ADVANCE(280);
      if (lookahead == '3') ADVANCE(280);
      if (lookahead == '4') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == '1') ADVANCE(280);
      if (lookahead == '2') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(276);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(279);
      if (lookahead == '1') ADVANCE(279);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead == '3') ADVANCE(279);
      if (lookahead == '4') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(279);
      if (lookahead == '1') ADVANCE(279);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(235);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '6') ADVANCE(54);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(237);
      if (lookahead == '1') ADVANCE(56);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(238);
      if (lookahead == '1') ADVANCE(59);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '5') ADVANCE(123);
      if (lookahead == '6') ADVANCE(159);
      if (lookahead == '7') ADVANCE(57);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '1') ADVANCE(248);
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '5') ADVANCE(82);
      if (lookahead == '6') ADVANCE(190);
      if (lookahead == '7') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == '2') ADVANCE(111);
      if (lookahead == '7') ADVANCE(256);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '6') ADVANCE(195);
      if (lookahead == '7') ADVANCE(225);
      if (lookahead == '8') ADVANCE(253);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '6') ADVANCE(195);
      if (lookahead == '7') ADVANCE(225);
      if (lookahead == '8') ADVANCE(253);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(164);
      if (lookahead == '4') ADVANCE(139);
      if (lookahead == '5') ADVANCE(231);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == '8') ADVANCE(129);
      if (lookahead == '9') ADVANCE(187);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(86);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == ';') ADVANCE(1539);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '2') ADVANCE(146);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == '3') ADVANCE(514);
      if (lookahead == '4') ADVANCE(224);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(185);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(511);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(510);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == '7') ADVANCE(188);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(124);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '4') ADVANCE(174);
      if (lookahead == '5') ADVANCE(240);
      if (lookahead == '8') ADVANCE(130);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(117);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(211);
      if (lookahead == '2') ADVANCE(30);
      if (lookahead == '3') ADVANCE(515);
      if (lookahead == '6') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(211);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '3') ADVANCE(515);
      if (lookahead == '6') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(230);
      if (lookahead == '2') ADVANCE(225);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '4') ADVANCE(191);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '7') ADVANCE(188);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(150);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(182);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '4') ADVANCE(205);
      if (lookahead == '8') ADVANCE(135);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(200);
      if (lookahead == '3') ADVANCE(103);
      if (lookahead == '9') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(163);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(200);
      if (lookahead == '3') ADVANCE(103);
      if (lookahead == '9') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(163);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(200);
      if (lookahead == '3') ADVANCE(103);
      if (lookahead == '9') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(163);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(166);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(128);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(148);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(151);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(278);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(163);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '4') ADVANCE(192);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(172);
      if (lookahead == '7') ADVANCE(196);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == '4') ADVANCE(199);
      if (lookahead == '8') ADVANCE(130);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(227);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '4') ADVANCE(200);
      if (lookahead == '8') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(137);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(55);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '4') ADVANCE(163);
      if (lookahead == '5') ADVANCE(233);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(108);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == '3') ADVANCE(514);
      if (lookahead == '4') ADVANCE(224);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '4') ADVANCE(162);
      if (lookahead == '5') ADVANCE(233);
      if (lookahead == '8') ADVANCE(136);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(109);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(222);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(183);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(223);
      if (lookahead == '2') ADVANCE(31);
      if (lookahead == '3') ADVANCE(515);
      if (lookahead == '6') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '4') ADVANCE(208);
      if (lookahead == '8') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '3') ADVANCE(164);
      if (lookahead == '4') ADVANCE(141);
      if (lookahead == '5') ADVANCE(241);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == '8') ADVANCE(129);
      if (lookahead == '9') ADVANCE(187);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(119);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(164);
      if (lookahead == '4') ADVANCE(140);
      if (lookahead == '5') ADVANCE(231);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == '8') ADVANCE(157);
      if (lookahead == '9') ADVANCE(187);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(87);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '5') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(28);
      if (lookahead == '5') ADVANCE(243);
      if (lookahead == '6') ADVANCE(189);
      if (lookahead == '7') ADVANCE(79);
      if (lookahead == '8') ADVANCE(37);
      if (lookahead == '9') ADVANCE(226);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == '7') ADVANCE(133);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(50);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(209);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(124);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(64);
      if (lookahead == '7') ADVANCE(149);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '7') ADVANCE(138);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(53);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(150);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '5') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == '3') ADVANCE(270);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(126);
      if (lookahead == '9') ADVANCE(186);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(40);
      if (lookahead == '7') ADVANCE(147);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(76);
      if (lookahead == '3') ADVANCE(526);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '7') ADVANCE(277);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '7') ADVANCE(277);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(274);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(151);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(267);
      if (lookahead == '5') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '7') ADVANCE(277);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '7') ADVANCE(277);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(152);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(66);
      if (lookahead == '5') ADVANCE(243);
      if (lookahead == '6') ADVANCE(189);
      if (lookahead == '7') ADVANCE(80);
      if (lookahead == '8') ADVANCE(37);
      if (lookahead == '9') ADVANCE(226);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '7') ADVANCE(156);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '5') ADVANCE(267);
      if (lookahead == '7') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(170);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(516);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(173);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '4') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(161);
      if (lookahead == '8') ADVANCE(229);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(257);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(257);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead == '7') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(270);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(278);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(163);
      if (lookahead == '6') ADVANCE(163);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(144);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(163);
      if (lookahead == '7') ADVANCE(200);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(163);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(171);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(193);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(194);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead == '8') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(244);
      if (lookahead == '6') ADVANCE(178);
      if (lookahead == '7') ADVANCE(142);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(191);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(210);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(128);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(207);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(192);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead == '6') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead == '7') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(123);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(259);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(259);
      if (lookahead == '6') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(257);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(270);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(275);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(523);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(520);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(197);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(242);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(76);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(247);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(522);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(254);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(255);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(524);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(525);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(265);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(242);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(245);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(265);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(218);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead == '9') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(214);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(267);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(280);
      if (lookahead == '9') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(282);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(279);
      if (lookahead == '9') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(220);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(221);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(160);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(125);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(200);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(204);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(512);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(259);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(74);
      if (lookahead == ';') ADVANCE(1545);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(184);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(198);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(513);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(210);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(512);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(210);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(216);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(274);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(257);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(217);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1540);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1539);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1539);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1548);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead == 'f') ADVANCE(473);
      if (lookahead == 'q') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1545);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1607);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1603);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1623);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1619);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1611);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1615);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1529);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1546);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(533);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead == 'R') ADVANCE(375);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(343);
      if (lookahead == 'R') ADVANCE(375);
      if (lookahead == 'U') ADVANCE(425);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(382);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(375);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'y') ADVANCE(423);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'y') ADVANCE(432);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(386);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(474);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(412);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(366);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == 'q') ADVANCE(496);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(481);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(344);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 'q') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'q') ADVANCE(486);
      if (lookahead == 'x') ADVANCE(322);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(383);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(493);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(261);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(348);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(449);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(448);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(455);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(453);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(442);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(311);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(315);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(320);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(424);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(429);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(430);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(431);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 65038) ADVANCE(1525);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(281);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(234);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(236);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1533);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(538);
      if (lookahead == '.') ADVANCE(1495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(538);
      if (lookahead == '.') ADVANCE(1495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '.') ADVANCE(1498);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(788);
      if (lookahead == '\r') ADVANCE(789);
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1548);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1549);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1510);
      if (lookahead == 'N') ADVANCE(1511);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1509);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(788);
      if (lookahead == '\r') ADVANCE(539);
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1548);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1549);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1510);
      if (lookahead == 'N') ADVANCE(1511);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1509);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1475);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(553);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(555);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(557);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(560);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(561);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(565);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(572);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(576);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(580);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(581);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(584);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(585);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(586);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(589);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(590);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(597);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(602);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(605);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(618);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(619);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(621);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(623);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(628);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(630);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(632);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(634);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(635);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(636);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(637);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(640);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(641);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1476);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(776);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(661);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(662);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(664);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(669);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(671);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(672);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(674);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(676);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(692);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(699);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(700);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(702);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(704);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(717);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(724);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(725);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(726);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(727);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(728);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(731);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(732);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(735);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(739);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(740);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(741);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(744);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(748);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(750);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(753);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(754);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(756);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(757);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(758);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(759);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(760);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(761);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(763);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(764);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(765);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(766);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(767);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(769);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(770);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(771);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(772);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(773);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(774);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(780);
      if (lookahead == '\r') ADVANCE(777);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'N') ADVANCE(1513);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (lookahead == '[') ADVANCE(1477);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(777);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(780);
      if (lookahead == '\r') ADVANCE(777);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (lookahead == '[') ADVANCE(1477);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(777);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1467);
      if (lookahead == '\r') ADVANCE(777);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'N') ADVANCE(1513);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (lookahead == '[') ADVANCE(1477);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(777);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1467);
      if (lookahead == '\r') ADVANCE(779);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'N') ADVANCE(1513);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (lookahead == '[') ADVANCE(1477);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(777);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1471);
      if (lookahead == '\r') ADVANCE(781);
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1548);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1549);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1510);
      if (lookahead == 'N') ADVANCE(1511);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1509);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(781);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1473);
      if (lookahead == '\r') ADVANCE(782);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'N') ADVANCE(1513);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (lookahead == '[') ADVANCE(1477);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(782);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1473);
      if (lookahead == '\r') ADVANCE(782);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (lookahead == '[') ADVANCE(1477);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(782);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1472);
      if (lookahead == '\r') ADVANCE(784);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == ')') ADVANCE(1490);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'N') ADVANCE(1513);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(784);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(1472);
      if (lookahead == '\r') ADVANCE(784);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == ')') ADVANCE(1490);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(784);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(1468);
      if (lookahead == '\r') ADVANCE(782);
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'N') ADVANCE(1513);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (lookahead == '[') ADVANCE(1477);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(782);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 787:
      if (lookahead == ' ') SKIP(787)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1482);
      if (lookahead != 0) ADVANCE(1483);
      END_STATE();
    case 788:
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-') ADVANCE(1547);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1549);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1510);
      if (lookahead == 'N') ADVANCE(1511);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1509);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if ((8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1548);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(789);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 789:
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1548);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1549);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1510);
      if (lookahead == 'N') ADVANCE(1511);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1509);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(789);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 790:
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '#') ADVANCE(1538);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(810);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == ')') ADVANCE(1490);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1542);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1518);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1504);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1508);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1507);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(793);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 791:
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '#') ADVANCE(1538);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(810);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == ')') ADVANCE(1490);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1542);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1514);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(793);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 792:
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '#') ADVANCE(1538);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(812);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == ')') ADVANCE(1490);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1542);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1530);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1514);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1518);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1504);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1508);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1507);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(793);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 793:
      if (lookahead == '!') ADVANCE(1558);
      if (lookahead == '$') ADVANCE(1459);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == ')') ADVANCE(1490);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(814);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1553);
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1562);
      if (lookahead == '<') ADVANCE(1162);
      if (lookahead == '=') ADVANCE(1557);
      if (lookahead == '?') ADVANCE(1558);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'N') ADVANCE(1513);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1521);
      if (lookahead == 'R') ADVANCE(1512);
      if (lookahead == 'T') ADVANCE(1169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1457);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == 'p') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1491);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1543);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(793);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 794:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '\\') ADVANCE(1460);
      if (lookahead == ']') ADVANCE(1480);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1484);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(796)
      if (lookahead != 0) ADVANCE(1486);
      END_STATE();
    case 795:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '\\') ADVANCE(1460);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1485);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(797)
      if (lookahead != 0) ADVANCE(1486);
      END_STATE();
    case 796:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == ']') ADVANCE(1479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      END_STATE();
    case 797:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      END_STATE();
    case 798:
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'd') ADVANCE(1178);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'h') ADVANCE(1179);
      if (lookahead == 'l') ADVANCE(1317);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(1209);
      if (lookahead == 'p') ADVANCE(1283);
      if (lookahead == 's') ADVANCE(1321);
      END_STATE();
    case 799:
      if (lookahead == '#') ADVANCE(894);
      if (lookahead == 'p') ADVANCE(1296);
      END_STATE();
    case 800:
      if (lookahead == '#') ADVANCE(913);
      if (lookahead == 'd') ADVANCE(1193);
      if (lookahead == 'h') ADVANCE(1422);
      if (lookahead == 'm') ADVANCE(1213);
      if (lookahead == 'n') ADVANCE(1212);
      END_STATE();
    case 801:
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == 'D') ADVANCE(1235);
      if (lookahead == 'L') ADVANCE(1186);
      if (lookahead == 'M') ADVANCE(1281);
      if (lookahead == 'P') ADVANCE(1298);
      if (lookahead == 'R') ADVANCE(1187);
      if (lookahead == 'S') ADVANCE(1256);
      if (lookahead == 'U') ADVANCE(1327);
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'b') ADVANCE(1277);
      if (lookahead == 'c') ADVANCE(1276);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'e') ADVANCE(1335);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'h') ADVANCE(1174);
      if (lookahead == 'i') ADVANCE(1303);
      if (lookahead == 'l') ADVANCE(1226);
      if (lookahead == 'm') ADVANCE(1184);
      if (lookahead == 'n') ADVANCE(1176);
      if (lookahead == 'p') ADVANCE(1228);
      if (lookahead == 'q') ADVANCE(1400);
      if (lookahead == 'r') ADVANCE(1182);
      if (lookahead == 's') ADVANCE(1286);
      if (lookahead == 'u') ADVANCE(1183);
      if (lookahead == 'x') ADVANCE(1318);
      END_STATE();
    case 802:
      if (lookahead == '#') ADVANCE(1021);
      if (lookahead == 'e') ADVANCE(1421);
      if (lookahead == 'q') ADVANCE(1417);
      END_STATE();
    case 803:
      if (lookahead == '#') ADVANCE(1071);
      if (lookahead == 'e') ADVANCE(1342);
      END_STATE();
    case 804:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == 'd') ADVANCE(1201);
      if (lookahead == 'h') ADVANCE(1425);
      if (lookahead == 'm') ADVANCE(1225);
      if (lookahead == 'n') ADVANCE(1224);
      if (lookahead == 'p') ADVANCE(1300);
      if (lookahead == 's') ADVANCE(1326);
      END_STATE();
    case 805:
      if (lookahead == '#') ADVANCE(934);
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'd') ADVANCE(1195);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'h') ADVANCE(1180);
      if (lookahead == 'l') ADVANCE(1317);
      if (lookahead == 'm') ADVANCE(1218);
      if (lookahead == 'n') ADVANCE(1219);
      if (lookahead == 's') ADVANCE(1321);
      END_STATE();
    case 806:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'h') ADVANCE(1424);
      if (lookahead == 'm') ADVANCE(1223);
      if (lookahead == 'n') ADVANCE(1222);
      if (lookahead == 's') ADVANCE(1324);
      END_STATE();
    case 807:
      if (lookahead == '#') ADVANCE(950);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'h') ADVANCE(1424);
      if (lookahead == 'm') ADVANCE(1223);
      if (lookahead == 'n') ADVANCE(1222);
      if (lookahead == 'p') ADVANCE(1296);
      if (lookahead == 's') ADVANCE(1324);
      END_STATE();
    case 808:
      if (lookahead == '#') ADVANCE(935);
      if (lookahead == 'p') ADVANCE(1300);
      END_STATE();
    case 809:
      if (lookahead == '#') ADVANCE(941);
      if (lookahead == 'd') ADVANCE(1198);
      if (lookahead == 'h') ADVANCE(1423);
      if (lookahead == 'm') ADVANCE(1221);
      if (lookahead == 'n') ADVANCE(1220);
      END_STATE();
    case 810:
      if (lookahead == '#') ADVANCE(951);
      if (lookahead == 'D') ADVANCE(1235);
      if (lookahead == 'L') ADVANCE(1186);
      if (lookahead == 'M') ADVANCE(1281);
      if (lookahead == 'P') ADVANCE(1298);
      if (lookahead == 'R') ADVANCE(1187);
      if (lookahead == 'S') ADVANCE(1256);
      if (lookahead == 'U') ADVANCE(1327);
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'b') ADVANCE(1277);
      if (lookahead == 'c') ADVANCE(1276);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'e') ADVANCE(1335);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'h') ADVANCE(1174);
      if (lookahead == 'i') ADVANCE(1303);
      if (lookahead == 'l') ADVANCE(1226);
      if (lookahead == 'm') ADVANCE(1184);
      if (lookahead == 'n') ADVANCE(1176);
      if (lookahead == 'p') ADVANCE(1229);
      if (lookahead == 'q') ADVANCE(1400);
      if (lookahead == 'r') ADVANCE(1182);
      if (lookahead == 's') ADVANCE(1286);
      if (lookahead == 'u') ADVANCE(1183);
      if (lookahead == 'x') ADVANCE(1318);
      END_STATE();
    case 811:
      if (lookahead == '#') ADVANCE(945);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'h') ADVANCE(1424);
      if (lookahead == 'm') ADVANCE(1223);
      if (lookahead == 'n') ADVANCE(1222);
      END_STATE();
    case 812:
      if (lookahead == '#') ADVANCE(952);
      if (lookahead == 'D') ADVANCE(1235);
      if (lookahead == 'L') ADVANCE(1186);
      if (lookahead == 'M') ADVANCE(1281);
      if (lookahead == 'P') ADVANCE(1298);
      if (lookahead == 'R') ADVANCE(1187);
      if (lookahead == 'S') ADVANCE(1256);
      if (lookahead == 'U') ADVANCE(1327);
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'b') ADVANCE(1277);
      if (lookahead == 'c') ADVANCE(1276);
      if (lookahead == 'd') ADVANCE(1202);
      if (lookahead == 'e') ADVANCE(1335);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'h') ADVANCE(1175);
      if (lookahead == 'i') ADVANCE(1303);
      if (lookahead == 'l') ADVANCE(1226);
      if (lookahead == 'm') ADVANCE(1185);
      if (lookahead == 'n') ADVANCE(1177);
      if (lookahead == 'p') ADVANCE(1229);
      if (lookahead == 'q') ADVANCE(1400);
      if (lookahead == 'r') ADVANCE(1182);
      if (lookahead == 's') ADVANCE(1286);
      if (lookahead == 'u') ADVANCE(1183);
      if (lookahead == 'x') ADVANCE(1318);
      END_STATE();
    case 813:
      if (lookahead == '&') ADVANCE(805);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '-') ADVANCE(1563);
      if (lookahead == '/') ADVANCE(1589);
      if (lookahead == '0') ADVANCE(1582);
      if (lookahead == '1') ADVANCE(1560);
      if (lookahead == '2') ADVANCE(1599);
      if (lookahead == 'O') ADVANCE(1579);
      if (lookahead == 'o') ADVANCE(1586);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8208) ADVANCE(1567);
      if (lookahead == 8209) ADVANCE(1569);
      if (lookahead == 8210) ADVANCE(1571);
      if (lookahead == 8211) ADVANCE(1573);
      if (lookahead == 8212) ADVANCE(1575);
      if (lookahead == 8260) ADVANCE(1593);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8722) ADVANCE(1565);
      if (lookahead == 8725) ADVANCE(1591);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == 10134) ADVANCE(1577);
      if (lookahead == 10187) ADVANCE(1595);
      if (lookahead == 10744) ADVANCE(1597);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(813)
      END_STATE();
    case 814:
      if (lookahead == '&') ADVANCE(806);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(817);
      END_STATE();
    case 815:
      if (lookahead == '&') ADVANCE(803);
      END_STATE();
    case 816:
      if (lookahead == '&') ADVANCE(808);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1543);
      END_STATE();
    case 817:
      if (lookahead == '&') ADVANCE(811);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      END_STATE();
    case 818:
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 819:
      if (lookahead == '-') ADVANCE(818);
      END_STATE();
    case 820:
      if (lookahead == '-') ADVANCE(819);
      END_STATE();
    case 821:
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 822:
      if (lookahead == '-') ADVANCE(820);
      if (lookahead == '.') ADVANCE(1498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      END_STATE();
    case 823:
      if (lookahead == '.') ADVANCE(1498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      END_STATE();
    case 824:
      if (lookahead == '.') ADVANCE(1498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 825:
      if (lookahead == '.') ADVANCE(1543);
      END_STATE();
    case 826:
      if (lookahead == '0') ADVANCE(838);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 827:
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '1') ADVANCE(844);
      if (lookahead == '6') ADVANCE(852);
      if (lookahead == '7') ADVANCE(853);
      END_STATE();
    case 828:
      if (lookahead == '0') ADVANCE(895);
      if (lookahead == '2') ADVANCE(902);
      if (lookahead == '7') ADVANCE(1001);
      if (lookahead == '9') ADVANCE(1449);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1124);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1122);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1126);
      END_STATE();
    case 829:
      if (lookahead == '0') ADVANCE(830);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '7') ADVANCE(1082);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 830:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(1018);
      if (lookahead == '2') ADVANCE(929);
      if (lookahead == '7') ADVANCE(1048);
      if (lookahead == '8') ADVANCE(1070);
      END_STATE();
    case 831:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(1025);
      if (lookahead == '2') ADVANCE(929);
      if (lookahead == '7') ADVANCE(1048);
      if (lookahead == '8') ADVANCE(1070);
      END_STATE();
    case 832:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(1030);
      if (lookahead == '2') ADVANCE(929);
      if (lookahead == '7') ADVANCE(1048);
      if (lookahead == '8') ADVANCE(1070);
      END_STATE();
    case 833:
      if (lookahead == '0') ADVANCE(928);
      if (lookahead == '1') ADVANCE(1107);
      if (lookahead == '2') ADVANCE(836);
      if (lookahead == '3') ADVANCE(922);
      if (lookahead == '5') ADVANCE(899);
      if (lookahead == '6') ADVANCE(1045);
      if (lookahead == '7') ADVANCE(925);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(897);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1146);
      END_STATE();
    case 834:
      if (lookahead == '0') ADVANCE(928);
      if (lookahead == '1') ADVANCE(1107);
      if (lookahead == '2') ADVANCE(836);
      if (lookahead == '3') ADVANCE(922);
      if (lookahead == '5') ADVANCE(899);
      if (lookahead == '6') ADVANCE(1045);
      if (lookahead == '7') ADVANCE(926);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(898);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1146);
      END_STATE();
    case 835:
      if (lookahead == '0') ADVANCE(918);
      END_STATE();
    case 836:
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '1') ADVANCE(981);
      if (lookahead == '6') ADVANCE(1038);
      if (lookahead == '9') ADVANCE(1443);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      END_STATE();
    case 837:
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '1') ADVANCE(984);
      if (lookahead == '6') ADVANCE(1038);
      if (lookahead == '9') ADVANCE(1443);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      END_STATE();
    case 838:
      if (lookahead == '0') ADVANCE(1016);
      if (lookahead == '1') ADVANCE(999);
      if (lookahead == '7') ADVANCE(1031);
      END_STATE();
    case 839:
      if (lookahead == '0') ADVANCE(1016);
      if (lookahead == '1') ADVANCE(1019);
      if (lookahead == '7') ADVANCE(1031);
      END_STATE();
    case 840:
      if (lookahead == '0') ADVANCE(931);
      if (lookahead == '2') ADVANCE(900);
      if (lookahead == '7') ADVANCE(1118);
      if (lookahead == '9') ADVANCE(1451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1152);
      END_STATE();
    case 841:
      if (lookahead == '0') ADVANCE(931);
      if (lookahead == '2') ADVANCE(900);
      if (lookahead == '7') ADVANCE(1120);
      if (lookahead == '9') ADVANCE(1451);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1152);
      END_STATE();
    case 842:
      if (lookahead == '0') ADVANCE(858);
      if (lookahead == '7') ADVANCE(911);
      if (lookahead == ';') ADVANCE(1606);
      END_STATE();
    case 843:
      if (lookahead == '0') ADVANCE(936);
      END_STATE();
    case 844:
      if (lookahead == '0') ADVANCE(1125);
      if (lookahead == '1') ADVANCE(1125);
      if (lookahead == '2') ADVANCE(1125);
      END_STATE();
    case 845:
      if (lookahead == '0') ADVANCE(1125);
      if (lookahead == '1') ADVANCE(1125);
      if (lookahead == '2') ADVANCE(1125);
      if (lookahead == '3') ADVANCE(1125);
      if (lookahead == '4') ADVANCE(1125);
      END_STATE();
    case 846:
      if (lookahead == '0') ADVANCE(916);
      END_STATE();
    case 847:
      if (lookahead == '0') ADVANCE(905);
      END_STATE();
    case 848:
      if (lookahead == '0') ADVANCE(965);
      END_STATE();
    case 849:
      if (lookahead == '0') ADVANCE(914);
      if (lookahead == '2') ADVANCE(919);
      if (lookahead == '7') ADVANCE(1106);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1123);
      END_STATE();
    case 850:
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '1') ADVANCE(1123);
      if (lookahead == '2') ADVANCE(1123);
      END_STATE();
    case 851:
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '1') ADVANCE(1123);
      if (lookahead == '2') ADVANCE(1123);
      if (lookahead == '3') ADVANCE(1123);
      if (lookahead == '4') ADVANCE(1123);
      END_STATE();
    case 852:
      if (lookahead == '0') ADVANCE(1130);
      END_STATE();
    case 853:
      if (lookahead == '0') ADVANCE(1131);
      END_STATE();
    case 854:
      if (lookahead == '0') ADVANCE(1134);
      if (lookahead == '1') ADVANCE(1138);
      if (lookahead == '2') ADVANCE(1139);
      if (lookahead == '3') ADVANCE(1140);
      if (lookahead == '4') ADVANCE(1141);
      END_STATE();
    case 855:
      if (lookahead == '0') ADVANCE(1160);
      if (lookahead == '1') ADVANCE(1160);
      if (lookahead == '2') ADVANCE(1160);
      END_STATE();
    case 856:
      if (lookahead == '0') ADVANCE(1160);
      if (lookahead == '1') ADVANCE(1160);
      if (lookahead == '2') ADVANCE(1160);
      if (lookahead == '3') ADVANCE(1160);
      if (lookahead == '4') ADVANCE(1160);
      END_STATE();
    case 857:
      if (lookahead == '0') ADVANCE(1139);
      if (lookahead == '1') ADVANCE(1140);
      if (lookahead == '2') ADVANCE(1141);
      END_STATE();
    case 858:
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '1') ADVANCE(1147);
      END_STATE();
    case 859:
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == '2') ADVANCE(1147);
      END_STATE();
    case 860:
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1147);
      END_STATE();
    case 861:
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '3') ADVANCE(1147);
      END_STATE();
    case 862:
      if (lookahead == '0') ADVANCE(1146);
      if (lookahead == '1') ADVANCE(1146);
      if (lookahead == '2') ADVANCE(1146);
      END_STATE();
    case 863:
      if (lookahead == '0') ADVANCE(1146);
      if (lookahead == '1') ADVANCE(1146);
      if (lookahead == '2') ADVANCE(1146);
      if (lookahead == '3') ADVANCE(1146);
      if (lookahead == '4') ADVANCE(1146);
      END_STATE();
    case 864:
      if (lookahead == '0') ADVANCE(1156);
      if (lookahead == '1') ADVANCE(1161);
      if (lookahead == '3') ADVANCE(1155);
      END_STATE();
    case 865:
      if (lookahead == '0') ADVANCE(1152);
      END_STATE();
    case 866:
      if (lookahead == '0') ADVANCE(1153);
      if (lookahead == '1') ADVANCE(1153);
      if (lookahead == '2') ADVANCE(1153);
      END_STATE();
    case 867:
      if (lookahead == '0') ADVANCE(1153);
      if (lookahead == '1') ADVANCE(1153);
      if (lookahead == '2') ADVANCE(1153);
      if (lookahead == '3') ADVANCE(1153);
      if (lookahead == '4') ADVANCE(1153);
      END_STATE();
    case 868:
      if (lookahead == '0') ADVANCE(1154);
      END_STATE();
    case 869:
      if (lookahead == '0') ADVANCE(1159);
      if (lookahead == '1') ADVANCE(1159);
      if (lookahead == '2') ADVANCE(1159);
      END_STATE();
    case 870:
      if (lookahead == '0') ADVANCE(1159);
      if (lookahead == '1') ADVANCE(1159);
      if (lookahead == '2') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1159);
      if (lookahead == '4') ADVANCE(1159);
      END_STATE();
    case 871:
      if (lookahead == '0') ADVANCE(839);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 872:
      if (lookahead == '0') ADVANCE(1090);
      if (lookahead == '1') ADVANCE(850);
      END_STATE();
    case 873:
      if (lookahead == '0') ADVANCE(939);
      END_STATE();
    case 874:
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(857);
      if (lookahead == '6') ADVANCE(852);
      if (lookahead == '7') ADVANCE(853);
      END_STATE();
    case 875:
      if (lookahead == '0') ADVANCE(1093);
      if (lookahead == '1') ADVANCE(855);
      END_STATE();
    case 876:
      if (lookahead == '0') ADVANCE(1055);
      if (lookahead == '3') ADVANCE(1006);
      END_STATE();
    case 877:
      if (lookahead == '0') ADVANCE(1095);
      if (lookahead == '1') ADVANCE(862);
      if (lookahead == '5') ADVANCE(975);
      if (lookahead == '6') ADVANCE(1009);
      if (lookahead == '7') ADVANCE(853);
      END_STATE();
    case 878:
      if (lookahead == '0') ADVANCE(1038);
      if (lookahead == '6') ADVANCE(979);
      END_STATE();
    case 879:
      if (lookahead == '0') ADVANCE(1094);
      if (lookahead == '1') ADVANCE(859);
      END_STATE();
    case 880:
      if (lookahead == '0') ADVANCE(1094);
      if (lookahead == '1') ADVANCE(859);
      if (lookahead == '6') ADVANCE(865);
      END_STATE();
    case 881:
      if (lookahead == '0') ADVANCE(1097);
      if (lookahead == '1') ADVANCE(866);
      if (lookahead == '6') ADVANCE(868);
      END_STATE();
    case 882:
      if (lookahead == '0') ADVANCE(1099);
      if (lookahead == '1') ADVANCE(869);
      if (lookahead == '5') ADVANCE(975);
      if (lookahead == '6') ADVANCE(1009);
      if (lookahead == '7') ADVANCE(853);
      END_STATE();
    case 883:
      if (lookahead == '0') ADVANCE(920);
      if (lookahead == '2') ADVANCE(917);
      if (lookahead == '7') ADVANCE(1002);
      if (lookahead == '9') ADVANCE(1449);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1126);
      END_STATE();
    case 884:
      if (lookahead == '0') ADVANCE(933);
      if (lookahead == '1') ADVANCE(1107);
      if (lookahead == '2') ADVANCE(837);
      if (lookahead == '3') ADVANCE(922);
      if (lookahead == '5') ADVANCE(899);
      if (lookahead == '6') ADVANCE(1045);
      if (lookahead == '7') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(898);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1159);
      END_STATE();
    case 885:
      if (lookahead == '0') ADVANCE(932);
      if (lookahead == '2') ADVANCE(915);
      if (lookahead == '7') ADVANCE(1116);
      if (lookahead == '9') ADVANCE(1452);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1153);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1154);
      END_STATE();
    case 886:
      if (lookahead == '0') ADVANCE(940);
      END_STATE();
    case 887:
      if (lookahead == '0') ADVANCE(923);
      if (lookahead == '2') ADVANCE(921);
      if (lookahead == '7') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1160);
      END_STATE();
    case 888:
      if (lookahead == '0') ADVANCE(944);
      END_STATE();
    case 889:
      if (lookahead == '0') ADVANCE(930);
      if (lookahead == '2') ADVANCE(924);
      if (lookahead == '7') ADVANCE(1117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 890:
      if (lookahead == '0') ADVANCE(831);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '7') ADVANCE(1082);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 891:
      if (lookahead == '0') ADVANCE(942);
      END_STATE();
    case 892:
      if (lookahead == '0') ADVANCE(832);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '7') ADVANCE(1082);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 893:
      if (lookahead == '1') ADVANCE(826);
      if (lookahead == '4') ADVANCE(953);
      if (lookahead == '5') ADVANCE(1088);
      if (lookahead == '8') ADVANCE(958);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(901);
      END_STATE();
    case 894:
      if (lookahead == '1') ADVANCE(846);
      if (lookahead == '4') ADVANCE(1003);
      if (lookahead == '5') ADVANCE(1100);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(937);
      END_STATE();
    case 895:
      if (lookahead == '1') ADVANCE(845);
      if (lookahead == '4') ADVANCE(1034);
      END_STATE();
    case 896:
      if (lookahead == '1') ADVANCE(829);
      if (lookahead == '3') ADVANCE(1012);
      if (lookahead == '4') ADVANCE(954);
      if (lookahead == '5') ADVANCE(1101);
      if (lookahead == '6') ADVANCE(864);
      if (lookahead == '8') ADVANCE(962);
      if (lookahead == '9') ADVANCE(1032);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(943);
      END_STATE();
    case 897:
      if (lookahead == '1') ADVANCE(975);
      if (lookahead == ';') ADVANCE(814);
      END_STATE();
    case 898:
      if (lookahead == '1') ADVANCE(975);
      if (lookahead == ';') ADVANCE(1542);
      END_STATE();
    case 899:
      if (lookahead == '1') ADVANCE(1040);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(910);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1431);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1429);
      END_STATE();
    case 900:
      if (lookahead == '1') ADVANCE(976);
      END_STATE();
    case 901:
      if (lookahead == '1') ADVANCE(1062);
      if (lookahead == '2') ADVANCE(828);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1437);
      END_STATE();
    case 902:
      if (lookahead == '1') ADVANCE(968);
      END_STATE();
    case 903:
      if (lookahead == '1') ADVANCE(858);
      if (lookahead == '2') ADVANCE(980);
      if (lookahead == '3') ADVANCE(1038);
      END_STATE();
    case 904:
      if (lookahead == '1') ADVANCE(858);
      if (lookahead == '2') ADVANCE(983);
      if (lookahead == '3') ADVANCE(1038);
      END_STATE();
    case 905:
      if (lookahead == '1') ADVANCE(1017);
      END_STATE();
    case 906:
      if (lookahead == '1') ADVANCE(970);
      END_STATE();
    case 907:
      if (lookahead == '1') ADVANCE(835);
      if (lookahead == '4') ADVANCE(1058);
      if (lookahead == '8') ADVANCE(963);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(964);
      END_STATE();
    case 908:
      if (lookahead == '1') ADVANCE(843);
      if (lookahead == '4') ADVANCE(1011);
      if (lookahead == '5') ADVANCE(1102);
      if (lookahead == '8') ADVANCE(996);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(946);
      END_STATE();
    case 909:
      if (lookahead == '1') ADVANCE(1135);
      END_STATE();
    case 910:
      if (lookahead == '1') ADVANCE(1147);
      END_STATE();
    case 911:
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == '2') ADVANCE(1147);
      END_STATE();
    case 912:
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1127);
      END_STATE();
    case 913:
      if (lookahead == '1') ADVANCE(847);
      if (lookahead == '4') ADVANCE(1052);
      if (lookahead == '8') ADVANCE(959);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(960);
      END_STATE();
    case 914:
      if (lookahead == '1') ADVANCE(851);
      END_STATE();
    case 915:
      if (lookahead == '1') ADVANCE(982);
      END_STATE();
    case 916:
      if (lookahead == '1') ADVANCE(998);
      END_STATE();
    case 917:
      if (lookahead == '1') ADVANCE(973);
      END_STATE();
    case 918:
      if (lookahead == '1') ADVANCE(1027);
      if (lookahead == '7') ADVANCE(1046);
      END_STATE();
    case 919:
      if (lookahead == '1') ADVANCE(971);
      END_STATE();
    case 920:
      if (lookahead == '1') ADVANCE(854);
      if (lookahead == '4') ADVANCE(1034);
      END_STATE();
    case 921:
      if (lookahead == '1') ADVANCE(972);
      END_STATE();
    case 922:
      if (lookahead == '1') ADVANCE(1007);
      END_STATE();
    case 923:
      if (lookahead == '1') ADVANCE(856);
      END_STATE();
    case 924:
      if (lookahead == '1') ADVANCE(974);
      END_STATE();
    case 925:
      if (lookahead == '1') ADVANCE(1055);
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1059);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 926:
      if (lookahead == '1') ADVANCE(1055);
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1060);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 927:
      if (lookahead == '1') ADVANCE(1055);
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1061);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 928:
      if (lookahead == '1') ADVANCE(863);
      if (lookahead == '3') ADVANCE(1434);
      if (lookahead == '4') ADVANCE(1083);
      END_STATE();
    case 929:
      if (lookahead == '1') ADVANCE(1094);
      if (lookahead == '2') ADVANCE(1082);
      END_STATE();
    case 930:
      if (lookahead == '1') ADVANCE(860);
      END_STATE();
    case 931:
      if (lookahead == '1') ADVANCE(860);
      if (lookahead == '4') ADVANCE(1041);
      END_STATE();
    case 932:
      if (lookahead == '1') ADVANCE(867);
      if (lookahead == '4') ADVANCE(1042);
      END_STATE();
    case 933:
      if (lookahead == '1') ADVANCE(870);
      if (lookahead == '3') ADVANCE(1434);
      if (lookahead == '4') ADVANCE(1083);
      END_STATE();
    case 934:
      if (lookahead == '1') ADVANCE(871);
      if (lookahead == '4') ADVANCE(957);
      if (lookahead == '8') ADVANCE(993);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(961);
      END_STATE();
    case 935:
      if (lookahead == '1') ADVANCE(873);
      if (lookahead == '4') ADVANCE(1007);
      if (lookahead == '5') ADVANCE(1102);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(947);
      END_STATE();
    case 936:
      if (lookahead == '1') ADVANCE(1023);
      if (lookahead == '7') ADVANCE(1047);
      END_STATE();
    case 937:
      if (lookahead == '1') ADVANCE(1076);
      if (lookahead == '2') ADVANCE(1080);
      END_STATE();
    case 938:
      if (lookahead == '1') ADVANCE(1076);
      if (lookahead == '2') ADVANCE(841);
      END_STATE();
    case 939:
      if (lookahead == '1') ADVANCE(1020);
      END_STATE();
    case 940:
      if (lookahead == '1') ADVANCE(1024);
      END_STATE();
    case 941:
      if (lookahead == '1') ADVANCE(886);
      if (lookahead == '4') ADVANCE(1054);
      if (lookahead == '8') ADVANCE(994);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(985);
      END_STATE();
    case 942:
      if (lookahead == '1') ADVANCE(1029);
      if (lookahead == '7') ADVANCE(1046);
      END_STATE();
    case 943:
      if (lookahead == '1') ADVANCE(1077);
      if (lookahead == '2') ADVANCE(833);
      if (lookahead == '3') ADVANCE(1435);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(912);
      END_STATE();
    case 944:
      if (lookahead == '1') ADVANCE(1026);
      END_STATE();
    case 945:
      if (lookahead == '1') ADVANCE(888);
      if (lookahead == '4') ADVANCE(1055);
      if (lookahead == '8') ADVANCE(997);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(990);
      END_STATE();
    case 946:
      if (lookahead == '1') ADVANCE(1078);
      if (lookahead == '2') ADVANCE(885);
      END_STATE();
    case 947:
      if (lookahead == '1') ADVANCE(1078);
      if (lookahead == '2') ADVANCE(1087);
      END_STATE();
    case 948:
      if (lookahead == '1') ADVANCE(1079);
      if (lookahead == '2') ADVANCE(834);
      if (lookahead == '3') ADVANCE(1435);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(912);
      END_STATE();
    case 949:
      if (lookahead == '1') ADVANCE(1079);
      if (lookahead == '2') ADVANCE(884);
      if (lookahead == '3') ADVANCE(1435);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(912);
      END_STATE();
    case 950:
      if (lookahead == '1') ADVANCE(891);
      if (lookahead == '4') ADVANCE(1005);
      if (lookahead == '5') ADVANCE(1100);
      if (lookahead == '8') ADVANCE(963);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(938);
      END_STATE();
    case 951:
      if (lookahead == '1') ADVANCE(890);
      if (lookahead == '3') ADVANCE(1012);
      if (lookahead == '4') ADVANCE(955);
      if (lookahead == '5') ADVANCE(1103);
      if (lookahead == '6') ADVANCE(864);
      if (lookahead == '8') ADVANCE(962);
      if (lookahead == '9') ADVANCE(1032);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(948);
      END_STATE();
    case 952:
      if (lookahead == '1') ADVANCE(892);
      if (lookahead == '3') ADVANCE(1012);
      if (lookahead == '4') ADVANCE(956);
      if (lookahead == '5') ADVANCE(1103);
      if (lookahead == '6') ADVANCE(864);
      if (lookahead == '8') ADVANCE(995);
      if (lookahead == '9') ADVANCE(1032);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(949);
      END_STATE();
    case 953:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1122);
      if (lookahead == '5') ADVANCE(1125);
      if (lookahead == '7') ADVANCE(1126);
      END_STATE();
    case 954:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1144);
      if (lookahead == '5') ADVANCE(1146);
      END_STATE();
    case 955:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '5') ADVANCE(1146);
      END_STATE();
    case 956:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '5') ADVANCE(1159);
      END_STATE();
    case 957:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '5') ADVANCE(1128);
      if (lookahead == '7') ADVANCE(1126);
      END_STATE();
    case 958:
      if (lookahead == '2') ADVANCE(827);
      if (lookahead == '7') ADVANCE(967);
      END_STATE();
    case 959:
      if (lookahead == '2') ADVANCE(872);
      if (lookahead == '7') ADVANCE(988);
      END_STATE();
    case 960:
      if (lookahead == '2') ADVANCE(849);
      END_STATE();
    case 961:
      if (lookahead == '2') ADVANCE(883);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1437);
      END_STATE();
    case 962:
      if (lookahead == '2') ADVANCE(877);
      if (lookahead == '5') ADVANCE(1113);
      if (lookahead == '6') ADVANCE(1044);
      if (lookahead == '7') ADVANCE(903);
      if (lookahead == '8') ADVANCE(878);
      if (lookahead == '9') ADVANCE(1086);
      END_STATE();
    case 963:
      if (lookahead == '2') ADVANCE(880);
      if (lookahead == '7') ADVANCE(966);
      END_STATE();
    case 964:
      if (lookahead == '2') ADVANCE(840);
      END_STATE();
    case 965:
      if (lookahead == '2') ADVANCE(1067);
      END_STATE();
    case 966:
      if (lookahead == '2') ADVANCE(976);
      END_STATE();
    case 967:
      if (lookahead == '2') ADVANCE(968);
      END_STATE();
    case 968:
      if (lookahead == '2') ADVANCE(1125);
      if (lookahead == '5') ADVANCE(1132);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 969:
      if (lookahead == '2') ADVANCE(978);
      if (lookahead == '9') ADVANCE(1038);
      END_STATE();
    case 970:
      if (lookahead == '2') ADVANCE(1127);
      END_STATE();
    case 971:
      if (lookahead == '2') ADVANCE(1123);
      END_STATE();
    case 972:
      if (lookahead == '2') ADVANCE(1160);
      END_STATE();
    case 973:
      if (lookahead == '2') ADVANCE(1142);
      if (lookahead == '5') ADVANCE(1132);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 974:
      if (lookahead == '2') ADVANCE(1147);
      END_STATE();
    case 975:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '3') ADVANCE(1147);
      END_STATE();
    case 976:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '5') ADVANCE(1152);
      END_STATE();
    case 977:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 978:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1147);
      END_STATE();
    case 979:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '9') ADVANCE(1147);
      END_STATE();
    case 980:
      if (lookahead == '2') ADVANCE(1146);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 981:
      if (lookahead == '2') ADVANCE(1146);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 982:
      if (lookahead == '2') ADVANCE(1153);
      if (lookahead == '5') ADVANCE(1154);
      END_STATE();
    case 983:
      if (lookahead == '2') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 984:
      if (lookahead == '2') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 985:
      if (lookahead == '2') ADVANCE(887);
      END_STATE();
    case 986:
      if (lookahead == '2') ADVANCE(982);
      END_STATE();
    case 987:
      if (lookahead == '2') ADVANCE(973);
      END_STATE();
    case 988:
      if (lookahead == '2') ADVANCE(971);
      END_STATE();
    case 989:
      if (lookahead == '2') ADVANCE(910);
      if (lookahead == '3') ADVANCE(1450);
      END_STATE();
    case 990:
      if (lookahead == '2') ADVANCE(889);
      END_STATE();
    case 991:
      if (lookahead == '2') ADVANCE(972);
      END_STATE();
    case 992:
      if (lookahead == '2') ADVANCE(974);
      END_STATE();
    case 993:
      if (lookahead == '2') ADVANCE(874);
      if (lookahead == '7') ADVANCE(987);
      END_STATE();
    case 994:
      if (lookahead == '2') ADVANCE(875);
      if (lookahead == '7') ADVANCE(991);
      END_STATE();
    case 995:
      if (lookahead == '2') ADVANCE(882);
      if (lookahead == '5') ADVANCE(1113);
      if (lookahead == '6') ADVANCE(1044);
      if (lookahead == '7') ADVANCE(904);
      if (lookahead == '8') ADVANCE(878);
      if (lookahead == '9') ADVANCE(1086);
      END_STATE();
    case 996:
      if (lookahead == '2') ADVANCE(881);
      if (lookahead == '7') ADVANCE(986);
      END_STATE();
    case 997:
      if (lookahead == '2') ADVANCE(879);
      if (lookahead == '7') ADVANCE(992);
      END_STATE();
    case 998:
      if (lookahead == '3') ADVANCE(1003);
      END_STATE();
    case 999:
      if (lookahead == '3') ADVANCE(1000);
      if (lookahead == '8') ADVANCE(1081);
      END_STATE();
    case 1000:
      if (lookahead == '3') ADVANCE(1122);
      if (lookahead == '4') ADVANCE(1125);
      END_STATE();
    case 1001:
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1049);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1430);
      END_STATE();
    case 1002:
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1065);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1430);
      END_STATE();
    case 1003:
      if (lookahead == '3') ADVANCE(1121);
      END_STATE();
    case 1004:
      if (lookahead == '3') ADVANCE(1121);
      if (lookahead == '4') ADVANCE(1147);
      END_STATE();
    case 1005:
      if (lookahead == '3') ADVANCE(1121);
      if (lookahead == '5') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1152);
      END_STATE();
    case 1006:
      if (lookahead == '3') ADVANCE(1135);
      END_STATE();
    case 1007:
      if (lookahead == '3') ADVANCE(1147);
      END_STATE();
    case 1008:
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1147);
      END_STATE();
    case 1009:
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1147);
      if (lookahead == '5') ADVANCE(1147);
      END_STATE();
    case 1010:
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1153);
      END_STATE();
    case 1011:
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '5') ADVANCE(1153);
      if (lookahead == '7') ADVANCE(1154);
      END_STATE();
    case 1012:
      if (lookahead == '3') ADVANCE(1155);
      END_STATE();
    case 1013:
      if (lookahead == '3') ADVANCE(1144);
      if (lookahead == '4') ADVANCE(1146);
      END_STATE();
    case 1014:
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '4') ADVANCE(1146);
      END_STATE();
    case 1015:
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '4') ADVANCE(1159);
      END_STATE();
    case 1016:
      if (lookahead == '3') ADVANCE(1006);
      END_STATE();
    case 1017:
      if (lookahead == '3') ADVANCE(1033);
      END_STATE();
    case 1018:
      if (lookahead == '3') ADVANCE(1013);
      END_STATE();
    case 1019:
      if (lookahead == '3') ADVANCE(1037);
      if (lookahead == '8') ADVANCE(1081);
      END_STATE();
    case 1020:
      if (lookahead == '3') ADVANCE(1007);
      END_STATE();
    case 1021:
      if (lookahead == '3') ADVANCE(1007);
      if (lookahead == '6') ADVANCE(1007);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(989);
      END_STATE();
    case 1022:
      if (lookahead == '3') ADVANCE(1007);
      if (lookahead == '7') ADVANCE(1055);
      END_STATE();
    case 1023:
      if (lookahead == '3') ADVANCE(1010);
      if (lookahead == '8') ADVANCE(1085);
      END_STATE();
    case 1024:
      if (lookahead == '3') ADVANCE(1036);
      END_STATE();
    case 1025:
      if (lookahead == '3') ADVANCE(1014);
      END_STATE();
    case 1026:
      if (lookahead == '3') ADVANCE(1038);
      END_STATE();
    case 1027:
      if (lookahead == '3') ADVANCE(1038);
      if (lookahead == '8') ADVANCE(1084);
      END_STATE();
    case 1028:
      if (lookahead == '3') ADVANCE(1440);
      END_STATE();
    case 1029:
      if (lookahead == '3') ADVANCE(1004);
      if (lookahead == '8') ADVANCE(1084);
      END_STATE();
    case 1030:
      if (lookahead == '3') ADVANCE(1015);
      END_STATE();
    case 1031:
      if (lookahead == '4') ADVANCE(1035);
      END_STATE();
    case 1032:
      if (lookahead == '4') ADVANCE(1104);
      if (lookahead == '6') ADVANCE(1022);
      if (lookahead == '7') ADVANCE(969);
      END_STATE();
    case 1033:
      if (lookahead == '4') ADVANCE(1123);
      END_STATE();
    case 1034:
      if (lookahead == '4') ADVANCE(1130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 1035:
      if (lookahead == '4') ADVANCE(1137);
      END_STATE();
    case 1036:
      if (lookahead == '4') ADVANCE(1160);
      END_STATE();
    case 1037:
      if (lookahead == '4') ADVANCE(1143);
      END_STATE();
    case 1038:
      if (lookahead == '4') ADVANCE(1147);
      END_STATE();
    case 1039:
      if (lookahead == '4') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1147);
      END_STATE();
    case 1040:
      if (lookahead == '4') ADVANCE(1147);
      if (lookahead == '8') ADVANCE(1147);
      END_STATE();
    case 1041:
      if (lookahead == '4') ADVANCE(1152);
      END_STATE();
    case 1042:
      if (lookahead == '4') ADVANCE(1154);
      END_STATE();
    case 1043:
      if (lookahead == '4') ADVANCE(1053);
      END_STATE();
    case 1044:
      if (lookahead == '4') ADVANCE(1066);
      if (lookahead == '6') ADVANCE(861);
      END_STATE();
    case 1045:
      if (lookahead == '4') ADVANCE(974);
      END_STATE();
    case 1046:
      if (lookahead == '4') ADVANCE(1041);
      END_STATE();
    case 1047:
      if (lookahead == '4') ADVANCE(1042);
      END_STATE();
    case 1048:
      if (lookahead == '5') ADVANCE(975);
      END_STATE();
    case 1049:
      if (lookahead == '5') ADVANCE(1122);
      if (lookahead == '6') ADVANCE(1125);
      END_STATE();
    case 1050:
      if (lookahead == '5') ADVANCE(1121);
      END_STATE();
    case 1051:
      if (lookahead == '5') ADVANCE(1121);
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 1052:
      if (lookahead == '5') ADVANCE(1123);
      END_STATE();
    case 1053:
      if (lookahead == '5') ADVANCE(1129);
      END_STATE();
    case 1054:
      if (lookahead == '5') ADVANCE(1160);
      END_STATE();
    case 1055:
      if (lookahead == '5') ADVANCE(1147);
      END_STATE();
    case 1056:
      if (lookahead == '5') ADVANCE(1147);
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 1057:
      if (lookahead == '5') ADVANCE(1147);
      if (lookahead == '6') ADVANCE(1153);
      END_STATE();
    case 1058:
      if (lookahead == '5') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1152);
      END_STATE();
    case 1059:
      if (lookahead == '5') ADVANCE(1144);
      if (lookahead == '6') ADVANCE(1146);
      END_STATE();
    case 1060:
      if (lookahead == '5') ADVANCE(1157);
      if (lookahead == '6') ADVANCE(1146);
      END_STATE();
    case 1061:
      if (lookahead == '5') ADVANCE(1157);
      if (lookahead == '6') ADVANCE(1159);
      END_STATE();
    case 1062:
      if (lookahead == '6') ADVANCE(1444);
      END_STATE();
    case 1063:
      if (lookahead == '6') ADVANCE(1123);
      END_STATE();
    case 1064:
      if (lookahead == '6') ADVANCE(1160);
      END_STATE();
    case 1065:
      if (lookahead == '6') ADVANCE(1143);
      END_STATE();
    case 1066:
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 1067:
      if (lookahead == '6') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1147);
      END_STATE();
    case 1068:
      if (lookahead == '6') ADVANCE(1105);
      END_STATE();
    case 1069:
      if (lookahead == '6') ADVANCE(1439);
      END_STATE();
    case 1070:
      if (lookahead == '6') ADVANCE(1056);
      END_STATE();
    case 1071:
      if (lookahead == '6') ADVANCE(910);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1028);
      END_STATE();
    case 1072:
      if (lookahead == '6') ADVANCE(1109);
      END_STATE();
    case 1073:
      if (lookahead == '6') ADVANCE(1111);
      END_STATE();
    case 1074:
      if (lookahead == '6') ADVANCE(1110);
      END_STATE();
    case 1075:
      if (lookahead == '6') ADVANCE(1112);
      END_STATE();
    case 1076:
      if (lookahead == '6') ADVANCE(1445);
      END_STATE();
    case 1077:
      if (lookahead == '6') ADVANCE(1446);
      END_STATE();
    case 1078:
      if (lookahead == '6') ADVANCE(1447);
      END_STATE();
    case 1079:
      if (lookahead == '6') ADVANCE(1448);
      END_STATE();
    case 1080:
      if (lookahead == '7') ADVANCE(1115);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1121);
      END_STATE();
    case 1081:
      if (lookahead == '7') ADVANCE(1136);
      END_STATE();
    case 1082:
      if (lookahead == '7') ADVANCE(1147);
      END_STATE();
    case 1083:
      if (lookahead == '7') ADVANCE(1147);
      if (lookahead == '8') ADVANCE(1147);
      if (lookahead == '9') ADVANCE(1147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 1084:
      if (lookahead == '7') ADVANCE(1152);
      END_STATE();
    case 1085:
      if (lookahead == '7') ADVANCE(1154);
      END_STATE();
    case 1086:
      if (lookahead == '7') ADVANCE(1110);
      END_STATE();
    case 1087:
      if (lookahead == '7') ADVANCE(1119);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      END_STATE();
    case 1088:
      if (lookahead == '8') ADVANCE(1068);
      END_STATE();
    case 1089:
      if (lookahead == '8') ADVANCE(1125);
      if (lookahead == '9') ADVANCE(1125);
      END_STATE();
    case 1090:
      if (lookahead == '8') ADVANCE(1123);
      if (lookahead == '9') ADVANCE(1123);
      END_STATE();
    case 1091:
      if (lookahead == '8') ADVANCE(1134);
      if (lookahead == '9') ADVANCE(1138);
      END_STATE();
    case 1092:
      if (lookahead == '8') ADVANCE(1137);
      END_STATE();
    case 1093:
      if (lookahead == '8') ADVANCE(1160);
      if (lookahead == '9') ADVANCE(1160);
      END_STATE();
    case 1094:
      if (lookahead == '8') ADVANCE(1147);
      if (lookahead == '9') ADVANCE(1147);
      END_STATE();
    case 1095:
      if (lookahead == '8') ADVANCE(1146);
      if (lookahead == '9') ADVANCE(1146);
      END_STATE();
    case 1096:
      if (lookahead == '8') ADVANCE(1152);
      END_STATE();
    case 1097:
      if (lookahead == '8') ADVANCE(1153);
      if (lookahead == '9') ADVANCE(1153);
      END_STATE();
    case 1098:
      if (lookahead == '8') ADVANCE(1154);
      END_STATE();
    case 1099:
      if (lookahead == '8') ADVANCE(1159);
      if (lookahead == '9') ADVANCE(1159);
      END_STATE();
    case 1100:
      if (lookahead == '8') ADVANCE(1072);
      END_STATE();
    case 1101:
      if (lookahead == '8') ADVANCE(1073);
      END_STATE();
    case 1102:
      if (lookahead == '8') ADVANCE(1074);
      END_STATE();
    case 1103:
      if (lookahead == '8') ADVANCE(1075);
      END_STATE();
    case 1104:
      if (lookahead == '9') ADVANCE(977);
      END_STATE();
    case 1105:
      if (lookahead == '9') ADVANCE(1122);
      END_STATE();
    case 1106:
      if (lookahead == '9') ADVANCE(1063);
      END_STATE();
    case 1107:
      if (lookahead == '9') ADVANCE(911);
      if (lookahead == ';') ADVANCE(1554);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1066);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1039);
      END_STATE();
    case 1108:
      if (lookahead == '9') ADVANCE(1127);
      END_STATE();
    case 1109:
      if (lookahead == '9') ADVANCE(1121);
      END_STATE();
    case 1110:
      if (lookahead == '9') ADVANCE(1147);
      END_STATE();
    case 1111:
      if (lookahead == '9') ADVANCE(1144);
      END_STATE();
    case 1112:
      if (lookahead == '9') ADVANCE(1157);
      END_STATE();
    case 1113:
      if (lookahead == '9') ADVANCE(1008);
      END_STATE();
    case 1114:
      if (lookahead == '9') ADVANCE(1064);
      END_STATE();
    case 1115:
      if (lookahead == '9') ADVANCE(1050);
      END_STATE();
    case 1116:
      if (lookahead == '9') ADVANCE(1057);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1433);
      END_STATE();
    case 1117:
      if (lookahead == '9') ADVANCE(1066);
      END_STATE();
    case 1118:
      if (lookahead == '9') ADVANCE(1066);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1432);
      END_STATE();
    case 1119:
      if (lookahead == '9') ADVANCE(1055);
      END_STATE();
    case 1120:
      if (lookahead == '9') ADVANCE(1051);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1432);
      END_STATE();
    case 1121:
      if (lookahead == ';') ADVANCE(1538);
      END_STATE();
    case 1122:
      if (lookahead == ';') ADVANCE(1541);
      END_STATE();
    case 1123:
      if (lookahead == ';') ADVANCE(1455);
      END_STATE();
    case 1124:
      if (lookahead == ';') ADVANCE(1606);
      END_STATE();
    case 1125:
      if (lookahead == ';') ADVANCE(1528);
      END_STATE();
    case 1126:
      if (lookahead == ';') ADVANCE(1590);
      END_STATE();
    case 1127:
      if (lookahead == ';') ADVANCE(1602);
      END_STATE();
    case 1128:
      if (lookahead == ';') ADVANCE(1564);
      END_STATE();
    case 1129:
      if (lookahead == ';') ADVANCE(1622);
      END_STATE();
    case 1130:
      if (lookahead == ';') ADVANCE(1594);
      END_STATE();
    case 1131:
      if (lookahead == ';') ADVANCE(1618);
      END_STATE();
    case 1132:
      if (lookahead == ';') ADVANCE(1592);
      END_STATE();
    case 1133:
      if (lookahead == ';') ADVANCE(1610);
      END_STATE();
    case 1134:
      if (lookahead == ';') ADVANCE(1568);
      END_STATE();
    case 1135:
      if (lookahead == ';') ADVANCE(1614);
      END_STATE();
    case 1136:
      if (lookahead == ';') ADVANCE(1596);
      END_STATE();
    case 1137:
      if (lookahead == ';') ADVANCE(1598);
      END_STATE();
    case 1138:
      if (lookahead == ';') ADVANCE(1570);
      END_STATE();
    case 1139:
      if (lookahead == ';') ADVANCE(1572);
      END_STATE();
    case 1140:
      if (lookahead == ';') ADVANCE(1574);
      END_STATE();
    case 1141:
      if (lookahead == ';') ADVANCE(1576);
      END_STATE();
    case 1142:
      if (lookahead == ';') ADVANCE(1566);
      END_STATE();
    case 1143:
      if (lookahead == ';') ADVANCE(1578);
      END_STATE();
    case 1144:
      if (lookahead == ';') ADVANCE(814);
      END_STATE();
    case 1145:
      if (lookahead == ';') ADVANCE(814);
      if (lookahead == 'b') ADVANCE(1147);
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == 'm') ADVANCE(1308);
      END_STATE();
    case 1146:
      if (lookahead == ';') ADVANCE(1553);
      END_STATE();
    case 1147:
      if (lookahead == ';') ADVANCE(1543);
      END_STATE();
    case 1148:
      if (lookahead == ';') ADVANCE(1543);
      if (lookahead == 'a') ADVANCE(1350);
      END_STATE();
    case 1149:
      if (lookahead == ';') ADVANCE(1543);
      if (lookahead == 'f') ADVANCE(1389);
      if (lookahead == 'q') ADVANCE(1147);
      END_STATE();
    case 1150:
      if (lookahead == ';') ADVANCE(1543);
      if (lookahead == 'o') ADVANCE(1420);
      END_STATE();
    case 1151:
      if (lookahead == ';') ADVANCE(1543);
      if (lookahead == 't') ADVANCE(1319);
      END_STATE();
    case 1152:
      if (lookahead == ';') ADVANCE(817);
      END_STATE();
    case 1153:
      if (lookahead == ';') ADVANCE(1535);
      END_STATE();
    case 1154:
      if (lookahead == ';') ADVANCE(816);
      END_STATE();
    case 1155:
      if (lookahead == ';') ADVANCE(1554);
      END_STATE();
    case 1156:
      if (lookahead == ';') ADVANCE(815);
      END_STATE();
    case 1157:
      if (lookahead == ';') ADVANCE(1542);
      END_STATE();
    case 1158:
      if (lookahead == ';') ADVANCE(1542);
      if (lookahead == 'b') ADVANCE(1147);
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == 'm') ADVANCE(1308);
      END_STATE();
    case 1159:
      if (lookahead == ';') ADVANCE(1530);
      END_STATE();
    case 1160:
      if (lookahead == ';') ADVANCE(1456);
      END_STATE();
    case 1161:
      if (lookahead == ';') ADVANCE(1555);
      END_STATE();
    case 1162:
      if (lookahead == '=') ADVANCE(1543);
      END_STATE();
    case 1163:
      if (lookahead == '@') ADVANCE(1526);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1163)
      END_STATE();
    case 1164:
      if (lookahead == 'A') ADVANCE(1351);
      END_STATE();
    case 1165:
      if (lookahead == 'A') ADVANCE(1351);
      if (lookahead == 'R') ADVANCE(1275);
      END_STATE();
    case 1166:
      if (lookahead == 'A') ADVANCE(1351);
      if (lookahead == 'T') ADVANCE(1230);
      if (lookahead == 'p') ADVANCE(1231);
      END_STATE();
    case 1167:
      if (lookahead == 'L') ADVANCE(1233);
      if (lookahead == 'R') ADVANCE(1275);
      if (lookahead == 'U') ADVANCE(1331);
      END_STATE();
    case 1168:
      if (lookahead == 'M') ADVANCE(1282);
      END_STATE();
    case 1169:
      if (lookahead == 'N') ADVANCE(1543);
      END_STATE();
    case 1170:
      if (lookahead == 'P') ADVANCE(1300);
      END_STATE();
    case 1171:
      if (lookahead == 'R') ADVANCE(1275);
      END_STATE();
    case 1172:
      if (lookahead == 'a') ADVANCE(1356);
      END_STATE();
    case 1173:
      if (lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 1174:
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead == 'y') ADVANCE(1338);
      END_STATE();
    case 1175:
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead == 'y') ADVANCE(1341);
      END_STATE();
    case 1176:
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == 'v') ADVANCE(1295);
      END_STATE();
    case 1177:
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'd') ADVANCE(1202);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == 'v') ADVANCE(1295);
      END_STATE();
    case 1178:
      if (lookahead == 'a') ADVANCE(1357);
      END_STATE();
    case 1179:
      if (lookahead == 'a') ADVANCE(1284);
      if (lookahead == 'y') ADVANCE(1329);
      END_STATE();
    case 1180:
      if (lookahead == 'a') ADVANCE(1284);
      if (lookahead == 'y') ADVANCE(1333);
      END_STATE();
    case 1181:
      if (lookahead == 'a') ADVANCE(1346);
      END_STATE();
    case 1182:
      if (lookahead == 'a') ADVANCE(1346);
      if (lookahead == 'i') ADVANCE(1253);
      END_STATE();
    case 1183:
      if (lookahead == 'a') ADVANCE(1346);
      if (lookahead == 'p') ADVANCE(1188);
      END_STATE();
    case 1184:
      if (lookahead == 'a') ADVANCE(1289);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'i') ADVANCE(1216);
      if (lookahead == 'n') ADVANCE(1334);
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1185:
      if (lookahead == 'a') ADVANCE(1289);
      if (lookahead == 'd') ADVANCE(1202);
      if (lookahead == 'i') ADVANCE(1217);
      if (lookahead == 'n') ADVANCE(1334);
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1186:
      if (lookahead == 'a') ADVANCE(1304);
      if (lookahead == 'e') ADVANCE(1244);
      END_STATE();
    case 1187:
      if (lookahead == 'a') ADVANCE(1304);
      if (lookahead == 'i') ADVANCE(1251);
      END_STATE();
    case 1188:
      if (lookahead == 'a') ADVANCE(1351);
      END_STATE();
    case 1189:
      if (lookahead == 'a') ADVANCE(1351);
      if (lookahead == 'r') ADVANCE(1280);
      END_STATE();
    case 1190:
      if (lookahead == 'a') ADVANCE(1299);
      END_STATE();
    case 1191:
      if (lookahead == 'a') ADVANCE(1350);
      END_STATE();
    case 1192:
      if (lookahead == 'a') ADVANCE(1147);
      END_STATE();
    case 1193:
      if (lookahead == 'a') ADVANCE(1375);
      END_STATE();
    case 1194:
      if (lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 1195:
      if (lookahead == 'a') ADVANCE(1376);
      END_STATE();
    case 1196:
      if (lookahead == 'a') ADVANCE(1378);
      END_STATE();
    case 1197:
      if (lookahead == 'a') ADVANCE(1380);
      END_STATE();
    case 1198:
      if (lookahead == 'a') ADVANCE(1381);
      END_STATE();
    case 1199:
      if (lookahead == 'a') ADVANCE(1382);
      END_STATE();
    case 1200:
      if (lookahead == 'a') ADVANCE(1383);
      END_STATE();
    case 1201:
      if (lookahead == 'a') ADVANCE(1384);
      END_STATE();
    case 1202:
      if (lookahead == 'a') ADVANCE(1385);
      END_STATE();
    case 1203:
      if (lookahead == 'a') ADVANCE(1374);
      END_STATE();
    case 1204:
      if (lookahead == 'a') ADVANCE(1297);
      END_STATE();
    case 1205:
      if (lookahead == 'b') ADVANCE(1288);
      END_STATE();
    case 1206:
      if (lookahead == 'c') ADVANCE(906);
      END_STATE();
    case 1207:
      if (lookahead == 'c') ADVANCE(1290);
      END_STATE();
    case 1208:
      if (lookahead == 'c') ADVANCE(1292);
      END_STATE();
    case 1209:
      if (lookahead == 'd') ADVANCE(1178);
      END_STATE();
    case 1210:
      if (lookahead == 'd') ADVANCE(1178);
      if (lookahead == 'i') ADVANCE(1214);
      END_STATE();
    case 1211:
      if (lookahead == 'd') ADVANCE(1325);
      if (lookahead == 'p') ADVANCE(1300);
      END_STATE();
    case 1212:
      if (lookahead == 'd') ADVANCE(1193);
      END_STATE();
    case 1213:
      if (lookahead == 'd') ADVANCE(1193);
      if (lookahead == 'i') ADVANCE(1312);
      END_STATE();
    case 1214:
      if (lookahead == 'd') ADVANCE(1172);
      if (lookahead == 'n') ADVANCE(1401);
      END_STATE();
    case 1215:
      if (lookahead == 'd') ADVANCE(1172);
      if (lookahead == 'n') ADVANCE(1410);
      END_STATE();
    case 1216:
      if (lookahead == 'd') ADVANCE(1172);
      if (lookahead == 'n') ADVANCE(1414);
      END_STATE();
    case 1217:
      if (lookahead == 'd') ADVANCE(1172);
      if (lookahead == 'n') ADVANCE(1416);
      END_STATE();
    case 1218:
      if (lookahead == 'd') ADVANCE(1196);
      if (lookahead == 'i') ADVANCE(1215);
      END_STATE();
    case 1219:
      if (lookahead == 'd') ADVANCE(1197);
      END_STATE();
    case 1220:
      if (lookahead == 'd') ADVANCE(1198);
      END_STATE();
    case 1221:
      if (lookahead == 'd') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1313);
      END_STATE();
    case 1222:
      if (lookahead == 'd') ADVANCE(1200);
      END_STATE();
    case 1223:
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'i') ADVANCE(1315);
      END_STATE();
    case 1224:
      if (lookahead == 'd') ADVANCE(1201);
      END_STATE();
    case 1225:
      if (lookahead == 'd') ADVANCE(1201);
      if (lookahead == 'i') ADVANCE(1316);
      END_STATE();
    case 1226:
      if (lookahead == 'e') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1392);
      if (lookahead == 'o') ADVANCE(1419);
      if (lookahead == 'r') ADVANCE(1181);
      END_STATE();
    case 1227:
      if (lookahead == 'e') ADVANCE(1302);
      END_STATE();
    case 1228:
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead == 'l') ADVANCE(1405);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1322);
      END_STATE();
    case 1229:
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead == 'l') ADVANCE(1407);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1322);
      END_STATE();
    case 1230:
      if (lookahead == 'e') ADVANCE(1232);
      END_STATE();
    case 1231:
      if (lookahead == 'e') ADVANCE(1343);
      END_STATE();
    case 1232:
      if (lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 1233:
      if (lookahead == 'e') ADVANCE(1246);
      END_STATE();
    case 1234:
      if (lookahead == 'e') ADVANCE(1305);
      END_STATE();
    case 1235:
      if (lookahead == 'e') ADVANCE(1290);
      END_STATE();
    case 1236:
      if (lookahead == 'e') ADVANCE(1306);
      END_STATE();
    case 1237:
      if (lookahead == 'e') ADVANCE(1307);
      END_STATE();
    case 1238:
      if (lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 1239:
      if (lookahead == 'e') ADVANCE(1309);
      END_STATE();
    case 1240:
      if (lookahead == 'e') ADVANCE(1310);
      END_STATE();
    case 1241:
      if (lookahead == 'e') ADVANCE(1311);
      END_STATE();
    case 1242:
      if (lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 1243:
      if (lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 1244:
      if (lookahead == 'f') ADVANCE(1388);
      END_STATE();
    case 1245:
      if (lookahead == 'f') ADVANCE(1279);
      END_STATE();
    case 1246:
      if (lookahead == 'f') ADVANCE(1390);
      END_STATE();
    case 1247:
      if (lookahead == 'f') ADVANCE(1127);
      END_STATE();
    case 1248:
      if (lookahead == 'f') ADVANCE(1364);
      END_STATE();
    case 1249:
      if (lookahead == 'f') ADVANCE(1147);
      END_STATE();
    case 1250:
      if (lookahead == 'g') ADVANCE(1318);
      END_STATE();
    case 1251:
      if (lookahead == 'g') ADVANCE(1257);
      END_STATE();
    case 1252:
      if (lookahead == 'g') ADVANCE(1147);
      END_STATE();
    case 1253:
      if (lookahead == 'g') ADVANCE(1258);
      END_STATE();
    case 1254:
      if (lookahead == 'h') ADVANCE(1227);
      END_STATE();
    case 1255:
      if (lookahead == 'h') ADVANCE(1125);
      END_STATE();
    case 1256:
      if (lookahead == 'h') ADVANCE(1323);
      if (lookahead == 'q') ADVANCE(1411);
      END_STATE();
    case 1257:
      if (lookahead == 'h') ADVANCE(1390);
      END_STATE();
    case 1258:
      if (lookahead == 'h') ADVANCE(1397);
      END_STATE();
    case 1259:
      if (lookahead == 'h') ADVANCE(1123);
      END_STATE();
    case 1260:
      if (lookahead == 'h') ADVANCE(1134);
      END_STATE();
    case 1261:
      if (lookahead == 'h') ADVANCE(1160);
      END_STATE();
    case 1262:
      if (lookahead == 'h') ADVANCE(1140);
      END_STATE();
    case 1263:
      if (lookahead == 'h') ADVANCE(1141);
      END_STATE();
    case 1264:
      if (lookahead == 'h') ADVANCE(1147);
      END_STATE();
    case 1265:
      if (lookahead == 'h') ADVANCE(1146);
      END_STATE();
    case 1266:
      if (lookahead == 'h') ADVANCE(1153);
      END_STATE();
    case 1267:
      if (lookahead == 'h') ADVANCE(1159);
      END_STATE();
    case 1268:
      if (lookahead == 'h') ADVANCE(1234);
      END_STATE();
    case 1269:
      if (lookahead == 'h') ADVANCE(1236);
      END_STATE();
    case 1270:
      if (lookahead == 'h') ADVANCE(1237);
      END_STATE();
    case 1271:
      if (lookahead == 'h') ADVANCE(1239);
      END_STATE();
    case 1272:
      if (lookahead == 'h') ADVANCE(1238);
      END_STATE();
    case 1273:
      if (lookahead == 'h') ADVANCE(1240);
      END_STATE();
    case 1274:
      if (lookahead == 'h') ADVANCE(1241);
      END_STATE();
    case 1275:
      if (lookahead == 'i') ADVANCE(1251);
      END_STATE();
    case 1276:
      if (lookahead == 'i') ADVANCE(1353);
      END_STATE();
    case 1277:
      if (lookahead == 'i') ADVANCE(1250);
      if (lookahead == 'o') ADVANCE(1387);
      END_STATE();
    case 1278:
      if (lookahead == 'i') ADVANCE(1147);
      END_STATE();
    case 1279:
      if (lookahead == 'i') ADVANCE(1308);
      END_STATE();
    case 1280:
      if (lookahead == 'i') ADVANCE(1253);
      END_STATE();
    case 1281:
      if (lookahead == 'i') ADVANCE(1314);
      END_STATE();
    case 1282:
      if (lookahead == 'i') ADVANCE(1315);
      END_STATE();
    case 1283:
      if (lookahead == 'l') ADVANCE(1399);
      END_STATE();
    case 1284:
      if (lookahead == 'l') ADVANCE(1247);
      END_STATE();
    case 1285:
      if (lookahead == 'l') ADVANCE(1247);
      if (lookahead == 'r') ADVANCE(1353);
      END_STATE();
    case 1286:
      if (lookahead == 'l') ADVANCE(1181);
      if (lookahead == 'q') ADVANCE(1398);
      if (lookahead == 'r') ADVANCE(1181);
      END_STATE();
    case 1287:
      if (lookahead == 'l') ADVANCE(1126);
      END_STATE();
    case 1288:
      if (lookahead == 'l') ADVANCE(1192);
      END_STATE();
    case 1289:
      if (lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 1290:
      if (lookahead == 'l') ADVANCE(1147);
      END_STATE();
    case 1291:
      if (lookahead == 'l') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1292:
      if (lookahead == 'l') ADVANCE(1155);
      END_STATE();
    case 1293:
      if (lookahead == 'l') ADVANCE(1152);
      END_STATE();
    case 1294:
      if (lookahead == 'l') ADVANCE(1154);
      END_STATE();
    case 1295:
      if (lookahead == 'l') ADVANCE(1396);
      END_STATE();
    case 1296:
      if (lookahead == 'l') ADVANCE(1402);
      END_STATE();
    case 1297:
      if (lookahead == 'l') ADVANCE(1369);
      END_STATE();
    case 1298:
      if (lookahead == 'l') ADVANCE(1404);
      END_STATE();
    case 1299:
      if (lookahead == 'l') ADVANCE(1371);
      END_STATE();
    case 1300:
      if (lookahead == 'l') ADVANCE(1413);
      END_STATE();
    case 1301:
      if (lookahead == 'm') ADVANCE(1147);
      END_STATE();
    case 1302:
      if (lookahead == 'n') ADVANCE(1125);
      END_STATE();
    case 1303:
      if (lookahead == 'n') ADVANCE(1245);
      END_STATE();
    case 1304:
      if (lookahead == 'n') ADVANCE(1252);
      END_STATE();
    case 1305:
      if (lookahead == 'n') ADVANCE(1123);
      END_STATE();
    case 1306:
      if (lookahead == 'n') ADVANCE(1134);
      END_STATE();
    case 1307:
      if (lookahead == 'n') ADVANCE(1160);
      END_STATE();
    case 1308:
      if (lookahead == 'n') ADVANCE(1147);
      END_STATE();
    case 1309:
      if (lookahead == 'n') ADVANCE(1146);
      END_STATE();
    case 1310:
      if (lookahead == 'n') ADVANCE(1153);
      END_STATE();
    case 1311:
      if (lookahead == 'n') ADVANCE(1159);
      END_STATE();
    case 1312:
      if (lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 1313:
      if (lookahead == 'n') ADVANCE(1412);
      END_STATE();
    case 1314:
      if (lookahead == 'n') ADVANCE(1406);
      END_STATE();
    case 1315:
      if (lookahead == 'n') ADVANCE(1413);
      END_STATE();
    case 1316:
      if (lookahead == 'n') ADVANCE(1415);
      END_STATE();
    case 1317:
      if (lookahead == 'o') ADVANCE(1419);
      END_STATE();
    case 1318:
      if (lookahead == 'o') ADVANCE(1211);
      END_STATE();
    case 1319:
      if (lookahead == 'o') ADVANCE(1301);
      END_STATE();
    case 1320:
      if (lookahead == 'o') ADVANCE(1420);
      END_STATE();
    case 1321:
      if (lookahead == 'o') ADVANCE(1287);
      END_STATE();
    case 1322:
      if (lookahead == 'o') ADVANCE(1248);
      END_STATE();
    case 1323:
      if (lookahead == 'o') ADVANCE(1349);
      END_STATE();
    case 1324:
      if (lookahead == 'o') ADVANCE(1293);
      END_STATE();
    case 1325:
      if (lookahead == 'o') ADVANCE(1394);
      END_STATE();
    case 1326:
      if (lookahead == 'o') ADVANCE(1294);
      END_STATE();
    case 1327:
      if (lookahead == 'p') ADVANCE(1166);
      END_STATE();
    case 1328:
      if (lookahead == 'p') ADVANCE(825);
      END_STATE();
    case 1329:
      if (lookahead == 'p') ADVANCE(1254);
      END_STATE();
    case 1330:
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1331:
      if (lookahead == 'p') ADVANCE(1188);
      END_STATE();
    case 1332:
      if (lookahead == 'p') ADVANCE(1268);
      END_STATE();
    case 1333:
      if (lookahead == 'p') ADVANCE(1269);
      END_STATE();
    case 1334:
      if (lookahead == 'p') ADVANCE(1300);
      END_STATE();
    case 1335:
      if (lookahead == 'p') ADVANCE(1300);
      if (lookahead == 'q') ADVANCE(1403);
      if (lookahead == 'x') ADVANCE(1208);
      END_STATE();
    case 1336:
      if (lookahead == 'p') ADVANCE(1300);
      if (lookahead == 'u') ADVANCE(1291);
      END_STATE();
    case 1337:
      if (lookahead == 'p') ADVANCE(1270);
      END_STATE();
    case 1338:
      if (lookahead == 'p') ADVANCE(1271);
      END_STATE();
    case 1339:
      if (lookahead == 'p') ADVANCE(1272);
      END_STATE();
    case 1340:
      if (lookahead == 'p') ADVANCE(1273);
      END_STATE();
    case 1341:
      if (lookahead == 'p') ADVANCE(1274);
      END_STATE();
    case 1342:
      if (lookahead == 'q') ADVANCE(1418);
      END_STATE();
    case 1343:
      if (lookahead == 'r') ADVANCE(1171);
      END_STATE();
    case 1344:
      if (lookahead == 'r') ADVANCE(1150);
      END_STATE();
    case 1345:
      if (lookahead == 'r') ADVANCE(1173);
      END_STATE();
    case 1346:
      if (lookahead == 'r') ADVANCE(1353);
      END_STATE();
    case 1347:
      if (lookahead == 'r') ADVANCE(1278);
      END_STATE();
    case 1348:
      if (lookahead == 'r') ADVANCE(1330);
      END_STATE();
    case 1349:
      if (lookahead == 'r') ADVANCE(1391);
      END_STATE();
    case 1350:
      if (lookahead == 'r') ADVANCE(1232);
      END_STATE();
    case 1351:
      if (lookahead == 'r') ADVANCE(1354);
      END_STATE();
    case 1352:
      if (lookahead == 'r') ADVANCE(1344);
      END_STATE();
    case 1353:
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1354:
      if (lookahead == 'r') ADVANCE(1320);
      END_STATE();
    case 1355:
      if (lookahead == 'r') ADVANCE(1249);
      END_STATE();
    case 1356:
      if (lookahead == 's') ADVANCE(1386);
      END_STATE();
    case 1357:
      if (lookahead == 's') ADVANCE(1255);
      END_STATE();
    case 1358:
      if (lookahead == 's') ADVANCE(1168);
      END_STATE();
    case 1359:
      if (lookahead == 's') ADVANCE(1145);
      END_STATE();
    case 1360:
      if (lookahead == 's') ADVANCE(1170);
      END_STATE();
    case 1361:
      if (lookahead == 's') ADVANCE(1122);
      END_STATE();
    case 1362:
      if (lookahead == 's') ADVANCE(1158);
      END_STATE();
    case 1363:
      if (lookahead == 's') ADVANCE(1125);
      END_STATE();
    case 1364:
      if (lookahead == 's') ADVANCE(1408);
      END_STATE();
    case 1365:
      if (lookahead == 's') ADVANCE(1121);
      END_STATE();
    case 1366:
      if (lookahead == 's') ADVANCE(1123);
      END_STATE();
    case 1367:
      if (lookahead == 's') ADVANCE(1160);
      END_STATE();
    case 1368:
      if (lookahead == 's') ADVANCE(1142);
      END_STATE();
    case 1369:
      if (lookahead == 's') ADVANCE(1147);
      END_STATE();
    case 1370:
      if (lookahead == 's') ADVANCE(1146);
      END_STATE();
    case 1371:
      if (lookahead == 's') ADVANCE(1161);
      END_STATE();
    case 1372:
      if (lookahead == 's') ADVANCE(1153);
      END_STATE();
    case 1373:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 1374:
      if (lookahead == 's') ADVANCE(1393);
      END_STATE();
    case 1375:
      if (lookahead == 's') ADVANCE(1259);
      END_STATE();
    case 1376:
      if (lookahead == 's') ADVANCE(1260);
      END_STATE();
    case 1377:
      if (lookahead == 's') ADVANCE(1395);
      END_STATE();
    case 1378:
      if (lookahead == 's') ADVANCE(1263);
      END_STATE();
    case 1379:
      if (lookahead == 's') ADVANCE(1394);
      END_STATE();
    case 1380:
      if (lookahead == 's') ADVANCE(1262);
      END_STATE();
    case 1381:
      if (lookahead == 's') ADVANCE(1261);
      END_STATE();
    case 1382:
      if (lookahead == 's') ADVANCE(1265);
      END_STATE();
    case 1383:
      if (lookahead == 's') ADVANCE(1264);
      END_STATE();
    case 1384:
      if (lookahead == 's') ADVANCE(1266);
      END_STATE();
    case 1385:
      if (lookahead == 's') ADVANCE(1267);
      END_STATE();
    case 1386:
      if (lookahead == 't') ADVANCE(1124);
      END_STATE();
    case 1387:
      if (lookahead == 't') ADVANCE(1151);
      if (lookahead == 'x') ADVANCE(1336);
      END_STATE();
    case 1388:
      if (lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 1389:
      if (lookahead == 't') ADVANCE(1189);
      END_STATE();
    case 1390:
      if (lookahead == 't') ADVANCE(1164);
      END_STATE();
    case 1391:
      if (lookahead == 't') ADVANCE(1167);
      END_STATE();
    case 1392:
      if (lookahead == 't') ADVANCE(1347);
      END_STATE();
    case 1393:
      if (lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 1394:
      if (lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 1395:
      if (lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 1396:
      if (lookahead == 't') ADVANCE(1156);
      END_STATE();
    case 1397:
      if (lookahead == 't') ADVANCE(1188);
      END_STATE();
    case 1398:
      if (lookahead == 'u') ADVANCE(1148);
      END_STATE();
    case 1399:
      if (lookahead == 'u') ADVANCE(1361);
      END_STATE();
    case 1400:
      if (lookahead == 'u') ADVANCE(1242);
      END_STATE();
    case 1401:
      if (lookahead == 'u') ADVANCE(1363);
      END_STATE();
    case 1402:
      if (lookahead == 'u') ADVANCE(1365);
      END_STATE();
    case 1403:
      if (lookahead == 'u') ADVANCE(1190);
      END_STATE();
    case 1404:
      if (lookahead == 'u') ADVANCE(1358);
      END_STATE();
    case 1405:
      if (lookahead == 'u') ADVANCE(1359);
      END_STATE();
    case 1406:
      if (lookahead == 'u') ADVANCE(1360);
      END_STATE();
    case 1407:
      if (lookahead == 'u') ADVANCE(1362);
      END_STATE();
    case 1408:
      if (lookahead == 'u') ADVANCE(1355);
      END_STATE();
    case 1409:
      if (lookahead == 'u') ADVANCE(1366);
      END_STATE();
    case 1410:
      if (lookahead == 'u') ADVANCE(1368);
      END_STATE();
    case 1411:
      if (lookahead == 'u') ADVANCE(1191);
      END_STATE();
    case 1412:
      if (lookahead == 'u') ADVANCE(1367);
      END_STATE();
    case 1413:
      if (lookahead == 'u') ADVANCE(1369);
      END_STATE();
    case 1414:
      if (lookahead == 'u') ADVANCE(1370);
      END_STATE();
    case 1415:
      if (lookahead == 'u') ADVANCE(1372);
      END_STATE();
    case 1416:
      if (lookahead == 'u') ADVANCE(1373);
      END_STATE();
    case 1417:
      if (lookahead == 'u') ADVANCE(1243);
      END_STATE();
    case 1418:
      if (lookahead == 'u') ADVANCE(1204);
      END_STATE();
    case 1419:
      if (lookahead == 'w') ADVANCE(1203);
      END_STATE();
    case 1420:
      if (lookahead == 'w') ADVANCE(1147);
      END_STATE();
    case 1421:
      if (lookahead == 'x') ADVANCE(1207);
      END_STATE();
    case 1422:
      if (lookahead == 'y') ADVANCE(1332);
      END_STATE();
    case 1423:
      if (lookahead == 'y') ADVANCE(1337);
      END_STATE();
    case 1424:
      if (lookahead == 'y') ADVANCE(1339);
      END_STATE();
    case 1425:
      if (lookahead == 'y') ADVANCE(1340);
      END_STATE();
    case 1426:
      if (lookahead == 65038) ADVANCE(1524);
      END_STATE();
    case 1427:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1454);
      END_STATE();
    case 1428:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      END_STATE();
    case 1429:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1147);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1147);
      END_STATE();
    case 1430:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1136);
      END_STATE();
    case 1431:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      END_STATE();
    case 1432:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1152);
      END_STATE();
    case 1433:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1154);
      END_STATE();
    case 1434:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 1435:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1156);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1161);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1155);
      END_STATE();
    case 1436:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1122);
      END_STATE();
    case 1437:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1127);
      END_STATE();
    case 1438:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1121);
      END_STATE();
    case 1439:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1129);
      END_STATE();
    case 1440:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 1441:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1144);
      END_STATE();
    case 1442:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1157);
      END_STATE();
    case 1443:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 1444:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1436);
      END_STATE();
    case 1445:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1438);
      END_STATE();
    case 1446:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1441);
      END_STATE();
    case 1447:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 1448:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 1449:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1092);
      END_STATE();
    case 1450:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1147);
      END_STATE();
    case 1451:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1096);
      END_STATE();
    case 1452:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1098);
      END_STATE();
    case 1453:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1535);
      END_STATE();
    case 1454:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1453);
      END_STATE();
    case 1455:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1534);
      END_STATE();
    case 1456:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1531);
      END_STATE();
    case 1457:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1535);
      END_STATE();
    case 1458:
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(1503);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1514);
      if (lookahead == '@') ADVANCE(1526);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1163)
      END_STATE();
    case 1459:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1559);
      END_STATE();
    case 1460:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1487);
      END_STATE();
    case 1461:
      if (eof) ADVANCE(1466);
      if (lookahead == '\n') ADVANCE(1471);
      if (lookahead == '\r') ADVANCE(781);
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1548);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1549);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1510);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1509);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(781);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1462:
      if (eof) ADVANCE(1466);
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '#') ADVANCE(1540);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1539);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1548);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1517);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1506);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1510);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1505);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(789);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1463:
      if (eof) ADVANCE(1466);
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '#') ADVANCE(1540);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1539);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1548);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1515);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1549);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1510);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1509);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(789);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1464:
      if (eof) ADVANCE(1466);
      if (lookahead == '!') ADVANCE(1550);
      if (lookahead == '#') ADVANCE(1540);
      if (lookahead == '$') ADVANCE(534);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1470);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1605);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1539);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1529);
      if (lookahead == '0') ADVANCE(1583);
      if (lookahead == '1') ADVANCE(1561);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1515);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(1517);
      if (lookahead == '?') ADVANCE(1550);
      if (lookahead == '@') ADVANCE(1527);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1506);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1510);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1520);
      if (lookahead == 'R') ADVANCE(1505);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(531);
      if (lookahead == '[') ADVANCE(1478);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '{') ADVANCE(1492);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1552);
      if (lookahead == 189) ADVANCE(1601);
      if (lookahead == 1645) ADVANCE(1621);
      if (lookahead == 8270) ADVANCE(1617);
      if (lookahead == 8727) ADVANCE(1609);
      if (lookahead == 9817) ADVANCE(1523);
      if (lookahead == 9823) ADVANCE(507);
      if (lookahead == 10033) ADVANCE(1613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(789);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1465:
      if (eof) ADVANCE(1466);
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1469);
      if (lookahead == '&') ADVANCE(805);
      if (lookahead == '(') ADVANCE(1488);
      if (lookahead == ')') ADVANCE(1490);
      if (lookahead == '*') ADVANCE(1604);
      if (lookahead == '-') ADVANCE(1563);
      if (lookahead == '/') ADVANCE(1589);
      if (lookahead == '0') ADVANCE(1584);
      if (lookahead == '1') ADVANCE(1560);
      if (lookahead == '2') ADVANCE(1599);
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1508);
      if (lookahead == 'O') ADVANCE(1581);
      if (lookahead == 'P') ADVANCE(1519);
      if (lookahead == '[') ADVANCE(1477);
      if (lookahead == ']') ADVANCE(1479);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'o') ADVANCE(1588);
      if (lookahead == '{') ADVANCE(1491);
      if (lookahead == '}') ADVANCE(1493);
      if (lookahead == 189) ADVANCE(1600);
      if (lookahead == 1645) ADVANCE(1620);
      if (lookahead == 8208) ADVANCE(1567);
      if (lookahead == 8209) ADVANCE(1569);
      if (lookahead == 8210) ADVANCE(1571);
      if (lookahead == 8211) ADVANCE(1573);
      if (lookahead == 8212) ADVANCE(1575);
      if (lookahead == 8260) ADVANCE(1593);
      if (lookahead == 8270) ADVANCE(1616);
      if (lookahead == 8722) ADVANCE(1565);
      if (lookahead == 8725) ADVANCE(1591);
      if (lookahead == 8727) ADVANCE(1608);
      if (lookahead == 9817) ADVANCE(1522);
      if (lookahead == 9823) ADVANCE(1426);
      if (lookahead == 10033) ADVANCE(1612);
      if (lookahead == 10134) ADVANCE(1577);
      if (lookahead == 10187) ADVANCE(1595);
      if (lookahead == 10744) ADVANCE(1597);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1465)
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1467);
      if (lookahead == '\r') ADVANCE(779);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(777);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1468);
      if (lookahead == '\r') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(782);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1471);
      if (lookahead == '\r') ADVANCE(781);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(781);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1472);
      if (lookahead == '\r') ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(784);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1468);
      if (lookahead == '\r') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(782);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1474);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1486);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1483);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1483);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ']') ADVANCE(1480);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1486);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1486);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1486);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token2);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1494);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1497);
      if (lookahead == '\r') ADVANCE(1496);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1495);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1497);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1498);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1498);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1498);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(1328);
      if (lookahead == 'p') ADVANCE(1543);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(1543);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1556);
      if (lookahead == '\r') ADVANCE(1544);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(1543);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1543);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '=') ADVANCE(1543);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1454);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1552);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1537);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(14);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      if (lookahead == '&') ADVANCE(804);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1543);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1535);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(816);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(533);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(809);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1456);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1540);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1552);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(17);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1538);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(807);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1538);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(817);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1552);
      if (lookahead == '-') ADVANCE(1536);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(14);
      if ((8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1552);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1537);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(14);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(804);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1543);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1535);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(816);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(802);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(803);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(1543);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1543);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1559);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(538);
      if (lookahead == '.') ADVANCE(1495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(800);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1455);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(538);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(532);
      if (lookahead == '.') ADVANCE(1495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(800);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1455);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(800);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1455);
      if (lookahead == '.') ADVANCE(1498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(800);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1455);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_15);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_16);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_17);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_18);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1463},
  [2] = {.lex_state = 1463},
  [3] = {.lex_state = 1463},
  [4] = {.lex_state = 778},
  [5] = {.lex_state = 791},
  [6] = {.lex_state = 791},
  [7] = {.lex_state = 791},
  [8] = {.lex_state = 1464},
  [9] = {.lex_state = 1464},
  [10] = {.lex_state = 1463},
  [11] = {.lex_state = 1463},
  [12] = {.lex_state = 1462},
  [13] = {.lex_state = 792},
  [14] = {.lex_state = 1462},
  [15] = {.lex_state = 792},
  [16] = {.lex_state = 1462},
  [17] = {.lex_state = 1463},
  [18] = {.lex_state = 790},
  [19] = {.lex_state = 778},
  [20] = {.lex_state = 790},
  [21] = {.lex_state = 778},
  [22] = {.lex_state = 778},
  [23] = {.lex_state = 1463},
  [24] = {.lex_state = 1463},
  [25] = {.lex_state = 1463},
  [26] = {.lex_state = 791},
  [27] = {.lex_state = 1463},
  [28] = {.lex_state = 1463},
  [29] = {.lex_state = 1463},
  [30] = {.lex_state = 1461},
  [31] = {.lex_state = 1463},
  [32] = {.lex_state = 1463},
  [33] = {.lex_state = 1463},
  [34] = {.lex_state = 1463},
  [35] = {.lex_state = 790},
  [36] = {.lex_state = 1463},
  [37] = {.lex_state = 1463},
  [38] = {.lex_state = 1463},
  [39] = {.lex_state = 1463},
  [40] = {.lex_state = 1463},
  [41] = {.lex_state = 1463},
  [42] = {.lex_state = 1463},
  [43] = {.lex_state = 1463},
  [44] = {.lex_state = 1463},
  [45] = {.lex_state = 1463},
  [46] = {.lex_state = 1463},
  [47] = {.lex_state = 1463},
  [48] = {.lex_state = 1463},
  [49] = {.lex_state = 1463},
  [50] = {.lex_state = 1463},
  [51] = {.lex_state = 1463},
  [52] = {.lex_state = 1463},
  [53] = {.lex_state = 1463},
  [54] = {.lex_state = 783},
  [55] = {.lex_state = 1463},
  [56] = {.lex_state = 791},
  [57] = {.lex_state = 791},
  [58] = {.lex_state = 778},
  [59] = {.lex_state = 778},
  [60] = {.lex_state = 778},
  [61] = {.lex_state = 791},
  [62] = {.lex_state = 791},
  [63] = {.lex_state = 791},
  [64] = {.lex_state = 778},
  [65] = {.lex_state = 791},
  [66] = {.lex_state = 791},
  [67] = {.lex_state = 791},
  [68] = {.lex_state = 791},
  [69] = {.lex_state = 785},
  [70] = {.lex_state = 791},
  [71] = {.lex_state = 791},
  [72] = {.lex_state = 791},
  [73] = {.lex_state = 791},
  [74] = {.lex_state = 791},
  [75] = {.lex_state = 791},
  [76] = {.lex_state = 791},
  [77] = {.lex_state = 791},
  [78] = {.lex_state = 791},
  [79] = {.lex_state = 791},
  [80] = {.lex_state = 791},
  [81] = {.lex_state = 791},
  [82] = {.lex_state = 791},
  [83] = {.lex_state = 791},
  [84] = {.lex_state = 791},
  [85] = {.lex_state = 791},
  [86] = {.lex_state = 791},
  [87] = {.lex_state = 791},
  [88] = {.lex_state = 791},
  [89] = {.lex_state = 791},
  [90] = {.lex_state = 791},
  [91] = {.lex_state = 791},
  [92] = {.lex_state = 813},
  [93] = {.lex_state = 1463},
  [94] = {.lex_state = 1463},
  [95] = {.lex_state = 813},
  [96] = {.lex_state = 813},
  [97] = {.lex_state = 1463},
  [98] = {.lex_state = 1463},
  [99] = {.lex_state = 1463},
  [100] = {.lex_state = 1463},
  [101] = {.lex_state = 813},
  [102] = {.lex_state = 1463},
  [103] = {.lex_state = 1463},
  [104] = {.lex_state = 813},
  [105] = {.lex_state = 1463},
  [106] = {.lex_state = 1463},
  [107] = {.lex_state = 1463},
  [108] = {.lex_state = 1463},
  [109] = {.lex_state = 791},
  [110] = {.lex_state = 791},
  [111] = {.lex_state = 791},
  [112] = {.lex_state = 791},
  [113] = {.lex_state = 791},
  [114] = {.lex_state = 791},
  [115] = {.lex_state = 791},
  [116] = {.lex_state = 791},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 795},
  [119] = {.lex_state = 1458},
  [120] = {.lex_state = 1458},
  [121] = {.lex_state = 795},
  [122] = {.lex_state = 794},
  [123] = {.lex_state = 1458},
  [124] = {.lex_state = 795},
  [125] = {.lex_state = 1458},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 795},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 813},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1458},
  [143] = {.lex_state = 1458},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 813},
  [152] = {.lex_state = 787},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 813},
  [156] = {.lex_state = 1474},
  [157] = {.lex_state = 1458},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1494},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 813},
  [167] = {.lex_state = 1474},
  [168] = {.lex_state = 813},
  [169] = {.lex_state = 1458},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1474},
  [175] = {.lex_state = 1458},
  [176] = {.lex_state = 1458},
  [177] = {.lex_state = 1494},
  [178] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(1),
    [sym_tagpair_delimiter_open] = ACTIONS(1),
    [sym_tagpair_delimiter_close] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_tagpair_value_contents_token2] = ACTIONS(1),
    [sym_variation_delimiter_open] = ACTIONS(1),
    [sym_variation_delimiter_close] = ACTIONS(1),
    [sym_inline_comment_delimiter_open] = ACTIONS(1),
    [sym_inline_comment_delimiter_close] = ACTIONS(1),
    [sym__san_file] = ACTIONS(1),
    [sym__san_rank] = ACTIONS(1),
    [sym__san_promotable_piece] = ACTIONS(1),
    [sym__san_major_or_minor_piece] = ACTIONS(1),
    [sym__san_capture_symbol] = ACTIONS(1),
    [sym__san_promotion_symbol] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__lan_move_by_coordinates_token1] = ACTIONS(1),
    [sym__san_move_castle] = ACTIONS(1),
    [sym_check_or_mate_condition] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_result_code_token1] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [aux_sym_result_code_token2] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [aux_sym_result_code_token3] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [aux_sym_result_code_token4] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [aux_sym_result_code_token5] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [aux_sym_result_code_token6] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [aux_sym_result_code_token7] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [aux_sym_result_code_token8] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_result_code_token9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [aux_sym_result_code_token10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [aux_sym_result_code_token11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [aux_sym_result_code_token12] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [aux_sym_result_code_token13] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [aux_sym_result_code_token14] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_result_code_token15] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [aux_sym_result_code_token16] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [aux_sym_result_code_token17] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [aux_sym_result_code_token18] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [aux_sym_result_code_token19] = ACTIONS(1),
  },
  [1] = {
    [sym_series_of_games] = STATE(173),
    [sym_game] = STATE(108),
    [sym_freestanding_comment] = STATE(107),
    [sym_rest_of_line_comment] = STATE(48),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(19),
    [sym_movetext] = STATE(95),
    [sym__movetext_element] = STATE(85),
    [sym_variation] = STATE(85),
    [sym_inline_comment] = STATE(86),
    [sym_san_move] = STATE(87),
    [sym__san_move_piece] = STATE(63),
    [sym_lan_move] = STATE(88),
    [sym__san_square] = STATE(13),
    [sym__san_move_pawn] = STATE(63),
    [sym__san_drop_pawn] = STATE(63),
    [sym__san_move_major_or_minor_piece] = STATE(63),
    [sym__san_drop_major_or_minor_piece] = STATE(63),
    [sym__lan_move_by_coordinates] = STATE(57),
    [aux_sym_series_of_games_repeat1] = STATE(10),
    [aux_sym_freestanding_comment_repeat1] = STATE(94),
    [aux_sym_movetext_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(5),
    [sym_old_style_twic_section_comment] = ACTIONS(7),
    [sym_tagpair_delimiter_open] = ACTIONS(9),
    [sym_variation_delimiter_open] = ACTIONS(11),
    [sym_inline_comment_delimiter_open] = ACTIONS(13),
    [sym_move_number] = ACTIONS(15),
    [sym__san_file] = ACTIONS(17),
    [sym__san_major_or_minor_piece] = ACTIONS(19),
    [anon_sym_P] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [sym__san_move_castle] = ACTIONS(25),
    [sym__san_null_move] = ACTIONS(25),
    [sym_annotation] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(31), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(36), 1,
      sym_variation_delimiter_open,
    ACTIONS(39), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(42), 1,
      sym_move_number,
    ACTIONS(45), 1,
      sym__san_file,
    ACTIONS(48), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(54), 1,
      anon_sym_AT,
    ACTIONS(60), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(25), 1,
      sym__lan_move_by_coordinates,
    STATE(45), 1,
      sym_lan_move,
    STATE(50), 1,
      sym_san_move,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(57), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(51), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(52), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(51), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(29), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(34), 17,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [87] = 20,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(67), 1,
      sym_variation_delimiter_open,
    ACTIONS(69), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(71), 1,
      sym_move_number,
    ACTIONS(73), 1,
      sym__san_file,
    ACTIONS(75), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(25), 1,
      sym__lan_move_by_coordinates,
    STATE(45), 1,
      sym_lan_move,
    STATE(50), 1,
      sym_san_move,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(81), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(51), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(52), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(77), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(29), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(65), 17,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [174] = 25,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(67), 1,
      sym_variation_delimiter_open,
    ACTIONS(69), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(71), 1,
      sym_move_number,
    ACTIONS(73), 1,
      sym__san_file,
    ACTIONS(75), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      sym_annotation,
    ACTIONS(85), 1,
      sym__empty_line,
    ACTIONS(87), 1,
      anon_sym_1,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(23), 1,
      sym_movetext,
    STATE(25), 1,
      sym__lan_move_by_coordinates,
    STATE(45), 1,
      sym_lan_move,
    STATE(50), 1,
      sym_san_move,
    STATE(106), 1,
      sym_result_code,
    ACTIONS(81), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(91), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    STATE(51), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(52), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(77), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    ACTIONS(89), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(29), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(93), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [271] = 25,
    ACTIONS(73), 1,
      sym__san_file,
    ACTIONS(75), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(77), 1,
      anon_sym_P,
    ACTIONS(83), 1,
      sym_annotation,
    ACTIONS(87), 1,
      anon_sym_1,
    ACTIONS(95), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(97), 1,
      sym_variation_delimiter_open,
    ACTIONS(99), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(101), 1,
      sym_move_number,
    ACTIONS(105), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(25), 1,
      sym__lan_move_by_coordinates,
    STATE(36), 1,
      sym_movetext,
    STATE(45), 1,
      sym_lan_move,
    STATE(50), 1,
      sym_san_move,
    STATE(102), 1,
      sym_result_code,
    ACTIONS(103), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(107), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(109), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    STATE(51), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(52), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(89), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(29), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(111), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [367] = 21,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(116), 1,
      sym_variation_delimiter_open,
    ACTIONS(119), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(122), 1,
      sym_move_number,
    ACTIONS(125), 1,
      sym__san_file,
    ACTIONS(128), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(131), 1,
      anon_sym_P,
    ACTIONS(137), 1,
      anon_sym_AT,
    ACTIONS(143), 1,
      sym_annotation,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(87), 1,
      sym_san_move,
    STATE(88), 1,
      sym_lan_move,
    ACTIONS(134), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(140), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(85), 2,
      sym__movetext_element,
      sym_variation,
    STATE(86), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(34), 4,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(29), 12,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [453] = 21,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(146), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(148), 1,
      sym_variation_delimiter_open,
    ACTIONS(150), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(152), 1,
      sym_move_number,
    ACTIONS(156), 1,
      anon_sym_AT,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(87), 1,
      sym_san_move,
    STATE(88), 1,
      sym_lan_move,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(158), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(85), 2,
      sym__movetext_element,
      sym_variation,
    STATE(86), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(65), 4,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(63), 12,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [539] = 6,
    ACTIONS(164), 1,
      sym__san_promotable_piece,
    ACTIONS(168), 1,
      sym__san_promotion_symbol,
    STATE(27), 1,
      sym__san_promotion,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(166), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(162), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [590] = 2,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(172), 35,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_capture_symbol,
      sym__san_promotion_symbol,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
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
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [632] = 29,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
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
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      aux_sym_series_of_games_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(19), 1,
      sym_tagpair,
    STATE(48), 1,
      sym_rest_of_line_comment,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(86), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_san_move,
    STATE(88), 1,
      sym_lan_move,
    STATE(94), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(95), 1,
      sym_movetext,
    STATE(107), 1,
      sym_freestanding_comment,
    STATE(108), 1,
      sym_game,
    ACTIONS(25), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(85), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(21), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [728] = 29,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(181), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(184), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(187), 1,
      sym_variation_delimiter_open,
    ACTIONS(190), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(193), 1,
      sym_move_number,
    ACTIONS(196), 1,
      sym__san_file,
    ACTIONS(199), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(205), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_annotation,
    STATE(4), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      aux_sym_series_of_games_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(19), 1,
      sym_tagpair,
    STATE(48), 1,
      sym_rest_of_line_comment,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(86), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_san_move,
    STATE(88), 1,
      sym_lan_move,
    STATE(94), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(95), 1,
      sym_movetext,
    STATE(107), 1,
      sym_freestanding_comment,
    STATE(108), 1,
      sym_game,
    ACTIONS(208), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(85), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(202), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [824] = 5,
    ACTIONS(168), 1,
      sym__san_promotion_symbol,
    ACTIONS(218), 1,
      sym__san_promotable_piece,
    STATE(39), 1,
      sym__san_promotion,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(216), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [871] = 7,
    ACTIONS(220), 1,
      sym__san_promotable_piece,
    ACTIONS(222), 1,
      sym__san_capture_symbol,
    ACTIONS(224), 1,
      sym__san_promotion_symbol,
    ACTIONS(226), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(56), 1,
      sym__san_promotion,
    ACTIONS(162), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(160), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [922] = 5,
    ACTIONS(168), 1,
      sym__san_promotion_symbol,
    ACTIONS(232), 1,
      sym__san_promotable_piece,
    STATE(38), 1,
      sym__san_promotion,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(230), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [969] = 2,
    ACTIONS(172), 12,
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
    ACTIONS(170), 23,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_capture_symbol,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1009] = 2,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(172), 33,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1049] = 4,
    ACTIONS(234), 1,
      sym__san_capture_symbol,
    STATE(24), 1,
      sym__san_square,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(172), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1093] = 5,
    ACTIONS(224), 1,
      sym__san_promotion_symbol,
    ACTIONS(236), 1,
      sym__san_promotable_piece,
    STATE(72), 1,
      sym__san_promotion,
    ACTIONS(216), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(214), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1138] = 7,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(238), 1,
      sym__empty_line,
    ACTIONS(240), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(22), 1,
      aux_sym_header_repeat1,
    STATE(59), 1,
      sym_rest_of_line_comment,
    STATE(60), 1,
      sym_tagpair,
    ACTIONS(242), 28,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1187] = 5,
    ACTIONS(224), 1,
      sym__san_promotion_symbol,
    ACTIONS(244), 1,
      sym__san_promotable_piece,
    STATE(73), 1,
      sym__san_promotion,
    ACTIONS(230), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(228), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1232] = 7,
    ACTIONS(246), 1,
      sym__empty_line,
    ACTIONS(249), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(252), 1,
      sym_tagpair_delimiter_open,
    STATE(21), 1,
      aux_sym_header_repeat1,
    STATE(59), 1,
      sym_rest_of_line_comment,
    STATE(60), 1,
      sym_tagpair,
    ACTIONS(255), 28,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1281] = 7,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(240), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(257), 1,
      sym__empty_line,
    STATE(21), 1,
      aux_sym_header_repeat1,
    STATE(59), 1,
      sym_rest_of_line_comment,
    STATE(60), 1,
      sym_tagpair,
    ACTIONS(259), 28,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1330] = 7,
    ACTIONS(87), 1,
      anon_sym_1,
    STATE(97), 1,
      sym_result_code,
    ACTIONS(91), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(89), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(93), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
    ACTIONS(263), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1378] = 2,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(267), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1416] = 3,
    ACTIONS(273), 1,
      sym_check_or_mate_condition,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(271), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1456] = 4,
    ACTIONS(275), 1,
      sym__san_capture_symbol,
    STATE(74), 1,
      sym__san_square,
    ACTIONS(172), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(170), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1498] = 2,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(279), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1536] = 2,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(283), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1574] = 3,
    ACTIONS(289), 1,
      sym_check_or_mate_condition,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(287), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1614] = 3,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(293), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1654] = 2,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(299), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1692] = 2,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(172), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1730] = 2,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(303), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1768] = 2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(307), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1806] = 2,
    ACTIONS(172), 11,
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
    ACTIONS(170), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1844] = 7,
    ACTIONS(87), 1,
      anon_sym_1,
    STATE(99), 1,
      sym_result_code,
    ACTIONS(91), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(89), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(93), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
    ACTIONS(311), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1892] = 2,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(315), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1930] = 2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(319), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [1968] = 2,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(323), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2006] = 2,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(327), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2044] = 2,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(331), 31,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2082] = 2,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(335), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2119] = 2,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(339), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2156] = 2,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(343), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2193] = 2,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(347), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2230] = 2,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(351), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2267] = 2,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(355), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2304] = 4,
    ACTIONS(362), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(359), 13,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
    ACTIONS(364), 16,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2345] = 2,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(368), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2382] = 2,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(372), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2419] = 2,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(364), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2456] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(378), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2493] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(382), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2530] = 2,
    ACTIONS(384), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(293), 31,
      sym__empty_line,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2567] = 2,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(388), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2604] = 2,
    ACTIONS(279), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(277), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2640] = 3,
    ACTIONS(390), 1,
      sym_check_or_mate_condition,
    ACTIONS(271), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(269), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2678] = 2,
    ACTIONS(337), 1,
      sym__empty_line,
    ACTIONS(339), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2714] = 2,
    ACTIONS(392), 1,
      sym__empty_line,
    ACTIONS(394), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2750] = 2,
    ACTIONS(396), 1,
      sym__empty_line,
    ACTIONS(398), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2786] = 2,
    ACTIONS(327), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(325), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2822] = 2,
    ACTIONS(307), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(305), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2858] = 3,
    ACTIONS(400), 1,
      sym_check_or_mate_condition,
    ACTIONS(287), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(285), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2896] = 2,
    ACTIONS(402), 1,
      sym__empty_line,
    ACTIONS(404), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2932] = 2,
    ACTIONS(172), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(170), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [2968] = 2,
    ACTIONS(283), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(281), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3004] = 2,
    ACTIONS(299), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(297), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3040] = 2,
    ACTIONS(303), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(301), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3076] = 2,
    ACTIONS(406), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(293), 30,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3112] = 2,
    ACTIONS(331), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(329), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3148] = 2,
    ACTIONS(315), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(313), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3184] = 2,
    ACTIONS(323), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(321), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3220] = 2,
    ACTIONS(319), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(317), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3256] = 2,
    ACTIONS(267), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(265), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3292] = 2,
    ACTIONS(339), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(337), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3327] = 2,
    ACTIONS(343), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(341), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3362] = 2,
    ACTIONS(351), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(349), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3397] = 2,
    ACTIONS(355), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(353), 22,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3432] = 21,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(146), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(150), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(156), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      sym_variation_delimiter_open,
    ACTIONS(410), 1,
      sym_variation_delimiter_close,
    ACTIONS(412), 1,
      sym_move_number,
    ACTIONS(414), 1,
      sym_annotation,
    STATE(13), 1,
      sym__san_square,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(91), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(109), 1,
      sym_lan_move,
    STATE(111), 1,
      sym_san_move,
    STATE(163), 1,
      sym_variation_movetext,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(158), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(112), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3504] = 21,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(146), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(150), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(156), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      sym_variation_delimiter_open,
    ACTIONS(412), 1,
      sym_move_number,
    ACTIONS(414), 1,
      sym_annotation,
    ACTIONS(416), 1,
      sym_variation_delimiter_close,
    STATE(13), 1,
      sym__san_square,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(91), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(109), 1,
      sym_lan_move,
    STATE(111), 1,
      sym_san_move,
    STATE(164), 1,
      sym_variation_movetext,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(158), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(112), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3576] = 2,
    ACTIONS(368), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(366), 21,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3610] = 21,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(146), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(150), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(156), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      sym_variation_delimiter_open,
    ACTIONS(412), 1,
      sym_move_number,
    ACTIONS(414), 1,
      sym_annotation,
    ACTIONS(418), 1,
      sym_variation_delimiter_close,
    STATE(13), 1,
      sym__san_square,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(91), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(109), 1,
      sym_lan_move,
    STATE(111), 1,
      sym_san_move,
    STATE(161), 1,
      sym_variation_movetext,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(158), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(112), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3682] = 2,
    ACTIONS(388), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(386), 21,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3716] = 2,
    ACTIONS(382), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(380), 21,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3750] = 2,
    ACTIONS(378), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(376), 21,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3784] = 2,
    ACTIONS(364), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(374), 21,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3818] = 2,
    ACTIONS(372), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(370), 21,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3852] = 2,
    ACTIONS(347), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(345), 21,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3886] = 2,
    ACTIONS(335), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(333), 21,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_14,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [3920] = 20,
    ACTIONS(420), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(423), 1,
      sym_variation_delimiter_open,
    ACTIONS(426), 1,
      sym_variation_delimiter_close,
    ACTIONS(428), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(431), 1,
      sym_move_number,
    ACTIONS(434), 1,
      sym__san_file,
    ACTIONS(437), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(440), 1,
      anon_sym_P,
    ACTIONS(446), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      sym_annotation,
    STATE(13), 1,
      sym__san_square,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(109), 1,
      sym_lan_move,
    STATE(111), 1,
      sym_san_move,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(449), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(112), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3989] = 20,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(146), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(150), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(156), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      sym_variation_delimiter_open,
    ACTIONS(412), 1,
      sym_move_number,
    ACTIONS(414), 1,
      sym_annotation,
    ACTIONS(455), 1,
      sym_variation_delimiter_close,
    STATE(13), 1,
      sym__san_square,
    STATE(57), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(109), 1,
      sym_lan_move,
    STATE(111), 1,
      sym_san_move,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(158), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(112), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(113), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(63), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4058] = 2,
    ACTIONS(459), 10,
      anon_sym_SLASH,
      aux_sym_result_code_token9,
      anon_sym_10,
      aux_sym_result_code_token10,
      anon_sym_11,
      aux_sym_result_code_token11,
      anon_sym_12,
      aux_sym_result_code_token12,
      anon_sym_13,
      aux_sym_result_code_token13,
    ACTIONS(457), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_3,
      aux_sym_result_code_token2,
      anon_sym_4,
      aux_sym_result_code_token3,
      anon_sym_5,
      aux_sym_result_code_token4,
      anon_sym_6,
      aux_sym_result_code_token5,
      anon_sym_7,
      aux_sym_result_code_token6,
      anon_sym_8,
      aux_sym_result_code_token7,
      anon_sym_9,
      aux_sym_result_code_token8,
  [4089] = 5,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(466), 1,
      sym_old_style_twic_section_comment,
    STATE(93), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(469), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4118] = 5,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 1,
      sym_old_style_twic_section_comment,
    STATE(93), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(475), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4147] = 5,
    ACTIONS(477), 1,
      anon_sym_1,
    STATE(98), 1,
      sym_result_code,
    ACTIONS(109), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(479), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(111), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_15,
      aux_sym_result_code_token16,
      anon_sym_16,
      aux_sym_result_code_token17,
      anon_sym_17,
      aux_sym_result_code_token18,
      anon_sym_18,
      aux_sym_result_code_token19,
  [4175] = 1,
    ACTIONS(481), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_3,
      aux_sym_result_code_token2,
      anon_sym_4,
      aux_sym_result_code_token3,
      anon_sym_5,
      aux_sym_result_code_token4,
      anon_sym_6,
      aux_sym_result_code_token5,
      anon_sym_7,
      aux_sym_result_code_token6,
      anon_sym_8,
      aux_sym_result_code_token7,
      anon_sym_9,
      aux_sym_result_code_token8,
  [4194] = 2,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(485), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4215] = 2,
    ACTIONS(487), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(489), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4236] = 2,
    ACTIONS(491), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(493), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4257] = 2,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(497), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4278] = 1,
    ACTIONS(499), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_3,
      aux_sym_result_code_token2,
      anon_sym_4,
      aux_sym_result_code_token3,
      anon_sym_5,
      aux_sym_result_code_token4,
      anon_sym_6,
      aux_sym_result_code_token5,
      anon_sym_7,
      aux_sym_result_code_token6,
      anon_sym_8,
      aux_sym_result_code_token7,
      anon_sym_9,
      aux_sym_result_code_token8,
  [4297] = 2,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(503), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4318] = 2,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(507), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4339] = 1,
    ACTIONS(509), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_3,
      aux_sym_result_code_token2,
      anon_sym_4,
      aux_sym_result_code_token3,
      anon_sym_5,
      aux_sym_result_code_token4,
      anon_sym_6,
      aux_sym_result_code_token5,
      anon_sym_7,
      aux_sym_result_code_token6,
      anon_sym_8,
      aux_sym_result_code_token7,
      anon_sym_9,
      aux_sym_result_code_token8,
  [4358] = 2,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(513), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4379] = 2,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(517), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4400] = 2,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(521), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4421] = 2,
    ACTIONS(523), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(525), 14,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4442] = 2,
    ACTIONS(529), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(527), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4461] = 2,
    ACTIONS(533), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(531), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4480] = 2,
    ACTIONS(537), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(535), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4499] = 2,
    ACTIONS(541), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(539), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4518] = 2,
    ACTIONS(545), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(543), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4537] = 2,
    ACTIONS(549), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(547), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4556] = 2,
    ACTIONS(553), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(551), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4575] = 2,
    ACTIONS(557), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(555), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4594] = 1,
    ACTIONS(559), 10,
      anon_sym_SLASH,
      aux_sym_result_code_token9,
      anon_sym_10,
      aux_sym_result_code_token10,
      anon_sym_11,
      aux_sym_result_code_token11,
      anon_sym_12,
      aux_sym_result_code_token12,
      anon_sym_13,
      aux_sym_result_code_token13,
  [4607] = 5,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(136), 1,
      sym_tagpair_value_contents,
    STATE(172), 1,
      sym_double_quote,
    ACTIONS(563), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [4624] = 5,
    ACTIONS(565), 1,
      sym__san_file,
    ACTIONS(567), 1,
      sym__san_rank,
    ACTIONS(569), 1,
      sym__san_capture_symbol,
    ACTIONS(571), 1,
      anon_sym_AT,
    STATE(71), 1,
      sym__san_square,
  [4640] = 5,
    ACTIONS(573), 1,
      sym__san_file,
    ACTIONS(575), 1,
      sym__san_rank,
    ACTIONS(577), 1,
      sym__san_capture_symbol,
    ACTIONS(579), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym__san_square,
  [4656] = 3,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(584), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [4667] = 3,
    ACTIONS(586), 1,
      sym_tagpair_delimiter_close,
    ACTIONS(590), 1,
      aux_sym_tagpair_value_contents_token2,
    ACTIONS(588), 2,
      anon_sym_DQUOTE,
      aux_sym_tagpair_value_contents_token1,
  [4678] = 4,
    ACTIONS(592), 1,
      sym__san_file,
    ACTIONS(594), 1,
      sym__san_rank,
    ACTIONS(596), 1,
      sym__san_capture_symbol,
    STATE(66), 1,
      sym__san_square,
  [4691] = 3,
    ACTIONS(598), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(601), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [4702] = 4,
    ACTIONS(604), 1,
      sym__san_file,
    ACTIONS(606), 1,
      sym__san_rank,
    ACTIONS(608), 1,
      sym__san_capture_symbol,
    STATE(28), 1,
      sym__san_square,
  [4715] = 3,
    ACTIONS(592), 1,
      sym__san_file,
    ACTIONS(596), 1,
      sym__san_capture_symbol,
    STATE(66), 1,
      sym__san_square,
  [4725] = 2,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [4733] = 3,
    ACTIONS(604), 1,
      sym__san_file,
    ACTIONS(608), 1,
      sym__san_capture_symbol,
    STATE(28), 1,
      sym__san_square,
  [4743] = 3,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_double_quote,
    STATE(160), 1,
      sym__tagpair_value,
  [4753] = 1,
    ACTIONS(614), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [4759] = 2,
    ACTIONS(604), 1,
      sym__san_file,
    STATE(28), 1,
      sym__san_square,
  [4766] = 1,
    ACTIONS(614), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
  [4771] = 2,
    ACTIONS(604), 1,
      sym__san_file,
    STATE(24), 1,
      sym__san_square,
  [4778] = 2,
    ACTIONS(616), 1,
      sym__san_file,
    STATE(14), 1,
      sym__san_square,
  [4785] = 2,
    ACTIONS(592), 1,
      sym__san_file,
    STATE(67), 1,
      sym__san_square,
  [4792] = 2,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_double_quote,
  [4799] = 2,
    ACTIONS(604), 1,
      sym__san_file,
    STATE(34), 1,
      sym__san_square,
  [4806] = 2,
    ACTIONS(604), 1,
      sym__san_file,
    STATE(33), 1,
      sym__san_square,
  [4813] = 2,
    ACTIONS(616), 1,
      sym__san_file,
    STATE(12), 1,
      sym__san_square,
  [4820] = 2,
    ACTIONS(592), 1,
      sym__san_file,
    STATE(74), 1,
      sym__san_square,
  [4827] = 2,
    ACTIONS(604), 1,
      sym__san_file,
    STATE(31), 1,
      sym__san_square,
  [4834] = 2,
    ACTIONS(620), 1,
      sym__san_rank,
    ACTIONS(622), 1,
      sym__san_capture_symbol,
  [4841] = 2,
    ACTIONS(624), 1,
      sym__san_rank,
    ACTIONS(626), 1,
      sym__san_capture_symbol,
  [4848] = 2,
    ACTIONS(628), 1,
      sym__san_file,
    STATE(20), 1,
      sym__san_square,
  [4855] = 2,
    ACTIONS(592), 1,
      sym__san_file,
    STATE(70), 1,
      sym__san_square,
  [4862] = 2,
    ACTIONS(592), 1,
      sym__san_file,
    STATE(62), 1,
      sym__san_square,
  [4869] = 2,
    ACTIONS(592), 1,
      sym__san_file,
    STATE(68), 1,
      sym__san_square,
  [4876] = 2,
    ACTIONS(592), 1,
      sym__san_file,
    STATE(66), 1,
      sym__san_square,
  [4883] = 2,
    ACTIONS(628), 1,
      sym__san_file,
    STATE(18), 1,
      sym__san_square,
  [4890] = 2,
    ACTIONS(604), 1,
      sym__san_file,
    STATE(41), 1,
      sym__san_square,
  [4897] = 1,
    ACTIONS(630), 1,
      anon_sym_22,
  [4901] = 1,
    ACTIONS(632), 1,
      sym_tagpair_key,
  [4905] = 1,
    ACTIONS(634), 1,
      anon_sym_AT,
  [4909] = 1,
    ACTIONS(636), 1,
      sym_inline_comment_delimiter_close,
  [4913] = 1,
    ACTIONS(638), 1,
      anon_sym_1,
  [4917] = 1,
    ACTIONS(640), 1,
      sym_rest_of_line_comment_text,
  [4921] = 1,
    ACTIONS(642), 1,
      sym__san_rank,
  [4925] = 1,
    ACTIONS(644), 1,
      sym__san_promotable_piece,
  [4929] = 1,
    ACTIONS(646), 1,
      sym_inline_comment_text,
  [4933] = 1,
    ACTIONS(648), 1,
      sym_tagpair_delimiter_close,
  [4937] = 1,
    ACTIONS(650), 1,
      sym_variation_delimiter_close,
  [4941] = 1,
    ACTIONS(652), 1,
      sym_inline_comment_delimiter_close,
  [4945] = 1,
    ACTIONS(654), 1,
      sym_variation_delimiter_close,
  [4949] = 1,
    ACTIONS(656), 1,
      sym_variation_delimiter_close,
  [4953] = 1,
    ACTIONS(658), 1,
      sym_tagpair_delimiter_close,
  [4957] = 1,
    ACTIONS(614), 1,
      anon_sym_1,
  [4961] = 1,
    ACTIONS(660), 1,
      sym_rest_of_line_comment_text,
  [4965] = 1,
    ACTIONS(662), 1,
      anon_sym_22,
  [4969] = 1,
    ACTIONS(664), 1,
      sym__san_rank,
  [4973] = 1,
    ACTIONS(610), 1,
      sym_tagpair_delimiter_close,
  [4977] = 1,
    ACTIONS(666), 1,
      sym__san_promotable_piece,
  [4981] = 1,
    ACTIONS(668), 1,
      sym_tagpair_delimiter_close,
  [4985] = 1,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
  [4989] = 1,
    ACTIONS(672), 1,
      sym_rest_of_line_comment_text,
  [4993] = 1,
    ACTIONS(674), 1,
      sym__san_rank,
  [4997] = 1,
    ACTIONS(676), 1,
      sym__san_rank,
  [5001] = 1,
    ACTIONS(678), 1,
      sym_inline_comment_text,
  [5005] = 1,
    ACTIONS(680), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 367,
  [SMALL_STATE(7)] = 453,
  [SMALL_STATE(8)] = 539,
  [SMALL_STATE(9)] = 590,
  [SMALL_STATE(10)] = 632,
  [SMALL_STATE(11)] = 728,
  [SMALL_STATE(12)] = 824,
  [SMALL_STATE(13)] = 871,
  [SMALL_STATE(14)] = 922,
  [SMALL_STATE(15)] = 969,
  [SMALL_STATE(16)] = 1009,
  [SMALL_STATE(17)] = 1049,
  [SMALL_STATE(18)] = 1093,
  [SMALL_STATE(19)] = 1138,
  [SMALL_STATE(20)] = 1187,
  [SMALL_STATE(21)] = 1232,
  [SMALL_STATE(22)] = 1281,
  [SMALL_STATE(23)] = 1330,
  [SMALL_STATE(24)] = 1378,
  [SMALL_STATE(25)] = 1416,
  [SMALL_STATE(26)] = 1456,
  [SMALL_STATE(27)] = 1498,
  [SMALL_STATE(28)] = 1536,
  [SMALL_STATE(29)] = 1574,
  [SMALL_STATE(30)] = 1614,
  [SMALL_STATE(31)] = 1654,
  [SMALL_STATE(32)] = 1692,
  [SMALL_STATE(33)] = 1730,
  [SMALL_STATE(34)] = 1768,
  [SMALL_STATE(35)] = 1806,
  [SMALL_STATE(36)] = 1844,
  [SMALL_STATE(37)] = 1892,
  [SMALL_STATE(38)] = 1930,
  [SMALL_STATE(39)] = 1968,
  [SMALL_STATE(40)] = 2006,
  [SMALL_STATE(41)] = 2044,
  [SMALL_STATE(42)] = 2082,
  [SMALL_STATE(43)] = 2119,
  [SMALL_STATE(44)] = 2156,
  [SMALL_STATE(45)] = 2193,
  [SMALL_STATE(46)] = 2230,
  [SMALL_STATE(47)] = 2267,
  [SMALL_STATE(48)] = 2304,
  [SMALL_STATE(49)] = 2345,
  [SMALL_STATE(50)] = 2382,
  [SMALL_STATE(51)] = 2419,
  [SMALL_STATE(52)] = 2456,
  [SMALL_STATE(53)] = 2493,
  [SMALL_STATE(54)] = 2530,
  [SMALL_STATE(55)] = 2567,
  [SMALL_STATE(56)] = 2604,
  [SMALL_STATE(57)] = 2640,
  [SMALL_STATE(58)] = 2678,
  [SMALL_STATE(59)] = 2714,
  [SMALL_STATE(60)] = 2750,
  [SMALL_STATE(61)] = 2786,
  [SMALL_STATE(62)] = 2822,
  [SMALL_STATE(63)] = 2858,
  [SMALL_STATE(64)] = 2896,
  [SMALL_STATE(65)] = 2932,
  [SMALL_STATE(66)] = 2968,
  [SMALL_STATE(67)] = 3004,
  [SMALL_STATE(68)] = 3040,
  [SMALL_STATE(69)] = 3076,
  [SMALL_STATE(70)] = 3112,
  [SMALL_STATE(71)] = 3148,
  [SMALL_STATE(72)] = 3184,
  [SMALL_STATE(73)] = 3220,
  [SMALL_STATE(74)] = 3256,
  [SMALL_STATE(75)] = 3292,
  [SMALL_STATE(76)] = 3327,
  [SMALL_STATE(77)] = 3362,
  [SMALL_STATE(78)] = 3397,
  [SMALL_STATE(79)] = 3432,
  [SMALL_STATE(80)] = 3504,
  [SMALL_STATE(81)] = 3576,
  [SMALL_STATE(82)] = 3610,
  [SMALL_STATE(83)] = 3682,
  [SMALL_STATE(84)] = 3716,
  [SMALL_STATE(85)] = 3750,
  [SMALL_STATE(86)] = 3784,
  [SMALL_STATE(87)] = 3818,
  [SMALL_STATE(88)] = 3852,
  [SMALL_STATE(89)] = 3886,
  [SMALL_STATE(90)] = 3920,
  [SMALL_STATE(91)] = 3989,
  [SMALL_STATE(92)] = 4058,
  [SMALL_STATE(93)] = 4089,
  [SMALL_STATE(94)] = 4118,
  [SMALL_STATE(95)] = 4147,
  [SMALL_STATE(96)] = 4175,
  [SMALL_STATE(97)] = 4194,
  [SMALL_STATE(98)] = 4215,
  [SMALL_STATE(99)] = 4236,
  [SMALL_STATE(100)] = 4257,
  [SMALL_STATE(101)] = 4278,
  [SMALL_STATE(102)] = 4297,
  [SMALL_STATE(103)] = 4318,
  [SMALL_STATE(104)] = 4339,
  [SMALL_STATE(105)] = 4358,
  [SMALL_STATE(106)] = 4379,
  [SMALL_STATE(107)] = 4400,
  [SMALL_STATE(108)] = 4421,
  [SMALL_STATE(109)] = 4442,
  [SMALL_STATE(110)] = 4461,
  [SMALL_STATE(111)] = 4480,
  [SMALL_STATE(112)] = 4499,
  [SMALL_STATE(113)] = 4518,
  [SMALL_STATE(114)] = 4537,
  [SMALL_STATE(115)] = 4556,
  [SMALL_STATE(116)] = 4575,
  [SMALL_STATE(117)] = 4594,
  [SMALL_STATE(118)] = 4607,
  [SMALL_STATE(119)] = 4624,
  [SMALL_STATE(120)] = 4640,
  [SMALL_STATE(121)] = 4656,
  [SMALL_STATE(122)] = 4667,
  [SMALL_STATE(123)] = 4678,
  [SMALL_STATE(124)] = 4691,
  [SMALL_STATE(125)] = 4702,
  [SMALL_STATE(126)] = 4715,
  [SMALL_STATE(127)] = 4725,
  [SMALL_STATE(128)] = 4733,
  [SMALL_STATE(129)] = 4743,
  [SMALL_STATE(130)] = 4753,
  [SMALL_STATE(131)] = 4759,
  [SMALL_STATE(132)] = 4766,
  [SMALL_STATE(133)] = 4771,
  [SMALL_STATE(134)] = 4778,
  [SMALL_STATE(135)] = 4785,
  [SMALL_STATE(136)] = 4792,
  [SMALL_STATE(137)] = 4799,
  [SMALL_STATE(138)] = 4806,
  [SMALL_STATE(139)] = 4813,
  [SMALL_STATE(140)] = 4820,
  [SMALL_STATE(141)] = 4827,
  [SMALL_STATE(142)] = 4834,
  [SMALL_STATE(143)] = 4841,
  [SMALL_STATE(144)] = 4848,
  [SMALL_STATE(145)] = 4855,
  [SMALL_STATE(146)] = 4862,
  [SMALL_STATE(147)] = 4869,
  [SMALL_STATE(148)] = 4876,
  [SMALL_STATE(149)] = 4883,
  [SMALL_STATE(150)] = 4890,
  [SMALL_STATE(151)] = 4897,
  [SMALL_STATE(152)] = 4901,
  [SMALL_STATE(153)] = 4905,
  [SMALL_STATE(154)] = 4909,
  [SMALL_STATE(155)] = 4913,
  [SMALL_STATE(156)] = 4917,
  [SMALL_STATE(157)] = 4921,
  [SMALL_STATE(158)] = 4925,
  [SMALL_STATE(159)] = 4929,
  [SMALL_STATE(160)] = 4933,
  [SMALL_STATE(161)] = 4937,
  [SMALL_STATE(162)] = 4941,
  [SMALL_STATE(163)] = 4945,
  [SMALL_STATE(164)] = 4949,
  [SMALL_STATE(165)] = 4953,
  [SMALL_STATE(166)] = 4957,
  [SMALL_STATE(167)] = 4961,
  [SMALL_STATE(168)] = 4965,
  [SMALL_STATE(169)] = 4969,
  [SMALL_STATE(170)] = 4973,
  [SMALL_STATE(171)] = 4977,
  [SMALL_STATE(172)] = 4981,
  [SMALL_STATE(173)] = 4985,
  [SMALL_STATE(174)] = 4989,
  [SMALL_STATE(175)] = 4993,
  [SMALL_STATE(176)] = 4997,
  [SMALL_STATE(177)] = 5001,
  [SMALL_STATE(178)] = 5005,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(167),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(82),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(177),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(55),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(142),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(120),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(178),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(141),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(29),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(53),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(156),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(80),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(159),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(83),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(143),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(119),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(153),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(153),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(135),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(63),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 24), SHIFT_REPEAT(84),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 10),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(167),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(94),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(152),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(80),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(159),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(83),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(143),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(119),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(153),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(135),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(63),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 23), SHIFT_REPEAT(84),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 32), SHIFT_REPEAT(21),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 32), SHIFT_REPEAT(174),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 32), SHIFT_REPEAT(152),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 32),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 21),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 19),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 19),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 11),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 29),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 29),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 12),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, .production_id = 12),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 11),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 11),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, .production_id = 28),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, .production_id = 28),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, .production_id = 26),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, .production_id = 26),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 7),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 7),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 6),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 6),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, .production_id = 34),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, .production_id = 34),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(156),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(79),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(159),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(115),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(143),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(119),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(153),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(153),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(135),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(63),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(114),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, .production_id = 16),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(167),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(93),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 31),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 31),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 22),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 22),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 36),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 36),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 30),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 30),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 20),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 20),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 4),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 18),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 18),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, .production_id = 35),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, .production_id = 35),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 17),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 17),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 16),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 16),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 15),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 15),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 14),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 14),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 13),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 13),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, .production_id = 25),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, .production_id = 25),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1), SHIFT(124),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(124),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(124),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, .production_id = 37),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, .production_id = 33),
  [670] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pgn(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
