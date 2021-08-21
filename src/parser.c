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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 173
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 39

enum {
  sym__empty_line = 1,
  sym_rest_of_line_comment_delimiter_open = 2,
  aux_sym_rest_of_line_comment_token1 = 3,
  sym_rest_of_line_comment_text = 4,
  sym_old_style_twic_section_comment = 5,
  sym_tagpair_delimiter_open = 6,
  sym_tagpair_delimiter_close = 7,
  sym_double_quote = 8,
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
  sym_tagpair = 81,
  sym__tagpair_value = 82,
  sym_tagpair_value_contents = 83,
  sym_movetext = 84,
  sym_variation_movetext = 85,
  sym__movetext_element = 86,
  sym__variation_movetext_element = 87,
  sym_variation = 88,
  sym_recursive_variation = 89,
  sym_inline_comment = 90,
  sym_san_move = 91,
  sym__san_move_piece = 92,
  sym_lan_move = 93,
  sym__san_square = 94,
  sym__san_promotion = 95,
  sym__san_move_pawn = 96,
  sym__san_drop_pawn = 97,
  sym__san_move_major_or_minor_piece = 98,
  sym__san_drop_major_or_minor_piece = 99,
  sym__lan_move_by_coordinates = 100,
  sym_result_code = 101,
  aux_sym_series_of_games_repeat1 = 102,
  aux_sym_freestanding_comment_repeat1 = 103,
  aux_sym_header_repeat1 = 104,
  aux_sym_tagpair_value_contents_repeat1 = 105,
  aux_sym_movetext_repeat1 = 106,
  aux_sym_variation_movetext_repeat1 = 107,
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
  [sym_double_quote] = "double_quote",
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
  [sym_double_quote] = sym_double_quote,
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
  [sym_double_quote] = {
    .visible = true,
    .named = true,
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
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 5},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 3},
  [17] = {.index = 27, .length = 4},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 1},
  [23] = {.index = 40, .length = 1},
  [24] = {.index = 41, .length = 1},
  [25] = {.index = 42, .length = 5},
  [26] = {.index = 47, .length = 1},
  [27] = {.index = 48, .length = 1},
  [28] = {.index = 49, .length = 3},
  [29] = {.index = 52, .length = 10},
  [30] = {.index = 62, .length = 2},
  [31] = {.index = 64, .length = 5},
  [32] = {.index = 69, .length = 3},
  [33] = {.index = 72, .length = 2},
  [34] = {.index = 74, .length = 3},
  [35] = {.index = 77, .length = 10},
  [36] = {.index = 87, .length = 3},
  [37] = {.index = 90, .length = 3},
  [38] = {.index = 93, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_game, 0},
  [1] =
    {field_freestanding_comment, 0},
  [2] =
    {field_tagpair, 0},
  [3] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_game, 0, .inherited = true},
  [5] =
    {field_tagpair, 0, .inherited = true},
  [6] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
  [8] =
    {field_freestanding_comment, 0},
    {field_game, 1},
  [10] =
    {field_move_number, 0},
  [11] =
    {field_annotation, 0},
  [12] =
    {field_comment, 0},
  [13] =
    {field_header, 0},
    {field_movetext, 1},
  [15] =
    {field_annotation, 0, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_lan_move, 0, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_san_move, 0, .inherited = true},
  [20] =
    {field_san_move, 0},
  [21] =
    {field_lan_move, 0},
  [22] =
    {field_header, 0},
    {field_result_code, 1},
  [24] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1},
    {field_game, 0, .inherited = true},
  [27] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
  [31] =
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [33] =
    {field_header, 0},
    {field_movetext, 2},
  [35] =
    {field_header, 0},
    {field_result_code, 2},
  [37] =
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [39] =
    {field_variation_move_number, 0},
  [40] =
    {field_variation_annotation, 0},
  [41] =
    {field_variation_comment, 0},
  [42] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
  [47] =
    {field_variation_san_move, 0},
  [48] =
    {field_variation_lan_move, 0},
  [49] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 2},
  [52] =
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
  [62] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [64] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [69] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [72] =
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 1},
  [74] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [77] =
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
  [87] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [90] =
    {field_tagpair_value_contents, 1},
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 2},
  [93] =
    {field_recursive_variation_content, 1},
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
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
      if (eof) ADVANCE(1553);
      if (lookahead == '"') ADVANCE(1569);
      if (lookahead == '#') ADVANCE(1625);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(830);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '*') ADVANCE(1695);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1628);
      if (lookahead == '-') ADVANCE(1651);
      if (lookahead == '/') ADVANCE(1680);
      if (lookahead == '0') ADVANCE(1674);
      if (lookahead == '1') ADVANCE(1647);
      if (lookahead == '2') ADVANCE(1690);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(1590);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1601);
      if (lookahead == '=') ADVANCE(1603);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1591);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1595);
      if (lookahead == 'O') ADVANCE(1670);
      if (lookahead == 'P') ADVANCE(1606);
      if (lookahead == '[') ADVANCE(1566);
      if (lookahead == '\\') ADVANCE(1544);
      if (lookahead == ']') ADVANCE(1568);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'o') ADVANCE(1679);
      if (lookahead == '{') ADVANCE(1578);
      if (lookahead == '}') ADVANCE(1580);
      if (lookahead == 189) ADVANCE(1691);
      if (lookahead == 1645) ADVANCE(1711);
      if (lookahead == 8208) ADVANCE(1655);
      if (lookahead == 8209) ADVANCE(1657);
      if (lookahead == 8210) ADVANCE(1659);
      if (lookahead == 8211) ADVANCE(1661);
      if (lookahead == 8212) ADVANCE(1663);
      if (lookahead == 8260) ADVANCE(1684);
      if (lookahead == 8270) ADVANCE(1707);
      if (lookahead == 8722) ADVANCE(1653);
      if (lookahead == 8725) ADVANCE(1682);
      if (lookahead == 8727) ADVANCE(1699);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == 10033) ADVANCE(1703);
      if (lookahead == 10134) ADVANCE(1665);
      if (lookahead == 10187) ADVANCE(1686);
      if (lookahead == 10744) ADVANCE(1688);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1551)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(859);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(399);
      if (lookahead == 'P') ADVANCE(405);
      if (lookahead == 'R') ADVANCE(317);
      if (lookahead == 'S') ADVANCE(380);
      if (lookahead == 'U') ADVANCE(442);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'b') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == 'q') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'x') ADVANCE(434);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'h') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(418);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'h') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'q') ADVANCE(521);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'h') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'h') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(433);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'h') ADVANCE(526);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'h') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(399);
      if (lookahead == 'P') ADVANCE(405);
      if (lookahead == 'R') ADVANCE(317);
      if (lookahead == 'S') ADVANCE(380);
      if (lookahead == 'U') ADVANCE(442);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'b') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == 'q') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'x') ADVANCE(434);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'h') ADVANCE(528);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(399);
      if (lookahead == 'P') ADVANCE(405);
      if (lookahead == 'R') ADVANCE(317);
      if (lookahead == 'S') ADVANCE(380);
      if (lookahead == 'U') ADVANCE(442);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'b') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'h') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'm') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == 'q') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'x') ADVANCE(434);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1639);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(18);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(796);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '6') ADVANCE(210);
      if (lookahead == '7') ADVANCE(240);
      if (lookahead == '8') ADVANCE(271);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '7') ADVANCE(216);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '7') ADVANCE(216);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '7') ADVANCE(216);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '5') ADVANCE(131);
      if (lookahead == '6') ADVANCE(171);
      if (lookahead == '7') ADVANCE(62);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '7') ADVANCE(80);
      if (lookahead == ';') ADVANCE(1698);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == '3') ADVANCE(110);
      if (lookahead == '5') ADVANCE(88);
      if (lookahead == '6') ADVANCE(205);
      if (lookahead == '7') ADVANCE(102);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == '3') ADVANCE(110);
      if (lookahead == '5') ADVANCE(88);
      if (lookahead == '6') ADVANCE(205);
      if (lookahead == '7') ADVANCE(103);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(224);
      if (lookahead == '1') ADVANCE(156);
      if (lookahead == '6') ADVANCE(200);
      if (lookahead == '9') ADVANCE(544);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(224);
      if (lookahead == '1') ADVANCE(163);
      if (lookahead == '6') ADVANCE(200);
      if (lookahead == '9') ADVANCE(544);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == '7') ADVANCE(263);
      if (lookahead == '9') ADVANCE(551);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(274);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == '7') ADVANCE(267);
      if (lookahead == '9') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '6') ADVANCE(135);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '7') ADVANCE(266);
      if (lookahead == '9') ADVANCE(552);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(215);
      if (lookahead == '3') ADVANCE(189);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(100);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(277);
      if (lookahead == '1') ADVANCE(277);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead == '3') ADVANCE(277);
      if (lookahead == '4') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(277);
      if (lookahead == '1') ADVANCE(277);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '6') ADVANCE(210);
      if (lookahead == '8') ADVANCE(271);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(290);
      if (lookahead == '1') ADVANCE(298);
      if (lookahead == '3') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == '2') ADVANCE(120);
      if (lookahead == '7') ADVANCE(185);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '7') ADVANCE(269);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '2') ADVANCE(107);
      if (lookahead == '7') ADVANCE(268);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(286);
      if (lookahead == '1') ADVANCE(286);
      if (lookahead == '2') ADVANCE(286);
      if (lookahead == '3') ADVANCE(286);
      if (lookahead == '4') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(286);
      if (lookahead == '1') ADVANCE(286);
      if (lookahead == '2') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(297);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '2') ADVANCE(297);
      if (lookahead == '3') ADVANCE(297);
      if (lookahead == '4') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(297);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '2') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(293);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == '1') ADVANCE(299);
      if (lookahead == '2') ADVANCE(299);
      if (lookahead == '3') ADVANCE(299);
      if (lookahead == '4') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == '1') ADVANCE(299);
      if (lookahead == '2') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == '1') ADVANCE(296);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead == '4') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == '1') ADVANCE(296);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(252);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == '6') ADVANCE(59);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(254);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(255);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '5') ADVANCE(131);
      if (lookahead == '6') ADVANCE(171);
      if (lookahead == '7') ADVANCE(62);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == '3') ADVANCE(110);
      if (lookahead == '5') ADVANCE(88);
      if (lookahead == '6') ADVANCE(205);
      if (lookahead == '7') ADVANCE(104);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '2') ADVANCE(121);
      if (lookahead == '7') ADVANCE(273);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '6') ADVANCE(210);
      if (lookahead == '7') ADVANCE(240);
      if (lookahead == '8') ADVANCE(271);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '6') ADVANCE(210);
      if (lookahead == '7') ADVANCE(240);
      if (lookahead == '8') ADVANCE(271);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(176);
      if (lookahead == '4') ADVANCE(148);
      if (lookahead == '5') ADVANCE(248);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead == '8') ADVANCE(137);
      if (lookahead == '9') ADVANCE(201);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(93);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == ';') ADVANCE(1626);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(157);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(536);
      if (lookahead == '4') ADVANCE(239);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(199);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(532);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(181);
      if (lookahead == '7') ADVANCE(203);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(132);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '4') ADVANCE(151);
      if (lookahead == '8') ADVANCE(154);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '4') ADVANCE(188);
      if (lookahead == '5') ADVANCE(258);
      if (lookahead == '8') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(226);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(537);
      if (lookahead == '6') ADVANCE(227);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(226);
      if (lookahead == '2') ADVANCE(72);
      if (lookahead == '3') ADVANCE(537);
      if (lookahead == '6') ADVANCE(227);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(247);
      if (lookahead == '2') ADVANCE(240);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(177);
      if (lookahead == '7') ADVANCE(203);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(160);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(196);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '4') ADVANCE(221);
      if (lookahead == '8') ADVANCE(144);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(215);
      if (lookahead == '3') ADVANCE(109);
      if (lookahead == '9') ADVANCE(217);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(215);
      if (lookahead == '3') ADVANCE(109);
      if (lookahead == '9') ADVANCE(219);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(215);
      if (lookahead == '3') ADVANCE(109);
      if (lookahead == '9') ADVANCE(218);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(178);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(192);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(159);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(295);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(175);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '4') ADVANCE(207);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(184);
      if (lookahead == '7') ADVANCE(211);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '4') ADVANCE(214);
      if (lookahead == '8') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(234);
      if (lookahead == '2') ADVANCE(243);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(234);
      if (lookahead == '2') ADVANCE(43);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '4') ADVANCE(215);
      if (lookahead == '8') ADVANCE(153);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(161);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '4') ADVANCE(175);
      if (lookahead == '5') ADVANCE(250);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(114);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(246);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(162);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '3') ADVANCE(536);
      if (lookahead == '4') ADVANCE(239);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '4') ADVANCE(174);
      if (lookahead == '5') ADVANCE(250);
      if (lookahead == '8') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(115);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(237);
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == '3') ADVANCE(537);
      if (lookahead == '6') ADVANCE(227);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(197);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(238);
      if (lookahead == '2') ADVANCE(38);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '4') ADVANCE(223);
      if (lookahead == '8') ADVANCE(170);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(165);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == '3') ADVANCE(176);
      if (lookahead == '4') ADVANCE(150);
      if (lookahead == '5') ADVANCE(257);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead == '8') ADVANCE(137);
      if (lookahead == '9') ADVANCE(201);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == '3') ADVANCE(176);
      if (lookahead == '4') ADVANCE(149);
      if (lookahead == '5') ADVANCE(248);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead == '8') ADVANCE(169);
      if (lookahead == '9') ADVANCE(201);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(94);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '5') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(31);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead == '6') ADVANCE(204);
      if (lookahead == '7') ADVANCE(85);
      if (lookahead == '8') ADVANCE(40);
      if (lookahead == '9') ADVANCE(242);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '7') ADVANCE(142);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(54);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(224);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(132);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '6') ADVANCE(227);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(541);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(69);
      if (lookahead == '7') ADVANCE(166);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '7') ADVANCE(147);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(56);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(160);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '5') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '5') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead == '3') ADVANCE(284);
      if (lookahead == '5') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(134);
      if (lookahead == '9') ADVANCE(200);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '7') ADVANCE(158);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(241);
      if (lookahead == '7') ADVANCE(167);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead == '3') ADVANCE(550);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(136);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(286);
      if (lookahead == '5') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(76);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(161);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(246);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(162);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead == '6') ADVANCE(204);
      if (lookahead == '7') ADVANCE(86);
      if (lookahead == '8') ADVANCE(40);
      if (lookahead == '9') ADVANCE(242);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead == '7') ADVANCE(168);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '5') ADVANCE(286);
      if (lookahead == '7') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead == '8') ADVANCE(244);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(182);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(538);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(187);
      if (lookahead == '8') ADVANCE(244);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '4') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '4') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(173);
      if (lookahead == '8') ADVANCE(245);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(109);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(284);
      if (lookahead == '4') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(274);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(274);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead == '7') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(295);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead == '6') ADVANCE(175);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead == '7') ADVANCE(215);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(189);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(183);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(208);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(209);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead == '8') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(261);
      if (lookahead == '6') ADVANCE(191);
      if (lookahead == '7') ADVANCE(152);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(546);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(225);
      if (lookahead == '6') ADVANCE(26);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(136);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(222);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(207);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead == '6') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead == '7') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(131);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(276);
      if (lookahead == '6') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(276);
      if (lookahead == '6') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(284);
      if (lookahead == '6') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(274);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(292);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(547);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(543);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(212);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(259);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(180);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(545);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(270);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(272);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(548);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(549);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead == '8') ADVANCE(282);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(62);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(259);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(282);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(233);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(277);
      if (lookahead == '9') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(229);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(286);
      if (lookahead == '9') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(297);
      if (lookahead == '9') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(299);
      if (lookahead == '9') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(296);
      if (lookahead == '9') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(235);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(236);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(172);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(133);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(215);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(220);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(276);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == ';') ADVANCE(1632);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(213);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(225);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(225);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(231);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(284);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(274);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(232);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1627);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1626);
      if (lookahead == 'b') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1626);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1635);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1639);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1639);
      if (lookahead == 'f') ADVANCE(495);
      if (lookahead == 'q') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1639);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1639);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1624);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1632);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1698);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1694);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1714);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1710);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1702);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1706);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1616);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1633);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(557);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(467);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(467);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(467);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(362);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead == 'U') ADVANCE(447);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(402);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(417);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'y') ADVANCE(445);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'y') ADVANCE(454);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'v') ADVANCE(416);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'v') ADVANCE(416);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(496);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(385);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'q') ADVANCE(518);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(496);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(360);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(358);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(503);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(364);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == 'q') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(500);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(519);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == 'q') ADVANCE(508);
      if (lookahead == 'x') ADVANCE(340);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(515);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == 'x') ADVANCE(449);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(278);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(472);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(326);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(477);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(481);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(482);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(327);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(483);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(333);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(338);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(446);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(452);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(453);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 65038) ADVANCE(1612);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(298);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(292);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(251);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(253);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1624);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1624);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1619);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1620);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1638);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1510);
      if (lookahead == '\r') ADVANCE(561);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1510);
      if (lookahead == '\r') SKIP(1511)
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1564);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(565);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(572);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(576);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(580);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(581);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(584);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(585);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(586);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(589);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(590);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(597);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(602);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(605);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(618);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(619);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(621);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(623);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(628);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(630);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(632);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(634);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(635);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(636);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(637);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(640);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(641);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(659);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(660);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(661);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(662);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(663);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(664);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(666);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(668);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(669);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(670);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(671);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(672);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(673);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(675);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(676);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(677);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(678);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1565);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(797);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(692);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(699);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(700);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(702);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(704);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(717);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(724);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(725);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(726);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(727);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(728);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(731);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(732);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(735);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(739);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(740);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(741);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(744);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(748);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(750);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(753);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(754);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(756);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(757);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(758);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(759);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(760);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(761);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(763);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(764);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(765);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(766);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(767);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(769);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(770);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(771);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(772);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(773);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(774);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(775);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(776);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(778);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(779);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(780);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(781);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(783);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(784);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(785);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 787:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 788:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 789:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 790:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(789);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 791:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 792:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(791);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 793:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(792);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 794:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(793);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 795:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(794);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 796:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(795);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 797:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 798:
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'N') ADVANCE(1598);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 799:
      if (lookahead == '\n') ADVANCE(1554);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'N') ADVANCE(1598);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 800:
      if (lookahead == '\n') ADVANCE(1554);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-') ADVANCE(1634);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'N') ADVANCE(1598);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if ((8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 801:
      if (lookahead == '\n') ADVANCE(1554);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'N') ADVANCE(1598);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 802:
      if (lookahead == '\n') ADVANCE(860);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '.') ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 803:
      if (lookahead == '\n') ADVANCE(860);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '.') ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 804:
      if (lookahead == '\n') ADVANCE(860);
      if (lookahead == '.') ADVANCE(1585);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      END_STATE();
    case 805:
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'N') ADVANCE(1598);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 806:
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(805);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'N') ADVANCE(1598);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 807:
      if (lookahead == '\n') ADVANCE(814);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(833);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == '*') ADVANCE(1695);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1675);
      if (lookahead == '1') ADVANCE(1650);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'N') ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1670);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(1566);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'o') ADVANCE(1679);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 189) ADVANCE(1691);
      if (lookahead == 1645) ADVANCE(1711);
      if (lookahead == 8270) ADVANCE(1707);
      if (lookahead == 8727) ADVANCE(1699);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == 10033) ADVANCE(1703);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 808:
      if (lookahead == '\n') ADVANCE(814);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(833);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == '*') ADVANCE(1695);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1675);
      if (lookahead == '1') ADVANCE(1650);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'O') ADVANCE(1670);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(1566);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'o') ADVANCE(1679);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 189) ADVANCE(1691);
      if (lookahead == 1645) ADVANCE(1711);
      if (lookahead == 8270) ADVANCE(1707);
      if (lookahead == 8727) ADVANCE(1699);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == 10033) ADVANCE(1703);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 809:
      if (lookahead == '\n') ADVANCE(1562);
      if (lookahead == '\r') ADVANCE(809);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'N') ADVANCE(1598);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 810:
      if (lookahead == '\n') ADVANCE(819);
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '0') ADVANCE(1672);
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == 'O') ADVANCE(1669);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 811:
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '0') ADVANCE(1672);
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == 'O') ADVANCE(1669);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 812:
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(811);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '0') ADVANCE(1672);
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == 'O') ADVANCE(1669);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 813:
      if (lookahead == '\n') ADVANCE(1555);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(833);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == '*') ADVANCE(1695);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1675);
      if (lookahead == '1') ADVANCE(1650);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'N') ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1670);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(1566);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'o') ADVANCE(1679);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 189) ADVANCE(1691);
      if (lookahead == 1645) ADVANCE(1711);
      if (lookahead == 8270) ADVANCE(1707);
      if (lookahead == 8727) ADVANCE(1699);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == 10033) ADVANCE(1703);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 814:
      if (lookahead == '\n') ADVANCE(1555);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(833);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == '*') ADVANCE(1695);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1675);
      if (lookahead == '1') ADVANCE(1650);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'N') ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1670);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (lookahead == '[') ADVANCE(1566);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'o') ADVANCE(1679);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 189) ADVANCE(1691);
      if (lookahead == 1645) ADVANCE(1711);
      if (lookahead == 8270) ADVANCE(1707);
      if (lookahead == 8727) ADVANCE(1699);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == 10033) ADVANCE(1703);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 815:
      if (lookahead == '\n') ADVANCE(1560);
      if (lookahead == '\r') ADVANCE(815);
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(841);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(849);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'N') ADVANCE(1600);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 816:
      if (lookahead == '\n') ADVANCE(1560);
      if (lookahead == '\r') ADVANCE(815);
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(841);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(849);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 817:
      if (lookahead == '\n') ADVANCE(1556);
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '0') ADVANCE(1672);
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == 'O') ADVANCE(1669);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 818:
      if (lookahead == '\n') ADVANCE(1556);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '0') ADVANCE(1672);
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == 'O') ADVANCE(1669);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 819:
      if (lookahead == '\n') ADVANCE(1556);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '0') ADVANCE(1672);
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == 'O') ADVANCE(1669);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 820:
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(820);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(820);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 821:
      if (lookahead == '\n') ADVANCE(1557);
      if (lookahead == '\r') ADVANCE(809);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'N') ADVANCE(1598);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 822:
      if (lookahead == ' ') SKIP(822)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1570);
      if (lookahead != 0) ADVANCE(1571);
      END_STATE();
    case 823:
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '#') ADVANCE(1625);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(838);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1629);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1617);
      if (lookahead == '0') ADVANCE(849);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1601);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1605);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1591);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1594);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(827);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 824:
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '#') ADVANCE(1625);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(843);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1629);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(849);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1605);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1591);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1594);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(827);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 825:
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '#') ADVANCE(1625);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(846);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '*') ADVANCE(1695);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1629);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1675);
      if (lookahead == '1') ADVANCE(1650);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1601);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'O') ADVANCE(1670);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'o') ADVANCE(1679);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 189) ADVANCE(1691);
      if (lookahead == 1645) ADVANCE(1711);
      if (lookahead == 8270) ADVANCE(1707);
      if (lookahead == 8727) ADVANCE(1699);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == 10033) ADVANCE(1703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(826);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 826:
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(833);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '*') ADVANCE(1695);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1675);
      if (lookahead == '1') ADVANCE(1650);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'N') ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1670);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'o') ADVANCE(1679);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 189) ADVANCE(1691);
      if (lookahead == 1645) ADVANCE(1711);
      if (lookahead == 8270) ADVANCE(1707);
      if (lookahead == 8727) ADVANCE(1699);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == 10033) ADVANCE(1703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(826);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 827:
      if (lookahead == '!') ADVANCE(1645);
      if (lookahead == '$') ADVANCE(1543);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(841);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(849);
      if (lookahead == '<') ADVANCE(1239);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead == '?') ADVANCE(1645);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'N') ADVANCE(1600);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(1608);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1542);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == '{') ADVANCE(1578);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1630);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(827);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 828:
      if (lookahead == '"') ADVANCE(1569);
      if (lookahead == '\\') ADVANCE(1544);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1572);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(829)
      if (lookahead != 0) ADVANCE(1573);
      END_STATE();
    case 829:
      if (lookahead == '"') ADVANCE(1569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(829)
      END_STATE();
    case 830:
      if (lookahead == '#') ADVANCE(945);
      if (lookahead == 'a') ADVANCE(1438);
      if (lookahead == 'd') ADVANCE(1253);
      if (lookahead == 'f') ADVANCE(1427);
      if (lookahead == 'h') ADVANCE(1254);
      if (lookahead == 'l') ADVANCE(1399);
      if (lookahead == 'm') ADVANCE(1288);
      if (lookahead == 'n') ADVANCE(1287);
      if (lookahead == 'p') ADVANCE(1362);
      if (lookahead == 's') ADVANCE(1403);
      END_STATE();
    case 831:
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'p') ADVANCE(1375);
      END_STATE();
    case 832:
      if (lookahead == '#') ADVANCE(968);
      if (lookahead == 'd') ADVANCE(1271);
      if (lookahead == 'h') ADVANCE(1504);
      if (lookahead == 'm') ADVANCE(1291);
      if (lookahead == 'n') ADVANCE(1290);
      END_STATE();
    case 833:
      if (lookahead == '#') ADVANCE(948);
      if (lookahead == 'D') ADVANCE(1314);
      if (lookahead == 'L') ADVANCE(1264);
      if (lookahead == 'M') ADVANCE(1360);
      if (lookahead == 'P') ADVANCE(1377);
      if (lookahead == 'R') ADVANCE(1265);
      if (lookahead == 'S') ADVANCE(1335);
      if (lookahead == 'U') ADVANCE(1409);
      if (lookahead == 'a') ADVANCE(1438);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(1355);
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'e') ADVANCE(1417);
      if (lookahead == 'f') ADVANCE(1427);
      if (lookahead == 'h') ADVANCE(1250);
      if (lookahead == 'i') ADVANCE(1382);
      if (lookahead == 'l') ADVANCE(1304);
      if (lookahead == 'm') ADVANCE(1261);
      if (lookahead == 'n') ADVANCE(1251);
      if (lookahead == 'p') ADVANCE(1307);
      if (lookahead == 'q') ADVANCE(1482);
      if (lookahead == 'r') ADVANCE(1257);
      if (lookahead == 's') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(1258);
      if (lookahead == 'x') ADVANCE(1400);
      END_STATE();
    case 834:
      if (lookahead == '#') ADVANCE(1094);
      if (lookahead == 'e') ADVANCE(1503);
      if (lookahead == 'q') ADVANCE(1499);
      END_STATE();
    case 835:
      if (lookahead == '#') ADVANCE(1146);
      if (lookahead == 'e') ADVANCE(1424);
      END_STATE();
    case 836:
      if (lookahead == '#') ADVANCE(963);
      if (lookahead == 'd') ADVANCE(1279);
      if (lookahead == 'h') ADVANCE(1508);
      if (lookahead == 'm') ADVANCE(1303);
      if (lookahead == 'n') ADVANCE(1302);
      if (lookahead == 'p') ADVANCE(1379);
      if (lookahead == 's') ADVANCE(1408);
      END_STATE();
    case 837:
      if (lookahead == '#') ADVANCE(994);
      if (lookahead == 'a') ADVANCE(1438);
      if (lookahead == 'd') ADVANCE(1273);
      if (lookahead == 'f') ADVANCE(1427);
      if (lookahead == 'h') ADVANCE(1255);
      if (lookahead == 'l') ADVANCE(1399);
      if (lookahead == 'm') ADVANCE(1295);
      if (lookahead == 'n') ADVANCE(1297);
      if (lookahead == 's') ADVANCE(1403);
      END_STATE();
    case 838:
      if (lookahead == '#') ADVANCE(953);
      if (lookahead == 'D') ADVANCE(1314);
      if (lookahead == 'L') ADVANCE(1264);
      if (lookahead == 'M') ADVANCE(1360);
      if (lookahead == 'P') ADVANCE(1377);
      if (lookahead == 'R') ADVANCE(1265);
      if (lookahead == 'S') ADVANCE(1335);
      if (lookahead == 'U') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(1355);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1417);
      if (lookahead == 'h') ADVANCE(1260);
      if (lookahead == 'i') ADVANCE(1382);
      if (lookahead == 'l') ADVANCE(1305);
      if (lookahead == 'm') ADVANCE(1263);
      if (lookahead == 'n') ADVANCE(1252);
      if (lookahead == 'p') ADVANCE(1308);
      if (lookahead == 'q') ADVANCE(1482);
      if (lookahead == 'r') ADVANCE(1257);
      if (lookahead == 's') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(1258);
      if (lookahead == 'x') ADVANCE(1400);
      END_STATE();
    case 839:
      if (lookahead == '#') ADVANCE(962);
      if (lookahead == 'd') ADVANCE(1278);
      if (lookahead == 'h') ADVANCE(1507);
      if (lookahead == 'm') ADVANCE(1301);
      if (lookahead == 'n') ADVANCE(1300);
      if (lookahead == 's') ADVANCE(1406);
      END_STATE();
    case 840:
      if (lookahead == '#') ADVANCE(1013);
      if (lookahead == 'd') ADVANCE(1278);
      if (lookahead == 'h') ADVANCE(1507);
      if (lookahead == 'm') ADVANCE(1301);
      if (lookahead == 'n') ADVANCE(1300);
      if (lookahead == 'p') ADVANCE(1375);
      if (lookahead == 's') ADVANCE(1406);
      END_STATE();
    case 841:
      if (lookahead == '#') ADVANCE(1015);
      if (lookahead == 'D') ADVANCE(1314);
      if (lookahead == 'L') ADVANCE(1264);
      if (lookahead == 'M') ADVANCE(1360);
      if (lookahead == 'P') ADVANCE(1377);
      if (lookahead == 'R') ADVANCE(1265);
      if (lookahead == 'S') ADVANCE(1335);
      if (lookahead == 'U') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(1355);
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'e') ADVANCE(1417);
      if (lookahead == 'h') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1382);
      if (lookahead == 'l') ADVANCE(1305);
      if (lookahead == 'm') ADVANCE(1262);
      if (lookahead == 'n') ADVANCE(1251);
      if (lookahead == 'p') ADVANCE(1307);
      if (lookahead == 'q') ADVANCE(1482);
      if (lookahead == 'r') ADVANCE(1257);
      if (lookahead == 's') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(1258);
      if (lookahead == 'x') ADVANCE(1400);
      END_STATE();
    case 842:
      if (lookahead == '#') ADVANCE(1001);
      if (lookahead == 'd') ADVANCE(1273);
      if (lookahead == 'h') ADVANCE(1505);
      if (lookahead == 'm') ADVANCE(1296);
      if (lookahead == 'n') ADVANCE(1297);
      if (lookahead == 's') ADVANCE(1403);
      END_STATE();
    case 843:
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == 'D') ADVANCE(1314);
      if (lookahead == 'L') ADVANCE(1264);
      if (lookahead == 'M') ADVANCE(1360);
      if (lookahead == 'P') ADVANCE(1377);
      if (lookahead == 'R') ADVANCE(1265);
      if (lookahead == 'S') ADVANCE(1335);
      if (lookahead == 'U') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(1355);
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'e') ADVANCE(1417);
      if (lookahead == 'h') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1382);
      if (lookahead == 'l') ADVANCE(1305);
      if (lookahead == 'm') ADVANCE(1262);
      if (lookahead == 'n') ADVANCE(1251);
      if (lookahead == 'p') ADVANCE(1308);
      if (lookahead == 'q') ADVANCE(1482);
      if (lookahead == 'r') ADVANCE(1257);
      if (lookahead == 's') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(1258);
      if (lookahead == 'x') ADVANCE(1400);
      END_STATE();
    case 844:
      if (lookahead == '#') ADVANCE(995);
      if (lookahead == 'p') ADVANCE(1379);
      END_STATE();
    case 845:
      if (lookahead == '#') ADVANCE(1002);
      if (lookahead == 'd') ADVANCE(1276);
      if (lookahead == 'h') ADVANCE(1506);
      if (lookahead == 'm') ADVANCE(1299);
      if (lookahead == 'n') ADVANCE(1298);
      END_STATE();
    case 846:
      if (lookahead == '#') ADVANCE(1014);
      if (lookahead == 'D') ADVANCE(1314);
      if (lookahead == 'L') ADVANCE(1264);
      if (lookahead == 'M') ADVANCE(1360);
      if (lookahead == 'P') ADVANCE(1377);
      if (lookahead == 'R') ADVANCE(1265);
      if (lookahead == 'S') ADVANCE(1335);
      if (lookahead == 'U') ADVANCE(1409);
      if (lookahead == 'a') ADVANCE(1438);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(1355);
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'e') ADVANCE(1417);
      if (lookahead == 'f') ADVANCE(1427);
      if (lookahead == 'h') ADVANCE(1250);
      if (lookahead == 'i') ADVANCE(1382);
      if (lookahead == 'l') ADVANCE(1304);
      if (lookahead == 'm') ADVANCE(1261);
      if (lookahead == 'n') ADVANCE(1251);
      if (lookahead == 'p') ADVANCE(1308);
      if (lookahead == 'q') ADVANCE(1482);
      if (lookahead == 'r') ADVANCE(1257);
      if (lookahead == 's') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(1258);
      if (lookahead == 'x') ADVANCE(1400);
      END_STATE();
    case 847:
      if (lookahead == '#') ADVANCE(1007);
      if (lookahead == 'd') ADVANCE(1278);
      if (lookahead == 'h') ADVANCE(1507);
      if (lookahead == 'm') ADVANCE(1301);
      if (lookahead == 'n') ADVANCE(1300);
      END_STATE();
    case 848:
      if (lookahead == '&') ADVANCE(832);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1540);
      END_STATE();
    case 849:
      if (lookahead == '&') ADVANCE(832);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1540);
      if (lookahead == '.') ADVANCE(1585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 850:
      if (lookahead == '&') ADVANCE(839);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1630);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(855);
      END_STATE();
    case 851:
      if (lookahead == '&') ADVANCE(835);
      END_STATE();
    case 852:
      if (lookahead == '&') ADVANCE(842);
      if (lookahead == '-') ADVANCE(1651);
      if (lookahead == '/') ADVANCE(1680);
      if (lookahead == '0') ADVANCE(1671);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'O') ADVANCE(1667);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'o') ADVANCE(1676);
      if (lookahead == 8208) ADVANCE(1655);
      if (lookahead == 8209) ADVANCE(1657);
      if (lookahead == 8210) ADVANCE(1659);
      if (lookahead == 8211) ADVANCE(1661);
      if (lookahead == 8212) ADVANCE(1663);
      if (lookahead == 8260) ADVANCE(1684);
      if (lookahead == 8722) ADVANCE(1653);
      if (lookahead == 8725) ADVANCE(1682);
      if (lookahead == 10134) ADVANCE(1665);
      if (lookahead == 10187) ADVANCE(1686);
      if (lookahead == 10744) ADVANCE(1688);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(852)
      END_STATE();
    case 853:
      if (lookahead == '&') ADVANCE(842);
      if (lookahead == '-') ADVANCE(1651);
      if (lookahead == '/') ADVANCE(1680);
      if (lookahead == '0') ADVANCE(1671);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(1590);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1601);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'O') ADVANCE(1667);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'o') ADVANCE(1676);
      if (lookahead == 8208) ADVANCE(1655);
      if (lookahead == 8209) ADVANCE(1657);
      if (lookahead == 8210) ADVANCE(1659);
      if (lookahead == 8211) ADVANCE(1661);
      if (lookahead == 8212) ADVANCE(1663);
      if (lookahead == 8260) ADVANCE(1684);
      if (lookahead == 8722) ADVANCE(1653);
      if (lookahead == 8725) ADVANCE(1682);
      if (lookahead == 10134) ADVANCE(1665);
      if (lookahead == 10187) ADVANCE(1686);
      if (lookahead == 10744) ADVANCE(1688);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(852)
      END_STATE();
    case 854:
      if (lookahead == '&') ADVANCE(844);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1630);
      END_STATE();
    case 855:
      if (lookahead == '&') ADVANCE(847);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1630);
      END_STATE();
    case 856:
      if (lookahead == '-') ADVANCE(679);
      END_STATE();
    case 857:
      if (lookahead == '-') ADVANCE(856);
      END_STATE();
    case 858:
      if (lookahead == '-') ADVANCE(857);
      END_STATE();
    case 859:
      if (lookahead == '-') ADVANCE(858);
      END_STATE();
    case 860:
      if (lookahead == '-') ADVANCE(858);
      if (lookahead == '.') ADVANCE(1585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      END_STATE();
    case 861:
      if (lookahead == '.') ADVANCE(1585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      END_STATE();
    case 862:
      if (lookahead == '.') ADVANCE(1585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 863:
      if (lookahead == '.') ADVANCE(1630);
      END_STATE();
    case 864:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '6') ADVANCE(1117);
      if (lookahead == '8') ADVANCE(1184);
      END_STATE();
    case 865:
      if (lookahead == '0') ADVANCE(1165);
      if (lookahead == '1') ADVANCE(885);
      if (lookahead == '6') ADVANCE(896);
      if (lookahead == '7') ADVANCE(897);
      END_STATE();
    case 866:
      if (lookahead == '0') ADVANCE(947);
      if (lookahead == '2') ADVANCE(955);
      if (lookahead == '7') ADVANCE(1071);
      if (lookahead == '9') ADVANCE(1534);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1201);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1199);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1202);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1203);
      END_STATE();
    case 867:
      if (lookahead == '0') ADVANCE(868);
      if (lookahead == '1') ADVANCE(889);
      if (lookahead == '6') ADVANCE(1117);
      if (lookahead == '7') ADVANCE(1157);
      if (lookahead == '8') ADVANCE(1184);
      END_STATE();
    case 868:
      if (lookahead == '0') ADVANCE(922);
      if (lookahead == '1') ADVANCE(1091);
      if (lookahead == '2') ADVANCE(989);
      if (lookahead == '7') ADVANCE(1122);
      if (lookahead == '8') ADVANCE(1145);
      END_STATE();
    case 869:
      if (lookahead == '0') ADVANCE(922);
      if (lookahead == '1') ADVANCE(1098);
      if (lookahead == '2') ADVANCE(989);
      if (lookahead == '7') ADVANCE(1122);
      if (lookahead == '8') ADVANCE(1145);
      END_STATE();
    case 870:
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(1183);
      if (lookahead == '2') ADVANCE(873);
      if (lookahead == '3') ADVANCE(979);
      if (lookahead == '5') ADVANCE(951);
      if (lookahead == '6') ADVANCE(1119);
      if (lookahead == '7') ADVANCE(982);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1223);
      END_STATE();
    case 871:
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(1183);
      if (lookahead == '2') ADVANCE(873);
      if (lookahead == '3') ADVANCE(979);
      if (lookahead == '5') ADVANCE(951);
      if (lookahead == '6') ADVANCE(1119);
      if (lookahead == '7') ADVANCE(983);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(950);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1223);
      END_STATE();
    case 872:
      if (lookahead == '0') ADVANCE(973);
      END_STATE();
    case 873:
      if (lookahead == '0') ADVANCE(1142);
      if (lookahead == '1') ADVANCE(1047);
      if (lookahead == '6') ADVANCE(1112);
      if (lookahead == '9') ADVANCE(1528);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1130);
      END_STATE();
    case 874:
      if (lookahead == '0') ADVANCE(1142);
      if (lookahead == '1') ADVANCE(1051);
      if (lookahead == '6') ADVANCE(1112);
      if (lookahead == '9') ADVANCE(1528);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1130);
      END_STATE();
    case 875:
      if (lookahead == '0') ADVANCE(1142);
      if (lookahead == '1') ADVANCE(1048);
      if (lookahead == '6') ADVANCE(1112);
      if (lookahead == '9') ADVANCE(1528);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1130);
      END_STATE();
    case 876:
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '1') ADVANCE(1069);
      if (lookahead == '7') ADVANCE(1104);
      END_STATE();
    case 877:
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '1') ADVANCE(1092);
      if (lookahead == '7') ADVANCE(1104);
      END_STATE();
    case 878:
      if (lookahead == '0') ADVANCE(991);
      if (lookahead == '2') ADVANCE(952);
      if (lookahead == '7') ADVANCE(1195);
      if (lookahead == '9') ADVANCE(1536);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1224);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1229);
      END_STATE();
    case 879:
      if (lookahead == '0') ADVANCE(991);
      if (lookahead == '2') ADVANCE(952);
      if (lookahead == '7') ADVANCE(1197);
      if (lookahead == '9') ADVANCE(1536);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1198);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1224);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1229);
      END_STATE();
    case 880:
      if (lookahead == '0') ADVANCE(902);
      if (lookahead == '7') ADVANCE(966);
      END_STATE();
    case 881:
      if (lookahead == '0') ADVANCE(902);
      if (lookahead == '7') ADVANCE(966);
      if (lookahead == ';') ADVANCE(1697);
      END_STATE();
    case 882:
      if (lookahead == '0') ADVANCE(892);
      if (lookahead == '1') ADVANCE(889);
      if (lookahead == '7') ADVANCE(1157);
      END_STATE();
    case 883:
      if (lookahead == '0') ADVANCE(993);
      if (lookahead == '1') ADVANCE(1183);
      if (lookahead == '2') ADVANCE(874);
      if (lookahead == '3') ADVANCE(979);
      if (lookahead == '5') ADVANCE(951);
      if (lookahead == '6') ADVANCE(1119);
      if (lookahead == '7') ADVANCE(986);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(950);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1236);
      END_STATE();
    case 884:
      if (lookahead == '0') ADVANCE(996);
      END_STATE();
    case 885:
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == '1') ADVANCE(1202);
      if (lookahead == '2') ADVANCE(1202);
      END_STATE();
    case 886:
      if (lookahead == '0') ADVANCE(1202);
      if (lookahead == '1') ADVANCE(1202);
      if (lookahead == '2') ADVANCE(1202);
      if (lookahead == '3') ADVANCE(1202);
      if (lookahead == '4') ADVANCE(1202);
      END_STATE();
    case 887:
      if (lookahead == '0') ADVANCE(971);
      END_STATE();
    case 888:
      if (lookahead == '0') ADVANCE(960);
      END_STATE();
    case 889:
      if (lookahead == '0') ADVANCE(1028);
      END_STATE();
    case 890:
      if (lookahead == '0') ADVANCE(921);
      if (lookahead == '1') ADVANCE(1091);
      if (lookahead == '2') ADVANCE(989);
      if (lookahead == '7') ADVANCE(1122);
      if (lookahead == '8') ADVANCE(1145);
      END_STATE();
    case 891:
      if (lookahead == '0') ADVANCE(921);
      if (lookahead == '1') ADVANCE(1098);
      if (lookahead == '2') ADVANCE(989);
      if (lookahead == '7') ADVANCE(1122);
      if (lookahead == '8') ADVANCE(1145);
      END_STATE();
    case 892:
      if (lookahead == '0') ADVANCE(921);
      if (lookahead == '1') ADVANCE(1103);
      if (lookahead == '2') ADVANCE(989);
      if (lookahead == '7') ADVANCE(1122);
      if (lookahead == '8') ADVANCE(1145);
      END_STATE();
    case 893:
      if (lookahead == '0') ADVANCE(969);
      if (lookahead == '2') ADVANCE(974);
      if (lookahead == '7') ADVANCE(1182);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1200);
      END_STATE();
    case 894:
      if (lookahead == '0') ADVANCE(1200);
      if (lookahead == '1') ADVANCE(1200);
      if (lookahead == '2') ADVANCE(1200);
      END_STATE();
    case 895:
      if (lookahead == '0') ADVANCE(1200);
      if (lookahead == '1') ADVANCE(1200);
      if (lookahead == '2') ADVANCE(1200);
      if (lookahead == '3') ADVANCE(1200);
      if (lookahead == '4') ADVANCE(1200);
      END_STATE();
    case 896:
      if (lookahead == '0') ADVANCE(1207);
      END_STATE();
    case 897:
      if (lookahead == '0') ADVANCE(1208);
      END_STATE();
    case 898:
      if (lookahead == '0') ADVANCE(1211);
      if (lookahead == '1') ADVANCE(1215);
      if (lookahead == '2') ADVANCE(1216);
      if (lookahead == '3') ADVANCE(1217);
      if (lookahead == '4') ADVANCE(1218);
      END_STATE();
    case 899:
      if (lookahead == '0') ADVANCE(1237);
      if (lookahead == '1') ADVANCE(1237);
      if (lookahead == '2') ADVANCE(1237);
      END_STATE();
    case 900:
      if (lookahead == '0') ADVANCE(1237);
      if (lookahead == '1') ADVANCE(1237);
      if (lookahead == '2') ADVANCE(1237);
      if (lookahead == '3') ADVANCE(1237);
      if (lookahead == '4') ADVANCE(1237);
      END_STATE();
    case 901:
      if (lookahead == '0') ADVANCE(1216);
      if (lookahead == '1') ADVANCE(1217);
      if (lookahead == '2') ADVANCE(1218);
      END_STATE();
    case 902:
      if (lookahead == '0') ADVANCE(1224);
      if (lookahead == '1') ADVANCE(1224);
      END_STATE();
    case 903:
      if (lookahead == '0') ADVANCE(1224);
      if (lookahead == '1') ADVANCE(1224);
      if (lookahead == '2') ADVANCE(1224);
      END_STATE();
    case 904:
      if (lookahead == '0') ADVANCE(1224);
      if (lookahead == '1') ADVANCE(1224);
      if (lookahead == '2') ADVANCE(1224);
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '4') ADVANCE(1224);
      END_STATE();
    case 905:
      if (lookahead == '0') ADVANCE(1224);
      if (lookahead == '3') ADVANCE(1224);
      END_STATE();
    case 906:
      if (lookahead == '0') ADVANCE(1223);
      if (lookahead == '1') ADVANCE(1223);
      if (lookahead == '2') ADVANCE(1223);
      END_STATE();
    case 907:
      if (lookahead == '0') ADVANCE(1223);
      if (lookahead == '1') ADVANCE(1223);
      if (lookahead == '2') ADVANCE(1223);
      if (lookahead == '3') ADVANCE(1223);
      if (lookahead == '4') ADVANCE(1223);
      END_STATE();
    case 908:
      if (lookahead == '0') ADVANCE(1233);
      if (lookahead == '1') ADVANCE(1238);
      if (lookahead == '3') ADVANCE(1232);
      END_STATE();
    case 909:
      if (lookahead == '0') ADVANCE(1229);
      END_STATE();
    case 910:
      if (lookahead == '0') ADVANCE(1230);
      if (lookahead == '1') ADVANCE(1230);
      if (lookahead == '2') ADVANCE(1230);
      END_STATE();
    case 911:
      if (lookahead == '0') ADVANCE(1230);
      if (lookahead == '1') ADVANCE(1230);
      if (lookahead == '2') ADVANCE(1230);
      if (lookahead == '3') ADVANCE(1230);
      if (lookahead == '4') ADVANCE(1230);
      END_STATE();
    case 912:
      if (lookahead == '0') ADVANCE(1231);
      END_STATE();
    case 913:
      if (lookahead == '0') ADVANCE(1236);
      if (lookahead == '1') ADVANCE(1236);
      if (lookahead == '2') ADVANCE(1236);
      END_STATE();
    case 914:
      if (lookahead == '0') ADVANCE(1236);
      if (lookahead == '1') ADVANCE(1236);
      if (lookahead == '2') ADVANCE(1236);
      if (lookahead == '3') ADVANCE(1236);
      if (lookahead == '4') ADVANCE(1236);
      END_STATE();
    case 915:
      if (lookahead == '0') ADVANCE(877);
      if (lookahead == '6') ADVANCE(1117);
      if (lookahead == '8') ADVANCE(1184);
      END_STATE();
    case 916:
      if (lookahead == '0') ADVANCE(1166);
      if (lookahead == '1') ADVANCE(894);
      END_STATE();
    case 917:
      if (lookahead == '0') ADVANCE(999);
      END_STATE();
    case 918:
      if (lookahead == '0') ADVANCE(1167);
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '6') ADVANCE(896);
      END_STATE();
    case 919:
      if (lookahead == '0') ADVANCE(1167);
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '6') ADVANCE(896);
      if (lookahead == '7') ADVANCE(897);
      END_STATE();
    case 920:
      if (lookahead == '0') ADVANCE(1169);
      if (lookahead == '1') ADVANCE(899);
      END_STATE();
    case 921:
      if (lookahead == '0') ADVANCE(1130);
      END_STATE();
    case 922:
      if (lookahead == '0') ADVANCE(1130);
      if (lookahead == '3') ADVANCE(1076);
      END_STATE();
    case 923:
      if (lookahead == '0') ADVANCE(1171);
      if (lookahead == '1') ADVANCE(906);
      if (lookahead == '5') ADVANCE(1040);
      if (lookahead == '6') ADVANCE(1079);
      END_STATE();
    case 924:
      if (lookahead == '0') ADVANCE(1171);
      if (lookahead == '1') ADVANCE(906);
      if (lookahead == '5') ADVANCE(1040);
      if (lookahead == '6') ADVANCE(1079);
      if (lookahead == '7') ADVANCE(897);
      END_STATE();
    case 925:
      if (lookahead == '0') ADVANCE(1112);
      if (lookahead == '6') ADVANCE(1044);
      END_STATE();
    case 926:
      if (lookahead == '0') ADVANCE(1170);
      if (lookahead == '1') ADVANCE(903);
      END_STATE();
    case 927:
      if (lookahead == '0') ADVANCE(1170);
      if (lookahead == '1') ADVANCE(903);
      if (lookahead == '6') ADVANCE(909);
      END_STATE();
    case 928:
      if (lookahead == '0') ADVANCE(1173);
      if (lookahead == '1') ADVANCE(910);
      if (lookahead == '6') ADVANCE(912);
      END_STATE();
    case 929:
      if (lookahead == '0') ADVANCE(1175);
      if (lookahead == '1') ADVANCE(913);
      if (lookahead == '5') ADVANCE(1040);
      if (lookahead == '6') ADVANCE(1079);
      END_STATE();
    case 930:
      if (lookahead == '0') ADVANCE(975);
      if (lookahead == '2') ADVANCE(972);
      if (lookahead == '7') ADVANCE(1072);
      if (lookahead == '9') ADVANCE(1534);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1201);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1205);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1203);
      END_STATE();
    case 931:
      if (lookahead == '0') ADVANCE(956);
      END_STATE();
    case 932:
      if (lookahead == '0') ADVANCE(992);
      if (lookahead == '2') ADVANCE(970);
      if (lookahead == '7') ADVANCE(1193);
      if (lookahead == '9') ADVANCE(1537);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1224);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1230);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1231);
      END_STATE();
    case 933:
      if (lookahead == '0') ADVANCE(988);
      if (lookahead == '1') ADVANCE(1183);
      if (lookahead == '2') ADVANCE(875);
      if (lookahead == '3') ADVANCE(979);
      if (lookahead == '5') ADVANCE(951);
      if (lookahead == '6') ADVANCE(1119);
      if (lookahead == '7') ADVANCE(984);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1223);
      END_STATE();
    case 934:
      if (lookahead == '0') ADVANCE(988);
      if (lookahead == '1') ADVANCE(1183);
      if (lookahead == '2') ADVANCE(875);
      if (lookahead == '3') ADVANCE(979);
      if (lookahead == '5') ADVANCE(951);
      if (lookahead == '6') ADVANCE(1119);
      if (lookahead == '7') ADVANCE(985);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(950);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1223);
      END_STATE();
    case 935:
      if (lookahead == '0') ADVANCE(1000);
      END_STATE();
    case 936:
      if (lookahead == '0') ADVANCE(980);
      if (lookahead == '2') ADVANCE(978);
      if (lookahead == '7') ADVANCE(1191);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1237);
      END_STATE();
    case 937:
      if (lookahead == '0') ADVANCE(976);
      if (lookahead == '2') ADVANCE(977);
      if (lookahead == '7') ADVANCE(1190);
      if (lookahead == '9') ADVANCE(1534);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1205);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1203);
      END_STATE();
    case 938:
      if (lookahead == '0') ADVANCE(1006);
      END_STATE();
    case 939:
      if (lookahead == '0') ADVANCE(990);
      if (lookahead == '2') ADVANCE(981);
      if (lookahead == '7') ADVANCE(1194);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1224);
      END_STATE();
    case 940:
      if (lookahead == '0') ADVANCE(869);
      if (lookahead == '1') ADVANCE(889);
      if (lookahead == '6') ADVANCE(1117);
      if (lookahead == '7') ADVANCE(1157);
      if (lookahead == '8') ADVANCE(1184);
      END_STATE();
    case 941:
      if (lookahead == '0') ADVANCE(890);
      if (lookahead == '1') ADVANCE(889);
      if (lookahead == '7') ADVANCE(1157);
      END_STATE();
    case 942:
      if (lookahead == '0') ADVANCE(1003);
      END_STATE();
    case 943:
      if (lookahead == '0') ADVANCE(891);
      if (lookahead == '1') ADVANCE(889);
      if (lookahead == '7') ADVANCE(1157);
      END_STATE();
    case 944:
      if (lookahead == '1') ADVANCE(1647);
      if (lookahead == '2') ADVANCE(1690);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(944)
      END_STATE();
    case 945:
      if (lookahead == '1') ADVANCE(864);
      if (lookahead == '4') ADVANCE(1017);
      if (lookahead == '5') ADVANCE(1164);
      if (lookahead == '8') ADVANCE(1021);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(954);
      END_STATE();
    case 946:
      if (lookahead == '1') ADVANCE(887);
      if (lookahead == '4') ADVANCE(1073);
      if (lookahead == '5') ADVANCE(1176);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(997);
      END_STATE();
    case 947:
      if (lookahead == '1') ADVANCE(886);
      if (lookahead == '4') ADVANCE(1108);
      END_STATE();
    case 948:
      if (lookahead == '1') ADVANCE(867);
      if (lookahead == '3') ADVANCE(1082);
      if (lookahead == '4') ADVANCE(1018);
      if (lookahead == '5') ADVANCE(1177);
      if (lookahead == '6') ADVANCE(908);
      if (lookahead == '8') ADVANCE(1025);
      if (lookahead == '9') ADVANCE(1105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1004);
      END_STATE();
    case 949:
      if (lookahead == '1') ADVANCE(1040);
      if (lookahead == ';') ADVANCE(850);
      END_STATE();
    case 950:
      if (lookahead == '1') ADVANCE(1040);
      if (lookahead == ';') ADVANCE(1629);
      END_STATE();
    case 951:
      if (lookahead == '1') ADVANCE(1114);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(965);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1516);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1514);
      END_STATE();
    case 952:
      if (lookahead == '1') ADVANCE(1041);
      END_STATE();
    case 953:
      if (lookahead == '1') ADVANCE(882);
      if (lookahead == '3') ADVANCE(1082);
      if (lookahead == '4') ADVANCE(1088);
      if (lookahead == '5') ADVANCE(1179);
      if (lookahead == '6') ADVANCE(908);
      if (lookahead == '8') ADVANCE(1030);
      if (lookahead == '9') ADVANCE(1105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1010);
      END_STATE();
    case 954:
      if (lookahead == '1') ADVANCE(1137);
      if (lookahead == '2') ADVANCE(866);
      if (lookahead == '6') ADVANCE(1144);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1522);
      END_STATE();
    case 955:
      if (lookahead == '1') ADVANCE(1032);
      END_STATE();
    case 956:
      if (lookahead == '1') ADVANCE(1092);
      if (lookahead == '7') ADVANCE(1104);
      END_STATE();
    case 957:
      if (lookahead == '1') ADVANCE(902);
      if (lookahead == '2') ADVANCE(1046);
      if (lookahead == '3') ADVANCE(1112);
      END_STATE();
    case 958:
      if (lookahead == '1') ADVANCE(902);
      if (lookahead == '2') ADVANCE(1050);
      if (lookahead == '3') ADVANCE(1112);
      END_STATE();
    case 959:
      if (lookahead == '1') ADVANCE(902);
      if (lookahead == '2') ADVANCE(1045);
      if (lookahead == '3') ADVANCE(1112);
      END_STATE();
    case 960:
      if (lookahead == '1') ADVANCE(1090);
      END_STATE();
    case 961:
      if (lookahead == '1') ADVANCE(1034);
      END_STATE();
    case 962:
      if (lookahead == '1') ADVANCE(872);
      if (lookahead == '4') ADVANCE(1133);
      if (lookahead == '8') ADVANCE(1026);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1027);
      END_STATE();
    case 963:
      if (lookahead == '1') ADVANCE(884);
      if (lookahead == '4') ADVANCE(1081);
      if (lookahead == '5') ADVANCE(1178);
      if (lookahead == '8') ADVANCE(1064);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1008);
      END_STATE();
    case 964:
      if (lookahead == '1') ADVANCE(1212);
      END_STATE();
    case 965:
      if (lookahead == '1') ADVANCE(1224);
      END_STATE();
    case 966:
      if (lookahead == '1') ADVANCE(1224);
      if (lookahead == '2') ADVANCE(1224);
      END_STATE();
    case 967:
      if (lookahead == '1') ADVANCE(1224);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1204);
      END_STATE();
    case 968:
      if (lookahead == '1') ADVANCE(888);
      if (lookahead == '4') ADVANCE(1126);
      if (lookahead == '8') ADVANCE(1022);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1023);
      END_STATE();
    case 969:
      if (lookahead == '1') ADVANCE(895);
      END_STATE();
    case 970:
      if (lookahead == '1') ADVANCE(1049);
      END_STATE();
    case 971:
      if (lookahead == '1') ADVANCE(1068);
      END_STATE();
    case 972:
      if (lookahead == '1') ADVANCE(1038);
      END_STATE();
    case 973:
      if (lookahead == '1') ADVANCE(1100);
      if (lookahead == '7') ADVANCE(1120);
      END_STATE();
    case 974:
      if (lookahead == '1') ADVANCE(1035);
      END_STATE();
    case 975:
      if (lookahead == '1') ADVANCE(898);
      if (lookahead == '4') ADVANCE(1108);
      END_STATE();
    case 976:
      if (lookahead == '1') ADVANCE(898);
      if (lookahead == '4') ADVANCE(1107);
      END_STATE();
    case 977:
      if (lookahead == '1') ADVANCE(1037);
      END_STATE();
    case 978:
      if (lookahead == '1') ADVANCE(1036);
      END_STATE();
    case 979:
      if (lookahead == '1') ADVANCE(1077);
      END_STATE();
    case 980:
      if (lookahead == '1') ADVANCE(900);
      END_STATE();
    case 981:
      if (lookahead == '1') ADVANCE(1039);
      END_STATE();
    case 982:
      if (lookahead == '1') ADVANCE(1130);
      if (lookahead == '3') ADVANCE(964);
      if (lookahead == '9') ADVANCE(1134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1513);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1077);
      END_STATE();
    case 983:
      if (lookahead == '1') ADVANCE(1130);
      if (lookahead == '3') ADVANCE(964);
      if (lookahead == '9') ADVANCE(1135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1513);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1077);
      END_STATE();
    case 984:
      if (lookahead == '1') ADVANCE(1130);
      if (lookahead == '9') ADVANCE(1134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1513);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1077);
      END_STATE();
    case 985:
      if (lookahead == '1') ADVANCE(1130);
      if (lookahead == '9') ADVANCE(1135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1513);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1077);
      END_STATE();
    case 986:
      if (lookahead == '1') ADVANCE(1130);
      if (lookahead == '9') ADVANCE(1136);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1513);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1077);
      END_STATE();
    case 987:
      if (lookahead == '1') ADVANCE(907);
      if (lookahead == '3') ADVANCE(1519);
      if (lookahead == '4') ADVANCE(1159);
      END_STATE();
    case 988:
      if (lookahead == '1') ADVANCE(907);
      if (lookahead == '3') ADVANCE(1519);
      if (lookahead == '4') ADVANCE(1158);
      END_STATE();
    case 989:
      if (lookahead == '1') ADVANCE(1170);
      if (lookahead == '2') ADVANCE(1157);
      END_STATE();
    case 990:
      if (lookahead == '1') ADVANCE(904);
      END_STATE();
    case 991:
      if (lookahead == '1') ADVANCE(904);
      if (lookahead == '4') ADVANCE(1115);
      END_STATE();
    case 992:
      if (lookahead == '1') ADVANCE(911);
      if (lookahead == '4') ADVANCE(1116);
      END_STATE();
    case 993:
      if (lookahead == '1') ADVANCE(914);
      if (lookahead == '3') ADVANCE(1519);
      if (lookahead == '4') ADVANCE(1158);
      END_STATE();
    case 994:
      if (lookahead == '1') ADVANCE(915);
      if (lookahead == '4') ADVANCE(1020);
      if (lookahead == '8') ADVANCE(1062);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1024);
      END_STATE();
    case 995:
      if (lookahead == '1') ADVANCE(917);
      if (lookahead == '4') ADVANCE(1077);
      if (lookahead == '5') ADVANCE(1178);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1009);
      END_STATE();
    case 996:
      if (lookahead == '1') ADVANCE(1096);
      if (lookahead == '7') ADVANCE(1121);
      END_STATE();
    case 997:
      if (lookahead == '1') ADVANCE(1151);
      if (lookahead == '2') ADVANCE(1155);
      END_STATE();
    case 998:
      if (lookahead == '1') ADVANCE(1151);
      if (lookahead == '2') ADVANCE(879);
      END_STATE();
    case 999:
      if (lookahead == '1') ADVANCE(1093);
      END_STATE();
    case 1000:
      if (lookahead == '1') ADVANCE(1097);
      END_STATE();
    case 1001:
      if (lookahead == '1') ADVANCE(931);
      if (lookahead == '4') ADVANCE(1127);
      if (lookahead == '8') ADVANCE(1067);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1053);
      END_STATE();
    case 1002:
      if (lookahead == '1') ADVANCE(935);
      if (lookahead == '4') ADVANCE(1129);
      if (lookahead == '8') ADVANCE(1063);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1052);
      END_STATE();
    case 1003:
      if (lookahead == '1') ADVANCE(1102);
      if (lookahead == '7') ADVANCE(1120);
      END_STATE();
    case 1004:
      if (lookahead == '1') ADVANCE(1152);
      if (lookahead == '2') ADVANCE(870);
      if (lookahead == '3') ADVANCE(1520);
      if (lookahead == '6') ADVANCE(1144);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(967);
      END_STATE();
    case 1005:
      if (lookahead == '1') ADVANCE(1152);
      if (lookahead == '2') ADVANCE(933);
      if (lookahead == '3') ADVANCE(1520);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(965);
      END_STATE();
    case 1006:
      if (lookahead == '1') ADVANCE(1099);
      END_STATE();
    case 1007:
      if (lookahead == '1') ADVANCE(938);
      if (lookahead == '4') ADVANCE(1130);
      if (lookahead == '8') ADVANCE(1066);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1058);
      END_STATE();
    case 1008:
      if (lookahead == '1') ADVANCE(1153);
      if (lookahead == '2') ADVANCE(932);
      END_STATE();
    case 1009:
      if (lookahead == '1') ADVANCE(1153);
      if (lookahead == '2') ADVANCE(1163);
      END_STATE();
    case 1010:
      if (lookahead == '1') ADVANCE(1154);
      if (lookahead == '2') ADVANCE(883);
      if (lookahead == '3') ADVANCE(1520);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(965);
      END_STATE();
    case 1011:
      if (lookahead == '1') ADVANCE(1154);
      if (lookahead == '2') ADVANCE(871);
      if (lookahead == '3') ADVANCE(1520);
      if (lookahead == '6') ADVANCE(1144);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(967);
      END_STATE();
    case 1012:
      if (lookahead == '1') ADVANCE(1154);
      if (lookahead == '2') ADVANCE(934);
      if (lookahead == '3') ADVANCE(1520);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(965);
      END_STATE();
    case 1013:
      if (lookahead == '1') ADVANCE(942);
      if (lookahead == '4') ADVANCE(1075);
      if (lookahead == '5') ADVANCE(1176);
      if (lookahead == '8') ADVANCE(1026);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(998);
      END_STATE();
    case 1014:
      if (lookahead == '1') ADVANCE(940);
      if (lookahead == '3') ADVANCE(1082);
      if (lookahead == '4') ADVANCE(1019);
      if (lookahead == '5') ADVANCE(1179);
      if (lookahead == '6') ADVANCE(908);
      if (lookahead == '8') ADVANCE(1025);
      if (lookahead == '9') ADVANCE(1105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1011);
      END_STATE();
    case 1015:
      if (lookahead == '1') ADVANCE(941);
      if (lookahead == '3') ADVANCE(1082);
      if (lookahead == '4') ADVANCE(1084);
      if (lookahead == '5') ADVANCE(1177);
      if (lookahead == '6') ADVANCE(908);
      if (lookahead == '8') ADVANCE(1065);
      if (lookahead == '9') ADVANCE(1105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1005);
      END_STATE();
    case 1016:
      if (lookahead == '1') ADVANCE(943);
      if (lookahead == '3') ADVANCE(1082);
      if (lookahead == '4') ADVANCE(1087);
      if (lookahead == '5') ADVANCE(1179);
      if (lookahead == '6') ADVANCE(908);
      if (lookahead == '8') ADVANCE(1065);
      if (lookahead == '9') ADVANCE(1105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1012);
      END_STATE();
    case 1017:
      if (lookahead == '2') ADVANCE(1201);
      if (lookahead == '3') ADVANCE(1199);
      if (lookahead == '5') ADVANCE(1202);
      if (lookahead == '7') ADVANCE(1203);
      END_STATE();
    case 1018:
      if (lookahead == '2') ADVANCE(1201);
      if (lookahead == '3') ADVANCE(1221);
      if (lookahead == '5') ADVANCE(1223);
      END_STATE();
    case 1019:
      if (lookahead == '2') ADVANCE(1201);
      if (lookahead == '3') ADVANCE(1234);
      if (lookahead == '5') ADVANCE(1223);
      END_STATE();
    case 1020:
      if (lookahead == '2') ADVANCE(1201);
      if (lookahead == '5') ADVANCE(1205);
      if (lookahead == '7') ADVANCE(1203);
      END_STATE();
    case 1021:
      if (lookahead == '2') ADVANCE(865);
      if (lookahead == '7') ADVANCE(1031);
      END_STATE();
    case 1022:
      if (lookahead == '2') ADVANCE(916);
      if (lookahead == '7') ADVANCE(1056);
      END_STATE();
    case 1023:
      if (lookahead == '2') ADVANCE(893);
      END_STATE();
    case 1024:
      if (lookahead == '2') ADVANCE(930);
      if (lookahead == '6') ADVANCE(1144);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1522);
      END_STATE();
    case 1025:
      if (lookahead == '2') ADVANCE(924);
      if (lookahead == '5') ADVANCE(1189);
      if (lookahead == '6') ADVANCE(1118);
      if (lookahead == '7') ADVANCE(957);
      if (lookahead == '8') ADVANCE(925);
      if (lookahead == '9') ADVANCE(1162);
      END_STATE();
    case 1026:
      if (lookahead == '2') ADVANCE(927);
      if (lookahead == '7') ADVANCE(1029);
      END_STATE();
    case 1027:
      if (lookahead == '2') ADVANCE(878);
      END_STATE();
    case 1028:
      if (lookahead == '2') ADVANCE(1142);
      END_STATE();
    case 1029:
      if (lookahead == '2') ADVANCE(1041);
      END_STATE();
    case 1030:
      if (lookahead == '2') ADVANCE(929);
      if (lookahead == '5') ADVANCE(1189);
      if (lookahead == '6') ADVANCE(1118);
      if (lookahead == '7') ADVANCE(958);
      if (lookahead == '8') ADVANCE(925);
      if (lookahead == '9') ADVANCE(1162);
      END_STATE();
    case 1031:
      if (lookahead == '2') ADVANCE(1032);
      END_STATE();
    case 1032:
      if (lookahead == '2') ADVANCE(1202);
      if (lookahead == '5') ADVANCE(1209);
      if (lookahead == '7') ADVANCE(1210);
      END_STATE();
    case 1033:
      if (lookahead == '2') ADVANCE(1043);
      if (lookahead == '9') ADVANCE(1112);
      END_STATE();
    case 1034:
      if (lookahead == '2') ADVANCE(1204);
      END_STATE();
    case 1035:
      if (lookahead == '2') ADVANCE(1200);
      END_STATE();
    case 1036:
      if (lookahead == '2') ADVANCE(1237);
      END_STATE();
    case 1037:
      if (lookahead == '2') ADVANCE(1219);
      if (lookahead == '5') ADVANCE(1209);
      END_STATE();
    case 1038:
      if (lookahead == '2') ADVANCE(1219);
      if (lookahead == '5') ADVANCE(1209);
      if (lookahead == '7') ADVANCE(1210);
      END_STATE();
    case 1039:
      if (lookahead == '2') ADVANCE(1224);
      END_STATE();
    case 1040:
      if (lookahead == '2') ADVANCE(1224);
      if (lookahead == '3') ADVANCE(1224);
      END_STATE();
    case 1041:
      if (lookahead == '2') ADVANCE(1224);
      if (lookahead == '5') ADVANCE(1229);
      END_STATE();
    case 1042:
      if (lookahead == '2') ADVANCE(1224);
      if (lookahead == '6') ADVANCE(1224);
      END_STATE();
    case 1043:
      if (lookahead == '2') ADVANCE(1224);
      if (lookahead == '7') ADVANCE(1224);
      END_STATE();
    case 1044:
      if (lookahead == '2') ADVANCE(1224);
      if (lookahead == '9') ADVANCE(1224);
      END_STATE();
    case 1045:
      if (lookahead == '2') ADVANCE(1223);
      if (lookahead == '3') ADVANCE(1224);
      END_STATE();
    case 1046:
      if (lookahead == '2') ADVANCE(1223);
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '7') ADVANCE(1210);
      END_STATE();
    case 1047:
      if (lookahead == '2') ADVANCE(1223);
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '7') ADVANCE(1210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1224);
      END_STATE();
    case 1048:
      if (lookahead == '2') ADVANCE(1223);
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1224);
      END_STATE();
    case 1049:
      if (lookahead == '2') ADVANCE(1230);
      if (lookahead == '5') ADVANCE(1231);
      END_STATE();
    case 1050:
      if (lookahead == '2') ADVANCE(1236);
      if (lookahead == '3') ADVANCE(1224);
      END_STATE();
    case 1051:
      if (lookahead == '2') ADVANCE(1236);
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1224);
      END_STATE();
    case 1052:
      if (lookahead == '2') ADVANCE(936);
      END_STATE();
    case 1053:
      if (lookahead == '2') ADVANCE(937);
      END_STATE();
    case 1054:
      if (lookahead == '2') ADVANCE(1049);
      END_STATE();
    case 1055:
      if (lookahead == '2') ADVANCE(1038);
      END_STATE();
    case 1056:
      if (lookahead == '2') ADVANCE(1035);
      END_STATE();
    case 1057:
      if (lookahead == '2') ADVANCE(965);
      if (lookahead == '3') ADVANCE(1535);
      END_STATE();
    case 1058:
      if (lookahead == '2') ADVANCE(939);
      END_STATE();
    case 1059:
      if (lookahead == '2') ADVANCE(1037);
      END_STATE();
    case 1060:
      if (lookahead == '2') ADVANCE(1036);
      END_STATE();
    case 1061:
      if (lookahead == '2') ADVANCE(1039);
      END_STATE();
    case 1062:
      if (lookahead == '2') ADVANCE(919);
      if (lookahead == '7') ADVANCE(1055);
      END_STATE();
    case 1063:
      if (lookahead == '2') ADVANCE(920);
      if (lookahead == '7') ADVANCE(1060);
      END_STATE();
    case 1064:
      if (lookahead == '2') ADVANCE(928);
      if (lookahead == '7') ADVANCE(1054);
      END_STATE();
    case 1065:
      if (lookahead == '2') ADVANCE(923);
      if (lookahead == '5') ADVANCE(1189);
      if (lookahead == '6') ADVANCE(1118);
      if (lookahead == '7') ADVANCE(959);
      if (lookahead == '8') ADVANCE(925);
      if (lookahead == '9') ADVANCE(1162);
      END_STATE();
    case 1066:
      if (lookahead == '2') ADVANCE(926);
      if (lookahead == '7') ADVANCE(1061);
      END_STATE();
    case 1067:
      if (lookahead == '2') ADVANCE(918);
      if (lookahead == '7') ADVANCE(1059);
      END_STATE();
    case 1068:
      if (lookahead == '3') ADVANCE(1073);
      END_STATE();
    case 1069:
      if (lookahead == '3') ADVANCE(1070);
      if (lookahead == '8') ADVANCE(1156);
      END_STATE();
    case 1070:
      if (lookahead == '3') ADVANCE(1199);
      if (lookahead == '4') ADVANCE(1202);
      END_STATE();
    case 1071:
      if (lookahead == '3') ADVANCE(964);
      if (lookahead == '9') ADVANCE(1123);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1515);
      END_STATE();
    case 1072:
      if (lookahead == '3') ADVANCE(964);
      if (lookahead == '9') ADVANCE(1140);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1515);
      END_STATE();
    case 1073:
      if (lookahead == '3') ADVANCE(1198);
      END_STATE();
    case 1074:
      if (lookahead == '3') ADVANCE(1198);
      if (lookahead == '4') ADVANCE(1224);
      END_STATE();
    case 1075:
      if (lookahead == '3') ADVANCE(1198);
      if (lookahead == '5') ADVANCE(1224);
      if (lookahead == '7') ADVANCE(1229);
      END_STATE();
    case 1076:
      if (lookahead == '3') ADVANCE(1212);
      END_STATE();
    case 1077:
      if (lookahead == '3') ADVANCE(1224);
      END_STATE();
    case 1078:
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '4') ADVANCE(1224);
      END_STATE();
    case 1079:
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '4') ADVANCE(1224);
      if (lookahead == '5') ADVANCE(1224);
      END_STATE();
    case 1080:
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '4') ADVANCE(1230);
      END_STATE();
    case 1081:
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '5') ADVANCE(1230);
      if (lookahead == '7') ADVANCE(1231);
      END_STATE();
    case 1082:
      if (lookahead == '3') ADVANCE(1232);
      END_STATE();
    case 1083:
      if (lookahead == '3') ADVANCE(1221);
      if (lookahead == '4') ADVANCE(1223);
      END_STATE();
    case 1084:
      if (lookahead == '3') ADVANCE(1221);
      if (lookahead == '5') ADVANCE(1223);
      END_STATE();
    case 1085:
      if (lookahead == '3') ADVANCE(1234);
      if (lookahead == '4') ADVANCE(1223);
      END_STATE();
    case 1086:
      if (lookahead == '3') ADVANCE(1234);
      if (lookahead == '4') ADVANCE(1236);
      END_STATE();
    case 1087:
      if (lookahead == '3') ADVANCE(1234);
      if (lookahead == '5') ADVANCE(1223);
      END_STATE();
    case 1088:
      if (lookahead == '3') ADVANCE(1234);
      if (lookahead == '5') ADVANCE(1236);
      END_STATE();
    case 1089:
      if (lookahead == '3') ADVANCE(1076);
      END_STATE();
    case 1090:
      if (lookahead == '3') ADVANCE(1106);
      END_STATE();
    case 1091:
      if (lookahead == '3') ADVANCE(1083);
      END_STATE();
    case 1092:
      if (lookahead == '3') ADVANCE(1111);
      if (lookahead == '8') ADVANCE(1156);
      END_STATE();
    case 1093:
      if (lookahead == '3') ADVANCE(1077);
      END_STATE();
    case 1094:
      if (lookahead == '3') ADVANCE(1077);
      if (lookahead == '6') ADVANCE(1077);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1057);
      END_STATE();
    case 1095:
      if (lookahead == '3') ADVANCE(1077);
      if (lookahead == '7') ADVANCE(1130);
      END_STATE();
    case 1096:
      if (lookahead == '3') ADVANCE(1080);
      if (lookahead == '8') ADVANCE(1161);
      END_STATE();
    case 1097:
      if (lookahead == '3') ADVANCE(1110);
      END_STATE();
    case 1098:
      if (lookahead == '3') ADVANCE(1085);
      END_STATE();
    case 1099:
      if (lookahead == '3') ADVANCE(1112);
      END_STATE();
    case 1100:
      if (lookahead == '3') ADVANCE(1112);
      if (lookahead == '8') ADVANCE(1160);
      END_STATE();
    case 1101:
      if (lookahead == '3') ADVANCE(1525);
      END_STATE();
    case 1102:
      if (lookahead == '3') ADVANCE(1074);
      if (lookahead == '8') ADVANCE(1160);
      END_STATE();
    case 1103:
      if (lookahead == '3') ADVANCE(1086);
      END_STATE();
    case 1104:
      if (lookahead == '4') ADVANCE(1109);
      END_STATE();
    case 1105:
      if (lookahead == '4') ADVANCE(1180);
      if (lookahead == '6') ADVANCE(1095);
      if (lookahead == '7') ADVANCE(1033);
      END_STATE();
    case 1106:
      if (lookahead == '4') ADVANCE(1200);
      END_STATE();
    case 1107:
      if (lookahead == '4') ADVANCE(1207);
      END_STATE();
    case 1108:
      if (lookahead == '4') ADVANCE(1207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1208);
      END_STATE();
    case 1109:
      if (lookahead == '4') ADVANCE(1214);
      END_STATE();
    case 1110:
      if (lookahead == '4') ADVANCE(1237);
      END_STATE();
    case 1111:
      if (lookahead == '4') ADVANCE(1220);
      END_STATE();
    case 1112:
      if (lookahead == '4') ADVANCE(1224);
      END_STATE();
    case 1113:
      if (lookahead == '4') ADVANCE(1224);
      if (lookahead == '7') ADVANCE(1224);
      END_STATE();
    case 1114:
      if (lookahead == '4') ADVANCE(1224);
      if (lookahead == '8') ADVANCE(1224);
      END_STATE();
    case 1115:
      if (lookahead == '4') ADVANCE(1229);
      END_STATE();
    case 1116:
      if (lookahead == '4') ADVANCE(1231);
      END_STATE();
    case 1117:
      if (lookahead == '4') ADVANCE(1128);
      END_STATE();
    case 1118:
      if (lookahead == '4') ADVANCE(1141);
      if (lookahead == '6') ADVANCE(905);
      END_STATE();
    case 1119:
      if (lookahead == '4') ADVANCE(1039);
      END_STATE();
    case 1120:
      if (lookahead == '4') ADVANCE(1115);
      END_STATE();
    case 1121:
      if (lookahead == '4') ADVANCE(1116);
      END_STATE();
    case 1122:
      if (lookahead == '5') ADVANCE(1040);
      END_STATE();
    case 1123:
      if (lookahead == '5') ADVANCE(1199);
      if (lookahead == '6') ADVANCE(1202);
      END_STATE();
    case 1124:
      if (lookahead == '5') ADVANCE(1198);
      END_STATE();
    case 1125:
      if (lookahead == '5') ADVANCE(1198);
      if (lookahead == '6') ADVANCE(1224);
      END_STATE();
    case 1126:
      if (lookahead == '5') ADVANCE(1200);
      END_STATE();
    case 1127:
      if (lookahead == '5') ADVANCE(1205);
      if (lookahead == '7') ADVANCE(1203);
      END_STATE();
    case 1128:
      if (lookahead == '5') ADVANCE(1206);
      END_STATE();
    case 1129:
      if (lookahead == '5') ADVANCE(1237);
      END_STATE();
    case 1130:
      if (lookahead == '5') ADVANCE(1224);
      END_STATE();
    case 1131:
      if (lookahead == '5') ADVANCE(1224);
      if (lookahead == '6') ADVANCE(1224);
      END_STATE();
    case 1132:
      if (lookahead == '5') ADVANCE(1224);
      if (lookahead == '6') ADVANCE(1230);
      END_STATE();
    case 1133:
      if (lookahead == '5') ADVANCE(1224);
      if (lookahead == '7') ADVANCE(1229);
      END_STATE();
    case 1134:
      if (lookahead == '5') ADVANCE(1221);
      if (lookahead == '6') ADVANCE(1223);
      END_STATE();
    case 1135:
      if (lookahead == '5') ADVANCE(1234);
      if (lookahead == '6') ADVANCE(1223);
      END_STATE();
    case 1136:
      if (lookahead == '5') ADVANCE(1234);
      if (lookahead == '6') ADVANCE(1236);
      END_STATE();
    case 1137:
      if (lookahead == '6') ADVANCE(1529);
      END_STATE();
    case 1138:
      if (lookahead == '6') ADVANCE(1200);
      END_STATE();
    case 1139:
      if (lookahead == '6') ADVANCE(1237);
      END_STATE();
    case 1140:
      if (lookahead == '6') ADVANCE(1220);
      END_STATE();
    case 1141:
      if (lookahead == '6') ADVANCE(1224);
      END_STATE();
    case 1142:
      if (lookahead == '6') ADVANCE(1224);
      if (lookahead == '7') ADVANCE(1224);
      END_STATE();
    case 1143:
      if (lookahead == '6') ADVANCE(1181);
      END_STATE();
    case 1144:
      if (lookahead == '6') ADVANCE(1524);
      END_STATE();
    case 1145:
      if (lookahead == '6') ADVANCE(1131);
      END_STATE();
    case 1146:
      if (lookahead == '6') ADVANCE(965);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1101);
      END_STATE();
    case 1147:
      if (lookahead == '6') ADVANCE(1185);
      END_STATE();
    case 1148:
      if (lookahead == '6') ADVANCE(1187);
      END_STATE();
    case 1149:
      if (lookahead == '6') ADVANCE(1186);
      END_STATE();
    case 1150:
      if (lookahead == '6') ADVANCE(1188);
      END_STATE();
    case 1151:
      if (lookahead == '6') ADVANCE(1530);
      END_STATE();
    case 1152:
      if (lookahead == '6') ADVANCE(1531);
      END_STATE();
    case 1153:
      if (lookahead == '6') ADVANCE(1532);
      END_STATE();
    case 1154:
      if (lookahead == '6') ADVANCE(1533);
      END_STATE();
    case 1155:
      if (lookahead == '7') ADVANCE(1192);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1198);
      END_STATE();
    case 1156:
      if (lookahead == '7') ADVANCE(1213);
      END_STATE();
    case 1157:
      if (lookahead == '7') ADVANCE(1224);
      END_STATE();
    case 1158:
      if (lookahead == '7') ADVANCE(1224);
      if (lookahead == '8') ADVANCE(1224);
      if (lookahead == '9') ADVANCE(1224);
      END_STATE();
    case 1159:
      if (lookahead == '7') ADVANCE(1224);
      if (lookahead == '8') ADVANCE(1224);
      if (lookahead == '9') ADVANCE(1224);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1208);
      END_STATE();
    case 1160:
      if (lookahead == '7') ADVANCE(1229);
      END_STATE();
    case 1161:
      if (lookahead == '7') ADVANCE(1231);
      END_STATE();
    case 1162:
      if (lookahead == '7') ADVANCE(1186);
      END_STATE();
    case 1163:
      if (lookahead == '7') ADVANCE(1196);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1224);
      END_STATE();
    case 1164:
      if (lookahead == '8') ADVANCE(1143);
      END_STATE();
    case 1165:
      if (lookahead == '8') ADVANCE(1202);
      if (lookahead == '9') ADVANCE(1202);
      END_STATE();
    case 1166:
      if (lookahead == '8') ADVANCE(1200);
      if (lookahead == '9') ADVANCE(1200);
      END_STATE();
    case 1167:
      if (lookahead == '8') ADVANCE(1211);
      if (lookahead == '9') ADVANCE(1215);
      END_STATE();
    case 1168:
      if (lookahead == '8') ADVANCE(1214);
      END_STATE();
    case 1169:
      if (lookahead == '8') ADVANCE(1237);
      if (lookahead == '9') ADVANCE(1237);
      END_STATE();
    case 1170:
      if (lookahead == '8') ADVANCE(1224);
      if (lookahead == '9') ADVANCE(1224);
      END_STATE();
    case 1171:
      if (lookahead == '8') ADVANCE(1223);
      if (lookahead == '9') ADVANCE(1223);
      END_STATE();
    case 1172:
      if (lookahead == '8') ADVANCE(1229);
      END_STATE();
    case 1173:
      if (lookahead == '8') ADVANCE(1230);
      if (lookahead == '9') ADVANCE(1230);
      END_STATE();
    case 1174:
      if (lookahead == '8') ADVANCE(1231);
      END_STATE();
    case 1175:
      if (lookahead == '8') ADVANCE(1236);
      if (lookahead == '9') ADVANCE(1236);
      END_STATE();
    case 1176:
      if (lookahead == '8') ADVANCE(1147);
      END_STATE();
    case 1177:
      if (lookahead == '8') ADVANCE(1148);
      END_STATE();
    case 1178:
      if (lookahead == '8') ADVANCE(1149);
      END_STATE();
    case 1179:
      if (lookahead == '8') ADVANCE(1150);
      END_STATE();
    case 1180:
      if (lookahead == '9') ADVANCE(1042);
      END_STATE();
    case 1181:
      if (lookahead == '9') ADVANCE(1199);
      END_STATE();
    case 1182:
      if (lookahead == '9') ADVANCE(1138);
      END_STATE();
    case 1183:
      if (lookahead == '9') ADVANCE(966);
      if (lookahead == ';') ADVANCE(1641);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1113);
      END_STATE();
    case 1184:
      if (lookahead == '9') ADVANCE(1204);
      END_STATE();
    case 1185:
      if (lookahead == '9') ADVANCE(1198);
      END_STATE();
    case 1186:
      if (lookahead == '9') ADVANCE(1224);
      END_STATE();
    case 1187:
      if (lookahead == '9') ADVANCE(1221);
      END_STATE();
    case 1188:
      if (lookahead == '9') ADVANCE(1234);
      END_STATE();
    case 1189:
      if (lookahead == '9') ADVANCE(1078);
      END_STATE();
    case 1190:
      if (lookahead == '9') ADVANCE(1140);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1515);
      END_STATE();
    case 1191:
      if (lookahead == '9') ADVANCE(1139);
      END_STATE();
    case 1192:
      if (lookahead == '9') ADVANCE(1124);
      END_STATE();
    case 1193:
      if (lookahead == '9') ADVANCE(1132);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1518);
      END_STATE();
    case 1194:
      if (lookahead == '9') ADVANCE(1141);
      END_STATE();
    case 1195:
      if (lookahead == '9') ADVANCE(1141);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1517);
      END_STATE();
    case 1196:
      if (lookahead == '9') ADVANCE(1130);
      END_STATE();
    case 1197:
      if (lookahead == '9') ADVANCE(1125);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1517);
      END_STATE();
    case 1198:
      if (lookahead == ';') ADVANCE(1625);
      END_STATE();
    case 1199:
      if (lookahead == ';') ADVANCE(1628);
      END_STATE();
    case 1200:
      if (lookahead == ';') ADVANCE(1540);
      END_STATE();
    case 1201:
      if (lookahead == ';') ADVANCE(1697);
      END_STATE();
    case 1202:
      if (lookahead == ';') ADVANCE(1615);
      END_STATE();
    case 1203:
      if (lookahead == ';') ADVANCE(1681);
      END_STATE();
    case 1204:
      if (lookahead == ';') ADVANCE(1693);
      END_STATE();
    case 1205:
      if (lookahead == ';') ADVANCE(1652);
      END_STATE();
    case 1206:
      if (lookahead == ';') ADVANCE(1713);
      END_STATE();
    case 1207:
      if (lookahead == ';') ADVANCE(1685);
      END_STATE();
    case 1208:
      if (lookahead == ';') ADVANCE(1709);
      END_STATE();
    case 1209:
      if (lookahead == ';') ADVANCE(1683);
      END_STATE();
    case 1210:
      if (lookahead == ';') ADVANCE(1701);
      END_STATE();
    case 1211:
      if (lookahead == ';') ADVANCE(1656);
      END_STATE();
    case 1212:
      if (lookahead == ';') ADVANCE(1705);
      END_STATE();
    case 1213:
      if (lookahead == ';') ADVANCE(1687);
      END_STATE();
    case 1214:
      if (lookahead == ';') ADVANCE(1689);
      END_STATE();
    case 1215:
      if (lookahead == ';') ADVANCE(1658);
      END_STATE();
    case 1216:
      if (lookahead == ';') ADVANCE(1660);
      END_STATE();
    case 1217:
      if (lookahead == ';') ADVANCE(1662);
      END_STATE();
    case 1218:
      if (lookahead == ';') ADVANCE(1664);
      END_STATE();
    case 1219:
      if (lookahead == ';') ADVANCE(1654);
      END_STATE();
    case 1220:
      if (lookahead == ';') ADVANCE(1666);
      END_STATE();
    case 1221:
      if (lookahead == ';') ADVANCE(850);
      END_STATE();
    case 1222:
      if (lookahead == ';') ADVANCE(850);
      if (lookahead == 'b') ADVANCE(1224);
      if (lookahead == 'e') ADVANCE(1224);
      if (lookahead == 'm') ADVANCE(1387);
      END_STATE();
    case 1223:
      if (lookahead == ';') ADVANCE(1640);
      END_STATE();
    case 1224:
      if (lookahead == ';') ADVANCE(1630);
      END_STATE();
    case 1225:
      if (lookahead == ';') ADVANCE(1630);
      if (lookahead == 'a') ADVANCE(1432);
      END_STATE();
    case 1226:
      if (lookahead == ';') ADVANCE(1630);
      if (lookahead == 'f') ADVANCE(1471);
      if (lookahead == 'q') ADVANCE(1224);
      END_STATE();
    case 1227:
      if (lookahead == ';') ADVANCE(1630);
      if (lookahead == 'o') ADVANCE(1502);
      END_STATE();
    case 1228:
      if (lookahead == ';') ADVANCE(1630);
      if (lookahead == 't') ADVANCE(1401);
      END_STATE();
    case 1229:
      if (lookahead == ';') ADVANCE(855);
      END_STATE();
    case 1230:
      if (lookahead == ';') ADVANCE(1622);
      END_STATE();
    case 1231:
      if (lookahead == ';') ADVANCE(854);
      END_STATE();
    case 1232:
      if (lookahead == ';') ADVANCE(1641);
      END_STATE();
    case 1233:
      if (lookahead == ';') ADVANCE(851);
      END_STATE();
    case 1234:
      if (lookahead == ';') ADVANCE(1629);
      END_STATE();
    case 1235:
      if (lookahead == ';') ADVANCE(1629);
      if (lookahead == 'b') ADVANCE(1224);
      if (lookahead == 'e') ADVANCE(1224);
      if (lookahead == 'm') ADVANCE(1387);
      END_STATE();
    case 1236:
      if (lookahead == ';') ADVANCE(1617);
      END_STATE();
    case 1237:
      if (lookahead == ';') ADVANCE(1541);
      END_STATE();
    case 1238:
      if (lookahead == ';') ADVANCE(1642);
      END_STATE();
    case 1239:
      if (lookahead == '=') ADVANCE(1630);
      END_STATE();
    case 1240:
      if (lookahead == 'A') ADVANCE(1433);
      END_STATE();
    case 1241:
      if (lookahead == 'A') ADVANCE(1433);
      if (lookahead == 'R') ADVANCE(1354);
      END_STATE();
    case 1242:
      if (lookahead == 'A') ADVANCE(1433);
      if (lookahead == 'T') ADVANCE(1309);
      if (lookahead == 'p') ADVANCE(1310);
      END_STATE();
    case 1243:
      if (lookahead == 'L') ADVANCE(1312);
      if (lookahead == 'R') ADVANCE(1354);
      if (lookahead == 'U') ADVANCE(1413);
      END_STATE();
    case 1244:
      if (lookahead == 'M') ADVANCE(1361);
      END_STATE();
    case 1245:
      if (lookahead == 'N') ADVANCE(1630);
      END_STATE();
    case 1246:
      if (lookahead == 'P') ADVANCE(1379);
      END_STATE();
    case 1247:
      if (lookahead == 'R') ADVANCE(1354);
      END_STATE();
    case 1248:
      if (lookahead == 'a') ADVANCE(1438);
      END_STATE();
    case 1249:
      if (lookahead == 'a') ADVANCE(1284);
      END_STATE();
    case 1250:
      if (lookahead == 'a') ADVANCE(1364);
      if (lookahead == 'y') ADVANCE(1420);
      END_STATE();
    case 1251:
      if (lookahead == 'a') ADVANCE(1283);
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'e') ADVANCE(1272);
      if (lookahead == 'v') ADVANCE(1374);
      END_STATE();
    case 1252:
      if (lookahead == 'a') ADVANCE(1283);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1272);
      if (lookahead == 'v') ADVANCE(1374);
      END_STATE();
    case 1253:
      if (lookahead == 'a') ADVANCE(1439);
      END_STATE();
    case 1254:
      if (lookahead == 'a') ADVANCE(1363);
      if (lookahead == 'y') ADVANCE(1411);
      END_STATE();
    case 1255:
      if (lookahead == 'a') ADVANCE(1363);
      if (lookahead == 'y') ADVANCE(1415);
      END_STATE();
    case 1256:
      if (lookahead == 'a') ADVANCE(1428);
      END_STATE();
    case 1257:
      if (lookahead == 'a') ADVANCE(1428);
      if (lookahead == 'i') ADVANCE(1332);
      END_STATE();
    case 1258:
      if (lookahead == 'a') ADVANCE(1428);
      if (lookahead == 'p') ADVANCE(1266);
      END_STATE();
    case 1259:
      if (lookahead == 'a') ADVANCE(1428);
      if (lookahead == 'y') ADVANCE(1420);
      END_STATE();
    case 1260:
      if (lookahead == 'a') ADVANCE(1428);
      if (lookahead == 'y') ADVANCE(1423);
      END_STATE();
    case 1261:
      if (lookahead == 'a') ADVANCE(1368);
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1294);
      if (lookahead == 'n') ADVANCE(1416);
      if (lookahead == 'p') ADVANCE(1224);
      END_STATE();
    case 1262:
      if (lookahead == 'a') ADVANCE(1368);
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1396);
      if (lookahead == 'n') ADVANCE(1416);
      if (lookahead == 'p') ADVANCE(1224);
      END_STATE();
    case 1263:
      if (lookahead == 'a') ADVANCE(1368);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'i') ADVANCE(1398);
      if (lookahead == 'n') ADVANCE(1416);
      if (lookahead == 'p') ADVANCE(1224);
      END_STATE();
    case 1264:
      if (lookahead == 'a') ADVANCE(1383);
      if (lookahead == 'e') ADVANCE(1323);
      END_STATE();
    case 1265:
      if (lookahead == 'a') ADVANCE(1383);
      if (lookahead == 'i') ADVANCE(1330);
      END_STATE();
    case 1266:
      if (lookahead == 'a') ADVANCE(1433);
      END_STATE();
    case 1267:
      if (lookahead == 'a') ADVANCE(1433);
      if (lookahead == 'r') ADVANCE(1359);
      END_STATE();
    case 1268:
      if (lookahead == 'a') ADVANCE(1378);
      END_STATE();
    case 1269:
      if (lookahead == 'a') ADVANCE(1432);
      END_STATE();
    case 1270:
      if (lookahead == 'a') ADVANCE(1224);
      END_STATE();
    case 1271:
      if (lookahead == 'a') ADVANCE(1457);
      END_STATE();
    case 1272:
      if (lookahead == 'a') ADVANCE(1434);
      END_STATE();
    case 1273:
      if (lookahead == 'a') ADVANCE(1458);
      END_STATE();
    case 1274:
      if (lookahead == 'a') ADVANCE(1460);
      END_STATE();
    case 1275:
      if (lookahead == 'a') ADVANCE(1462);
      END_STATE();
    case 1276:
      if (lookahead == 'a') ADVANCE(1463);
      END_STATE();
    case 1277:
      if (lookahead == 'a') ADVANCE(1464);
      END_STATE();
    case 1278:
      if (lookahead == 'a') ADVANCE(1465);
      END_STATE();
    case 1279:
      if (lookahead == 'a') ADVANCE(1466);
      END_STATE();
    case 1280:
      if (lookahead == 'a') ADVANCE(1467);
      END_STATE();
    case 1281:
      if (lookahead == 'a') ADVANCE(1456);
      END_STATE();
    case 1282:
      if (lookahead == 'a') ADVANCE(1376);
      END_STATE();
    case 1283:
      if (lookahead == 'b') ADVANCE(1367);
      END_STATE();
    case 1284:
      if (lookahead == 'c') ADVANCE(961);
      END_STATE();
    case 1285:
      if (lookahead == 'c') ADVANCE(1369);
      END_STATE();
    case 1286:
      if (lookahead == 'c') ADVANCE(1371);
      END_STATE();
    case 1287:
      if (lookahead == 'd') ADVANCE(1253);
      END_STATE();
    case 1288:
      if (lookahead == 'd') ADVANCE(1253);
      if (lookahead == 'i') ADVANCE(1292);
      END_STATE();
    case 1289:
      if (lookahead == 'd') ADVANCE(1407);
      if (lookahead == 'p') ADVANCE(1379);
      END_STATE();
    case 1290:
      if (lookahead == 'd') ADVANCE(1271);
      END_STATE();
    case 1291:
      if (lookahead == 'd') ADVANCE(1271);
      if (lookahead == 'i') ADVANCE(1391);
      END_STATE();
    case 1292:
      if (lookahead == 'd') ADVANCE(1248);
      if (lookahead == 'n') ADVANCE(1483);
      END_STATE();
    case 1293:
      if (lookahead == 'd') ADVANCE(1248);
      if (lookahead == 'n') ADVANCE(1492);
      END_STATE();
    case 1294:
      if (lookahead == 'd') ADVANCE(1248);
      if (lookahead == 'n') ADVANCE(1496);
      END_STATE();
    case 1295:
      if (lookahead == 'd') ADVANCE(1274);
      if (lookahead == 'i') ADVANCE(1293);
      END_STATE();
    case 1296:
      if (lookahead == 'd') ADVANCE(1274);
      if (lookahead == 'i') ADVANCE(1392);
      END_STATE();
    case 1297:
      if (lookahead == 'd') ADVANCE(1275);
      END_STATE();
    case 1298:
      if (lookahead == 'd') ADVANCE(1276);
      END_STATE();
    case 1299:
      if (lookahead == 'd') ADVANCE(1276);
      if (lookahead == 'i') ADVANCE(1393);
      END_STATE();
    case 1300:
      if (lookahead == 'd') ADVANCE(1278);
      END_STATE();
    case 1301:
      if (lookahead == 'd') ADVANCE(1278);
      if (lookahead == 'i') ADVANCE(1395);
      END_STATE();
    case 1302:
      if (lookahead == 'd') ADVANCE(1279);
      END_STATE();
    case 1303:
      if (lookahead == 'd') ADVANCE(1279);
      if (lookahead == 'i') ADVANCE(1397);
      END_STATE();
    case 1304:
      if (lookahead == 'e') ADVANCE(1226);
      if (lookahead == 'l') ADVANCE(1474);
      if (lookahead == 'o') ADVANCE(1501);
      if (lookahead == 'r') ADVANCE(1256);
      END_STATE();
    case 1305:
      if (lookahead == 'e') ADVANCE(1226);
      if (lookahead == 'l') ADVANCE(1474);
      if (lookahead == 'r') ADVANCE(1256);
      END_STATE();
    case 1306:
      if (lookahead == 'e') ADVANCE(1381);
      END_STATE();
    case 1307:
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == 'l') ADVANCE(1487);
      if (lookahead == 'm') ADVANCE(1224);
      if (lookahead == 'r') ADVANCE(1404);
      END_STATE();
    case 1308:
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == 'l') ADVANCE(1489);
      if (lookahead == 'm') ADVANCE(1224);
      if (lookahead == 'r') ADVANCE(1404);
      END_STATE();
    case 1309:
      if (lookahead == 'e') ADVANCE(1311);
      END_STATE();
    case 1310:
      if (lookahead == 'e') ADVANCE(1425);
      END_STATE();
    case 1311:
      if (lookahead == 'e') ADVANCE(1224);
      END_STATE();
    case 1312:
      if (lookahead == 'e') ADVANCE(1325);
      END_STATE();
    case 1313:
      if (lookahead == 'e') ADVANCE(1384);
      END_STATE();
    case 1314:
      if (lookahead == 'e') ADVANCE(1369);
      END_STATE();
    case 1315:
      if (lookahead == 'e') ADVANCE(1385);
      END_STATE();
    case 1316:
      if (lookahead == 'e') ADVANCE(1386);
      END_STATE();
    case 1317:
      if (lookahead == 'e') ADVANCE(1387);
      END_STATE();
    case 1318:
      if (lookahead == 'e') ADVANCE(1388);
      END_STATE();
    case 1319:
      if (lookahead == 'e') ADVANCE(1389);
      END_STATE();
    case 1320:
      if (lookahead == 'e') ADVANCE(1390);
      END_STATE();
    case 1321:
      if (lookahead == 'e') ADVANCE(1459);
      END_STATE();
    case 1322:
      if (lookahead == 'e') ADVANCE(1461);
      END_STATE();
    case 1323:
      if (lookahead == 'f') ADVANCE(1470);
      END_STATE();
    case 1324:
      if (lookahead == 'f') ADVANCE(1358);
      END_STATE();
    case 1325:
      if (lookahead == 'f') ADVANCE(1472);
      END_STATE();
    case 1326:
      if (lookahead == 'f') ADVANCE(1204);
      END_STATE();
    case 1327:
      if (lookahead == 'f') ADVANCE(1446);
      END_STATE();
    case 1328:
      if (lookahead == 'f') ADVANCE(1224);
      END_STATE();
    case 1329:
      if (lookahead == 'g') ADVANCE(1400);
      END_STATE();
    case 1330:
      if (lookahead == 'g') ADVANCE(1336);
      END_STATE();
    case 1331:
      if (lookahead == 'g') ADVANCE(1224);
      END_STATE();
    case 1332:
      if (lookahead == 'g') ADVANCE(1337);
      END_STATE();
    case 1333:
      if (lookahead == 'h') ADVANCE(1306);
      END_STATE();
    case 1334:
      if (lookahead == 'h') ADVANCE(1202);
      END_STATE();
    case 1335:
      if (lookahead == 'h') ADVANCE(1405);
      if (lookahead == 'q') ADVANCE(1493);
      END_STATE();
    case 1336:
      if (lookahead == 'h') ADVANCE(1472);
      END_STATE();
    case 1337:
      if (lookahead == 'h') ADVANCE(1479);
      END_STATE();
    case 1338:
      if (lookahead == 'h') ADVANCE(1200);
      END_STATE();
    case 1339:
      if (lookahead == 'h') ADVANCE(1211);
      END_STATE();
    case 1340:
      if (lookahead == 'h') ADVANCE(1237);
      END_STATE();
    case 1341:
      if (lookahead == 'h') ADVANCE(1217);
      END_STATE();
    case 1342:
      if (lookahead == 'h') ADVANCE(1218);
      END_STATE();
    case 1343:
      if (lookahead == 'h') ADVANCE(1224);
      END_STATE();
    case 1344:
      if (lookahead == 'h') ADVANCE(1223);
      END_STATE();
    case 1345:
      if (lookahead == 'h') ADVANCE(1230);
      END_STATE();
    case 1346:
      if (lookahead == 'h') ADVANCE(1236);
      END_STATE();
    case 1347:
      if (lookahead == 'h') ADVANCE(1313);
      END_STATE();
    case 1348:
      if (lookahead == 'h') ADVANCE(1315);
      END_STATE();
    case 1349:
      if (lookahead == 'h') ADVANCE(1316);
      END_STATE();
    case 1350:
      if (lookahead == 'h') ADVANCE(1318);
      END_STATE();
    case 1351:
      if (lookahead == 'h') ADVANCE(1317);
      END_STATE();
    case 1352:
      if (lookahead == 'h') ADVANCE(1319);
      END_STATE();
    case 1353:
      if (lookahead == 'h') ADVANCE(1320);
      END_STATE();
    case 1354:
      if (lookahead == 'i') ADVANCE(1330);
      END_STATE();
    case 1355:
      if (lookahead == 'i') ADVANCE(1435);
      END_STATE();
    case 1356:
      if (lookahead == 'i') ADVANCE(1329);
      if (lookahead == 'o') ADVANCE(1469);
      END_STATE();
    case 1357:
      if (lookahead == 'i') ADVANCE(1224);
      END_STATE();
    case 1358:
      if (lookahead == 'i') ADVANCE(1387);
      END_STATE();
    case 1359:
      if (lookahead == 'i') ADVANCE(1332);
      END_STATE();
    case 1360:
      if (lookahead == 'i') ADVANCE(1394);
      END_STATE();
    case 1361:
      if (lookahead == 'i') ADVANCE(1395);
      END_STATE();
    case 1362:
      if (lookahead == 'l') ADVANCE(1481);
      END_STATE();
    case 1363:
      if (lookahead == 'l') ADVANCE(1326);
      END_STATE();
    case 1364:
      if (lookahead == 'l') ADVANCE(1326);
      if (lookahead == 'r') ADVANCE(1435);
      END_STATE();
    case 1365:
      if (lookahead == 'l') ADVANCE(1256);
      if (lookahead == 'q') ADVANCE(1480);
      if (lookahead == 'r') ADVANCE(1256);
      END_STATE();
    case 1366:
      if (lookahead == 'l') ADVANCE(1203);
      END_STATE();
    case 1367:
      if (lookahead == 'l') ADVANCE(1270);
      END_STATE();
    case 1368:
      if (lookahead == 'l') ADVANCE(1311);
      END_STATE();
    case 1369:
      if (lookahead == 'l') ADVANCE(1224);
      END_STATE();
    case 1370:
      if (lookahead == 'l') ADVANCE(1224);
      if (lookahead == 'r') ADVANCE(1224);
      END_STATE();
    case 1371:
      if (lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 1372:
      if (lookahead == 'l') ADVANCE(1229);
      END_STATE();
    case 1373:
      if (lookahead == 'l') ADVANCE(1231);
      END_STATE();
    case 1374:
      if (lookahead == 'l') ADVANCE(1478);
      END_STATE();
    case 1375:
      if (lookahead == 'l') ADVANCE(1484);
      END_STATE();
    case 1376:
      if (lookahead == 'l') ADVANCE(1451);
      END_STATE();
    case 1377:
      if (lookahead == 'l') ADVANCE(1486);
      END_STATE();
    case 1378:
      if (lookahead == 'l') ADVANCE(1453);
      END_STATE();
    case 1379:
      if (lookahead == 'l') ADVANCE(1495);
      END_STATE();
    case 1380:
      if (lookahead == 'm') ADVANCE(1224);
      END_STATE();
    case 1381:
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 1382:
      if (lookahead == 'n') ADVANCE(1324);
      END_STATE();
    case 1383:
      if (lookahead == 'n') ADVANCE(1331);
      END_STATE();
    case 1384:
      if (lookahead == 'n') ADVANCE(1200);
      END_STATE();
    case 1385:
      if (lookahead == 'n') ADVANCE(1211);
      END_STATE();
    case 1386:
      if (lookahead == 'n') ADVANCE(1237);
      END_STATE();
    case 1387:
      if (lookahead == 'n') ADVANCE(1224);
      END_STATE();
    case 1388:
      if (lookahead == 'n') ADVANCE(1223);
      END_STATE();
    case 1389:
      if (lookahead == 'n') ADVANCE(1230);
      END_STATE();
    case 1390:
      if (lookahead == 'n') ADVANCE(1236);
      END_STATE();
    case 1391:
      if (lookahead == 'n') ADVANCE(1491);
      END_STATE();
    case 1392:
      if (lookahead == 'n') ADVANCE(1492);
      END_STATE();
    case 1393:
      if (lookahead == 'n') ADVANCE(1494);
      END_STATE();
    case 1394:
      if (lookahead == 'n') ADVANCE(1488);
      END_STATE();
    case 1395:
      if (lookahead == 'n') ADVANCE(1495);
      END_STATE();
    case 1396:
      if (lookahead == 'n') ADVANCE(1496);
      END_STATE();
    case 1397:
      if (lookahead == 'n') ADVANCE(1497);
      END_STATE();
    case 1398:
      if (lookahead == 'n') ADVANCE(1498);
      END_STATE();
    case 1399:
      if (lookahead == 'o') ADVANCE(1501);
      END_STATE();
    case 1400:
      if (lookahead == 'o') ADVANCE(1289);
      END_STATE();
    case 1401:
      if (lookahead == 'o') ADVANCE(1380);
      END_STATE();
    case 1402:
      if (lookahead == 'o') ADVANCE(1502);
      END_STATE();
    case 1403:
      if (lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 1404:
      if (lookahead == 'o') ADVANCE(1327);
      END_STATE();
    case 1405:
      if (lookahead == 'o') ADVANCE(1431);
      END_STATE();
    case 1406:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1407:
      if (lookahead == 'o') ADVANCE(1476);
      END_STATE();
    case 1408:
      if (lookahead == 'o') ADVANCE(1373);
      END_STATE();
    case 1409:
      if (lookahead == 'p') ADVANCE(1242);
      END_STATE();
    case 1410:
      if (lookahead == 'p') ADVANCE(863);
      END_STATE();
    case 1411:
      if (lookahead == 'p') ADVANCE(1333);
      END_STATE();
    case 1412:
      if (lookahead == 'p') ADVANCE(1224);
      END_STATE();
    case 1413:
      if (lookahead == 'p') ADVANCE(1266);
      END_STATE();
    case 1414:
      if (lookahead == 'p') ADVANCE(1347);
      END_STATE();
    case 1415:
      if (lookahead == 'p') ADVANCE(1348);
      END_STATE();
    case 1416:
      if (lookahead == 'p') ADVANCE(1379);
      END_STATE();
    case 1417:
      if (lookahead == 'p') ADVANCE(1379);
      if (lookahead == 'q') ADVANCE(1485);
      if (lookahead == 'x') ADVANCE(1286);
      END_STATE();
    case 1418:
      if (lookahead == 'p') ADVANCE(1379);
      if (lookahead == 'u') ADVANCE(1370);
      END_STATE();
    case 1419:
      if (lookahead == 'p') ADVANCE(1349);
      END_STATE();
    case 1420:
      if (lookahead == 'p') ADVANCE(1350);
      END_STATE();
    case 1421:
      if (lookahead == 'p') ADVANCE(1351);
      END_STATE();
    case 1422:
      if (lookahead == 'p') ADVANCE(1352);
      END_STATE();
    case 1423:
      if (lookahead == 'p') ADVANCE(1353);
      END_STATE();
    case 1424:
      if (lookahead == 'q') ADVANCE(1500);
      END_STATE();
    case 1425:
      if (lookahead == 'r') ADVANCE(1247);
      END_STATE();
    case 1426:
      if (lookahead == 'r') ADVANCE(1227);
      END_STATE();
    case 1427:
      if (lookahead == 'r') ADVANCE(1249);
      END_STATE();
    case 1428:
      if (lookahead == 'r') ADVANCE(1435);
      END_STATE();
    case 1429:
      if (lookahead == 'r') ADVANCE(1357);
      END_STATE();
    case 1430:
      if (lookahead == 'r') ADVANCE(1412);
      END_STATE();
    case 1431:
      if (lookahead == 'r') ADVANCE(1473);
      END_STATE();
    case 1432:
      if (lookahead == 'r') ADVANCE(1311);
      END_STATE();
    case 1433:
      if (lookahead == 'r') ADVANCE(1436);
      END_STATE();
    case 1434:
      if (lookahead == 'r') ADVANCE(1426);
      END_STATE();
    case 1435:
      if (lookahead == 'r') ADVANCE(1224);
      END_STATE();
    case 1436:
      if (lookahead == 'r') ADVANCE(1402);
      END_STATE();
    case 1437:
      if (lookahead == 'r') ADVANCE(1328);
      END_STATE();
    case 1438:
      if (lookahead == 's') ADVANCE(1468);
      END_STATE();
    case 1439:
      if (lookahead == 's') ADVANCE(1334);
      END_STATE();
    case 1440:
      if (lookahead == 's') ADVANCE(1244);
      END_STATE();
    case 1441:
      if (lookahead == 's') ADVANCE(1222);
      END_STATE();
    case 1442:
      if (lookahead == 's') ADVANCE(1246);
      END_STATE();
    case 1443:
      if (lookahead == 's') ADVANCE(1199);
      END_STATE();
    case 1444:
      if (lookahead == 's') ADVANCE(1235);
      END_STATE();
    case 1445:
      if (lookahead == 's') ADVANCE(1202);
      END_STATE();
    case 1446:
      if (lookahead == 's') ADVANCE(1490);
      END_STATE();
    case 1447:
      if (lookahead == 's') ADVANCE(1198);
      END_STATE();
    case 1448:
      if (lookahead == 's') ADVANCE(1200);
      END_STATE();
    case 1449:
      if (lookahead == 's') ADVANCE(1237);
      END_STATE();
    case 1450:
      if (lookahead == 's') ADVANCE(1219);
      END_STATE();
    case 1451:
      if (lookahead == 's') ADVANCE(1224);
      END_STATE();
    case 1452:
      if (lookahead == 's') ADVANCE(1223);
      END_STATE();
    case 1453:
      if (lookahead == 's') ADVANCE(1238);
      END_STATE();
    case 1454:
      if (lookahead == 's') ADVANCE(1230);
      END_STATE();
    case 1455:
      if (lookahead == 's') ADVANCE(1236);
      END_STATE();
    case 1456:
      if (lookahead == 's') ADVANCE(1475);
      END_STATE();
    case 1457:
      if (lookahead == 's') ADVANCE(1338);
      END_STATE();
    case 1458:
      if (lookahead == 's') ADVANCE(1339);
      END_STATE();
    case 1459:
      if (lookahead == 's') ADVANCE(1477);
      END_STATE();
    case 1460:
      if (lookahead == 's') ADVANCE(1342);
      END_STATE();
    case 1461:
      if (lookahead == 's') ADVANCE(1476);
      END_STATE();
    case 1462:
      if (lookahead == 's') ADVANCE(1341);
      END_STATE();
    case 1463:
      if (lookahead == 's') ADVANCE(1340);
      END_STATE();
    case 1464:
      if (lookahead == 's') ADVANCE(1344);
      END_STATE();
    case 1465:
      if (lookahead == 's') ADVANCE(1343);
      END_STATE();
    case 1466:
      if (lookahead == 's') ADVANCE(1345);
      END_STATE();
    case 1467:
      if (lookahead == 's') ADVANCE(1346);
      END_STATE();
    case 1468:
      if (lookahead == 't') ADVANCE(1201);
      END_STATE();
    case 1469:
      if (lookahead == 't') ADVANCE(1228);
      if (lookahead == 'x') ADVANCE(1418);
      END_STATE();
    case 1470:
      if (lookahead == 't') ADVANCE(1241);
      END_STATE();
    case 1471:
      if (lookahead == 't') ADVANCE(1267);
      END_STATE();
    case 1472:
      if (lookahead == 't') ADVANCE(1240);
      END_STATE();
    case 1473:
      if (lookahead == 't') ADVANCE(1243);
      END_STATE();
    case 1474:
      if (lookahead == 't') ADVANCE(1429);
      END_STATE();
    case 1475:
      if (lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 1476:
      if (lookahead == 't') ADVANCE(1224);
      END_STATE();
    case 1477:
      if (lookahead == 't') ADVANCE(1232);
      END_STATE();
    case 1478:
      if (lookahead == 't') ADVANCE(1233);
      END_STATE();
    case 1479:
      if (lookahead == 't') ADVANCE(1266);
      END_STATE();
    case 1480:
      if (lookahead == 'u') ADVANCE(1225);
      END_STATE();
    case 1481:
      if (lookahead == 'u') ADVANCE(1443);
      END_STATE();
    case 1482:
      if (lookahead == 'u') ADVANCE(1321);
      END_STATE();
    case 1483:
      if (lookahead == 'u') ADVANCE(1445);
      END_STATE();
    case 1484:
      if (lookahead == 'u') ADVANCE(1447);
      END_STATE();
    case 1485:
      if (lookahead == 'u') ADVANCE(1268);
      END_STATE();
    case 1486:
      if (lookahead == 'u') ADVANCE(1440);
      END_STATE();
    case 1487:
      if (lookahead == 'u') ADVANCE(1441);
      END_STATE();
    case 1488:
      if (lookahead == 'u') ADVANCE(1442);
      END_STATE();
    case 1489:
      if (lookahead == 'u') ADVANCE(1444);
      END_STATE();
    case 1490:
      if (lookahead == 'u') ADVANCE(1437);
      END_STATE();
    case 1491:
      if (lookahead == 'u') ADVANCE(1448);
      END_STATE();
    case 1492:
      if (lookahead == 'u') ADVANCE(1450);
      END_STATE();
    case 1493:
      if (lookahead == 'u') ADVANCE(1269);
      END_STATE();
    case 1494:
      if (lookahead == 'u') ADVANCE(1449);
      END_STATE();
    case 1495:
      if (lookahead == 'u') ADVANCE(1451);
      END_STATE();
    case 1496:
      if (lookahead == 'u') ADVANCE(1452);
      END_STATE();
    case 1497:
      if (lookahead == 'u') ADVANCE(1454);
      END_STATE();
    case 1498:
      if (lookahead == 'u') ADVANCE(1455);
      END_STATE();
    case 1499:
      if (lookahead == 'u') ADVANCE(1322);
      END_STATE();
    case 1500:
      if (lookahead == 'u') ADVANCE(1282);
      END_STATE();
    case 1501:
      if (lookahead == 'w') ADVANCE(1281);
      END_STATE();
    case 1502:
      if (lookahead == 'w') ADVANCE(1224);
      END_STATE();
    case 1503:
      if (lookahead == 'x') ADVANCE(1285);
      END_STATE();
    case 1504:
      if (lookahead == 'y') ADVANCE(1414);
      END_STATE();
    case 1505:
      if (lookahead == 'y') ADVANCE(1415);
      END_STATE();
    case 1506:
      if (lookahead == 'y') ADVANCE(1419);
      END_STATE();
    case 1507:
      if (lookahead == 'y') ADVANCE(1421);
      END_STATE();
    case 1508:
      if (lookahead == 'y') ADVANCE(1422);
      END_STATE();
    case 1509:
      if (lookahead == 65038) ADVANCE(1611);
      END_STATE();
    case 1510:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1511)
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1511:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1511)
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1512:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1539);
      END_STATE();
    case 1513:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1224);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1224);
      END_STATE();
    case 1514:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1224);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1224);
      END_STATE();
    case 1515:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1213);
      END_STATE();
    case 1516:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1224);
      END_STATE();
    case 1517:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1229);
      END_STATE();
    case 1518:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1231);
      END_STATE();
    case 1519:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1224);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1224);
      END_STATE();
    case 1520:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1233);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1238);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1232);
      END_STATE();
    case 1521:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1199);
      END_STATE();
    case 1522:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1204);
      END_STATE();
    case 1523:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1198);
      END_STATE();
    case 1524:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1206);
      END_STATE();
    case 1525:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1224);
      END_STATE();
    case 1526:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1221);
      END_STATE();
    case 1527:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1234);
      END_STATE();
    case 1528:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1224);
      END_STATE();
    case 1529:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1521);
      END_STATE();
    case 1530:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1523);
      END_STATE();
    case 1531:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1526);
      END_STATE();
    case 1532:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1525);
      END_STATE();
    case 1533:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1527);
      END_STATE();
    case 1534:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1168);
      END_STATE();
    case 1535:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1224);
      END_STATE();
    case 1536:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1172);
      END_STATE();
    case 1537:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1174);
      END_STATE();
    case 1538:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1622);
      END_STATE();
    case 1539:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1538);
      END_STATE();
    case 1540:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1621);
      END_STATE();
    case 1541:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1618);
      END_STATE();
    case 1542:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1622);
      END_STATE();
    case 1543:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1646);
      END_STATE();
    case 1544:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1574);
      END_STATE();
    case 1545:
      if (eof) ADVANCE(1553);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '#') ADVANCE(1627);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1626);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1604);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1593);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1597);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1592);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1546:
      if (eof) ADVANCE(1553);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '#') ADVANCE(1627);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1626);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1602);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1547:
      if (eof) ADVANCE(1553);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '#') ADVANCE(1627);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1626);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1616);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1602);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1604);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1593);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1597);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1592);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1548:
      if (eof) ADVANCE(1553);
      if (lookahead == '\n') ADVANCE(1562);
      if (lookahead == '\r') ADVANCE(809);
      if (lookahead == '!') ADVANCE(1637);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '0') ADVANCE(1673);
      if (lookahead == '1') ADVANCE(1649);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1636);
      if (lookahead == '?') ADVANCE(1637);
      if (lookahead == '@') ADVANCE(1614);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1597);
      if (lookahead == 'O') ADVANCE(1668);
      if (lookahead == 'P') ADVANCE(1607);
      if (lookahead == 'R') ADVANCE(1596);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1567);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1588);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead == 'o') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1579);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1639);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 9817) ADVANCE(1610);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1549:
      if (eof) ADVANCE(1553);
      if (lookahead == '\n') ADVANCE(819);
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1696);
      if (lookahead == '0') ADVANCE(1672);
      if (lookahead == '1') ADVANCE(1648);
      if (lookahead == 'O') ADVANCE(1669);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == 'o') ADVANCE(1678);
      if (lookahead == 189) ADVANCE(1692);
      if (lookahead == 1645) ADVANCE(1712);
      if (lookahead == 8270) ADVANCE(1708);
      if (lookahead == 8727) ADVANCE(1700);
      if (lookahead == 10033) ADVANCE(1704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1550:
      if (eof) ADVANCE(1553);
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(820);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(820);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1551:
      if (eof) ADVANCE(1553);
      if (lookahead == '"') ADVANCE(1569);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1558);
      if (lookahead == '&') ADVANCE(837);
      if (lookahead == '(') ADVANCE(1575);
      if (lookahead == ')') ADVANCE(1577);
      if (lookahead == '*') ADVANCE(1695);
      if (lookahead == '-') ADVANCE(1651);
      if (lookahead == '/') ADVANCE(1680);
      if (lookahead == '0') ADVANCE(1674);
      if (lookahead == '1') ADVANCE(1647);
      if (lookahead == '2') ADVANCE(1690);
      if (lookahead == '@') ADVANCE(1613);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1595);
      if (lookahead == 'O') ADVANCE(1670);
      if (lookahead == 'P') ADVANCE(1606);
      if (lookahead == '[') ADVANCE(1566);
      if (lookahead == ']') ADVANCE(1568);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1586);
      if (lookahead == 'o') ADVANCE(1679);
      if (lookahead == '{') ADVANCE(1578);
      if (lookahead == '}') ADVANCE(1580);
      if (lookahead == 189) ADVANCE(1691);
      if (lookahead == 1645) ADVANCE(1711);
      if (lookahead == 8208) ADVANCE(1655);
      if (lookahead == 8209) ADVANCE(1657);
      if (lookahead == 8210) ADVANCE(1659);
      if (lookahead == 8211) ADVANCE(1661);
      if (lookahead == 8212) ADVANCE(1663);
      if (lookahead == 8260) ADVANCE(1684);
      if (lookahead == 8270) ADVANCE(1707);
      if (lookahead == 8722) ADVANCE(1653);
      if (lookahead == 8725) ADVANCE(1682);
      if (lookahead == 8727) ADVANCE(1699);
      if (lookahead == 9817) ADVANCE(1609);
      if (lookahead == 9823) ADVANCE(1509);
      if (lookahead == 10033) ADVANCE(1703);
      if (lookahead == 10134) ADVANCE(1665);
      if (lookahead == 10187) ADVANCE(1686);
      if (lookahead == 10744) ADVANCE(1688);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1551)
      END_STATE();
    case 1552:
      if (eof) ADVANCE(1553);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead == '[') ADVANCE(1567);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1552)
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1554);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1555);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1556);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1557);
      if (lookahead == '\r') ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1560);
      if (lookahead == '\r') ADVANCE(815);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(820);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1557);
      if (lookahead == '\r') ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1563);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(858);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym_double_quote);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1570);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1571);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1571);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1573);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1573);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token2);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1581);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1584);
      if (lookahead == '\r') ADVANCE(1583);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1582);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1584);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1585);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(858);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1585);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1585);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == 'p') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'p') ADVANCE(1630);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(1630);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1643);
      if (lookahead == '\r') ADVANCE(1631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(1630);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1630);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '=') ADVANCE(1630);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1539);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1639);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1624);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(16);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1630);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1622);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(854);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(557);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1541);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1627);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1639);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(18);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(831);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1625);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(840);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1625);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1630);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(855);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1639);
      if (lookahead == '-') ADVANCE(1623);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(16);
      if ((8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1624);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1639);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1624);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(16);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1639);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1638);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1630);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1622);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(854);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(834);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(835);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(858);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(1630);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1630);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1646);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(860);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '.') ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(556);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(832);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1540);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(860);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(556);
      if (lookahead == '.') ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(832);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1540);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(832);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1540);
      if (lookahead == '.') ADVANCE(1585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(556);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(832);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1540);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_15);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_16);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_17);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_18);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1552},
  [2] = {.lex_state = 1546},
  [3] = {.lex_state = 1546},
  [4] = {.lex_state = 808},
  [5] = {.lex_state = 825},
  [6] = {.lex_state = 1547},
  [7] = {.lex_state = 1547},
  [8] = {.lex_state = 1545},
  [9] = {.lex_state = 1545},
  [10] = {.lex_state = 1546},
  [11] = {.lex_state = 1545},
  [12] = {.lex_state = 1546},
  [13] = {.lex_state = 1546},
  [14] = {.lex_state = 1546},
  [15] = {.lex_state = 1546},
  [16] = {.lex_state = 1546},
  [17] = {.lex_state = 1546},
  [18] = {.lex_state = 1546},
  [19] = {.lex_state = 1548},
  [20] = {.lex_state = 1546},
  [21] = {.lex_state = 1546},
  [22] = {.lex_state = 1546},
  [23] = {.lex_state = 1546},
  [24] = {.lex_state = 1546},
  [25] = {.lex_state = 1546},
  [26] = {.lex_state = 1546},
  [27] = {.lex_state = 1546},
  [28] = {.lex_state = 1546},
  [29] = {.lex_state = 1546},
  [30] = {.lex_state = 1546},
  [31] = {.lex_state = 1546},
  [32] = {.lex_state = 808},
  [33] = {.lex_state = 1546},
  [34] = {.lex_state = 1546},
  [35] = {.lex_state = 1546},
  [36] = {.lex_state = 1546},
  [37] = {.lex_state = 1546},
  [38] = {.lex_state = 808},
  [39] = {.lex_state = 1546},
  [40] = {.lex_state = 1546},
  [41] = {.lex_state = 808},
  [42] = {.lex_state = 808},
  [43] = {.lex_state = 825},
  [44] = {.lex_state = 825},
  [45] = {.lex_state = 825},
  [46] = {.lex_state = 825},
  [47] = {.lex_state = 853},
  [48] = {.lex_state = 1549},
  [49] = {.lex_state = 1549},
  [50] = {.lex_state = 823},
  [51] = {.lex_state = 823},
  [52] = {.lex_state = 824},
  [53] = {.lex_state = 824},
  [54] = {.lex_state = 824},
  [55] = {.lex_state = 825},
  [56] = {.lex_state = 853},
  [57] = {.lex_state = 853},
  [58] = {.lex_state = 853},
  [59] = {.lex_state = 825},
  [60] = {.lex_state = 825},
  [61] = {.lex_state = 825},
  [62] = {.lex_state = 825},
  [63] = {.lex_state = 816},
  [64] = {.lex_state = 825},
  [65] = {.lex_state = 825},
  [66] = {.lex_state = 825},
  [67] = {.lex_state = 825},
  [68] = {.lex_state = 825},
  [69] = {.lex_state = 825},
  [70] = {.lex_state = 825},
  [71] = {.lex_state = 825},
  [72] = {.lex_state = 825},
  [73] = {.lex_state = 825},
  [74] = {.lex_state = 825},
  [75] = {.lex_state = 825},
  [76] = {.lex_state = 825},
  [77] = {.lex_state = 825},
  [78] = {.lex_state = 825},
  [79] = {.lex_state = 825},
  [80] = {.lex_state = 825},
  [81] = {.lex_state = 825},
  [82] = {.lex_state = 825},
  [83] = {.lex_state = 825},
  [84] = {.lex_state = 825},
  [85] = {.lex_state = 825},
  [86] = {.lex_state = 1552},
  [87] = {.lex_state = 1552},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1552},
  [91] = {.lex_state = 1552},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1546},
  [94] = {.lex_state = 1546},
  [95] = {.lex_state = 1550},
  [96] = {.lex_state = 853},
  [97] = {.lex_state = 1546},
  [98] = {.lex_state = 1546},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1546},
  [101] = {.lex_state = 828},
  [102] = {.lex_state = 1546},
  [103] = {.lex_state = 1552},
  [104] = {.lex_state = 853},
  [105] = {.lex_state = 1552},
  [106] = {.lex_state = 1546},
  [107] = {.lex_state = 1552},
  [108] = {.lex_state = 828},
  [109] = {.lex_state = 1552},
  [110] = {.lex_state = 828},
  [111] = {.lex_state = 1550},
  [112] = {.lex_state = 1552},
  [113] = {.lex_state = 1552},
  [114] = {.lex_state = 1552},
  [115] = {.lex_state = 853},
  [116] = {.lex_state = 1552},
  [117] = {.lex_state = 1552},
  [118] = {.lex_state = 1552},
  [119] = {.lex_state = 1552},
  [120] = {.lex_state = 853},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1552},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 853},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 853},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 853},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1581},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 822},
  [151] = {.lex_state = 1563},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 853},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 944},
  [157] = {.lex_state = 944},
  [158] = {.lex_state = 944},
  [159] = {.lex_state = 944},
  [160] = {.lex_state = 1563},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 853},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1563},
  [168] = {.lex_state = 853},
  [169] = {.lex_state = 1563},
  [170] = {.lex_state = 853},
  [171] = {.lex_state = 1581},
  [172] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(1),
    [sym_tagpair_delimiter_open] = ACTIONS(1),
    [sym_tagpair_delimiter_close] = ACTIONS(1),
    [sym_double_quote] = ACTIONS(1),
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
    [sym_series_of_games] = STATE(149),
    [sym_game] = STATE(109),
    [sym_freestanding_comment] = STATE(92),
    [sym_rest_of_line_comment] = STATE(91),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(42),
    [aux_sym_series_of_games_repeat1] = STATE(87),
    [aux_sym_freestanding_comment_repeat1] = STATE(91),
    [aux_sym_header_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(5),
    [sym_old_style_twic_section_comment] = ACTIONS(7),
    [sym_tagpair_delimiter_open] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(13), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(17), 1,
      sym_variation_delimiter_open,
    ACTIONS(19), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(21), 1,
      sym_move_number,
    ACTIONS(23), 1,
      sym__san_file,
    ACTIONS(25), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_annotation,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(6), 1,
      sym__san_square,
    STATE(23), 1,
      sym__lan_move_by_coordinates,
    STATE(31), 1,
      sym_san_move,
    STATE(33), 1,
      sym_lan_move,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(31), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(28), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(30), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(27), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(25), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(15), 18,
      sym_old_style_twic_section_comment,
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
  [88] = 20,
    ACTIONS(37), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(42), 1,
      sym_variation_delimiter_open,
    ACTIONS(45), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(48), 1,
      sym_move_number,
    ACTIONS(51), 1,
      sym__san_file,
    ACTIONS(54), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(60), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      sym_annotation,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(6), 1,
      sym__san_square,
    STATE(23), 1,
      sym__lan_move_by_coordinates,
    STATE(31), 1,
      sym_san_move,
    STATE(33), 1,
      sym_lan_move,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(63), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(28), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(30), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(57), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(25), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(40), 18,
      sym_old_style_twic_section_comment,
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
  [176] = 25,
    ACTIONS(13), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(17), 1,
      sym_variation_delimiter_open,
    ACTIONS(19), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(21), 1,
      sym_move_number,
    ACTIONS(23), 1,
      sym__san_file,
    ACTIONS(25), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_annotation,
    ACTIONS(69), 1,
      sym__empty_line,
    ACTIONS(71), 1,
      anon_sym_1,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(6), 1,
      sym__san_square,
    STATE(23), 1,
      sym__lan_move_by_coordinates,
    STATE(31), 1,
      sym_san_move,
    STATE(33), 1,
      sym_lan_move,
    STATE(49), 1,
      sym_movetext,
    STATE(98), 1,
      sym_result_code,
    ACTIONS(31), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(75), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    STATE(28), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(30), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(27), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(25), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(77), 10,
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
  [273] = 25,
    ACTIONS(23), 1,
      sym__san_file,
    ACTIONS(25), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(27), 1,
      anon_sym_P,
    ACTIONS(33), 1,
      sym_annotation,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(79), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(81), 1,
      sym_variation_delimiter_open,
    ACTIONS(83), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(85), 1,
      sym_move_number,
    ACTIONS(89), 1,
      anon_sym_AT,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(6), 1,
      sym__san_square,
    STATE(23), 1,
      sym__lan_move_by_coordinates,
    STATE(31), 1,
      sym_san_move,
    STATE(33), 1,
      sym_lan_move,
    STATE(48), 1,
      sym_movetext,
    STATE(102), 1,
      sym_result_code,
    ACTIONS(87), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(91), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(93), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    STATE(28), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(30), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(25), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(95), 10,
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
  [369] = 6,
    ACTIONS(101), 1,
      sym__san_promotable_piece,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    STATE(26), 1,
      sym__san_promotion,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(103), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(99), 32,
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
  [421] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(109), 36,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
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
  [464] = 5,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    ACTIONS(115), 1,
      sym__san_promotable_piece,
    STATE(21), 1,
      sym__san_promotion,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(113), 32,
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
  [512] = 5,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    ACTIONS(121), 1,
      sym__san_promotable_piece,
    STATE(13), 1,
      sym__san_promotion,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(119), 32,
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
  [560] = 4,
    ACTIONS(123), 1,
      sym__san_capture_symbol,
    STATE(12), 1,
      sym__san_square,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(109), 32,
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
  [605] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(109), 34,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
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
  [646] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(127), 32,
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
  [685] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(131), 32,
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
  [724] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(135), 32,
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
  [763] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(139), 32,
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
  [802] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(109), 32,
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
  [841] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(143), 32,
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
  [880] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(147), 32,
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
  [919] = 3,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(151), 32,
      sym__empty_line,
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
  [960] = 2,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(157), 32,
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
  [999] = 2,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(161), 32,
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
  [1038] = 2,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(165), 32,
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
  [1077] = 3,
    ACTIONS(171), 1,
      sym_check_or_mate_condition,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(169), 31,
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
  [1118] = 2,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(175), 32,
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
  [1157] = 3,
    ACTIONS(181), 1,
      sym_check_or_mate_condition,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(179), 31,
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
  [1198] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(185), 32,
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
  [1237] = 2,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(189), 31,
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
  [1275] = 2,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(193), 31,
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
  [1313] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(197), 31,
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
  [1351] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(201), 31,
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
  [1389] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(205), 31,
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
  [1427] = 5,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(207), 1,
      sym__empty_line,
    STATE(38), 1,
      aux_sym_header_repeat1,
    STATE(42), 1,
      sym_tagpair,
    ACTIONS(209), 29,
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
  [1471] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(213), 31,
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
  [1509] = 2,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(217), 31,
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
  [1547] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(221), 31,
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
  [1585] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(225), 31,
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
  [1623] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(229), 31,
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
  [1661] = 5,
    ACTIONS(231), 1,
      sym__empty_line,
    ACTIONS(235), 1,
      sym_tagpair_delimiter_open,
    STATE(38), 1,
      aux_sym_header_repeat1,
    STATE(42), 1,
      sym_tagpair,
    ACTIONS(233), 29,
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
  [1705] = 2,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(240), 31,
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
  [1743] = 2,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(244), 31,
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
  [1781] = 2,
    ACTIONS(246), 1,
      sym__empty_line,
    ACTIONS(248), 30,
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
  [1817] = 2,
    ACTIONS(250), 1,
      sym__empty_line,
    ACTIONS(252), 30,
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
  [1853] = 21,
    ACTIONS(254), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(256), 1,
      sym_variation_delimiter_open,
    ACTIONS(258), 1,
      sym_variation_delimiter_close,
    ACTIONS(260), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(262), 1,
      sym_move_number,
    ACTIONS(264), 1,
      sym__san_file,
    ACTIONS(266), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(268), 1,
      anon_sym_P,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(276), 1,
      sym_annotation,
    STATE(46), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(50), 1,
      sym__san_square,
    STATE(67), 1,
      sym__lan_move_by_coordinates,
    STATE(75), 1,
      sym_lan_move,
    STATE(76), 1,
      sym_san_move,
    STATE(145), 1,
      sym_variation_movetext,
    ACTIONS(270), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(274), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(77), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(84), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(68), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1925] = 21,
    ACTIONS(254), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(256), 1,
      sym_variation_delimiter_open,
    ACTIONS(260), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(262), 1,
      sym_move_number,
    ACTIONS(264), 1,
      sym__san_file,
    ACTIONS(266), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(268), 1,
      anon_sym_P,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(276), 1,
      sym_annotation,
    ACTIONS(278), 1,
      sym_variation_delimiter_close,
    STATE(46), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(50), 1,
      sym__san_square,
    STATE(67), 1,
      sym__lan_move_by_coordinates,
    STATE(75), 1,
      sym_lan_move,
    STATE(76), 1,
      sym_san_move,
    STATE(166), 1,
      sym_variation_movetext,
    ACTIONS(270), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(274), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(77), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(84), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(68), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1997] = 20,
    ACTIONS(280), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(283), 1,
      sym_variation_delimiter_open,
    ACTIONS(286), 1,
      sym_variation_delimiter_close,
    ACTIONS(288), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(291), 1,
      sym_move_number,
    ACTIONS(294), 1,
      sym__san_file,
    ACTIONS(297), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(300), 1,
      anon_sym_P,
    ACTIONS(306), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      sym_annotation,
    STATE(45), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(50), 1,
      sym__san_square,
    STATE(67), 1,
      sym__lan_move_by_coordinates,
    STATE(75), 1,
      sym_lan_move,
    STATE(76), 1,
      sym_san_move,
    ACTIONS(303), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(309), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(77), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(84), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(68), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2066] = 20,
    ACTIONS(254), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(256), 1,
      sym_variation_delimiter_open,
    ACTIONS(260), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(262), 1,
      sym_move_number,
    ACTIONS(264), 1,
      sym__san_file,
    ACTIONS(266), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(268), 1,
      anon_sym_P,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(276), 1,
      sym_annotation,
    ACTIONS(315), 1,
      sym_variation_delimiter_close,
    STATE(45), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(50), 1,
      sym__san_square,
    STATE(67), 1,
      sym__lan_move_by_coordinates,
    STATE(75), 1,
      sym_lan_move,
    STATE(76), 1,
      sym_san_move,
    ACTIONS(270), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(274), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(77), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(84), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(68), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2135] = 2,
    ACTIONS(319), 10,
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
    ACTIONS(317), 16,
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
  [2166] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      sym__empty_line,
    STATE(93), 1,
      sym_result_code,
    ACTIONS(75), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(325), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
    ACTIONS(77), 10,
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
  [2205] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      sym__empty_line,
    STATE(94), 1,
      sym_result_code,
    ACTIONS(75), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(331), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
    ACTIONS(77), 10,
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
  [2244] = 7,
    ACTIONS(333), 1,
      sym__san_promotable_piece,
    ACTIONS(335), 1,
      sym__san_capture_symbol,
    ACTIONS(337), 1,
      sym__san_promotion_symbol,
    ACTIONS(339), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(61), 1,
      sym__san_promotion,
    ACTIONS(99), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(97), 10,
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
  [2279] = 2,
    ACTIONS(109), 8,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(107), 11,
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
  [2303] = 5,
    ACTIONS(337), 1,
      sym__san_promotion_symbol,
    ACTIONS(341), 1,
      sym__san_promotable_piece,
    STATE(70), 1,
      sym__san_promotion,
    ACTIONS(113), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(111), 10,
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
  [2332] = 5,
    ACTIONS(337), 1,
      sym__san_promotion_symbol,
    ACTIONS(343), 1,
      sym__san_promotable_piece,
    STATE(59), 1,
      sym__san_promotion,
    ACTIONS(119), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(117), 10,
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
  [2361] = 2,
    ACTIONS(109), 7,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(107), 10,
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
  [2383] = 4,
    ACTIONS(345), 1,
      sym__san_capture_symbol,
    STATE(71), 1,
      sym__san_square,
    ACTIONS(109), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(107), 10,
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
  [2409] = 1,
    ACTIONS(347), 16,
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
  [2428] = 1,
    ACTIONS(349), 16,
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
  [2447] = 1,
    ACTIONS(351), 16,
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
  [2466] = 2,
    ACTIONS(131), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(129), 10,
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
  [2486] = 2,
    ACTIONS(165), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(163), 10,
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
  [2506] = 2,
    ACTIONS(185), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(183), 10,
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
  [2526] = 2,
    ACTIONS(109), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(107), 10,
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
  [2546] = 2,
    ACTIONS(353), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(151), 14,
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
  [2566] = 2,
    ACTIONS(147), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(145), 10,
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
  [2586] = 2,
    ACTIONS(143), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(141), 10,
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
  [2606] = 2,
    ACTIONS(157), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(155), 10,
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
  [2626] = 3,
    ACTIONS(355), 1,
      sym_check_or_mate_condition,
    ACTIONS(169), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(167), 10,
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
  [2648] = 3,
    ACTIONS(357), 1,
      sym_check_or_mate_condition,
    ACTIONS(179), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(177), 10,
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
  [2670] = 2,
    ACTIONS(139), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(137), 10,
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
  [2690] = 2,
    ACTIONS(161), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(159), 10,
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
  [2710] = 2,
    ACTIONS(127), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(125), 10,
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
  [2730] = 2,
    ACTIONS(175), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(173), 10,
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
  [2750] = 2,
    ACTIONS(135), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(133), 10,
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
  [2770] = 2,
    ACTIONS(361), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(359), 10,
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
  [2789] = 2,
    ACTIONS(365), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(363), 10,
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
  [2808] = 2,
    ACTIONS(369), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(367), 10,
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
  [2827] = 2,
    ACTIONS(373), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(371), 10,
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
  [2846] = 2,
    ACTIONS(217), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(215), 10,
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
  [2865] = 2,
    ACTIONS(377), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(375), 10,
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
  [2884] = 2,
    ACTIONS(381), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(379), 10,
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
  [2903] = 2,
    ACTIONS(385), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(383), 10,
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
  [2922] = 2,
    ACTIONS(197), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(195), 10,
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
  [2941] = 2,
    ACTIONS(240), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(238), 10,
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
  [2960] = 2,
    ACTIONS(389), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(387), 10,
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
  [2979] = 2,
    ACTIONS(244), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(242), 10,
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
  [2998] = 11,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(396), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(399), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(42), 1,
      sym_tagpair,
    STATE(86), 1,
      aux_sym_series_of_games_repeat1,
    STATE(99), 1,
      sym_freestanding_comment,
    STATE(109), 1,
      sym_game,
    STATE(105), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3033] = 11,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(42), 1,
      sym_tagpair,
    STATE(86), 1,
      aux_sym_series_of_games_repeat1,
    STATE(89), 1,
      sym_freestanding_comment,
    STATE(109), 1,
      sym_game,
    STATE(91), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3068] = 1,
    ACTIONS(404), 10,
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
  [3081] = 6,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(42), 1,
      sym_tagpair,
    STATE(112), 1,
      sym_game,
  [3100] = 5,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(415), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(418), 1,
      sym_tagpair_delimiter_open,
    STATE(90), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3117] = 5,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(424), 1,
      sym_tagpair_delimiter_open,
    STATE(90), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3134] = 6,
    ACTIONS(408), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(42), 1,
      sym_tagpair,
    STATE(112), 1,
      sym_game,
  [3153] = 3,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
    ACTIONS(430), 1,
      sym__empty_line,
    ACTIONS(432), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3165] = 3,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(436), 1,
      sym__empty_line,
    ACTIONS(438), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3177] = 3,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(151), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3189] = 5,
    ACTIONS(442), 1,
      sym__san_file,
    ACTIONS(444), 1,
      sym__san_rank,
    ACTIONS(446), 1,
      sym__san_capture_symbol,
    ACTIONS(448), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym__san_square,
  [3205] = 2,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(452), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3215] = 3,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 1,
      sym__empty_line,
    ACTIONS(458), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3227] = 5,
    ACTIONS(408), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(42), 1,
      sym_tagpair,
    STATE(112), 1,
      sym_game,
  [3243] = 2,
    ACTIONS(460), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(462), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3253] = 4,
    ACTIONS(464), 1,
      sym_double_quote,
    STATE(110), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(163), 1,
      sym_tagpair_value_contents,
    ACTIONS(466), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [3267] = 3,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(470), 1,
      sym__empty_line,
    ACTIONS(472), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3279] = 4,
    ACTIONS(418), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(474), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(477), 1,
      sym_old_style_twic_section_comment,
    STATE(103), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3293] = 5,
    ACTIONS(480), 1,
      sym__san_file,
    ACTIONS(482), 1,
      sym__san_rank,
    ACTIONS(484), 1,
      sym__san_capture_symbol,
    ACTIONS(486), 1,
      anon_sym_AT,
    STATE(65), 1,
      sym__san_square,
  [3309] = 4,
    ACTIONS(424), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(488), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(490), 1,
      sym_old_style_twic_section_comment,
    STATE(103), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3323] = 2,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(494), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3333] = 2,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(498), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3342] = 3,
    ACTIONS(500), 1,
      sym_double_quote,
    STATE(108), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(502), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [3353] = 2,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(507), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3362] = 3,
    ACTIONS(509), 1,
      sym_double_quote,
    STATE(108), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(511), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [3373] = 2,
    ACTIONS(513), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(151), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3382] = 2,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(517), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3391] = 2,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(521), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3400] = 2,
    ACTIONS(523), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(525), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3409] = 4,
    ACTIONS(527), 1,
      sym__san_file,
    ACTIONS(529), 1,
      sym__san_rank,
    ACTIONS(531), 1,
      sym__san_capture_symbol,
    STATE(69), 1,
      sym__san_square,
  [3422] = 2,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(240), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3431] = 2,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(535), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3440] = 2,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(539), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3449] = 2,
    ACTIONS(541), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(543), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3458] = 4,
    ACTIONS(545), 1,
      sym__san_file,
    ACTIONS(547), 1,
      sym__san_rank,
    ACTIONS(549), 1,
      sym__san_capture_symbol,
    STATE(15), 1,
      sym__san_square,
  [3471] = 3,
    ACTIONS(545), 1,
      sym__san_file,
    ACTIONS(549), 1,
      sym__san_capture_symbol,
    STATE(15), 1,
      sym__san_square,
  [3481] = 2,
    ACTIONS(238), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(240), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3489] = 3,
    ACTIONS(527), 1,
      sym__san_file,
    ACTIONS(531), 1,
      sym__san_capture_symbol,
    STATE(69), 1,
      sym__san_square,
  [3499] = 1,
    ACTIONS(551), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [3505] = 2,
    ACTIONS(545), 1,
      sym__san_file,
    STATE(15), 1,
      sym__san_square,
  [3512] = 2,
    ACTIONS(545), 1,
      sym__san_file,
    STATE(14), 1,
      sym__san_square,
  [3519] = 2,
    ACTIONS(527), 1,
      sym__san_file,
    STATE(73), 1,
      sym__san_square,
  [3526] = 2,
    ACTIONS(527), 1,
      sym__san_file,
    STATE(69), 1,
      sym__san_square,
  [3533] = 2,
    ACTIONS(553), 1,
      sym__san_file,
    STATE(9), 1,
      sym__san_square,
  [3540] = 2,
    ACTIONS(555), 1,
      sym__san_rank,
    ACTIONS(557), 1,
      sym__san_capture_symbol,
  [3547] = 2,
    ACTIONS(545), 1,
      sym__san_file,
    STATE(22), 1,
      sym__san_square,
  [3554] = 2,
    ACTIONS(559), 1,
      sym__san_file,
    STATE(52), 1,
      sym__san_square,
  [3561] = 2,
    ACTIONS(527), 1,
      sym__san_file,
    STATE(60), 1,
      sym__san_square,
  [3568] = 2,
    ACTIONS(527), 1,
      sym__san_file,
    STATE(64), 1,
      sym__san_square,
  [3575] = 2,
    ACTIONS(527), 1,
      sym__san_file,
    STATE(71), 1,
      sym__san_square,
  [3582] = 2,
    ACTIONS(559), 1,
      sym__san_file,
    STATE(53), 1,
      sym__san_square,
  [3589] = 2,
    ACTIONS(545), 1,
      sym__san_file,
    STATE(18), 1,
      sym__san_square,
  [3596] = 2,
    ACTIONS(527), 1,
      sym__san_file,
    STATE(66), 1,
      sym__san_square,
  [3603] = 2,
    ACTIONS(561), 1,
      sym__san_rank,
    ACTIONS(563), 1,
      sym__san_capture_symbol,
  [3610] = 1,
    ACTIONS(551), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
  [3615] = 2,
    ACTIONS(565), 1,
      sym_double_quote,
    STATE(146), 1,
      sym__tagpair_value,
  [3622] = 2,
    ACTIONS(545), 1,
      sym__san_file,
    STATE(12), 1,
      sym__san_square,
  [3629] = 2,
    ACTIONS(553), 1,
      sym__san_file,
    STATE(8), 1,
      sym__san_square,
  [3636] = 2,
    ACTIONS(545), 1,
      sym__san_file,
    STATE(20), 1,
      sym__san_square,
  [3643] = 1,
    ACTIONS(567), 1,
      sym_variation_delimiter_close,
  [3647] = 1,
    ACTIONS(569), 1,
      sym_tagpair_delimiter_close,
  [3651] = 1,
    ACTIONS(571), 1,
      anon_sym_AT,
  [3655] = 1,
    ACTIONS(573), 1,
      sym_inline_comment_text,
  [3659] = 1,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
  [3663] = 1,
    ACTIONS(577), 1,
      sym_tagpair_key,
  [3667] = 1,
    ACTIONS(579), 1,
      sym_rest_of_line_comment_text,
  [3671] = 1,
    ACTIONS(581), 1,
      sym__san_promotable_piece,
  [3675] = 1,
    ACTIONS(583), 1,
      sym_inline_comment_delimiter_close,
  [3679] = 1,
    ACTIONS(585), 1,
      sym__san_rank,
  [3683] = 1,
    ACTIONS(587), 1,
      sym_inline_comment_delimiter_close,
  [3687] = 1,
    ACTIONS(589), 1,
      anon_sym_22,
  [3691] = 1,
    ACTIONS(551), 1,
      anon_sym_1,
  [3695] = 1,
    ACTIONS(591), 1,
      anon_sym_22,
  [3699] = 1,
    ACTIONS(593), 1,
      anon_sym_1,
  [3703] = 1,
    ACTIONS(595), 1,
      sym_rest_of_line_comment_text,
  [3707] = 1,
    ACTIONS(597), 1,
      sym_tagpair_delimiter_close,
  [3711] = 1,
    ACTIONS(599), 1,
      sym__san_rank,
  [3715] = 1,
    ACTIONS(601), 1,
      sym_double_quote,
  [3719] = 1,
    ACTIONS(603), 1,
      sym__san_promotable_piece,
  [3723] = 1,
    ACTIONS(605), 1,
      sym_tagpair_delimiter_close,
  [3727] = 1,
    ACTIONS(607), 1,
      sym_variation_delimiter_close,
  [3731] = 1,
    ACTIONS(609), 1,
      sym_rest_of_line_comment_text,
  [3735] = 1,
    ACTIONS(611), 1,
      sym__san_rank,
  [3739] = 1,
    ACTIONS(613), 1,
      sym_rest_of_line_comment_text,
  [3743] = 1,
    ACTIONS(615), 1,
      sym__san_rank,
  [3747] = 1,
    ACTIONS(617), 1,
      sym_inline_comment_text,
  [3751] = 1,
    ACTIONS(619), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 369,
  [SMALL_STATE(7)] = 421,
  [SMALL_STATE(8)] = 464,
  [SMALL_STATE(9)] = 512,
  [SMALL_STATE(10)] = 560,
  [SMALL_STATE(11)] = 605,
  [SMALL_STATE(12)] = 646,
  [SMALL_STATE(13)] = 685,
  [SMALL_STATE(14)] = 724,
  [SMALL_STATE(15)] = 763,
  [SMALL_STATE(16)] = 802,
  [SMALL_STATE(17)] = 841,
  [SMALL_STATE(18)] = 880,
  [SMALL_STATE(19)] = 919,
  [SMALL_STATE(20)] = 960,
  [SMALL_STATE(21)] = 999,
  [SMALL_STATE(22)] = 1038,
  [SMALL_STATE(23)] = 1077,
  [SMALL_STATE(24)] = 1118,
  [SMALL_STATE(25)] = 1157,
  [SMALL_STATE(26)] = 1198,
  [SMALL_STATE(27)] = 1237,
  [SMALL_STATE(28)] = 1275,
  [SMALL_STATE(29)] = 1313,
  [SMALL_STATE(30)] = 1351,
  [SMALL_STATE(31)] = 1389,
  [SMALL_STATE(32)] = 1427,
  [SMALL_STATE(33)] = 1471,
  [SMALL_STATE(34)] = 1509,
  [SMALL_STATE(35)] = 1547,
  [SMALL_STATE(36)] = 1585,
  [SMALL_STATE(37)] = 1623,
  [SMALL_STATE(38)] = 1661,
  [SMALL_STATE(39)] = 1705,
  [SMALL_STATE(40)] = 1743,
  [SMALL_STATE(41)] = 1781,
  [SMALL_STATE(42)] = 1817,
  [SMALL_STATE(43)] = 1853,
  [SMALL_STATE(44)] = 1925,
  [SMALL_STATE(45)] = 1997,
  [SMALL_STATE(46)] = 2066,
  [SMALL_STATE(47)] = 2135,
  [SMALL_STATE(48)] = 2166,
  [SMALL_STATE(49)] = 2205,
  [SMALL_STATE(50)] = 2244,
  [SMALL_STATE(51)] = 2279,
  [SMALL_STATE(52)] = 2303,
  [SMALL_STATE(53)] = 2332,
  [SMALL_STATE(54)] = 2361,
  [SMALL_STATE(55)] = 2383,
  [SMALL_STATE(56)] = 2409,
  [SMALL_STATE(57)] = 2428,
  [SMALL_STATE(58)] = 2447,
  [SMALL_STATE(59)] = 2466,
  [SMALL_STATE(60)] = 2486,
  [SMALL_STATE(61)] = 2506,
  [SMALL_STATE(62)] = 2526,
  [SMALL_STATE(63)] = 2546,
  [SMALL_STATE(64)] = 2566,
  [SMALL_STATE(65)] = 2586,
  [SMALL_STATE(66)] = 2606,
  [SMALL_STATE(67)] = 2626,
  [SMALL_STATE(68)] = 2648,
  [SMALL_STATE(69)] = 2670,
  [SMALL_STATE(70)] = 2690,
  [SMALL_STATE(71)] = 2710,
  [SMALL_STATE(72)] = 2730,
  [SMALL_STATE(73)] = 2750,
  [SMALL_STATE(74)] = 2770,
  [SMALL_STATE(75)] = 2789,
  [SMALL_STATE(76)] = 2808,
  [SMALL_STATE(77)] = 2827,
  [SMALL_STATE(78)] = 2846,
  [SMALL_STATE(79)] = 2865,
  [SMALL_STATE(80)] = 2884,
  [SMALL_STATE(81)] = 2903,
  [SMALL_STATE(82)] = 2922,
  [SMALL_STATE(83)] = 2941,
  [SMALL_STATE(84)] = 2960,
  [SMALL_STATE(85)] = 2979,
  [SMALL_STATE(86)] = 2998,
  [SMALL_STATE(87)] = 3033,
  [SMALL_STATE(88)] = 3068,
  [SMALL_STATE(89)] = 3081,
  [SMALL_STATE(90)] = 3100,
  [SMALL_STATE(91)] = 3117,
  [SMALL_STATE(92)] = 3134,
  [SMALL_STATE(93)] = 3153,
  [SMALL_STATE(94)] = 3165,
  [SMALL_STATE(95)] = 3177,
  [SMALL_STATE(96)] = 3189,
  [SMALL_STATE(97)] = 3205,
  [SMALL_STATE(98)] = 3215,
  [SMALL_STATE(99)] = 3227,
  [SMALL_STATE(100)] = 3243,
  [SMALL_STATE(101)] = 3253,
  [SMALL_STATE(102)] = 3267,
  [SMALL_STATE(103)] = 3279,
  [SMALL_STATE(104)] = 3293,
  [SMALL_STATE(105)] = 3309,
  [SMALL_STATE(106)] = 3323,
  [SMALL_STATE(107)] = 3333,
  [SMALL_STATE(108)] = 3342,
  [SMALL_STATE(109)] = 3353,
  [SMALL_STATE(110)] = 3362,
  [SMALL_STATE(111)] = 3373,
  [SMALL_STATE(112)] = 3382,
  [SMALL_STATE(113)] = 3391,
  [SMALL_STATE(114)] = 3400,
  [SMALL_STATE(115)] = 3409,
  [SMALL_STATE(116)] = 3422,
  [SMALL_STATE(117)] = 3431,
  [SMALL_STATE(118)] = 3440,
  [SMALL_STATE(119)] = 3449,
  [SMALL_STATE(120)] = 3458,
  [SMALL_STATE(121)] = 3471,
  [SMALL_STATE(122)] = 3481,
  [SMALL_STATE(123)] = 3489,
  [SMALL_STATE(124)] = 3499,
  [SMALL_STATE(125)] = 3505,
  [SMALL_STATE(126)] = 3512,
  [SMALL_STATE(127)] = 3519,
  [SMALL_STATE(128)] = 3526,
  [SMALL_STATE(129)] = 3533,
  [SMALL_STATE(130)] = 3540,
  [SMALL_STATE(131)] = 3547,
  [SMALL_STATE(132)] = 3554,
  [SMALL_STATE(133)] = 3561,
  [SMALL_STATE(134)] = 3568,
  [SMALL_STATE(135)] = 3575,
  [SMALL_STATE(136)] = 3582,
  [SMALL_STATE(137)] = 3589,
  [SMALL_STATE(138)] = 3596,
  [SMALL_STATE(139)] = 3603,
  [SMALL_STATE(140)] = 3610,
  [SMALL_STATE(141)] = 3615,
  [SMALL_STATE(142)] = 3622,
  [SMALL_STATE(143)] = 3629,
  [SMALL_STATE(144)] = 3636,
  [SMALL_STATE(145)] = 3643,
  [SMALL_STATE(146)] = 3647,
  [SMALL_STATE(147)] = 3651,
  [SMALL_STATE(148)] = 3655,
  [SMALL_STATE(149)] = 3659,
  [SMALL_STATE(150)] = 3663,
  [SMALL_STATE(151)] = 3667,
  [SMALL_STATE(152)] = 3671,
  [SMALL_STATE(153)] = 3675,
  [SMALL_STATE(154)] = 3679,
  [SMALL_STATE(155)] = 3683,
  [SMALL_STATE(156)] = 3687,
  [SMALL_STATE(157)] = 3691,
  [SMALL_STATE(158)] = 3695,
  [SMALL_STATE(159)] = 3699,
  [SMALL_STATE(160)] = 3703,
  [SMALL_STATE(161)] = 3707,
  [SMALL_STATE(162)] = 3711,
  [SMALL_STATE(163)] = 3715,
  [SMALL_STATE(164)] = 3719,
  [SMALL_STATE(165)] = 3723,
  [SMALL_STATE(166)] = 3727,
  [SMALL_STATE(167)] = 3731,
  [SMALL_STATE(168)] = 3735,
  [SMALL_STATE(169)] = 3739,
  [SMALL_STATE(170)] = 3743,
  [SMALL_STATE(171)] = 3747,
  [SMALL_STATE(172)] = 3751,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(151),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(43),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(148),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(37),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(139),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(96),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(147),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(137),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(25),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 29), SHIFT_REPEAT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, .production_id = 34),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, .production_id = 34),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 14),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 14),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 21),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, .production_id = 21),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 18),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 18),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 18), SHIFT_REPEAT(150),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, .production_id = 36),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, .production_id = 36),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, .production_id = 31),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, .production_id = 31),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(167),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(44),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(171),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(80),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(130),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(104),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(172),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(172),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(134),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(68),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(74),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, .production_id = 25),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 19),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 19),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 11),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 11),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 27),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 27),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 26),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 26),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 25),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 25),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, .production_id = 33),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, .production_id = 33),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, .production_id = 38),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, .production_id = 38),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 24),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 24),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 17),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 17), SHIFT_REPEAT(169),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 17), SHIFT_REPEAT(105),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 17), SHIFT_REPEAT(150),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, .production_id = 16),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(160),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(90),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 32),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 32),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 28),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 28),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 15),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 15),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 20),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 20),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(169),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(103),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, .production_id = 32),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 5, .production_id = 32),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(108),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 11),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 11),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 20),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 20),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 28),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 28),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 19),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 19),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 15),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 15),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [575] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, .production_id = 37),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, .production_id = 30),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
