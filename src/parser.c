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
#define STATE_COUNT 178
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
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 5},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 3},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 4},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 2},
  [20] = {.index = 37, .length = 2},
  [21] = {.index = 39, .length = 1},
  [22] = {.index = 40, .length = 1},
  [23] = {.index = 41, .length = 1},
  [24] = {.index = 42, .length = 5},
  [25] = {.index = 47, .length = 1},
  [26] = {.index = 48, .length = 1},
  [27] = {.index = 49, .length = 3},
  [28] = {.index = 52, .length = 10},
  [29] = {.index = 62, .length = 4},
  [30] = {.index = 66, .length = 2},
  [31] = {.index = 68, .length = 5},
  [32] = {.index = 73, .length = 3},
  [33] = {.index = 76, .length = 2},
  [34] = {.index = 78, .length = 3},
  [35] = {.index = 81, .length = 10},
  [36] = {.index = 91, .length = 3},
  [37] = {.index = 94, .length = 3},
  [38] = {.index = 97, .length = 3},
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
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
  [7] =
    {field_freestanding_comment, 0},
    {field_game, 1},
  [9] =
    {field_move_number, 0},
  [10] =
    {field_annotation, 0},
  [11] =
    {field_comment, 0},
  [12] =
    {field_header, 0},
    {field_movetext, 1},
  [14] =
    {field_annotation, 0, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_lan_move, 0, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_san_move, 0, .inherited = true},
  [19] =
    {field_san_move, 0},
  [20] =
    {field_lan_move, 0},
  [21] =
    {field_header, 0},
    {field_result_code, 1},
  [23] =
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0},
    {field_tagpair, 1, .inherited = true},
  [26] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1},
    {field_game, 0, .inherited = true},
  [29] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
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
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [66] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [68] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [73] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [76] =
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 1},
  [78] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [81] =
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
  [91] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [94] =
    {field_tagpair_value_contents, 1},
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 2},
  [97] =
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 7,
  [26] = 26,
  [27] = 27,
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
  [40] = 40,
  [41] = 41,
  [42] = 16,
  [43] = 43,
  [44] = 44,
  [45] = 40,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 6,
  [55] = 7,
  [56] = 8,
  [57] = 9,
  [58] = 7,
  [59] = 11,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 12,
  [64] = 13,
  [65] = 7,
  [66] = 27,
  [67] = 15,
  [68] = 28,
  [69] = 20,
  [70] = 16,
  [71] = 17,
  [72] = 18,
  [73] = 26,
  [74] = 19,
  [75] = 14,
  [76] = 22,
  [77] = 23,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 36,
  [82] = 82,
  [83] = 39,
  [84] = 84,
  [85] = 40,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 35,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 93,
  [97] = 97,
  [98] = 98,
  [99] = 16,
  [100] = 97,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 94,
  [110] = 40,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 16,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 113,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 40,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 129,
  [135] = 135,
  [136] = 136,
  [137] = 130,
  [138] = 131,
  [139] = 132,
  [140] = 133,
  [141] = 141,
  [142] = 135,
  [143] = 141,
  [144] = 144,
  [145] = 136,
  [146] = 144,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 156,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 154,
  [167] = 155,
  [168] = 162,
  [169] = 169,
  [170] = 170,
  [171] = 155,
  [172] = 154,
  [173] = 155,
  [174] = 154,
  [175] = 155,
  [176] = 158,
  [177] = 163,
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
      if (eof) ADVANCE(1556);
      if (lookahead == '"') ADVANCE(1574);
      if (lookahead == '#') ADVANCE(1630);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(833);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1633);
      if (lookahead == '-') ADVANCE(1656);
      if (lookahead == '/') ADVANCE(1685);
      if (lookahead == '0') ADVANCE(1679);
      if (lookahead == '1') ADVANCE(1652);
      if (lookahead == '2') ADVANCE(1695);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(1595);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1606);
      if (lookahead == '=') ADVANCE(1608);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1596);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1611);
      if (lookahead == '[') ADVANCE(1571);
      if (lookahead == '\\') ADVANCE(1547);
      if (lookahead == ']') ADVANCE(1573);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == '{') ADVANCE(1583);
      if (lookahead == '}') ADVANCE(1585);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8208) ADVANCE(1660);
      if (lookahead == 8209) ADVANCE(1662);
      if (lookahead == 8210) ADVANCE(1664);
      if (lookahead == 8211) ADVANCE(1666);
      if (lookahead == 8212) ADVANCE(1668);
      if (lookahead == 8260) ADVANCE(1689);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8722) ADVANCE(1658);
      if (lookahead == 8725) ADVANCE(1687);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == 10134) ADVANCE(1670);
      if (lookahead == 10187) ADVANCE(1691);
      if (lookahead == 10744) ADVANCE(1693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1554)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(862);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'h') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'q') ADVANCE(521);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'h') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'h') ADVANCE(528);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1644);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(18);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(796);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '6') ADVANCE(210);
      if (lookahead == '7') ADVANCE(240);
      if (lookahead == '8') ADVANCE(271);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '7') ADVANCE(216);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '7') ADVANCE(216);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '7') ADVANCE(216);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '5') ADVANCE(131);
      if (lookahead == '6') ADVANCE(171);
      if (lookahead == '7') ADVANCE(62);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '7') ADVANCE(80);
      if (lookahead == ';') ADVANCE(1703);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '6') ADVANCE(135);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(215);
      if (lookahead == '3') ADVANCE(189);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(100);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(277);
      if (lookahead == '1') ADVANCE(277);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead == '3') ADVANCE(277);
      if (lookahead == '4') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(277);
      if (lookahead == '1') ADVANCE(277);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '6') ADVANCE(210);
      if (lookahead == '8') ADVANCE(271);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(290);
      if (lookahead == '1') ADVANCE(298);
      if (lookahead == '3') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == '2') ADVANCE(120);
      if (lookahead == '7') ADVANCE(185);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '7') ADVANCE(269);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '2') ADVANCE(107);
      if (lookahead == '7') ADVANCE(268);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(286);
      if (lookahead == '1') ADVANCE(286);
      if (lookahead == '2') ADVANCE(286);
      if (lookahead == '3') ADVANCE(286);
      if (lookahead == '4') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(286);
      if (lookahead == '1') ADVANCE(286);
      if (lookahead == '2') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(297);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '2') ADVANCE(297);
      if (lookahead == '3') ADVANCE(297);
      if (lookahead == '4') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(297);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '2') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(293);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == '1') ADVANCE(299);
      if (lookahead == '2') ADVANCE(299);
      if (lookahead == '3') ADVANCE(299);
      if (lookahead == '4') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == '1') ADVANCE(299);
      if (lookahead == '2') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == '1') ADVANCE(296);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead == '4') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == '1') ADVANCE(296);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(252);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == '6') ADVANCE(59);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(254);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(255);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '5') ADVANCE(131);
      if (lookahead == '6') ADVANCE(171);
      if (lookahead == '7') ADVANCE(62);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '2') ADVANCE(121);
      if (lookahead == '7') ADVANCE(273);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '6') ADVANCE(210);
      if (lookahead == '7') ADVANCE(240);
      if (lookahead == '8') ADVANCE(271);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '6') ADVANCE(210);
      if (lookahead == '7') ADVANCE(240);
      if (lookahead == '8') ADVANCE(271);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == ';') ADVANCE(1631);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(157);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(536);
      if (lookahead == '4') ADVANCE(239);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(181);
      if (lookahead == '7') ADVANCE(203);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(132);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '4') ADVANCE(151);
      if (lookahead == '8') ADVANCE(154);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(247);
      if (lookahead == '2') ADVANCE(240);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(177);
      if (lookahead == '7') ADVANCE(203);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(160);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(196);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '4') ADVANCE(221);
      if (lookahead == '8') ADVANCE(144);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(178);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(192);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(159);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(295);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(175);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '4') ADVANCE(207);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(184);
      if (lookahead == '7') ADVANCE(211);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '4') ADVANCE(214);
      if (lookahead == '8') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(234);
      if (lookahead == '2') ADVANCE(243);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(234);
      if (lookahead == '2') ADVANCE(43);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '4') ADVANCE(215);
      if (lookahead == '8') ADVANCE(153);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(161);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '4') ADVANCE(175);
      if (lookahead == '5') ADVANCE(250);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(114);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(246);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(162);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '3') ADVANCE(536);
      if (lookahead == '4') ADVANCE(239);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(197);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(238);
      if (lookahead == '2') ADVANCE(38);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '4') ADVANCE(223);
      if (lookahead == '8') ADVANCE(170);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(165);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '5') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '7') ADVANCE(142);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(54);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(224);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(132);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '6') ADVANCE(227);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(541);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(69);
      if (lookahead == '7') ADVANCE(166);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '7') ADVANCE(147);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(56);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(160);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '5') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '5') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead == '3') ADVANCE(284);
      if (lookahead == '5') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(134);
      if (lookahead == '9') ADVANCE(200);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '7') ADVANCE(158);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(241);
      if (lookahead == '7') ADVANCE(167);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead == '3') ADVANCE(550);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(136);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(286);
      if (lookahead == '5') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(76);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(161);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(246);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(162);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead == '7') ADVANCE(168);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '5') ADVANCE(286);
      if (lookahead == '7') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead == '8') ADVANCE(244);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(200);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(182);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(538);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(187);
      if (lookahead == '8') ADVANCE(244);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '4') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '4') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(173);
      if (lookahead == '8') ADVANCE(245);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(109);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(284);
      if (lookahead == '4') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(274);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(274);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead == '7') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(295);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead == '6') ADVANCE(175);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead == '7') ADVANCE(215);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(189);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(183);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(208);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(209);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead == '8') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(261);
      if (lookahead == '6') ADVANCE(191);
      if (lookahead == '7') ADVANCE(152);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(546);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(225);
      if (lookahead == '6') ADVANCE(26);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(136);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(222);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(207);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead == '6') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead == '7') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(131);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(276);
      if (lookahead == '6') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(276);
      if (lookahead == '6') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(284);
      if (lookahead == '6') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(274);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(292);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(547);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(543);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(212);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(259);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(180);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(545);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(270);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(272);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(548);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(549);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead == '8') ADVANCE(282);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(62);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(259);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(282);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(233);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(277);
      if (lookahead == '9') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(229);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(286);
      if (lookahead == '9') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(297);
      if (lookahead == '9') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(299);
      if (lookahead == '9') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(296);
      if (lookahead == '9') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(235);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(236);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(172);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(133);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(215);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(220);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(276);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == ';') ADVANCE(1637);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(213);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(225);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(225);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(231);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(284);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(274);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(232);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1632);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1631);
      if (lookahead == 'b') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1631);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1640);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1644);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1644);
      if (lookahead == 'f') ADVANCE(495);
      if (lookahead == 'q') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1644);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1644);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1629);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1637);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1703);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1699);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1719);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1715);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1707);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1711);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1621);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1638);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(557);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(467);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(467);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(467);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(362);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead == 'U') ADVANCE(447);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(402);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(417);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'y') ADVANCE(445);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'y') ADVANCE(454);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'v') ADVANCE(416);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'v') ADVANCE(416);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(496);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(385);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == 'q') ADVANCE(518);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(496);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(360);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(358);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(503);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(364);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == 'q') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(500);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(519);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == 'q') ADVANCE(508);
      if (lookahead == 'x') ADVANCE(340);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(515);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == 'x') ADVANCE(449);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(278);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(472);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(326);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(477);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(481);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(482);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(327);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(483);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(333);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(338);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(446);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(452);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(453);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 65038) ADVANCE(1617);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(287);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(862);
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
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(292);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(282);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(251);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(253);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1629);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1629);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1624);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1625);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1643);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1513);
      if (lookahead == '\r') ADVANCE(561);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1513);
      if (lookahead == '\r') SKIP(1514)
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1569);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(565);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(572);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(576);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(580);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(581);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(584);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(585);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(586);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(589);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(590);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(597);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(602);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(605);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(618);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(619);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(621);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(623);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(628);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(630);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(632);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(634);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(635);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(636);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(637);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(640);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(641);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(659);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(660);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(661);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(662);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(663);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(664);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(666);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(668);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(669);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(670);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(671);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(672);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(673);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(675);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(676);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(677);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1569);
      if (lookahead == '\r') ADVANCE(562);
      if (lookahead == '-') ADVANCE(678);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1570);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(797);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(692);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(699);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(700);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(702);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(704);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(717);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(724);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(725);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(726);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(727);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(728);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(731);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(732);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(735);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(739);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(740);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(741);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(744);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(748);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(750);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(753);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(754);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(756);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(757);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(758);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(759);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(760);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(761);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(763);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(764);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(765);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(766);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(767);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(769);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(770);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(771);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(772);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(773);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(774);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(775);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(776);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(778);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(779);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(780);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(781);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(783);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(784);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(785);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 787:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(786);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 788:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(787);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 789:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 790:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(789);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 791:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 792:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(791);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 793:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(792);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 794:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(793);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 795:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(794);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 796:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '-') ADVANCE(795);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 797:
      if (lookahead == '\n') ADVANCE(1570);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 798:
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'N') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 799:
      if (lookahead == '\n') ADVANCE(1557);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'N') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 800:
      if (lookahead == '\n') ADVANCE(1557);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-') ADVANCE(1639);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'N') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if ((8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 801:
      if (lookahead == '\n') ADVANCE(1557);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'N') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 802:
      if (lookahead == '\n') ADVANCE(863);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '.') ADVANCE(1587);
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
      if (lookahead == '\n') ADVANCE(863);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '.') ADVANCE(1587);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 804:
      if (lookahead == '\n') ADVANCE(863);
      if (lookahead == '.') ADVANCE(1590);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      END_STATE();
    case 805:
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'N') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 806:
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(805);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'N') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 807:
      if (lookahead == '\n') ADVANCE(814);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (lookahead == '[') ADVANCE(1571);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 808:
      if (lookahead == '\n') ADVANCE(814);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (lookahead == '[') ADVANCE(1571);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 809:
      if (lookahead == '\n') ADVANCE(1566);
      if (lookahead == '\r') ADVANCE(809);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'N') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 810:
      if (lookahead == '\n') ADVANCE(819);
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '0') ADVANCE(1677);
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == 'O') ADVANCE(1674);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == 'o') ADVANCE(1683);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 811:
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '0') ADVANCE(1677);
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == 'O') ADVANCE(1674);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == 'o') ADVANCE(1683);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 812:
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(811);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '0') ADVANCE(1677);
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == 'O') ADVANCE(1674);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == 'o') ADVANCE(1683);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 813:
      if (lookahead == '\n') ADVANCE(1558);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (lookahead == '[') ADVANCE(1571);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 814:
      if (lookahead == '\n') ADVANCE(1558);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (lookahead == '[') ADVANCE(1571);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 815:
      if (lookahead == '\n') ADVANCE(1567);
      if (lookahead == '\r') ADVANCE(815);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (lookahead == '[') ADVANCE(1571);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 816:
      if (lookahead == '\n') ADVANCE(1567);
      if (lookahead == '\r') ADVANCE(815);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (lookahead == '[') ADVANCE(1571);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 817:
      if (lookahead == '\n') ADVANCE(1559);
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '0') ADVANCE(1677);
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == 'O') ADVANCE(1674);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == 'o') ADVANCE(1683);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 818:
      if (lookahead == '\n') ADVANCE(1559);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '0') ADVANCE(1677);
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == 'O') ADVANCE(1674);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == 'o') ADVANCE(1683);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 819:
      if (lookahead == '\n') ADVANCE(1559);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '0') ADVANCE(1677);
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == 'O') ADVANCE(1674);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == 'o') ADVANCE(1683);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 820:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(820);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(844);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(852);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(820);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 821:
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(820);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(844);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(852);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(820);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 822:
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(822);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(822);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 823:
      if (lookahead == '\n') ADVANCE(1560);
      if (lookahead == '\r') ADVANCE(809);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'N') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 824:
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(815);
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (lookahead == '[') ADVANCE(1571);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 825:
      if (lookahead == ' ') SKIP(825)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1575);
      if (lookahead != 0) ADVANCE(1576);
      END_STATE();
    case 826:
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '#') ADVANCE(1630);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(841);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1634);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1622);
      if (lookahead == '0') ADVANCE(852);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1606);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1610);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1596);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1600);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(830);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 827:
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '#') ADVANCE(1630);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(846);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1634);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(852);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1610);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1596);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1600);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1599);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(830);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 828:
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '#') ADVANCE(1630);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(849);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1634);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1606);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 829:
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(836);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(1680);
      if (lookahead == '1') ADVANCE(1655);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 830:
      if (lookahead == '!') ADVANCE(1650);
      if (lookahead == '$') ADVANCE(1546);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(844);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(853);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1645);
      if (lookahead == '0') ADVANCE(852);
      if (lookahead == '<') ADVANCE(1242);
      if (lookahead == '=') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(1650);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == 'P') ADVANCE(1613);
      if (lookahead == 'R') ADVANCE(1604);
      if (lookahead == 'T') ADVANCE(1248);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(1583);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1635);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(830);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 831:
      if (lookahead == '"') ADVANCE(1574);
      if (lookahead == '\\') ADVANCE(1547);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1577);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(832)
      if (lookahead != 0) ADVANCE(1578);
      END_STATE();
    case 832:
      if (lookahead == '"') ADVANCE(1574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(832)
      END_STATE();
    case 833:
      if (lookahead == '#') ADVANCE(948);
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'd') ADVANCE(1256);
      if (lookahead == 'f') ADVANCE(1430);
      if (lookahead == 'h') ADVANCE(1257);
      if (lookahead == 'l') ADVANCE(1402);
      if (lookahead == 'm') ADVANCE(1291);
      if (lookahead == 'n') ADVANCE(1290);
      if (lookahead == 'p') ADVANCE(1365);
      if (lookahead == 's') ADVANCE(1406);
      END_STATE();
    case 834:
      if (lookahead == '#') ADVANCE(949);
      if (lookahead == 'p') ADVANCE(1378);
      END_STATE();
    case 835:
      if (lookahead == '#') ADVANCE(971);
      if (lookahead == 'd') ADVANCE(1274);
      if (lookahead == 'h') ADVANCE(1507);
      if (lookahead == 'm') ADVANCE(1294);
      if (lookahead == 'n') ADVANCE(1293);
      END_STATE();
    case 836:
      if (lookahead == '#') ADVANCE(951);
      if (lookahead == 'D') ADVANCE(1317);
      if (lookahead == 'L') ADVANCE(1267);
      if (lookahead == 'M') ADVANCE(1363);
      if (lookahead == 'P') ADVANCE(1380);
      if (lookahead == 'R') ADVANCE(1268);
      if (lookahead == 'S') ADVANCE(1338);
      if (lookahead == 'U') ADVANCE(1412);
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'b') ADVANCE(1359);
      if (lookahead == 'c') ADVANCE(1358);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == 'f') ADVANCE(1430);
      if (lookahead == 'h') ADVANCE(1253);
      if (lookahead == 'i') ADVANCE(1385);
      if (lookahead == 'l') ADVANCE(1307);
      if (lookahead == 'm') ADVANCE(1264);
      if (lookahead == 'n') ADVANCE(1254);
      if (lookahead == 'p') ADVANCE(1310);
      if (lookahead == 'q') ADVANCE(1485);
      if (lookahead == 'r') ADVANCE(1260);
      if (lookahead == 's') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1261);
      if (lookahead == 'x') ADVANCE(1403);
      END_STATE();
    case 837:
      if (lookahead == '#') ADVANCE(1097);
      if (lookahead == 'e') ADVANCE(1506);
      if (lookahead == 'q') ADVANCE(1502);
      END_STATE();
    case 838:
      if (lookahead == '#') ADVANCE(1149);
      if (lookahead == 'e') ADVANCE(1427);
      END_STATE();
    case 839:
      if (lookahead == '#') ADVANCE(966);
      if (lookahead == 'd') ADVANCE(1282);
      if (lookahead == 'h') ADVANCE(1511);
      if (lookahead == 'm') ADVANCE(1306);
      if (lookahead == 'n') ADVANCE(1305);
      if (lookahead == 'p') ADVANCE(1382);
      if (lookahead == 's') ADVANCE(1411);
      END_STATE();
    case 840:
      if (lookahead == '#') ADVANCE(997);
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'd') ADVANCE(1276);
      if (lookahead == 'f') ADVANCE(1430);
      if (lookahead == 'h') ADVANCE(1258);
      if (lookahead == 'l') ADVANCE(1402);
      if (lookahead == 'm') ADVANCE(1298);
      if (lookahead == 'n') ADVANCE(1300);
      if (lookahead == 's') ADVANCE(1406);
      END_STATE();
    case 841:
      if (lookahead == '#') ADVANCE(956);
      if (lookahead == 'D') ADVANCE(1317);
      if (lookahead == 'L') ADVANCE(1267);
      if (lookahead == 'M') ADVANCE(1363);
      if (lookahead == 'P') ADVANCE(1380);
      if (lookahead == 'R') ADVANCE(1268);
      if (lookahead == 'S') ADVANCE(1338);
      if (lookahead == 'U') ADVANCE(1412);
      if (lookahead == 'b') ADVANCE(1359);
      if (lookahead == 'c') ADVANCE(1358);
      if (lookahead == 'd') ADVANCE(1283);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == 'h') ADVANCE(1263);
      if (lookahead == 'i') ADVANCE(1385);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == 'm') ADVANCE(1266);
      if (lookahead == 'n') ADVANCE(1255);
      if (lookahead == 'p') ADVANCE(1311);
      if (lookahead == 'q') ADVANCE(1485);
      if (lookahead == 'r') ADVANCE(1260);
      if (lookahead == 's') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1261);
      if (lookahead == 'x') ADVANCE(1403);
      END_STATE();
    case 842:
      if (lookahead == '#') ADVANCE(965);
      if (lookahead == 'd') ADVANCE(1281);
      if (lookahead == 'h') ADVANCE(1510);
      if (lookahead == 'm') ADVANCE(1304);
      if (lookahead == 'n') ADVANCE(1303);
      if (lookahead == 's') ADVANCE(1409);
      END_STATE();
    case 843:
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == 'd') ADVANCE(1281);
      if (lookahead == 'h') ADVANCE(1510);
      if (lookahead == 'm') ADVANCE(1304);
      if (lookahead == 'n') ADVANCE(1303);
      if (lookahead == 'p') ADVANCE(1378);
      if (lookahead == 's') ADVANCE(1409);
      END_STATE();
    case 844:
      if (lookahead == '#') ADVANCE(1018);
      if (lookahead == 'D') ADVANCE(1317);
      if (lookahead == 'L') ADVANCE(1267);
      if (lookahead == 'M') ADVANCE(1363);
      if (lookahead == 'P') ADVANCE(1380);
      if (lookahead == 'R') ADVANCE(1268);
      if (lookahead == 'S') ADVANCE(1338);
      if (lookahead == 'U') ADVANCE(1412);
      if (lookahead == 'b') ADVANCE(1359);
      if (lookahead == 'c') ADVANCE(1358);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == 'h') ADVANCE(1262);
      if (lookahead == 'i') ADVANCE(1385);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'n') ADVANCE(1254);
      if (lookahead == 'p') ADVANCE(1310);
      if (lookahead == 'q') ADVANCE(1485);
      if (lookahead == 'r') ADVANCE(1260);
      if (lookahead == 's') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1261);
      if (lookahead == 'x') ADVANCE(1403);
      END_STATE();
    case 845:
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'd') ADVANCE(1276);
      if (lookahead == 'h') ADVANCE(1508);
      if (lookahead == 'm') ADVANCE(1299);
      if (lookahead == 'n') ADVANCE(1300);
      if (lookahead == 's') ADVANCE(1406);
      END_STATE();
    case 846:
      if (lookahead == '#') ADVANCE(1019);
      if (lookahead == 'D') ADVANCE(1317);
      if (lookahead == 'L') ADVANCE(1267);
      if (lookahead == 'M') ADVANCE(1363);
      if (lookahead == 'P') ADVANCE(1380);
      if (lookahead == 'R') ADVANCE(1268);
      if (lookahead == 'S') ADVANCE(1338);
      if (lookahead == 'U') ADVANCE(1412);
      if (lookahead == 'b') ADVANCE(1359);
      if (lookahead == 'c') ADVANCE(1358);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == 'h') ADVANCE(1262);
      if (lookahead == 'i') ADVANCE(1385);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'n') ADVANCE(1254);
      if (lookahead == 'p') ADVANCE(1311);
      if (lookahead == 'q') ADVANCE(1485);
      if (lookahead == 'r') ADVANCE(1260);
      if (lookahead == 's') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1261);
      if (lookahead == 'x') ADVANCE(1403);
      END_STATE();
    case 847:
      if (lookahead == '#') ADVANCE(998);
      if (lookahead == 'p') ADVANCE(1382);
      END_STATE();
    case 848:
      if (lookahead == '#') ADVANCE(1005);
      if (lookahead == 'd') ADVANCE(1279);
      if (lookahead == 'h') ADVANCE(1509);
      if (lookahead == 'm') ADVANCE(1302);
      if (lookahead == 'n') ADVANCE(1301);
      END_STATE();
    case 849:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == 'D') ADVANCE(1317);
      if (lookahead == 'L') ADVANCE(1267);
      if (lookahead == 'M') ADVANCE(1363);
      if (lookahead == 'P') ADVANCE(1380);
      if (lookahead == 'R') ADVANCE(1268);
      if (lookahead == 'S') ADVANCE(1338);
      if (lookahead == 'U') ADVANCE(1412);
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'b') ADVANCE(1359);
      if (lookahead == 'c') ADVANCE(1358);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == 'f') ADVANCE(1430);
      if (lookahead == 'h') ADVANCE(1253);
      if (lookahead == 'i') ADVANCE(1385);
      if (lookahead == 'l') ADVANCE(1307);
      if (lookahead == 'm') ADVANCE(1264);
      if (lookahead == 'n') ADVANCE(1254);
      if (lookahead == 'p') ADVANCE(1311);
      if (lookahead == 'q') ADVANCE(1485);
      if (lookahead == 'r') ADVANCE(1260);
      if (lookahead == 's') ADVANCE(1368);
      if (lookahead == 'u') ADVANCE(1261);
      if (lookahead == 'x') ADVANCE(1403);
      END_STATE();
    case 850:
      if (lookahead == '#') ADVANCE(1010);
      if (lookahead == 'd') ADVANCE(1281);
      if (lookahead == 'h') ADVANCE(1510);
      if (lookahead == 'm') ADVANCE(1304);
      if (lookahead == 'n') ADVANCE(1303);
      END_STATE();
    case 851:
      if (lookahead == '&') ADVANCE(835);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      END_STATE();
    case 852:
      if (lookahead == '&') ADVANCE(835);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      if (lookahead == '.') ADVANCE(1590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 853:
      if (lookahead == '&') ADVANCE(842);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(858);
      END_STATE();
    case 854:
      if (lookahead == '&') ADVANCE(838);
      END_STATE();
    case 855:
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == '-') ADVANCE(1656);
      if (lookahead == '/') ADVANCE(1685);
      if (lookahead == '0') ADVANCE(1676);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'O') ADVANCE(1672);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1681);
      if (lookahead == 8208) ADVANCE(1660);
      if (lookahead == 8209) ADVANCE(1662);
      if (lookahead == 8210) ADVANCE(1664);
      if (lookahead == 8211) ADVANCE(1666);
      if (lookahead == 8212) ADVANCE(1668);
      if (lookahead == 8260) ADVANCE(1689);
      if (lookahead == 8722) ADVANCE(1658);
      if (lookahead == 8725) ADVANCE(1687);
      if (lookahead == 10134) ADVANCE(1670);
      if (lookahead == 10187) ADVANCE(1691);
      if (lookahead == 10744) ADVANCE(1693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(855)
      END_STATE();
    case 856:
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == '-') ADVANCE(1656);
      if (lookahead == '/') ADVANCE(1685);
      if (lookahead == '0') ADVANCE(1676);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(1595);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1606);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'O') ADVANCE(1672);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1681);
      if (lookahead == 8208) ADVANCE(1660);
      if (lookahead == 8209) ADVANCE(1662);
      if (lookahead == 8210) ADVANCE(1664);
      if (lookahead == 8211) ADVANCE(1666);
      if (lookahead == 8212) ADVANCE(1668);
      if (lookahead == 8260) ADVANCE(1689);
      if (lookahead == 8722) ADVANCE(1658);
      if (lookahead == 8725) ADVANCE(1687);
      if (lookahead == 10134) ADVANCE(1670);
      if (lookahead == 10187) ADVANCE(1691);
      if (lookahead == 10744) ADVANCE(1693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(855)
      END_STATE();
    case 857:
      if (lookahead == '&') ADVANCE(847);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1635);
      END_STATE();
    case 858:
      if (lookahead == '&') ADVANCE(850);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      END_STATE();
    case 859:
      if (lookahead == '-') ADVANCE(679);
      END_STATE();
    case 860:
      if (lookahead == '-') ADVANCE(859);
      END_STATE();
    case 861:
      if (lookahead == '-') ADVANCE(860);
      END_STATE();
    case 862:
      if (lookahead == '-') ADVANCE(861);
      END_STATE();
    case 863:
      if (lookahead == '-') ADVANCE(861);
      if (lookahead == '.') ADVANCE(1590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      END_STATE();
    case 864:
      if (lookahead == '.') ADVANCE(1590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      END_STATE();
    case 865:
      if (lookahead == '.') ADVANCE(1590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 866:
      if (lookahead == '.') ADVANCE(1635);
      END_STATE();
    case 867:
      if (lookahead == '0') ADVANCE(879);
      if (lookahead == '6') ADVANCE(1120);
      if (lookahead == '8') ADVANCE(1187);
      END_STATE();
    case 868:
      if (lookahead == '0') ADVANCE(1168);
      if (lookahead == '1') ADVANCE(888);
      if (lookahead == '6') ADVANCE(899);
      if (lookahead == '7') ADVANCE(900);
      END_STATE();
    case 869:
      if (lookahead == '0') ADVANCE(950);
      if (lookahead == '2') ADVANCE(958);
      if (lookahead == '7') ADVANCE(1074);
      if (lookahead == '9') ADVANCE(1537);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1202);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1205);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1206);
      END_STATE();
    case 870:
      if (lookahead == '0') ADVANCE(871);
      if (lookahead == '1') ADVANCE(892);
      if (lookahead == '6') ADVANCE(1120);
      if (lookahead == '7') ADVANCE(1160);
      if (lookahead == '8') ADVANCE(1187);
      END_STATE();
    case 871:
      if (lookahead == '0') ADVANCE(925);
      if (lookahead == '1') ADVANCE(1094);
      if (lookahead == '2') ADVANCE(992);
      if (lookahead == '7') ADVANCE(1125);
      if (lookahead == '8') ADVANCE(1148);
      END_STATE();
    case 872:
      if (lookahead == '0') ADVANCE(925);
      if (lookahead == '1') ADVANCE(1101);
      if (lookahead == '2') ADVANCE(992);
      if (lookahead == '7') ADVANCE(1125);
      if (lookahead == '8') ADVANCE(1148);
      END_STATE();
    case 873:
      if (lookahead == '0') ADVANCE(990);
      if (lookahead == '1') ADVANCE(1186);
      if (lookahead == '2') ADVANCE(876);
      if (lookahead == '3') ADVANCE(982);
      if (lookahead == '5') ADVANCE(954);
      if (lookahead == '6') ADVANCE(1122);
      if (lookahead == '7') ADVANCE(985);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(884);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(952);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1226);
      END_STATE();
    case 874:
      if (lookahead == '0') ADVANCE(990);
      if (lookahead == '1') ADVANCE(1186);
      if (lookahead == '2') ADVANCE(876);
      if (lookahead == '3') ADVANCE(982);
      if (lookahead == '5') ADVANCE(954);
      if (lookahead == '6') ADVANCE(1122);
      if (lookahead == '7') ADVANCE(986);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(884);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(953);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1226);
      END_STATE();
    case 875:
      if (lookahead == '0') ADVANCE(976);
      END_STATE();
    case 876:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1050);
      if (lookahead == '6') ADVANCE(1115);
      if (lookahead == '9') ADVANCE(1531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1133);
      END_STATE();
    case 877:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1054);
      if (lookahead == '6') ADVANCE(1115);
      if (lookahead == '9') ADVANCE(1531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1133);
      END_STATE();
    case 878:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1051);
      if (lookahead == '6') ADVANCE(1115);
      if (lookahead == '9') ADVANCE(1531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1133);
      END_STATE();
    case 879:
      if (lookahead == '0') ADVANCE(1092);
      if (lookahead == '1') ADVANCE(1072);
      if (lookahead == '7') ADVANCE(1107);
      END_STATE();
    case 880:
      if (lookahead == '0') ADVANCE(1092);
      if (lookahead == '1') ADVANCE(1095);
      if (lookahead == '7') ADVANCE(1107);
      END_STATE();
    case 881:
      if (lookahead == '0') ADVANCE(994);
      if (lookahead == '2') ADVANCE(955);
      if (lookahead == '7') ADVANCE(1198);
      if (lookahead == '9') ADVANCE(1539);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1227);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1232);
      END_STATE();
    case 882:
      if (lookahead == '0') ADVANCE(994);
      if (lookahead == '2') ADVANCE(955);
      if (lookahead == '7') ADVANCE(1200);
      if (lookahead == '9') ADVANCE(1539);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1201);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1227);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1232);
      END_STATE();
    case 883:
      if (lookahead == '0') ADVANCE(905);
      if (lookahead == '7') ADVANCE(969);
      END_STATE();
    case 884:
      if (lookahead == '0') ADVANCE(905);
      if (lookahead == '7') ADVANCE(969);
      if (lookahead == ';') ADVANCE(1702);
      END_STATE();
    case 885:
      if (lookahead == '0') ADVANCE(895);
      if (lookahead == '1') ADVANCE(892);
      if (lookahead == '7') ADVANCE(1160);
      END_STATE();
    case 886:
      if (lookahead == '0') ADVANCE(996);
      if (lookahead == '1') ADVANCE(1186);
      if (lookahead == '2') ADVANCE(877);
      if (lookahead == '3') ADVANCE(982);
      if (lookahead == '5') ADVANCE(954);
      if (lookahead == '6') ADVANCE(1122);
      if (lookahead == '7') ADVANCE(989);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(953);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1239);
      END_STATE();
    case 887:
      if (lookahead == '0') ADVANCE(999);
      END_STATE();
    case 888:
      if (lookahead == '0') ADVANCE(1205);
      if (lookahead == '1') ADVANCE(1205);
      if (lookahead == '2') ADVANCE(1205);
      END_STATE();
    case 889:
      if (lookahead == '0') ADVANCE(1205);
      if (lookahead == '1') ADVANCE(1205);
      if (lookahead == '2') ADVANCE(1205);
      if (lookahead == '3') ADVANCE(1205);
      if (lookahead == '4') ADVANCE(1205);
      END_STATE();
    case 890:
      if (lookahead == '0') ADVANCE(974);
      END_STATE();
    case 891:
      if (lookahead == '0') ADVANCE(963);
      END_STATE();
    case 892:
      if (lookahead == '0') ADVANCE(1031);
      END_STATE();
    case 893:
      if (lookahead == '0') ADVANCE(924);
      if (lookahead == '1') ADVANCE(1094);
      if (lookahead == '2') ADVANCE(992);
      if (lookahead == '7') ADVANCE(1125);
      if (lookahead == '8') ADVANCE(1148);
      END_STATE();
    case 894:
      if (lookahead == '0') ADVANCE(924);
      if (lookahead == '1') ADVANCE(1101);
      if (lookahead == '2') ADVANCE(992);
      if (lookahead == '7') ADVANCE(1125);
      if (lookahead == '8') ADVANCE(1148);
      END_STATE();
    case 895:
      if (lookahead == '0') ADVANCE(924);
      if (lookahead == '1') ADVANCE(1106);
      if (lookahead == '2') ADVANCE(992);
      if (lookahead == '7') ADVANCE(1125);
      if (lookahead == '8') ADVANCE(1148);
      END_STATE();
    case 896:
      if (lookahead == '0') ADVANCE(972);
      if (lookahead == '2') ADVANCE(977);
      if (lookahead == '7') ADVANCE(1185);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1203);
      END_STATE();
    case 897:
      if (lookahead == '0') ADVANCE(1203);
      if (lookahead == '1') ADVANCE(1203);
      if (lookahead == '2') ADVANCE(1203);
      END_STATE();
    case 898:
      if (lookahead == '0') ADVANCE(1203);
      if (lookahead == '1') ADVANCE(1203);
      if (lookahead == '2') ADVANCE(1203);
      if (lookahead == '3') ADVANCE(1203);
      if (lookahead == '4') ADVANCE(1203);
      END_STATE();
    case 899:
      if (lookahead == '0') ADVANCE(1210);
      END_STATE();
    case 900:
      if (lookahead == '0') ADVANCE(1211);
      END_STATE();
    case 901:
      if (lookahead == '0') ADVANCE(1214);
      if (lookahead == '1') ADVANCE(1218);
      if (lookahead == '2') ADVANCE(1219);
      if (lookahead == '3') ADVANCE(1220);
      if (lookahead == '4') ADVANCE(1221);
      END_STATE();
    case 902:
      if (lookahead == '0') ADVANCE(1240);
      if (lookahead == '1') ADVANCE(1240);
      if (lookahead == '2') ADVANCE(1240);
      END_STATE();
    case 903:
      if (lookahead == '0') ADVANCE(1240);
      if (lookahead == '1') ADVANCE(1240);
      if (lookahead == '2') ADVANCE(1240);
      if (lookahead == '3') ADVANCE(1240);
      if (lookahead == '4') ADVANCE(1240);
      END_STATE();
    case 904:
      if (lookahead == '0') ADVANCE(1219);
      if (lookahead == '1') ADVANCE(1220);
      if (lookahead == '2') ADVANCE(1221);
      END_STATE();
    case 905:
      if (lookahead == '0') ADVANCE(1227);
      if (lookahead == '1') ADVANCE(1227);
      END_STATE();
    case 906:
      if (lookahead == '0') ADVANCE(1227);
      if (lookahead == '1') ADVANCE(1227);
      if (lookahead == '2') ADVANCE(1227);
      END_STATE();
    case 907:
      if (lookahead == '0') ADVANCE(1227);
      if (lookahead == '1') ADVANCE(1227);
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == '4') ADVANCE(1227);
      END_STATE();
    case 908:
      if (lookahead == '0') ADVANCE(1227);
      if (lookahead == '3') ADVANCE(1227);
      END_STATE();
    case 909:
      if (lookahead == '0') ADVANCE(1226);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '2') ADVANCE(1226);
      END_STATE();
    case 910:
      if (lookahead == '0') ADVANCE(1226);
      if (lookahead == '1') ADVANCE(1226);
      if (lookahead == '2') ADVANCE(1226);
      if (lookahead == '3') ADVANCE(1226);
      if (lookahead == '4') ADVANCE(1226);
      END_STATE();
    case 911:
      if (lookahead == '0') ADVANCE(1236);
      if (lookahead == '1') ADVANCE(1241);
      if (lookahead == '3') ADVANCE(1235);
      END_STATE();
    case 912:
      if (lookahead == '0') ADVANCE(1232);
      END_STATE();
    case 913:
      if (lookahead == '0') ADVANCE(1233);
      if (lookahead == '1') ADVANCE(1233);
      if (lookahead == '2') ADVANCE(1233);
      END_STATE();
    case 914:
      if (lookahead == '0') ADVANCE(1233);
      if (lookahead == '1') ADVANCE(1233);
      if (lookahead == '2') ADVANCE(1233);
      if (lookahead == '3') ADVANCE(1233);
      if (lookahead == '4') ADVANCE(1233);
      END_STATE();
    case 915:
      if (lookahead == '0') ADVANCE(1234);
      END_STATE();
    case 916:
      if (lookahead == '0') ADVANCE(1239);
      if (lookahead == '1') ADVANCE(1239);
      if (lookahead == '2') ADVANCE(1239);
      END_STATE();
    case 917:
      if (lookahead == '0') ADVANCE(1239);
      if (lookahead == '1') ADVANCE(1239);
      if (lookahead == '2') ADVANCE(1239);
      if (lookahead == '3') ADVANCE(1239);
      if (lookahead == '4') ADVANCE(1239);
      END_STATE();
    case 918:
      if (lookahead == '0') ADVANCE(880);
      if (lookahead == '6') ADVANCE(1120);
      if (lookahead == '8') ADVANCE(1187);
      END_STATE();
    case 919:
      if (lookahead == '0') ADVANCE(1169);
      if (lookahead == '1') ADVANCE(897);
      END_STATE();
    case 920:
      if (lookahead == '0') ADVANCE(1002);
      END_STATE();
    case 921:
      if (lookahead == '0') ADVANCE(1170);
      if (lookahead == '1') ADVANCE(904);
      if (lookahead == '6') ADVANCE(899);
      END_STATE();
    case 922:
      if (lookahead == '0') ADVANCE(1170);
      if (lookahead == '1') ADVANCE(904);
      if (lookahead == '6') ADVANCE(899);
      if (lookahead == '7') ADVANCE(900);
      END_STATE();
    case 923:
      if (lookahead == '0') ADVANCE(1172);
      if (lookahead == '1') ADVANCE(902);
      END_STATE();
    case 924:
      if (lookahead == '0') ADVANCE(1133);
      END_STATE();
    case 925:
      if (lookahead == '0') ADVANCE(1133);
      if (lookahead == '3') ADVANCE(1079);
      END_STATE();
    case 926:
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '1') ADVANCE(909);
      if (lookahead == '5') ADVANCE(1043);
      if (lookahead == '6') ADVANCE(1082);
      END_STATE();
    case 927:
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '1') ADVANCE(909);
      if (lookahead == '5') ADVANCE(1043);
      if (lookahead == '6') ADVANCE(1082);
      if (lookahead == '7') ADVANCE(900);
      END_STATE();
    case 928:
      if (lookahead == '0') ADVANCE(1115);
      if (lookahead == '6') ADVANCE(1047);
      END_STATE();
    case 929:
      if (lookahead == '0') ADVANCE(1173);
      if (lookahead == '1') ADVANCE(906);
      END_STATE();
    case 930:
      if (lookahead == '0') ADVANCE(1173);
      if (lookahead == '1') ADVANCE(906);
      if (lookahead == '6') ADVANCE(912);
      END_STATE();
    case 931:
      if (lookahead == '0') ADVANCE(1176);
      if (lookahead == '1') ADVANCE(913);
      if (lookahead == '6') ADVANCE(915);
      END_STATE();
    case 932:
      if (lookahead == '0') ADVANCE(1178);
      if (lookahead == '1') ADVANCE(916);
      if (lookahead == '5') ADVANCE(1043);
      if (lookahead == '6') ADVANCE(1082);
      END_STATE();
    case 933:
      if (lookahead == '0') ADVANCE(978);
      if (lookahead == '2') ADVANCE(975);
      if (lookahead == '7') ADVANCE(1075);
      if (lookahead == '9') ADVANCE(1537);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1208);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1206);
      END_STATE();
    case 934:
      if (lookahead == '0') ADVANCE(959);
      END_STATE();
    case 935:
      if (lookahead == '0') ADVANCE(995);
      if (lookahead == '2') ADVANCE(973);
      if (lookahead == '7') ADVANCE(1196);
      if (lookahead == '9') ADVANCE(1540);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1227);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1233);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1234);
      END_STATE();
    case 936:
      if (lookahead == '0') ADVANCE(991);
      if (lookahead == '1') ADVANCE(1186);
      if (lookahead == '2') ADVANCE(878);
      if (lookahead == '3') ADVANCE(982);
      if (lookahead == '5') ADVANCE(954);
      if (lookahead == '6') ADVANCE(1122);
      if (lookahead == '7') ADVANCE(987);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(952);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1226);
      END_STATE();
    case 937:
      if (lookahead == '0') ADVANCE(991);
      if (lookahead == '1') ADVANCE(1186);
      if (lookahead == '2') ADVANCE(878);
      if (lookahead == '3') ADVANCE(982);
      if (lookahead == '5') ADVANCE(954);
      if (lookahead == '6') ADVANCE(1122);
      if (lookahead == '7') ADVANCE(988);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(953);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1226);
      END_STATE();
    case 938:
      if (lookahead == '0') ADVANCE(1003);
      END_STATE();
    case 939:
      if (lookahead == '0') ADVANCE(983);
      if (lookahead == '2') ADVANCE(981);
      if (lookahead == '7') ADVANCE(1194);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1240);
      END_STATE();
    case 940:
      if (lookahead == '0') ADVANCE(979);
      if (lookahead == '2') ADVANCE(980);
      if (lookahead == '7') ADVANCE(1193);
      if (lookahead == '9') ADVANCE(1537);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1208);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1206);
      END_STATE();
    case 941:
      if (lookahead == '0') ADVANCE(1009);
      END_STATE();
    case 942:
      if (lookahead == '0') ADVANCE(993);
      if (lookahead == '2') ADVANCE(984);
      if (lookahead == '7') ADVANCE(1197);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1227);
      END_STATE();
    case 943:
      if (lookahead == '0') ADVANCE(872);
      if (lookahead == '1') ADVANCE(892);
      if (lookahead == '6') ADVANCE(1120);
      if (lookahead == '7') ADVANCE(1160);
      if (lookahead == '8') ADVANCE(1187);
      END_STATE();
    case 944:
      if (lookahead == '0') ADVANCE(893);
      if (lookahead == '1') ADVANCE(892);
      if (lookahead == '7') ADVANCE(1160);
      END_STATE();
    case 945:
      if (lookahead == '0') ADVANCE(1006);
      END_STATE();
    case 946:
      if (lookahead == '0') ADVANCE(894);
      if (lookahead == '1') ADVANCE(892);
      if (lookahead == '7') ADVANCE(1160);
      END_STATE();
    case 947:
      if (lookahead == '1') ADVANCE(1652);
      if (lookahead == '2') ADVANCE(1695);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(947)
      END_STATE();
    case 948:
      if (lookahead == '1') ADVANCE(867);
      if (lookahead == '4') ADVANCE(1020);
      if (lookahead == '5') ADVANCE(1167);
      if (lookahead == '8') ADVANCE(1024);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(957);
      END_STATE();
    case 949:
      if (lookahead == '1') ADVANCE(890);
      if (lookahead == '4') ADVANCE(1076);
      if (lookahead == '5') ADVANCE(1179);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1000);
      END_STATE();
    case 950:
      if (lookahead == '1') ADVANCE(889);
      if (lookahead == '4') ADVANCE(1111);
      END_STATE();
    case 951:
      if (lookahead == '1') ADVANCE(870);
      if (lookahead == '3') ADVANCE(1085);
      if (lookahead == '4') ADVANCE(1021);
      if (lookahead == '5') ADVANCE(1180);
      if (lookahead == '6') ADVANCE(911);
      if (lookahead == '8') ADVANCE(1028);
      if (lookahead == '9') ADVANCE(1108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1007);
      END_STATE();
    case 952:
      if (lookahead == '1') ADVANCE(1043);
      if (lookahead == ';') ADVANCE(853);
      END_STATE();
    case 953:
      if (lookahead == '1') ADVANCE(1043);
      if (lookahead == ';') ADVANCE(1634);
      END_STATE();
    case 954:
      if (lookahead == '1') ADVANCE(1117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(968);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1519);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1517);
      END_STATE();
    case 955:
      if (lookahead == '1') ADVANCE(1044);
      END_STATE();
    case 956:
      if (lookahead == '1') ADVANCE(885);
      if (lookahead == '3') ADVANCE(1085);
      if (lookahead == '4') ADVANCE(1091);
      if (lookahead == '5') ADVANCE(1182);
      if (lookahead == '6') ADVANCE(911);
      if (lookahead == '8') ADVANCE(1033);
      if (lookahead == '9') ADVANCE(1108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1013);
      END_STATE();
    case 957:
      if (lookahead == '1') ADVANCE(1140);
      if (lookahead == '2') ADVANCE(869);
      if (lookahead == '6') ADVANCE(1147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1525);
      END_STATE();
    case 958:
      if (lookahead == '1') ADVANCE(1035);
      END_STATE();
    case 959:
      if (lookahead == '1') ADVANCE(1095);
      if (lookahead == '7') ADVANCE(1107);
      END_STATE();
    case 960:
      if (lookahead == '1') ADVANCE(905);
      if (lookahead == '2') ADVANCE(1049);
      if (lookahead == '3') ADVANCE(1115);
      END_STATE();
    case 961:
      if (lookahead == '1') ADVANCE(905);
      if (lookahead == '2') ADVANCE(1053);
      if (lookahead == '3') ADVANCE(1115);
      END_STATE();
    case 962:
      if (lookahead == '1') ADVANCE(905);
      if (lookahead == '2') ADVANCE(1048);
      if (lookahead == '3') ADVANCE(1115);
      END_STATE();
    case 963:
      if (lookahead == '1') ADVANCE(1093);
      END_STATE();
    case 964:
      if (lookahead == '1') ADVANCE(1037);
      END_STATE();
    case 965:
      if (lookahead == '1') ADVANCE(875);
      if (lookahead == '4') ADVANCE(1136);
      if (lookahead == '8') ADVANCE(1029);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1030);
      END_STATE();
    case 966:
      if (lookahead == '1') ADVANCE(887);
      if (lookahead == '4') ADVANCE(1084);
      if (lookahead == '5') ADVANCE(1181);
      if (lookahead == '8') ADVANCE(1067);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1011);
      END_STATE();
    case 967:
      if (lookahead == '1') ADVANCE(1215);
      END_STATE();
    case 968:
      if (lookahead == '1') ADVANCE(1227);
      END_STATE();
    case 969:
      if (lookahead == '1') ADVANCE(1227);
      if (lookahead == '2') ADVANCE(1227);
      END_STATE();
    case 970:
      if (lookahead == '1') ADVANCE(1227);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1207);
      END_STATE();
    case 971:
      if (lookahead == '1') ADVANCE(891);
      if (lookahead == '4') ADVANCE(1129);
      if (lookahead == '8') ADVANCE(1025);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1026);
      END_STATE();
    case 972:
      if (lookahead == '1') ADVANCE(898);
      END_STATE();
    case 973:
      if (lookahead == '1') ADVANCE(1052);
      END_STATE();
    case 974:
      if (lookahead == '1') ADVANCE(1071);
      END_STATE();
    case 975:
      if (lookahead == '1') ADVANCE(1041);
      END_STATE();
    case 976:
      if (lookahead == '1') ADVANCE(1103);
      if (lookahead == '7') ADVANCE(1123);
      END_STATE();
    case 977:
      if (lookahead == '1') ADVANCE(1038);
      END_STATE();
    case 978:
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '4') ADVANCE(1111);
      END_STATE();
    case 979:
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '4') ADVANCE(1110);
      END_STATE();
    case 980:
      if (lookahead == '1') ADVANCE(1040);
      END_STATE();
    case 981:
      if (lookahead == '1') ADVANCE(1039);
      END_STATE();
    case 982:
      if (lookahead == '1') ADVANCE(1080);
      END_STATE();
    case 983:
      if (lookahead == '1') ADVANCE(903);
      END_STATE();
    case 984:
      if (lookahead == '1') ADVANCE(1042);
      END_STATE();
    case 985:
      if (lookahead == '1') ADVANCE(1133);
      if (lookahead == '3') ADVANCE(967);
      if (lookahead == '9') ADVANCE(1137);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1516);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1080);
      END_STATE();
    case 986:
      if (lookahead == '1') ADVANCE(1133);
      if (lookahead == '3') ADVANCE(967);
      if (lookahead == '9') ADVANCE(1138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1516);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1080);
      END_STATE();
    case 987:
      if (lookahead == '1') ADVANCE(1133);
      if (lookahead == '9') ADVANCE(1137);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1516);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1080);
      END_STATE();
    case 988:
      if (lookahead == '1') ADVANCE(1133);
      if (lookahead == '9') ADVANCE(1138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1516);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1080);
      END_STATE();
    case 989:
      if (lookahead == '1') ADVANCE(1133);
      if (lookahead == '9') ADVANCE(1139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1516);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1080);
      END_STATE();
    case 990:
      if (lookahead == '1') ADVANCE(910);
      if (lookahead == '3') ADVANCE(1522);
      if (lookahead == '4') ADVANCE(1162);
      END_STATE();
    case 991:
      if (lookahead == '1') ADVANCE(910);
      if (lookahead == '3') ADVANCE(1522);
      if (lookahead == '4') ADVANCE(1161);
      END_STATE();
    case 992:
      if (lookahead == '1') ADVANCE(1173);
      if (lookahead == '2') ADVANCE(1160);
      END_STATE();
    case 993:
      if (lookahead == '1') ADVANCE(907);
      END_STATE();
    case 994:
      if (lookahead == '1') ADVANCE(907);
      if (lookahead == '4') ADVANCE(1118);
      END_STATE();
    case 995:
      if (lookahead == '1') ADVANCE(914);
      if (lookahead == '4') ADVANCE(1119);
      END_STATE();
    case 996:
      if (lookahead == '1') ADVANCE(917);
      if (lookahead == '3') ADVANCE(1522);
      if (lookahead == '4') ADVANCE(1161);
      END_STATE();
    case 997:
      if (lookahead == '1') ADVANCE(918);
      if (lookahead == '4') ADVANCE(1023);
      if (lookahead == '8') ADVANCE(1065);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1027);
      END_STATE();
    case 998:
      if (lookahead == '1') ADVANCE(920);
      if (lookahead == '4') ADVANCE(1080);
      if (lookahead == '5') ADVANCE(1181);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1012);
      END_STATE();
    case 999:
      if (lookahead == '1') ADVANCE(1099);
      if (lookahead == '7') ADVANCE(1124);
      END_STATE();
    case 1000:
      if (lookahead == '1') ADVANCE(1154);
      if (lookahead == '2') ADVANCE(1158);
      END_STATE();
    case 1001:
      if (lookahead == '1') ADVANCE(1154);
      if (lookahead == '2') ADVANCE(882);
      END_STATE();
    case 1002:
      if (lookahead == '1') ADVANCE(1096);
      END_STATE();
    case 1003:
      if (lookahead == '1') ADVANCE(1100);
      END_STATE();
    case 1004:
      if (lookahead == '1') ADVANCE(934);
      if (lookahead == '4') ADVANCE(1130);
      if (lookahead == '8') ADVANCE(1070);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1056);
      END_STATE();
    case 1005:
      if (lookahead == '1') ADVANCE(938);
      if (lookahead == '4') ADVANCE(1132);
      if (lookahead == '8') ADVANCE(1066);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1055);
      END_STATE();
    case 1006:
      if (lookahead == '1') ADVANCE(1105);
      if (lookahead == '7') ADVANCE(1123);
      END_STATE();
    case 1007:
      if (lookahead == '1') ADVANCE(1155);
      if (lookahead == '2') ADVANCE(873);
      if (lookahead == '3') ADVANCE(1523);
      if (lookahead == '6') ADVANCE(1147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(970);
      END_STATE();
    case 1008:
      if (lookahead == '1') ADVANCE(1155);
      if (lookahead == '2') ADVANCE(936);
      if (lookahead == '3') ADVANCE(1523);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(968);
      END_STATE();
    case 1009:
      if (lookahead == '1') ADVANCE(1102);
      END_STATE();
    case 1010:
      if (lookahead == '1') ADVANCE(941);
      if (lookahead == '4') ADVANCE(1133);
      if (lookahead == '8') ADVANCE(1069);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1061);
      END_STATE();
    case 1011:
      if (lookahead == '1') ADVANCE(1156);
      if (lookahead == '2') ADVANCE(935);
      END_STATE();
    case 1012:
      if (lookahead == '1') ADVANCE(1156);
      if (lookahead == '2') ADVANCE(1166);
      END_STATE();
    case 1013:
      if (lookahead == '1') ADVANCE(1157);
      if (lookahead == '2') ADVANCE(886);
      if (lookahead == '3') ADVANCE(1523);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(968);
      END_STATE();
    case 1014:
      if (lookahead == '1') ADVANCE(1157);
      if (lookahead == '2') ADVANCE(874);
      if (lookahead == '3') ADVANCE(1523);
      if (lookahead == '6') ADVANCE(1147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(970);
      END_STATE();
    case 1015:
      if (lookahead == '1') ADVANCE(1157);
      if (lookahead == '2') ADVANCE(937);
      if (lookahead == '3') ADVANCE(1523);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(968);
      END_STATE();
    case 1016:
      if (lookahead == '1') ADVANCE(945);
      if (lookahead == '4') ADVANCE(1078);
      if (lookahead == '5') ADVANCE(1179);
      if (lookahead == '8') ADVANCE(1029);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1001);
      END_STATE();
    case 1017:
      if (lookahead == '1') ADVANCE(943);
      if (lookahead == '3') ADVANCE(1085);
      if (lookahead == '4') ADVANCE(1022);
      if (lookahead == '5') ADVANCE(1182);
      if (lookahead == '6') ADVANCE(911);
      if (lookahead == '8') ADVANCE(1028);
      if (lookahead == '9') ADVANCE(1108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1014);
      END_STATE();
    case 1018:
      if (lookahead == '1') ADVANCE(944);
      if (lookahead == '3') ADVANCE(1085);
      if (lookahead == '4') ADVANCE(1087);
      if (lookahead == '5') ADVANCE(1180);
      if (lookahead == '6') ADVANCE(911);
      if (lookahead == '8') ADVANCE(1068);
      if (lookahead == '9') ADVANCE(1108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1008);
      END_STATE();
    case 1019:
      if (lookahead == '1') ADVANCE(946);
      if (lookahead == '3') ADVANCE(1085);
      if (lookahead == '4') ADVANCE(1090);
      if (lookahead == '5') ADVANCE(1182);
      if (lookahead == '6') ADVANCE(911);
      if (lookahead == '8') ADVANCE(1068);
      if (lookahead == '9') ADVANCE(1108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1015);
      END_STATE();
    case 1020:
      if (lookahead == '2') ADVANCE(1204);
      if (lookahead == '3') ADVANCE(1202);
      if (lookahead == '5') ADVANCE(1205);
      if (lookahead == '7') ADVANCE(1206);
      END_STATE();
    case 1021:
      if (lookahead == '2') ADVANCE(1204);
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '5') ADVANCE(1226);
      END_STATE();
    case 1022:
      if (lookahead == '2') ADVANCE(1204);
      if (lookahead == '3') ADVANCE(1237);
      if (lookahead == '5') ADVANCE(1226);
      END_STATE();
    case 1023:
      if (lookahead == '2') ADVANCE(1204);
      if (lookahead == '5') ADVANCE(1208);
      if (lookahead == '7') ADVANCE(1206);
      END_STATE();
    case 1024:
      if (lookahead == '2') ADVANCE(868);
      if (lookahead == '7') ADVANCE(1034);
      END_STATE();
    case 1025:
      if (lookahead == '2') ADVANCE(919);
      if (lookahead == '7') ADVANCE(1059);
      END_STATE();
    case 1026:
      if (lookahead == '2') ADVANCE(896);
      END_STATE();
    case 1027:
      if (lookahead == '2') ADVANCE(933);
      if (lookahead == '6') ADVANCE(1147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1525);
      END_STATE();
    case 1028:
      if (lookahead == '2') ADVANCE(927);
      if (lookahead == '5') ADVANCE(1192);
      if (lookahead == '6') ADVANCE(1121);
      if (lookahead == '7') ADVANCE(960);
      if (lookahead == '8') ADVANCE(928);
      if (lookahead == '9') ADVANCE(1165);
      END_STATE();
    case 1029:
      if (lookahead == '2') ADVANCE(930);
      if (lookahead == '7') ADVANCE(1032);
      END_STATE();
    case 1030:
      if (lookahead == '2') ADVANCE(881);
      END_STATE();
    case 1031:
      if (lookahead == '2') ADVANCE(1145);
      END_STATE();
    case 1032:
      if (lookahead == '2') ADVANCE(1044);
      END_STATE();
    case 1033:
      if (lookahead == '2') ADVANCE(932);
      if (lookahead == '5') ADVANCE(1192);
      if (lookahead == '6') ADVANCE(1121);
      if (lookahead == '7') ADVANCE(961);
      if (lookahead == '8') ADVANCE(928);
      if (lookahead == '9') ADVANCE(1165);
      END_STATE();
    case 1034:
      if (lookahead == '2') ADVANCE(1035);
      END_STATE();
    case 1035:
      if (lookahead == '2') ADVANCE(1205);
      if (lookahead == '5') ADVANCE(1212);
      if (lookahead == '7') ADVANCE(1213);
      END_STATE();
    case 1036:
      if (lookahead == '2') ADVANCE(1046);
      if (lookahead == '9') ADVANCE(1115);
      END_STATE();
    case 1037:
      if (lookahead == '2') ADVANCE(1207);
      END_STATE();
    case 1038:
      if (lookahead == '2') ADVANCE(1203);
      END_STATE();
    case 1039:
      if (lookahead == '2') ADVANCE(1240);
      END_STATE();
    case 1040:
      if (lookahead == '2') ADVANCE(1222);
      if (lookahead == '5') ADVANCE(1212);
      END_STATE();
    case 1041:
      if (lookahead == '2') ADVANCE(1222);
      if (lookahead == '5') ADVANCE(1212);
      if (lookahead == '7') ADVANCE(1213);
      END_STATE();
    case 1042:
      if (lookahead == '2') ADVANCE(1227);
      END_STATE();
    case 1043:
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '3') ADVANCE(1227);
      END_STATE();
    case 1044:
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '5') ADVANCE(1232);
      END_STATE();
    case 1045:
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '6') ADVANCE(1227);
      END_STATE();
    case 1046:
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '7') ADVANCE(1227);
      END_STATE();
    case 1047:
      if (lookahead == '2') ADVANCE(1227);
      if (lookahead == '9') ADVANCE(1227);
      END_STATE();
    case 1048:
      if (lookahead == '2') ADVANCE(1226);
      if (lookahead == '3') ADVANCE(1227);
      END_STATE();
    case 1049:
      if (lookahead == '2') ADVANCE(1226);
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == '7') ADVANCE(1213);
      END_STATE();
    case 1050:
      if (lookahead == '2') ADVANCE(1226);
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == '7') ADVANCE(1213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 1051:
      if (lookahead == '2') ADVANCE(1226);
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 1052:
      if (lookahead == '2') ADVANCE(1233);
      if (lookahead == '5') ADVANCE(1234);
      END_STATE();
    case 1053:
      if (lookahead == '2') ADVANCE(1239);
      if (lookahead == '3') ADVANCE(1227);
      END_STATE();
    case 1054:
      if (lookahead == '2') ADVANCE(1239);
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 1055:
      if (lookahead == '2') ADVANCE(939);
      END_STATE();
    case 1056:
      if (lookahead == '2') ADVANCE(940);
      END_STATE();
    case 1057:
      if (lookahead == '2') ADVANCE(1052);
      END_STATE();
    case 1058:
      if (lookahead == '2') ADVANCE(1041);
      END_STATE();
    case 1059:
      if (lookahead == '2') ADVANCE(1038);
      END_STATE();
    case 1060:
      if (lookahead == '2') ADVANCE(968);
      if (lookahead == '3') ADVANCE(1538);
      END_STATE();
    case 1061:
      if (lookahead == '2') ADVANCE(942);
      END_STATE();
    case 1062:
      if (lookahead == '2') ADVANCE(1040);
      END_STATE();
    case 1063:
      if (lookahead == '2') ADVANCE(1039);
      END_STATE();
    case 1064:
      if (lookahead == '2') ADVANCE(1042);
      END_STATE();
    case 1065:
      if (lookahead == '2') ADVANCE(922);
      if (lookahead == '7') ADVANCE(1058);
      END_STATE();
    case 1066:
      if (lookahead == '2') ADVANCE(923);
      if (lookahead == '7') ADVANCE(1063);
      END_STATE();
    case 1067:
      if (lookahead == '2') ADVANCE(931);
      if (lookahead == '7') ADVANCE(1057);
      END_STATE();
    case 1068:
      if (lookahead == '2') ADVANCE(926);
      if (lookahead == '5') ADVANCE(1192);
      if (lookahead == '6') ADVANCE(1121);
      if (lookahead == '7') ADVANCE(962);
      if (lookahead == '8') ADVANCE(928);
      if (lookahead == '9') ADVANCE(1165);
      END_STATE();
    case 1069:
      if (lookahead == '2') ADVANCE(929);
      if (lookahead == '7') ADVANCE(1064);
      END_STATE();
    case 1070:
      if (lookahead == '2') ADVANCE(921);
      if (lookahead == '7') ADVANCE(1062);
      END_STATE();
    case 1071:
      if (lookahead == '3') ADVANCE(1076);
      END_STATE();
    case 1072:
      if (lookahead == '3') ADVANCE(1073);
      if (lookahead == '8') ADVANCE(1159);
      END_STATE();
    case 1073:
      if (lookahead == '3') ADVANCE(1202);
      if (lookahead == '4') ADVANCE(1205);
      END_STATE();
    case 1074:
      if (lookahead == '3') ADVANCE(967);
      if (lookahead == '9') ADVANCE(1126);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1518);
      END_STATE();
    case 1075:
      if (lookahead == '3') ADVANCE(967);
      if (lookahead == '9') ADVANCE(1143);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1518);
      END_STATE();
    case 1076:
      if (lookahead == '3') ADVANCE(1201);
      END_STATE();
    case 1077:
      if (lookahead == '3') ADVANCE(1201);
      if (lookahead == '4') ADVANCE(1227);
      END_STATE();
    case 1078:
      if (lookahead == '3') ADVANCE(1201);
      if (lookahead == '5') ADVANCE(1227);
      if (lookahead == '7') ADVANCE(1232);
      END_STATE();
    case 1079:
      if (lookahead == '3') ADVANCE(1215);
      END_STATE();
    case 1080:
      if (lookahead == '3') ADVANCE(1227);
      END_STATE();
    case 1081:
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == '4') ADVANCE(1227);
      END_STATE();
    case 1082:
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == '4') ADVANCE(1227);
      if (lookahead == '5') ADVANCE(1227);
      END_STATE();
    case 1083:
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == '4') ADVANCE(1233);
      END_STATE();
    case 1084:
      if (lookahead == '3') ADVANCE(1227);
      if (lookahead == '5') ADVANCE(1233);
      if (lookahead == '7') ADVANCE(1234);
      END_STATE();
    case 1085:
      if (lookahead == '3') ADVANCE(1235);
      END_STATE();
    case 1086:
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '4') ADVANCE(1226);
      END_STATE();
    case 1087:
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == '5') ADVANCE(1226);
      END_STATE();
    case 1088:
      if (lookahead == '3') ADVANCE(1237);
      if (lookahead == '4') ADVANCE(1226);
      END_STATE();
    case 1089:
      if (lookahead == '3') ADVANCE(1237);
      if (lookahead == '4') ADVANCE(1239);
      END_STATE();
    case 1090:
      if (lookahead == '3') ADVANCE(1237);
      if (lookahead == '5') ADVANCE(1226);
      END_STATE();
    case 1091:
      if (lookahead == '3') ADVANCE(1237);
      if (lookahead == '5') ADVANCE(1239);
      END_STATE();
    case 1092:
      if (lookahead == '3') ADVANCE(1079);
      END_STATE();
    case 1093:
      if (lookahead == '3') ADVANCE(1109);
      END_STATE();
    case 1094:
      if (lookahead == '3') ADVANCE(1086);
      END_STATE();
    case 1095:
      if (lookahead == '3') ADVANCE(1114);
      if (lookahead == '8') ADVANCE(1159);
      END_STATE();
    case 1096:
      if (lookahead == '3') ADVANCE(1080);
      END_STATE();
    case 1097:
      if (lookahead == '3') ADVANCE(1080);
      if (lookahead == '6') ADVANCE(1080);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1060);
      END_STATE();
    case 1098:
      if (lookahead == '3') ADVANCE(1080);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 1099:
      if (lookahead == '3') ADVANCE(1083);
      if (lookahead == '8') ADVANCE(1164);
      END_STATE();
    case 1100:
      if (lookahead == '3') ADVANCE(1113);
      END_STATE();
    case 1101:
      if (lookahead == '3') ADVANCE(1088);
      END_STATE();
    case 1102:
      if (lookahead == '3') ADVANCE(1115);
      END_STATE();
    case 1103:
      if (lookahead == '3') ADVANCE(1115);
      if (lookahead == '8') ADVANCE(1163);
      END_STATE();
    case 1104:
      if (lookahead == '3') ADVANCE(1528);
      END_STATE();
    case 1105:
      if (lookahead == '3') ADVANCE(1077);
      if (lookahead == '8') ADVANCE(1163);
      END_STATE();
    case 1106:
      if (lookahead == '3') ADVANCE(1089);
      END_STATE();
    case 1107:
      if (lookahead == '4') ADVANCE(1112);
      END_STATE();
    case 1108:
      if (lookahead == '4') ADVANCE(1183);
      if (lookahead == '6') ADVANCE(1098);
      if (lookahead == '7') ADVANCE(1036);
      END_STATE();
    case 1109:
      if (lookahead == '4') ADVANCE(1203);
      END_STATE();
    case 1110:
      if (lookahead == '4') ADVANCE(1210);
      END_STATE();
    case 1111:
      if (lookahead == '4') ADVANCE(1210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1211);
      END_STATE();
    case 1112:
      if (lookahead == '4') ADVANCE(1217);
      END_STATE();
    case 1113:
      if (lookahead == '4') ADVANCE(1240);
      END_STATE();
    case 1114:
      if (lookahead == '4') ADVANCE(1223);
      END_STATE();
    case 1115:
      if (lookahead == '4') ADVANCE(1227);
      END_STATE();
    case 1116:
      if (lookahead == '4') ADVANCE(1227);
      if (lookahead == '7') ADVANCE(1227);
      END_STATE();
    case 1117:
      if (lookahead == '4') ADVANCE(1227);
      if (lookahead == '8') ADVANCE(1227);
      END_STATE();
    case 1118:
      if (lookahead == '4') ADVANCE(1232);
      END_STATE();
    case 1119:
      if (lookahead == '4') ADVANCE(1234);
      END_STATE();
    case 1120:
      if (lookahead == '4') ADVANCE(1131);
      END_STATE();
    case 1121:
      if (lookahead == '4') ADVANCE(1144);
      if (lookahead == '6') ADVANCE(908);
      END_STATE();
    case 1122:
      if (lookahead == '4') ADVANCE(1042);
      END_STATE();
    case 1123:
      if (lookahead == '4') ADVANCE(1118);
      END_STATE();
    case 1124:
      if (lookahead == '4') ADVANCE(1119);
      END_STATE();
    case 1125:
      if (lookahead == '5') ADVANCE(1043);
      END_STATE();
    case 1126:
      if (lookahead == '5') ADVANCE(1202);
      if (lookahead == '6') ADVANCE(1205);
      END_STATE();
    case 1127:
      if (lookahead == '5') ADVANCE(1201);
      END_STATE();
    case 1128:
      if (lookahead == '5') ADVANCE(1201);
      if (lookahead == '6') ADVANCE(1227);
      END_STATE();
    case 1129:
      if (lookahead == '5') ADVANCE(1203);
      END_STATE();
    case 1130:
      if (lookahead == '5') ADVANCE(1208);
      if (lookahead == '7') ADVANCE(1206);
      END_STATE();
    case 1131:
      if (lookahead == '5') ADVANCE(1209);
      END_STATE();
    case 1132:
      if (lookahead == '5') ADVANCE(1240);
      END_STATE();
    case 1133:
      if (lookahead == '5') ADVANCE(1227);
      END_STATE();
    case 1134:
      if (lookahead == '5') ADVANCE(1227);
      if (lookahead == '6') ADVANCE(1227);
      END_STATE();
    case 1135:
      if (lookahead == '5') ADVANCE(1227);
      if (lookahead == '6') ADVANCE(1233);
      END_STATE();
    case 1136:
      if (lookahead == '5') ADVANCE(1227);
      if (lookahead == '7') ADVANCE(1232);
      END_STATE();
    case 1137:
      if (lookahead == '5') ADVANCE(1224);
      if (lookahead == '6') ADVANCE(1226);
      END_STATE();
    case 1138:
      if (lookahead == '5') ADVANCE(1237);
      if (lookahead == '6') ADVANCE(1226);
      END_STATE();
    case 1139:
      if (lookahead == '5') ADVANCE(1237);
      if (lookahead == '6') ADVANCE(1239);
      END_STATE();
    case 1140:
      if (lookahead == '6') ADVANCE(1532);
      END_STATE();
    case 1141:
      if (lookahead == '6') ADVANCE(1203);
      END_STATE();
    case 1142:
      if (lookahead == '6') ADVANCE(1240);
      END_STATE();
    case 1143:
      if (lookahead == '6') ADVANCE(1223);
      END_STATE();
    case 1144:
      if (lookahead == '6') ADVANCE(1227);
      END_STATE();
    case 1145:
      if (lookahead == '6') ADVANCE(1227);
      if (lookahead == '7') ADVANCE(1227);
      END_STATE();
    case 1146:
      if (lookahead == '6') ADVANCE(1184);
      END_STATE();
    case 1147:
      if (lookahead == '6') ADVANCE(1527);
      END_STATE();
    case 1148:
      if (lookahead == '6') ADVANCE(1134);
      END_STATE();
    case 1149:
      if (lookahead == '6') ADVANCE(968);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1104);
      END_STATE();
    case 1150:
      if (lookahead == '6') ADVANCE(1188);
      END_STATE();
    case 1151:
      if (lookahead == '6') ADVANCE(1190);
      END_STATE();
    case 1152:
      if (lookahead == '6') ADVANCE(1189);
      END_STATE();
    case 1153:
      if (lookahead == '6') ADVANCE(1191);
      END_STATE();
    case 1154:
      if (lookahead == '6') ADVANCE(1533);
      END_STATE();
    case 1155:
      if (lookahead == '6') ADVANCE(1534);
      END_STATE();
    case 1156:
      if (lookahead == '6') ADVANCE(1535);
      END_STATE();
    case 1157:
      if (lookahead == '6') ADVANCE(1536);
      END_STATE();
    case 1158:
      if (lookahead == '7') ADVANCE(1195);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1201);
      END_STATE();
    case 1159:
      if (lookahead == '7') ADVANCE(1216);
      END_STATE();
    case 1160:
      if (lookahead == '7') ADVANCE(1227);
      END_STATE();
    case 1161:
      if (lookahead == '7') ADVANCE(1227);
      if (lookahead == '8') ADVANCE(1227);
      if (lookahead == '9') ADVANCE(1227);
      END_STATE();
    case 1162:
      if (lookahead == '7') ADVANCE(1227);
      if (lookahead == '8') ADVANCE(1227);
      if (lookahead == '9') ADVANCE(1227);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1211);
      END_STATE();
    case 1163:
      if (lookahead == '7') ADVANCE(1232);
      END_STATE();
    case 1164:
      if (lookahead == '7') ADVANCE(1234);
      END_STATE();
    case 1165:
      if (lookahead == '7') ADVANCE(1189);
      END_STATE();
    case 1166:
      if (lookahead == '7') ADVANCE(1199);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1227);
      END_STATE();
    case 1167:
      if (lookahead == '8') ADVANCE(1146);
      END_STATE();
    case 1168:
      if (lookahead == '8') ADVANCE(1205);
      if (lookahead == '9') ADVANCE(1205);
      END_STATE();
    case 1169:
      if (lookahead == '8') ADVANCE(1203);
      if (lookahead == '9') ADVANCE(1203);
      END_STATE();
    case 1170:
      if (lookahead == '8') ADVANCE(1214);
      if (lookahead == '9') ADVANCE(1218);
      END_STATE();
    case 1171:
      if (lookahead == '8') ADVANCE(1217);
      END_STATE();
    case 1172:
      if (lookahead == '8') ADVANCE(1240);
      if (lookahead == '9') ADVANCE(1240);
      END_STATE();
    case 1173:
      if (lookahead == '8') ADVANCE(1227);
      if (lookahead == '9') ADVANCE(1227);
      END_STATE();
    case 1174:
      if (lookahead == '8') ADVANCE(1226);
      if (lookahead == '9') ADVANCE(1226);
      END_STATE();
    case 1175:
      if (lookahead == '8') ADVANCE(1232);
      END_STATE();
    case 1176:
      if (lookahead == '8') ADVANCE(1233);
      if (lookahead == '9') ADVANCE(1233);
      END_STATE();
    case 1177:
      if (lookahead == '8') ADVANCE(1234);
      END_STATE();
    case 1178:
      if (lookahead == '8') ADVANCE(1239);
      if (lookahead == '9') ADVANCE(1239);
      END_STATE();
    case 1179:
      if (lookahead == '8') ADVANCE(1150);
      END_STATE();
    case 1180:
      if (lookahead == '8') ADVANCE(1151);
      END_STATE();
    case 1181:
      if (lookahead == '8') ADVANCE(1152);
      END_STATE();
    case 1182:
      if (lookahead == '8') ADVANCE(1153);
      END_STATE();
    case 1183:
      if (lookahead == '9') ADVANCE(1045);
      END_STATE();
    case 1184:
      if (lookahead == '9') ADVANCE(1202);
      END_STATE();
    case 1185:
      if (lookahead == '9') ADVANCE(1141);
      END_STATE();
    case 1186:
      if (lookahead == '9') ADVANCE(969);
      if (lookahead == ';') ADVANCE(1646);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1144);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1116);
      END_STATE();
    case 1187:
      if (lookahead == '9') ADVANCE(1207);
      END_STATE();
    case 1188:
      if (lookahead == '9') ADVANCE(1201);
      END_STATE();
    case 1189:
      if (lookahead == '9') ADVANCE(1227);
      END_STATE();
    case 1190:
      if (lookahead == '9') ADVANCE(1224);
      END_STATE();
    case 1191:
      if (lookahead == '9') ADVANCE(1237);
      END_STATE();
    case 1192:
      if (lookahead == '9') ADVANCE(1081);
      END_STATE();
    case 1193:
      if (lookahead == '9') ADVANCE(1143);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1518);
      END_STATE();
    case 1194:
      if (lookahead == '9') ADVANCE(1142);
      END_STATE();
    case 1195:
      if (lookahead == '9') ADVANCE(1127);
      END_STATE();
    case 1196:
      if (lookahead == '9') ADVANCE(1135);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1521);
      END_STATE();
    case 1197:
      if (lookahead == '9') ADVANCE(1144);
      END_STATE();
    case 1198:
      if (lookahead == '9') ADVANCE(1144);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1520);
      END_STATE();
    case 1199:
      if (lookahead == '9') ADVANCE(1133);
      END_STATE();
    case 1200:
      if (lookahead == '9') ADVANCE(1128);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1520);
      END_STATE();
    case 1201:
      if (lookahead == ';') ADVANCE(1630);
      END_STATE();
    case 1202:
      if (lookahead == ';') ADVANCE(1633);
      END_STATE();
    case 1203:
      if (lookahead == ';') ADVANCE(1543);
      END_STATE();
    case 1204:
      if (lookahead == ';') ADVANCE(1702);
      END_STATE();
    case 1205:
      if (lookahead == ';') ADVANCE(1620);
      END_STATE();
    case 1206:
      if (lookahead == ';') ADVANCE(1686);
      END_STATE();
    case 1207:
      if (lookahead == ';') ADVANCE(1698);
      END_STATE();
    case 1208:
      if (lookahead == ';') ADVANCE(1657);
      END_STATE();
    case 1209:
      if (lookahead == ';') ADVANCE(1718);
      END_STATE();
    case 1210:
      if (lookahead == ';') ADVANCE(1690);
      END_STATE();
    case 1211:
      if (lookahead == ';') ADVANCE(1714);
      END_STATE();
    case 1212:
      if (lookahead == ';') ADVANCE(1688);
      END_STATE();
    case 1213:
      if (lookahead == ';') ADVANCE(1706);
      END_STATE();
    case 1214:
      if (lookahead == ';') ADVANCE(1661);
      END_STATE();
    case 1215:
      if (lookahead == ';') ADVANCE(1710);
      END_STATE();
    case 1216:
      if (lookahead == ';') ADVANCE(1692);
      END_STATE();
    case 1217:
      if (lookahead == ';') ADVANCE(1694);
      END_STATE();
    case 1218:
      if (lookahead == ';') ADVANCE(1663);
      END_STATE();
    case 1219:
      if (lookahead == ';') ADVANCE(1665);
      END_STATE();
    case 1220:
      if (lookahead == ';') ADVANCE(1667);
      END_STATE();
    case 1221:
      if (lookahead == ';') ADVANCE(1669);
      END_STATE();
    case 1222:
      if (lookahead == ';') ADVANCE(1659);
      END_STATE();
    case 1223:
      if (lookahead == ';') ADVANCE(1671);
      END_STATE();
    case 1224:
      if (lookahead == ';') ADVANCE(853);
      END_STATE();
    case 1225:
      if (lookahead == ';') ADVANCE(853);
      if (lookahead == 'b') ADVANCE(1227);
      if (lookahead == 'e') ADVANCE(1227);
      if (lookahead == 'm') ADVANCE(1390);
      END_STATE();
    case 1226:
      if (lookahead == ';') ADVANCE(1645);
      END_STATE();
    case 1227:
      if (lookahead == ';') ADVANCE(1635);
      END_STATE();
    case 1228:
      if (lookahead == ';') ADVANCE(1635);
      if (lookahead == 'a') ADVANCE(1435);
      END_STATE();
    case 1229:
      if (lookahead == ';') ADVANCE(1635);
      if (lookahead == 'f') ADVANCE(1474);
      if (lookahead == 'q') ADVANCE(1227);
      END_STATE();
    case 1230:
      if (lookahead == ';') ADVANCE(1635);
      if (lookahead == 'o') ADVANCE(1505);
      END_STATE();
    case 1231:
      if (lookahead == ';') ADVANCE(1635);
      if (lookahead == 't') ADVANCE(1404);
      END_STATE();
    case 1232:
      if (lookahead == ';') ADVANCE(858);
      END_STATE();
    case 1233:
      if (lookahead == ';') ADVANCE(1627);
      END_STATE();
    case 1234:
      if (lookahead == ';') ADVANCE(857);
      END_STATE();
    case 1235:
      if (lookahead == ';') ADVANCE(1646);
      END_STATE();
    case 1236:
      if (lookahead == ';') ADVANCE(854);
      END_STATE();
    case 1237:
      if (lookahead == ';') ADVANCE(1634);
      END_STATE();
    case 1238:
      if (lookahead == ';') ADVANCE(1634);
      if (lookahead == 'b') ADVANCE(1227);
      if (lookahead == 'e') ADVANCE(1227);
      if (lookahead == 'm') ADVANCE(1390);
      END_STATE();
    case 1239:
      if (lookahead == ';') ADVANCE(1622);
      END_STATE();
    case 1240:
      if (lookahead == ';') ADVANCE(1544);
      END_STATE();
    case 1241:
      if (lookahead == ';') ADVANCE(1647);
      END_STATE();
    case 1242:
      if (lookahead == '=') ADVANCE(1635);
      END_STATE();
    case 1243:
      if (lookahead == 'A') ADVANCE(1436);
      END_STATE();
    case 1244:
      if (lookahead == 'A') ADVANCE(1436);
      if (lookahead == 'R') ADVANCE(1357);
      END_STATE();
    case 1245:
      if (lookahead == 'A') ADVANCE(1436);
      if (lookahead == 'T') ADVANCE(1312);
      if (lookahead == 'p') ADVANCE(1313);
      END_STATE();
    case 1246:
      if (lookahead == 'L') ADVANCE(1315);
      if (lookahead == 'R') ADVANCE(1357);
      if (lookahead == 'U') ADVANCE(1416);
      END_STATE();
    case 1247:
      if (lookahead == 'M') ADVANCE(1364);
      END_STATE();
    case 1248:
      if (lookahead == 'N') ADVANCE(1635);
      END_STATE();
    case 1249:
      if (lookahead == 'P') ADVANCE(1382);
      END_STATE();
    case 1250:
      if (lookahead == 'R') ADVANCE(1357);
      END_STATE();
    case 1251:
      if (lookahead == 'a') ADVANCE(1441);
      END_STATE();
    case 1252:
      if (lookahead == 'a') ADVANCE(1287);
      END_STATE();
    case 1253:
      if (lookahead == 'a') ADVANCE(1367);
      if (lookahead == 'y') ADVANCE(1423);
      END_STATE();
    case 1254:
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead == 'v') ADVANCE(1377);
      END_STATE();
    case 1255:
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'd') ADVANCE(1283);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead == 'v') ADVANCE(1377);
      END_STATE();
    case 1256:
      if (lookahead == 'a') ADVANCE(1442);
      END_STATE();
    case 1257:
      if (lookahead == 'a') ADVANCE(1366);
      if (lookahead == 'y') ADVANCE(1414);
      END_STATE();
    case 1258:
      if (lookahead == 'a') ADVANCE(1366);
      if (lookahead == 'y') ADVANCE(1418);
      END_STATE();
    case 1259:
      if (lookahead == 'a') ADVANCE(1431);
      END_STATE();
    case 1260:
      if (lookahead == 'a') ADVANCE(1431);
      if (lookahead == 'i') ADVANCE(1335);
      END_STATE();
    case 1261:
      if (lookahead == 'a') ADVANCE(1431);
      if (lookahead == 'p') ADVANCE(1269);
      END_STATE();
    case 1262:
      if (lookahead == 'a') ADVANCE(1431);
      if (lookahead == 'y') ADVANCE(1423);
      END_STATE();
    case 1263:
      if (lookahead == 'a') ADVANCE(1431);
      if (lookahead == 'y') ADVANCE(1426);
      END_STATE();
    case 1264:
      if (lookahead == 'a') ADVANCE(1371);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'i') ADVANCE(1297);
      if (lookahead == 'n') ADVANCE(1419);
      if (lookahead == 'p') ADVANCE(1227);
      END_STATE();
    case 1265:
      if (lookahead == 'a') ADVANCE(1371);
      if (lookahead == 'd') ADVANCE(1280);
      if (lookahead == 'i') ADVANCE(1399);
      if (lookahead == 'n') ADVANCE(1419);
      if (lookahead == 'p') ADVANCE(1227);
      END_STATE();
    case 1266:
      if (lookahead == 'a') ADVANCE(1371);
      if (lookahead == 'd') ADVANCE(1283);
      if (lookahead == 'i') ADVANCE(1401);
      if (lookahead == 'n') ADVANCE(1419);
      if (lookahead == 'p') ADVANCE(1227);
      END_STATE();
    case 1267:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'e') ADVANCE(1326);
      END_STATE();
    case 1268:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'i') ADVANCE(1333);
      END_STATE();
    case 1269:
      if (lookahead == 'a') ADVANCE(1436);
      END_STATE();
    case 1270:
      if (lookahead == 'a') ADVANCE(1436);
      if (lookahead == 'r') ADVANCE(1362);
      END_STATE();
    case 1271:
      if (lookahead == 'a') ADVANCE(1381);
      END_STATE();
    case 1272:
      if (lookahead == 'a') ADVANCE(1435);
      END_STATE();
    case 1273:
      if (lookahead == 'a') ADVANCE(1227);
      END_STATE();
    case 1274:
      if (lookahead == 'a') ADVANCE(1460);
      END_STATE();
    case 1275:
      if (lookahead == 'a') ADVANCE(1437);
      END_STATE();
    case 1276:
      if (lookahead == 'a') ADVANCE(1461);
      END_STATE();
    case 1277:
      if (lookahead == 'a') ADVANCE(1463);
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
      if (lookahead == 'a') ADVANCE(1468);
      END_STATE();
    case 1282:
      if (lookahead == 'a') ADVANCE(1469);
      END_STATE();
    case 1283:
      if (lookahead == 'a') ADVANCE(1470);
      END_STATE();
    case 1284:
      if (lookahead == 'a') ADVANCE(1459);
      END_STATE();
    case 1285:
      if (lookahead == 'a') ADVANCE(1379);
      END_STATE();
    case 1286:
      if (lookahead == 'b') ADVANCE(1370);
      END_STATE();
    case 1287:
      if (lookahead == 'c') ADVANCE(964);
      END_STATE();
    case 1288:
      if (lookahead == 'c') ADVANCE(1372);
      END_STATE();
    case 1289:
      if (lookahead == 'c') ADVANCE(1374);
      END_STATE();
    case 1290:
      if (lookahead == 'd') ADVANCE(1256);
      END_STATE();
    case 1291:
      if (lookahead == 'd') ADVANCE(1256);
      if (lookahead == 'i') ADVANCE(1295);
      END_STATE();
    case 1292:
      if (lookahead == 'd') ADVANCE(1410);
      if (lookahead == 'p') ADVANCE(1382);
      END_STATE();
    case 1293:
      if (lookahead == 'd') ADVANCE(1274);
      END_STATE();
    case 1294:
      if (lookahead == 'd') ADVANCE(1274);
      if (lookahead == 'i') ADVANCE(1394);
      END_STATE();
    case 1295:
      if (lookahead == 'd') ADVANCE(1251);
      if (lookahead == 'n') ADVANCE(1486);
      END_STATE();
    case 1296:
      if (lookahead == 'd') ADVANCE(1251);
      if (lookahead == 'n') ADVANCE(1495);
      END_STATE();
    case 1297:
      if (lookahead == 'd') ADVANCE(1251);
      if (lookahead == 'n') ADVANCE(1499);
      END_STATE();
    case 1298:
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1296);
      END_STATE();
    case 1299:
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == 'i') ADVANCE(1395);
      END_STATE();
    case 1300:
      if (lookahead == 'd') ADVANCE(1278);
      END_STATE();
    case 1301:
      if (lookahead == 'd') ADVANCE(1279);
      END_STATE();
    case 1302:
      if (lookahead == 'd') ADVANCE(1279);
      if (lookahead == 'i') ADVANCE(1396);
      END_STATE();
    case 1303:
      if (lookahead == 'd') ADVANCE(1281);
      END_STATE();
    case 1304:
      if (lookahead == 'd') ADVANCE(1281);
      if (lookahead == 'i') ADVANCE(1398);
      END_STATE();
    case 1305:
      if (lookahead == 'd') ADVANCE(1282);
      END_STATE();
    case 1306:
      if (lookahead == 'd') ADVANCE(1282);
      if (lookahead == 'i') ADVANCE(1400);
      END_STATE();
    case 1307:
      if (lookahead == 'e') ADVANCE(1229);
      if (lookahead == 'l') ADVANCE(1477);
      if (lookahead == 'o') ADVANCE(1504);
      if (lookahead == 'r') ADVANCE(1259);
      END_STATE();
    case 1308:
      if (lookahead == 'e') ADVANCE(1229);
      if (lookahead == 'l') ADVANCE(1477);
      if (lookahead == 'r') ADVANCE(1259);
      END_STATE();
    case 1309:
      if (lookahead == 'e') ADVANCE(1384);
      END_STATE();
    case 1310:
      if (lookahead == 'e') ADVANCE(1433);
      if (lookahead == 'l') ADVANCE(1490);
      if (lookahead == 'm') ADVANCE(1227);
      if (lookahead == 'r') ADVANCE(1407);
      END_STATE();
    case 1311:
      if (lookahead == 'e') ADVANCE(1433);
      if (lookahead == 'l') ADVANCE(1492);
      if (lookahead == 'm') ADVANCE(1227);
      if (lookahead == 'r') ADVANCE(1407);
      END_STATE();
    case 1312:
      if (lookahead == 'e') ADVANCE(1314);
      END_STATE();
    case 1313:
      if (lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 1314:
      if (lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 1315:
      if (lookahead == 'e') ADVANCE(1328);
      END_STATE();
    case 1316:
      if (lookahead == 'e') ADVANCE(1387);
      END_STATE();
    case 1317:
      if (lookahead == 'e') ADVANCE(1372);
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
      if (lookahead == 'e') ADVANCE(1391);
      END_STATE();
    case 1322:
      if (lookahead == 'e') ADVANCE(1392);
      END_STATE();
    case 1323:
      if (lookahead == 'e') ADVANCE(1393);
      END_STATE();
    case 1324:
      if (lookahead == 'e') ADVANCE(1462);
      END_STATE();
    case 1325:
      if (lookahead == 'e') ADVANCE(1464);
      END_STATE();
    case 1326:
      if (lookahead == 'f') ADVANCE(1473);
      END_STATE();
    case 1327:
      if (lookahead == 'f') ADVANCE(1361);
      END_STATE();
    case 1328:
      if (lookahead == 'f') ADVANCE(1475);
      END_STATE();
    case 1329:
      if (lookahead == 'f') ADVANCE(1207);
      END_STATE();
    case 1330:
      if (lookahead == 'f') ADVANCE(1449);
      END_STATE();
    case 1331:
      if (lookahead == 'f') ADVANCE(1227);
      END_STATE();
    case 1332:
      if (lookahead == 'g') ADVANCE(1403);
      END_STATE();
    case 1333:
      if (lookahead == 'g') ADVANCE(1339);
      END_STATE();
    case 1334:
      if (lookahead == 'g') ADVANCE(1227);
      END_STATE();
    case 1335:
      if (lookahead == 'g') ADVANCE(1340);
      END_STATE();
    case 1336:
      if (lookahead == 'h') ADVANCE(1309);
      END_STATE();
    case 1337:
      if (lookahead == 'h') ADVANCE(1205);
      END_STATE();
    case 1338:
      if (lookahead == 'h') ADVANCE(1408);
      if (lookahead == 'q') ADVANCE(1496);
      END_STATE();
    case 1339:
      if (lookahead == 'h') ADVANCE(1475);
      END_STATE();
    case 1340:
      if (lookahead == 'h') ADVANCE(1482);
      END_STATE();
    case 1341:
      if (lookahead == 'h') ADVANCE(1203);
      END_STATE();
    case 1342:
      if (lookahead == 'h') ADVANCE(1214);
      END_STATE();
    case 1343:
      if (lookahead == 'h') ADVANCE(1240);
      END_STATE();
    case 1344:
      if (lookahead == 'h') ADVANCE(1220);
      END_STATE();
    case 1345:
      if (lookahead == 'h') ADVANCE(1221);
      END_STATE();
    case 1346:
      if (lookahead == 'h') ADVANCE(1227);
      END_STATE();
    case 1347:
      if (lookahead == 'h') ADVANCE(1226);
      END_STATE();
    case 1348:
      if (lookahead == 'h') ADVANCE(1233);
      END_STATE();
    case 1349:
      if (lookahead == 'h') ADVANCE(1239);
      END_STATE();
    case 1350:
      if (lookahead == 'h') ADVANCE(1316);
      END_STATE();
    case 1351:
      if (lookahead == 'h') ADVANCE(1318);
      END_STATE();
    case 1352:
      if (lookahead == 'h') ADVANCE(1319);
      END_STATE();
    case 1353:
      if (lookahead == 'h') ADVANCE(1321);
      END_STATE();
    case 1354:
      if (lookahead == 'h') ADVANCE(1320);
      END_STATE();
    case 1355:
      if (lookahead == 'h') ADVANCE(1322);
      END_STATE();
    case 1356:
      if (lookahead == 'h') ADVANCE(1323);
      END_STATE();
    case 1357:
      if (lookahead == 'i') ADVANCE(1333);
      END_STATE();
    case 1358:
      if (lookahead == 'i') ADVANCE(1438);
      END_STATE();
    case 1359:
      if (lookahead == 'i') ADVANCE(1332);
      if (lookahead == 'o') ADVANCE(1472);
      END_STATE();
    case 1360:
      if (lookahead == 'i') ADVANCE(1227);
      END_STATE();
    case 1361:
      if (lookahead == 'i') ADVANCE(1390);
      END_STATE();
    case 1362:
      if (lookahead == 'i') ADVANCE(1335);
      END_STATE();
    case 1363:
      if (lookahead == 'i') ADVANCE(1397);
      END_STATE();
    case 1364:
      if (lookahead == 'i') ADVANCE(1398);
      END_STATE();
    case 1365:
      if (lookahead == 'l') ADVANCE(1484);
      END_STATE();
    case 1366:
      if (lookahead == 'l') ADVANCE(1329);
      END_STATE();
    case 1367:
      if (lookahead == 'l') ADVANCE(1329);
      if (lookahead == 'r') ADVANCE(1438);
      END_STATE();
    case 1368:
      if (lookahead == 'l') ADVANCE(1259);
      if (lookahead == 'q') ADVANCE(1483);
      if (lookahead == 'r') ADVANCE(1259);
      END_STATE();
    case 1369:
      if (lookahead == 'l') ADVANCE(1206);
      END_STATE();
    case 1370:
      if (lookahead == 'l') ADVANCE(1273);
      END_STATE();
    case 1371:
      if (lookahead == 'l') ADVANCE(1314);
      END_STATE();
    case 1372:
      if (lookahead == 'l') ADVANCE(1227);
      END_STATE();
    case 1373:
      if (lookahead == 'l') ADVANCE(1227);
      if (lookahead == 'r') ADVANCE(1227);
      END_STATE();
    case 1374:
      if (lookahead == 'l') ADVANCE(1235);
      END_STATE();
    case 1375:
      if (lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 1376:
      if (lookahead == 'l') ADVANCE(1234);
      END_STATE();
    case 1377:
      if (lookahead == 'l') ADVANCE(1481);
      END_STATE();
    case 1378:
      if (lookahead == 'l') ADVANCE(1487);
      END_STATE();
    case 1379:
      if (lookahead == 'l') ADVANCE(1454);
      END_STATE();
    case 1380:
      if (lookahead == 'l') ADVANCE(1489);
      END_STATE();
    case 1381:
      if (lookahead == 'l') ADVANCE(1456);
      END_STATE();
    case 1382:
      if (lookahead == 'l') ADVANCE(1498);
      END_STATE();
    case 1383:
      if (lookahead == 'm') ADVANCE(1227);
      END_STATE();
    case 1384:
      if (lookahead == 'n') ADVANCE(1205);
      END_STATE();
    case 1385:
      if (lookahead == 'n') ADVANCE(1327);
      END_STATE();
    case 1386:
      if (lookahead == 'n') ADVANCE(1334);
      END_STATE();
    case 1387:
      if (lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 1388:
      if (lookahead == 'n') ADVANCE(1214);
      END_STATE();
    case 1389:
      if (lookahead == 'n') ADVANCE(1240);
      END_STATE();
    case 1390:
      if (lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 1391:
      if (lookahead == 'n') ADVANCE(1226);
      END_STATE();
    case 1392:
      if (lookahead == 'n') ADVANCE(1233);
      END_STATE();
    case 1393:
      if (lookahead == 'n') ADVANCE(1239);
      END_STATE();
    case 1394:
      if (lookahead == 'n') ADVANCE(1494);
      END_STATE();
    case 1395:
      if (lookahead == 'n') ADVANCE(1495);
      END_STATE();
    case 1396:
      if (lookahead == 'n') ADVANCE(1497);
      END_STATE();
    case 1397:
      if (lookahead == 'n') ADVANCE(1491);
      END_STATE();
    case 1398:
      if (lookahead == 'n') ADVANCE(1498);
      END_STATE();
    case 1399:
      if (lookahead == 'n') ADVANCE(1499);
      END_STATE();
    case 1400:
      if (lookahead == 'n') ADVANCE(1500);
      END_STATE();
    case 1401:
      if (lookahead == 'n') ADVANCE(1501);
      END_STATE();
    case 1402:
      if (lookahead == 'o') ADVANCE(1504);
      END_STATE();
    case 1403:
      if (lookahead == 'o') ADVANCE(1292);
      END_STATE();
    case 1404:
      if (lookahead == 'o') ADVANCE(1383);
      END_STATE();
    case 1405:
      if (lookahead == 'o') ADVANCE(1505);
      END_STATE();
    case 1406:
      if (lookahead == 'o') ADVANCE(1369);
      END_STATE();
    case 1407:
      if (lookahead == 'o') ADVANCE(1330);
      END_STATE();
    case 1408:
      if (lookahead == 'o') ADVANCE(1434);
      END_STATE();
    case 1409:
      if (lookahead == 'o') ADVANCE(1375);
      END_STATE();
    case 1410:
      if (lookahead == 'o') ADVANCE(1479);
      END_STATE();
    case 1411:
      if (lookahead == 'o') ADVANCE(1376);
      END_STATE();
    case 1412:
      if (lookahead == 'p') ADVANCE(1245);
      END_STATE();
    case 1413:
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 1414:
      if (lookahead == 'p') ADVANCE(1336);
      END_STATE();
    case 1415:
      if (lookahead == 'p') ADVANCE(1227);
      END_STATE();
    case 1416:
      if (lookahead == 'p') ADVANCE(1269);
      END_STATE();
    case 1417:
      if (lookahead == 'p') ADVANCE(1350);
      END_STATE();
    case 1418:
      if (lookahead == 'p') ADVANCE(1351);
      END_STATE();
    case 1419:
      if (lookahead == 'p') ADVANCE(1382);
      END_STATE();
    case 1420:
      if (lookahead == 'p') ADVANCE(1382);
      if (lookahead == 'q') ADVANCE(1488);
      if (lookahead == 'x') ADVANCE(1289);
      END_STATE();
    case 1421:
      if (lookahead == 'p') ADVANCE(1382);
      if (lookahead == 'u') ADVANCE(1373);
      END_STATE();
    case 1422:
      if (lookahead == 'p') ADVANCE(1352);
      END_STATE();
    case 1423:
      if (lookahead == 'p') ADVANCE(1353);
      END_STATE();
    case 1424:
      if (lookahead == 'p') ADVANCE(1354);
      END_STATE();
    case 1425:
      if (lookahead == 'p') ADVANCE(1355);
      END_STATE();
    case 1426:
      if (lookahead == 'p') ADVANCE(1356);
      END_STATE();
    case 1427:
      if (lookahead == 'q') ADVANCE(1503);
      END_STATE();
    case 1428:
      if (lookahead == 'r') ADVANCE(1250);
      END_STATE();
    case 1429:
      if (lookahead == 'r') ADVANCE(1230);
      END_STATE();
    case 1430:
      if (lookahead == 'r') ADVANCE(1252);
      END_STATE();
    case 1431:
      if (lookahead == 'r') ADVANCE(1438);
      END_STATE();
    case 1432:
      if (lookahead == 'r') ADVANCE(1360);
      END_STATE();
    case 1433:
      if (lookahead == 'r') ADVANCE(1415);
      END_STATE();
    case 1434:
      if (lookahead == 'r') ADVANCE(1476);
      END_STATE();
    case 1435:
      if (lookahead == 'r') ADVANCE(1314);
      END_STATE();
    case 1436:
      if (lookahead == 'r') ADVANCE(1439);
      END_STATE();
    case 1437:
      if (lookahead == 'r') ADVANCE(1429);
      END_STATE();
    case 1438:
      if (lookahead == 'r') ADVANCE(1227);
      END_STATE();
    case 1439:
      if (lookahead == 'r') ADVANCE(1405);
      END_STATE();
    case 1440:
      if (lookahead == 'r') ADVANCE(1331);
      END_STATE();
    case 1441:
      if (lookahead == 's') ADVANCE(1471);
      END_STATE();
    case 1442:
      if (lookahead == 's') ADVANCE(1337);
      END_STATE();
    case 1443:
      if (lookahead == 's') ADVANCE(1247);
      END_STATE();
    case 1444:
      if (lookahead == 's') ADVANCE(1225);
      END_STATE();
    case 1445:
      if (lookahead == 's') ADVANCE(1249);
      END_STATE();
    case 1446:
      if (lookahead == 's') ADVANCE(1202);
      END_STATE();
    case 1447:
      if (lookahead == 's') ADVANCE(1238);
      END_STATE();
    case 1448:
      if (lookahead == 's') ADVANCE(1205);
      END_STATE();
    case 1449:
      if (lookahead == 's') ADVANCE(1493);
      END_STATE();
    case 1450:
      if (lookahead == 's') ADVANCE(1201);
      END_STATE();
    case 1451:
      if (lookahead == 's') ADVANCE(1203);
      END_STATE();
    case 1452:
      if (lookahead == 's') ADVANCE(1240);
      END_STATE();
    case 1453:
      if (lookahead == 's') ADVANCE(1222);
      END_STATE();
    case 1454:
      if (lookahead == 's') ADVANCE(1227);
      END_STATE();
    case 1455:
      if (lookahead == 's') ADVANCE(1226);
      END_STATE();
    case 1456:
      if (lookahead == 's') ADVANCE(1241);
      END_STATE();
    case 1457:
      if (lookahead == 's') ADVANCE(1233);
      END_STATE();
    case 1458:
      if (lookahead == 's') ADVANCE(1239);
      END_STATE();
    case 1459:
      if (lookahead == 's') ADVANCE(1478);
      END_STATE();
    case 1460:
      if (lookahead == 's') ADVANCE(1341);
      END_STATE();
    case 1461:
      if (lookahead == 's') ADVANCE(1342);
      END_STATE();
    case 1462:
      if (lookahead == 's') ADVANCE(1480);
      END_STATE();
    case 1463:
      if (lookahead == 's') ADVANCE(1345);
      END_STATE();
    case 1464:
      if (lookahead == 's') ADVANCE(1479);
      END_STATE();
    case 1465:
      if (lookahead == 's') ADVANCE(1344);
      END_STATE();
    case 1466:
      if (lookahead == 's') ADVANCE(1343);
      END_STATE();
    case 1467:
      if (lookahead == 's') ADVANCE(1347);
      END_STATE();
    case 1468:
      if (lookahead == 's') ADVANCE(1346);
      END_STATE();
    case 1469:
      if (lookahead == 's') ADVANCE(1348);
      END_STATE();
    case 1470:
      if (lookahead == 's') ADVANCE(1349);
      END_STATE();
    case 1471:
      if (lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 1472:
      if (lookahead == 't') ADVANCE(1231);
      if (lookahead == 'x') ADVANCE(1421);
      END_STATE();
    case 1473:
      if (lookahead == 't') ADVANCE(1244);
      END_STATE();
    case 1474:
      if (lookahead == 't') ADVANCE(1270);
      END_STATE();
    case 1475:
      if (lookahead == 't') ADVANCE(1243);
      END_STATE();
    case 1476:
      if (lookahead == 't') ADVANCE(1246);
      END_STATE();
    case 1477:
      if (lookahead == 't') ADVANCE(1432);
      END_STATE();
    case 1478:
      if (lookahead == 't') ADVANCE(1213);
      END_STATE();
    case 1479:
      if (lookahead == 't') ADVANCE(1227);
      END_STATE();
    case 1480:
      if (lookahead == 't') ADVANCE(1235);
      END_STATE();
    case 1481:
      if (lookahead == 't') ADVANCE(1236);
      END_STATE();
    case 1482:
      if (lookahead == 't') ADVANCE(1269);
      END_STATE();
    case 1483:
      if (lookahead == 'u') ADVANCE(1228);
      END_STATE();
    case 1484:
      if (lookahead == 'u') ADVANCE(1446);
      END_STATE();
    case 1485:
      if (lookahead == 'u') ADVANCE(1324);
      END_STATE();
    case 1486:
      if (lookahead == 'u') ADVANCE(1448);
      END_STATE();
    case 1487:
      if (lookahead == 'u') ADVANCE(1450);
      END_STATE();
    case 1488:
      if (lookahead == 'u') ADVANCE(1271);
      END_STATE();
    case 1489:
      if (lookahead == 'u') ADVANCE(1443);
      END_STATE();
    case 1490:
      if (lookahead == 'u') ADVANCE(1444);
      END_STATE();
    case 1491:
      if (lookahead == 'u') ADVANCE(1445);
      END_STATE();
    case 1492:
      if (lookahead == 'u') ADVANCE(1447);
      END_STATE();
    case 1493:
      if (lookahead == 'u') ADVANCE(1440);
      END_STATE();
    case 1494:
      if (lookahead == 'u') ADVANCE(1451);
      END_STATE();
    case 1495:
      if (lookahead == 'u') ADVANCE(1453);
      END_STATE();
    case 1496:
      if (lookahead == 'u') ADVANCE(1272);
      END_STATE();
    case 1497:
      if (lookahead == 'u') ADVANCE(1452);
      END_STATE();
    case 1498:
      if (lookahead == 'u') ADVANCE(1454);
      END_STATE();
    case 1499:
      if (lookahead == 'u') ADVANCE(1455);
      END_STATE();
    case 1500:
      if (lookahead == 'u') ADVANCE(1457);
      END_STATE();
    case 1501:
      if (lookahead == 'u') ADVANCE(1458);
      END_STATE();
    case 1502:
      if (lookahead == 'u') ADVANCE(1325);
      END_STATE();
    case 1503:
      if (lookahead == 'u') ADVANCE(1285);
      END_STATE();
    case 1504:
      if (lookahead == 'w') ADVANCE(1284);
      END_STATE();
    case 1505:
      if (lookahead == 'w') ADVANCE(1227);
      END_STATE();
    case 1506:
      if (lookahead == 'x') ADVANCE(1288);
      END_STATE();
    case 1507:
      if (lookahead == 'y') ADVANCE(1417);
      END_STATE();
    case 1508:
      if (lookahead == 'y') ADVANCE(1418);
      END_STATE();
    case 1509:
      if (lookahead == 'y') ADVANCE(1422);
      END_STATE();
    case 1510:
      if (lookahead == 'y') ADVANCE(1424);
      END_STATE();
    case 1511:
      if (lookahead == 'y') ADVANCE(1425);
      END_STATE();
    case 1512:
      if (lookahead == 65038) ADVANCE(1616);
      END_STATE();
    case 1513:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1514)
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1514:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1514)
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1515:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1542);
      END_STATE();
    case 1516:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1227);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1227);
      END_STATE();
    case 1517:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1227);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1227);
      END_STATE();
    case 1518:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1216);
      END_STATE();
    case 1519:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1227);
      END_STATE();
    case 1520:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1232);
      END_STATE();
    case 1521:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1234);
      END_STATE();
    case 1522:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1227);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1227);
      END_STATE();
    case 1523:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1236);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1241);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1235);
      END_STATE();
    case 1524:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1202);
      END_STATE();
    case 1525:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1207);
      END_STATE();
    case 1526:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1201);
      END_STATE();
    case 1527:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1209);
      END_STATE();
    case 1528:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1227);
      END_STATE();
    case 1529:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1224);
      END_STATE();
    case 1530:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1237);
      END_STATE();
    case 1531:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 1532:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1524);
      END_STATE();
    case 1533:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1526);
      END_STATE();
    case 1534:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 1535:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1528);
      END_STATE();
    case 1536:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 1537:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1171);
      END_STATE();
    case 1538:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1227);
      END_STATE();
    case 1539:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1175);
      END_STATE();
    case 1540:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1177);
      END_STATE();
    case 1541:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1627);
      END_STATE();
    case 1542:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1541);
      END_STATE();
    case 1543:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1626);
      END_STATE();
    case 1544:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1623);
      END_STATE();
    case 1545:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1627);
      END_STATE();
    case 1546:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1651);
      END_STATE();
    case 1547:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1579);
      END_STATE();
    case 1548:
      if (eof) ADVANCE(1556);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '#') ADVANCE(1632);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1631);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1609);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1598);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1602);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1597);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1549:
      if (eof) ADVANCE(1556);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '#') ADVANCE(1632);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1631);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1607);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1550:
      if (eof) ADVANCE(1556);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(798);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '#') ADVANCE(1632);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1631);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1621);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1607);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1609);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1598);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1602);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1597);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1551:
      if (eof) ADVANCE(1556);
      if (lookahead == '\n') ADVANCE(1566);
      if (lookahead == '\r') ADVANCE(809);
      if (lookahead == '!') ADVANCE(1642);
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1581);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(15);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1640);
      if (lookahead == '0') ADVANCE(1678);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(1641);
      if (lookahead == '?') ADVANCE(1642);
      if (lookahead == '@') ADVANCE(1619);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1602);
      if (lookahead == 'O') ADVANCE(1673);
      if (lookahead == 'P') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1601);
      if (lookahead == 'T') ADVANCE(306);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(555);
      if (lookahead == '[') ADVANCE(1572);
      if (('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h')) ADVANCE(1593);
      if (lookahead == 'e') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1682);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '{') ADVANCE(1584);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1644);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 9817) ADVANCE(1615);
      if (lookahead == 9823) ADVANCE(529);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1552:
      if (eof) ADVANCE(1556);
      if (lookahead == '\n') ADVANCE(819);
      if (lookahead == '\r') ADVANCE(810);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1701);
      if (lookahead == '0') ADVANCE(1677);
      if (lookahead == '1') ADVANCE(1653);
      if (lookahead == 'O') ADVANCE(1674);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == 'o') ADVANCE(1683);
      if (lookahead == 189) ADVANCE(1697);
      if (lookahead == 1645) ADVANCE(1717);
      if (lookahead == 8270) ADVANCE(1713);
      if (lookahead == 8727) ADVANCE(1705);
      if (lookahead == 10033) ADVANCE(1709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1553:
      if (eof) ADVANCE(1556);
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(822);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(822);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1554:
      if (eof) ADVANCE(1556);
      if (lookahead == '"') ADVANCE(1574);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1562);
      if (lookahead == '&') ADVANCE(840);
      if (lookahead == '(') ADVANCE(1580);
      if (lookahead == ')') ADVANCE(1582);
      if (lookahead == '*') ADVANCE(1700);
      if (lookahead == '-') ADVANCE(1656);
      if (lookahead == '/') ADVANCE(1685);
      if (lookahead == '0') ADVANCE(1679);
      if (lookahead == '1') ADVANCE(1652);
      if (lookahead == '2') ADVANCE(1695);
      if (lookahead == '@') ADVANCE(1618);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1600);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1611);
      if (lookahead == '[') ADVANCE(1571);
      if (lookahead == ']') ADVANCE(1573);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1591);
      if (lookahead == 'o') ADVANCE(1684);
      if (lookahead == '{') ADVANCE(1583);
      if (lookahead == '}') ADVANCE(1585);
      if (lookahead == 189) ADVANCE(1696);
      if (lookahead == 1645) ADVANCE(1716);
      if (lookahead == 8208) ADVANCE(1660);
      if (lookahead == 8209) ADVANCE(1662);
      if (lookahead == 8210) ADVANCE(1664);
      if (lookahead == 8211) ADVANCE(1666);
      if (lookahead == 8212) ADVANCE(1668);
      if (lookahead == 8260) ADVANCE(1689);
      if (lookahead == 8270) ADVANCE(1712);
      if (lookahead == 8722) ADVANCE(1658);
      if (lookahead == 8725) ADVANCE(1687);
      if (lookahead == 8727) ADVANCE(1704);
      if (lookahead == 9817) ADVANCE(1614);
      if (lookahead == 9823) ADVANCE(1512);
      if (lookahead == 10033) ADVANCE(1708);
      if (lookahead == 10134) ADVANCE(1670);
      if (lookahead == 10187) ADVANCE(1691);
      if (lookahead == 10744) ADVANCE(1693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1554)
      END_STATE();
    case 1555:
      if (eof) ADVANCE(1556);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead == '[') ADVANCE(1572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1555)
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1557);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(806);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1558);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1559);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(812);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1560);
      if (lookahead == '\r') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1564);
      if (lookahead == '\r') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(820);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1565);
      if (lookahead == '\r') ADVANCE(822);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(822);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1560);
      if (lookahead == '\r') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1568);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(861);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_double_quote);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1575);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1576);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1576);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1578);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1578);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token2);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1586);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1589);
      if (lookahead == '\r') ADVANCE(1588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1587);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1589);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1590);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1590);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1590);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == 'p') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(1413);
      if (lookahead == 'p') ADVANCE(1635);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(1635);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1648);
      if (lookahead == '\r') ADVANCE(1636);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(1635);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1635);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '=') ADVANCE(1635);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1542);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1644);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1629);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(16);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      if (lookahead == '&') ADVANCE(839);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1635);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1627);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(857);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(557);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(848);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1544);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1632);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1644);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(18);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(834);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1630);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(843);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1630);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1635);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(858);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1644);
      if (lookahead == '-') ADVANCE(1628);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(16);
      if ((8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1629);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1644);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1629);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(16);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1644);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1643);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(839);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1635);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1627);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(857);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(837);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(838);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(861);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(1635);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1635);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1651);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(863);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '.') ADVANCE(1587);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(556);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(835);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(863);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(556);
      if (lookahead == '.') ADVANCE(1587);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(803);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(835);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(835);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      if (lookahead == '.') ADVANCE(1590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(556);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(835);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1543);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_15);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_16);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_17);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_18);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1555},
  [2] = {.lex_state = 1549},
  [3] = {.lex_state = 1549},
  [4] = {.lex_state = 808},
  [5] = {.lex_state = 828},
  [6] = {.lex_state = 1550},
  [7] = {.lex_state = 1550},
  [8] = {.lex_state = 1548},
  [9] = {.lex_state = 1548},
  [10] = {.lex_state = 1548},
  [11] = {.lex_state = 1549},
  [12] = {.lex_state = 1549},
  [13] = {.lex_state = 1549},
  [14] = {.lex_state = 1549},
  [15] = {.lex_state = 1549},
  [16] = {.lex_state = 1551},
  [17] = {.lex_state = 1549},
  [18] = {.lex_state = 1549},
  [19] = {.lex_state = 1549},
  [20] = {.lex_state = 1549},
  [21] = {.lex_state = 808},
  [22] = {.lex_state = 1549},
  [23] = {.lex_state = 1549},
  [24] = {.lex_state = 808},
  [25] = {.lex_state = 1549},
  [26] = {.lex_state = 1549},
  [27] = {.lex_state = 1549},
  [28] = {.lex_state = 1549},
  [29] = {.lex_state = 808},
  [30] = {.lex_state = 1549},
  [31] = {.lex_state = 1549},
  [32] = {.lex_state = 1549},
  [33] = {.lex_state = 1549},
  [34] = {.lex_state = 1549},
  [35] = {.lex_state = 1549},
  [36] = {.lex_state = 1549},
  [37] = {.lex_state = 1549},
  [38] = {.lex_state = 1549},
  [39] = {.lex_state = 1549},
  [40] = {.lex_state = 1549},
  [41] = {.lex_state = 1549},
  [42] = {.lex_state = 816},
  [43] = {.lex_state = 808},
  [44] = {.lex_state = 808},
  [45] = {.lex_state = 808},
  [46] = {.lex_state = 808},
  [47] = {.lex_state = 828},
  [48] = {.lex_state = 828},
  [49] = {.lex_state = 828},
  [50] = {.lex_state = 828},
  [51] = {.lex_state = 856},
  [52] = {.lex_state = 1552},
  [53] = {.lex_state = 1552},
  [54] = {.lex_state = 826},
  [55] = {.lex_state = 826},
  [56] = {.lex_state = 827},
  [57] = {.lex_state = 827},
  [58] = {.lex_state = 827},
  [59] = {.lex_state = 828},
  [60] = {.lex_state = 856},
  [61] = {.lex_state = 856},
  [62] = {.lex_state = 856},
  [63] = {.lex_state = 828},
  [64] = {.lex_state = 828},
  [65] = {.lex_state = 828},
  [66] = {.lex_state = 828},
  [67] = {.lex_state = 828},
  [68] = {.lex_state = 828},
  [69] = {.lex_state = 828},
  [70] = {.lex_state = 821},
  [71] = {.lex_state = 828},
  [72] = {.lex_state = 828},
  [73] = {.lex_state = 828},
  [74] = {.lex_state = 828},
  [75] = {.lex_state = 828},
  [76] = {.lex_state = 828},
  [77] = {.lex_state = 828},
  [78] = {.lex_state = 828},
  [79] = {.lex_state = 828},
  [80] = {.lex_state = 828},
  [81] = {.lex_state = 828},
  [82] = {.lex_state = 828},
  [83] = {.lex_state = 828},
  [84] = {.lex_state = 828},
  [85] = {.lex_state = 828},
  [86] = {.lex_state = 828},
  [87] = {.lex_state = 828},
  [88] = {.lex_state = 828},
  [89] = {.lex_state = 828},
  [90] = {.lex_state = 1555},
  [91] = {.lex_state = 1555},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1555},
  [94] = {.lex_state = 1555},
  [95] = {.lex_state = 1549},
  [96] = {.lex_state = 1555},
  [97] = {.lex_state = 856},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1553},
  [100] = {.lex_state = 856},
  [101] = {.lex_state = 1549},
  [102] = {.lex_state = 1549},
  [103] = {.lex_state = 1549},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 831},
  [106] = {.lex_state = 1549},
  [107] = {.lex_state = 1549},
  [108] = {.lex_state = 1549},
  [109] = {.lex_state = 1555},
  [110] = {.lex_state = 1555},
  [111] = {.lex_state = 831},
  [112] = {.lex_state = 1555},
  [113] = {.lex_state = 856},
  [114] = {.lex_state = 1553},
  [115] = {.lex_state = 1555},
  [116] = {.lex_state = 1555},
  [117] = {.lex_state = 1555},
  [118] = {.lex_state = 1555},
  [119] = {.lex_state = 1555},
  [120] = {.lex_state = 831},
  [121] = {.lex_state = 856},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1555},
  [124] = {.lex_state = 1555},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1555},
  [128] = {.lex_state = 856},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
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
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 856},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 856},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 825},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 947},
  [152] = {.lex_state = 947},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 856},
  [155] = {.lex_state = 1568},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 947},
  [158] = {.lex_state = 1586},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 947},
  [166] = {.lex_state = 856},
  [167] = {.lex_state = 1568},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1568},
  [172] = {.lex_state = 856},
  [173] = {.lex_state = 1568},
  [174] = {.lex_state = 856},
  [175] = {.lex_state = 1568},
  [176] = {.lex_state = 1586},
  [177] = {.lex_state = 0},
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
    [sym_series_of_games] = STATE(153),
    [sym_game] = STATE(115),
    [sym_freestanding_comment] = STATE(98),
    [sym_rest_of_line_comment] = STATE(94),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(29),
    [aux_sym_series_of_games_repeat1] = STATE(91),
    [aux_sym_freestanding_comment_repeat1] = STATE(94),
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
    STATE(27), 1,
      sym__lan_move_by_coordinates,
    STATE(31), 1,
      sym_san_move,
    STATE(32), 1,
      sym_lan_move,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(31), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    STATE(34), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(27), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(13), 5,
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
    STATE(27), 1,
      sym__lan_move_by_coordinates,
    STATE(31), 1,
      sym_san_move,
    STATE(32), 1,
      sym_lan_move,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(63), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    STATE(34), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(57), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(13), 5,
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
    STATE(27), 1,
      sym__lan_move_by_coordinates,
    STATE(31), 1,
      sym_san_move,
    STATE(32), 1,
      sym_lan_move,
    STATE(52), 1,
      sym_movetext,
    STATE(103), 1,
      sym_result_code,
    ACTIONS(31), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(75), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    STATE(34), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(27), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(13), 5,
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
    STATE(27), 1,
      sym__lan_move_by_coordinates,
    STATE(31), 1,
      sym_san_move,
    STATE(32), 1,
      sym_lan_move,
    STATE(53), 1,
      sym_movetext,
    STATE(106), 1,
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
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    STATE(34), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(13), 5,
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
    STATE(28), 1,
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
    STATE(18), 1,
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
    STATE(12), 1,
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
  [560] = 2,
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
  [601] = 4,
    ACTIONS(123), 1,
      sym__san_capture_symbol,
    STATE(19), 1,
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
  [685] = 3,
    ACTIONS(133), 1,
      sym_check_or_mate_condition,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(131), 31,
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
  [726] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(137), 32,
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
  [765] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(141), 32,
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
  [804] = 3,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(145), 32,
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
  [845] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(151), 32,
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
  [884] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(155), 32,
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
  [923] = 2,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(159), 32,
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
  [962] = 2,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(163), 32,
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
  [1001] = 7,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(165), 1,
      sym__empty_line,
    ACTIONS(167), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(24), 1,
      aux_sym_header_repeat1,
    STATE(43), 1,
      sym_rest_of_line_comment,
    STATE(44), 1,
      sym_tagpair,
    ACTIONS(169), 28,
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
  [1050] = 2,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(173), 32,
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
  [1089] = 2,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(177), 32,
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
  [1128] = 7,
    ACTIONS(179), 1,
      sym__empty_line,
    ACTIONS(181), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(184), 1,
      sym_tagpair_delimiter_open,
    STATE(24), 1,
      aux_sym_header_repeat1,
    STATE(43), 1,
      sym_rest_of_line_comment,
    STATE(44), 1,
      sym_tagpair,
    ACTIONS(187), 28,
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
  [1177] = 2,
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
  [1216] = 2,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(191), 32,
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
  [1255] = 3,
    ACTIONS(197), 1,
      sym_check_or_mate_condition,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(195), 31,
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
  [1296] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(201), 32,
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
  [1335] = 7,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(167), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(203), 1,
      sym__empty_line,
    STATE(21), 1,
      aux_sym_header_repeat1,
    STATE(43), 1,
      sym_rest_of_line_comment,
    STATE(44), 1,
      sym_tagpair,
    ACTIONS(205), 28,
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
  [1384] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(209), 31,
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
  [1422] = 2,
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
  [1460] = 2,
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
  [1498] = 2,
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
  [1536] = 2,
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
  [1574] = 2,
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
  [1612] = 2,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(233), 31,
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
  [1650] = 2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(237), 31,
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
  [1688] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(241), 31,
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
  [1726] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(245), 31,
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
  [1764] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(249), 31,
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
  [1802] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(253), 31,
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
  [1840] = 2,
    ACTIONS(255), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(145), 31,
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
  [1877] = 2,
    ACTIONS(257), 1,
      sym__empty_line,
    ACTIONS(259), 30,
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
  [1913] = 2,
    ACTIONS(261), 1,
      sym__empty_line,
    ACTIONS(263), 30,
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
  [1949] = 2,
    ACTIONS(247), 1,
      sym__empty_line,
    ACTIONS(249), 30,
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
  [1985] = 2,
    ACTIONS(265), 1,
      sym__empty_line,
    ACTIONS(267), 30,
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
  [2021] = 21,
    ACTIONS(269), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(271), 1,
      sym_variation_delimiter_open,
    ACTIONS(273), 1,
      sym_variation_delimiter_close,
    ACTIONS(275), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(277), 1,
      sym_move_number,
    ACTIONS(279), 1,
      sym__san_file,
    ACTIONS(281), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(283), 1,
      anon_sym_P,
    ACTIONS(287), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      sym_annotation,
    STATE(50), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(54), 1,
      sym__san_square,
    STATE(66), 1,
      sym__lan_move_by_coordinates,
    STATE(86), 1,
      sym_lan_move,
    STATE(87), 1,
      sym_san_move,
    STATE(170), 1,
      sym_variation_movetext,
    ACTIONS(285), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(289), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(80), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(82), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(64), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2093] = 21,
    ACTIONS(269), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(271), 1,
      sym_variation_delimiter_open,
    ACTIONS(275), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(277), 1,
      sym_move_number,
    ACTIONS(279), 1,
      sym__san_file,
    ACTIONS(281), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(283), 1,
      anon_sym_P,
    ACTIONS(287), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      sym_annotation,
    ACTIONS(293), 1,
      sym_variation_delimiter_close,
    STATE(50), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(54), 1,
      sym__san_square,
    STATE(66), 1,
      sym__lan_move_by_coordinates,
    STATE(86), 1,
      sym_lan_move,
    STATE(87), 1,
      sym_san_move,
    STATE(161), 1,
      sym_variation_movetext,
    ACTIONS(285), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(289), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(80), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(82), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(64), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2165] = 20,
    ACTIONS(295), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(298), 1,
      sym_variation_delimiter_open,
    ACTIONS(301), 1,
      sym_variation_delimiter_close,
    ACTIONS(303), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(306), 1,
      sym_move_number,
    ACTIONS(309), 1,
      sym__san_file,
    ACTIONS(312), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(315), 1,
      anon_sym_P,
    ACTIONS(321), 1,
      anon_sym_AT,
    ACTIONS(327), 1,
      sym_annotation,
    STATE(49), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(54), 1,
      sym__san_square,
    STATE(66), 1,
      sym__lan_move_by_coordinates,
    STATE(86), 1,
      sym_lan_move,
    STATE(87), 1,
      sym_san_move,
    ACTIONS(318), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(324), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(80), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(82), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(64), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2234] = 20,
    ACTIONS(269), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(271), 1,
      sym_variation_delimiter_open,
    ACTIONS(275), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(277), 1,
      sym_move_number,
    ACTIONS(279), 1,
      sym__san_file,
    ACTIONS(281), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(283), 1,
      anon_sym_P,
    ACTIONS(287), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      sym_annotation,
    ACTIONS(330), 1,
      sym_variation_delimiter_close,
    STATE(49), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(54), 1,
      sym__san_square,
    STATE(66), 1,
      sym__lan_move_by_coordinates,
    STATE(86), 1,
      sym_lan_move,
    STATE(87), 1,
      sym_san_move,
    ACTIONS(285), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(289), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(80), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(82), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(64), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2303] = 2,
    ACTIONS(334), 10,
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
    ACTIONS(332), 16,
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
  [2334] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 1,
      sym__empty_line,
    STATE(107), 1,
      sym_result_code,
    ACTIONS(75), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(340), 3,
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
  [2373] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      sym__empty_line,
    STATE(95), 1,
      sym_result_code,
    ACTIONS(75), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(346), 3,
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
  [2412] = 7,
    ACTIONS(348), 1,
      sym__san_promotable_piece,
    ACTIONS(350), 1,
      sym__san_capture_symbol,
    ACTIONS(352), 1,
      sym__san_promotion_symbol,
    ACTIONS(354), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(68), 1,
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
  [2447] = 2,
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
  [2471] = 5,
    ACTIONS(352), 1,
      sym__san_promotion_symbol,
    ACTIONS(356), 1,
      sym__san_promotable_piece,
    STATE(72), 1,
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
  [2500] = 5,
    ACTIONS(352), 1,
      sym__san_promotion_symbol,
    ACTIONS(358), 1,
      sym__san_promotable_piece,
    STATE(63), 1,
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
  [2529] = 2,
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
  [2551] = 4,
    ACTIONS(360), 1,
      sym__san_capture_symbol,
    STATE(74), 1,
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
  [2577] = 1,
    ACTIONS(362), 16,
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
  [2596] = 1,
    ACTIONS(364), 16,
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
  [2615] = 1,
    ACTIONS(366), 16,
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
  [2634] = 2,
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
  [2654] = 3,
    ACTIONS(368), 1,
      sym_check_or_mate_condition,
    ACTIONS(131), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
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
  [2676] = 2,
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
  [2696] = 3,
    ACTIONS(370), 1,
      sym_check_or_mate_condition,
    ACTIONS(195), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(193), 10,
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
  [2718] = 2,
    ACTIONS(141), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(139), 10,
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
  [2738] = 2,
    ACTIONS(201), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(199), 10,
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
  [2758] = 2,
    ACTIONS(163), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(161), 10,
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
  [2778] = 2,
    ACTIONS(372), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(145), 14,
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
  [2798] = 2,
    ACTIONS(151), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(149), 10,
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
  [2818] = 2,
    ACTIONS(155), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(153), 10,
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
  [2838] = 2,
    ACTIONS(191), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(189), 10,
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
  [2858] = 2,
    ACTIONS(159), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(157), 10,
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
  [2878] = 2,
    ACTIONS(137), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(135), 10,
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
  [2898] = 2,
    ACTIONS(173), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(171), 10,
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
  [2918] = 2,
    ACTIONS(177), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(175), 10,
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
  [2938] = 2,
    ACTIONS(376), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(374), 10,
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
  [2957] = 2,
    ACTIONS(380), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(378), 10,
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
  [2976] = 2,
    ACTIONS(384), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(382), 10,
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
  [2995] = 2,
    ACTIONS(233), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(231), 10,
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
  [3014] = 2,
    ACTIONS(388), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(386), 10,
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
  [3033] = 2,
    ACTIONS(245), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(243), 10,
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
  [3052] = 2,
    ACTIONS(392), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(390), 10,
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
  [3071] = 2,
    ACTIONS(249), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(247), 10,
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
  [3090] = 2,
    ACTIONS(396), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(394), 10,
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
  [3109] = 2,
    ACTIONS(400), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(398), 10,
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
  [3128] = 2,
    ACTIONS(404), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(402), 10,
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
  [3147] = 2,
    ACTIONS(229), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(227), 10,
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
  [3166] = 10,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(411), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(414), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(29), 1,
      sym_tagpair,
    STATE(90), 1,
      aux_sym_series_of_games_repeat1,
    STATE(115), 1,
      sym_game,
    STATE(122), 1,
      sym_freestanding_comment,
    STATE(109), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3198] = 10,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(29), 1,
      sym_tagpair,
    STATE(90), 1,
      aux_sym_series_of_games_repeat1,
    STATE(104), 1,
      sym_freestanding_comment,
    STATE(115), 1,
      sym_game,
    STATE(94), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3230] = 1,
    ACTIONS(419), 10,
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
  [3243] = 5,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(426), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(429), 1,
      sym_tagpair_delimiter_open,
    STATE(93), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3260] = 5,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(435), 1,
      sym_tagpair_delimiter_open,
    STATE(93), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3277] = 3,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 1,
      sym__empty_line,
    ACTIONS(441), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3289] = 4,
    ACTIONS(429), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(443), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(446), 1,
      sym_old_style_twic_section_comment,
    STATE(96), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3303] = 5,
    ACTIONS(449), 1,
      sym__san_file,
    ACTIONS(451), 1,
      sym__san_rank,
    ACTIONS(453), 1,
      sym__san_capture_symbol,
    ACTIONS(455), 1,
      anon_sym_AT,
    STATE(75), 1,
      sym__san_square,
  [3319] = 5,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(29), 1,
      sym_tagpair,
    STATE(118), 1,
      sym_game,
  [3335] = 3,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(145), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3347] = 5,
    ACTIONS(463), 1,
      sym__san_file,
    ACTIONS(465), 1,
      sym__san_rank,
    ACTIONS(467), 1,
      sym__san_capture_symbol,
    ACTIONS(469), 1,
      anon_sym_AT,
    STATE(14), 1,
      sym__san_square,
  [3363] = 2,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(473), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3373] = 2,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(477), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3383] = 3,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 1,
      sym__empty_line,
    ACTIONS(483), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3395] = 5,
    ACTIONS(459), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(29), 1,
      sym_tagpair,
    STATE(118), 1,
      sym_game,
  [3411] = 4,
    ACTIONS(487), 1,
      sym_double_quote,
    STATE(120), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(150), 1,
      sym_tagpair_value_contents,
    ACTIONS(489), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [3425] = 3,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 1,
      sym__empty_line,
    ACTIONS(495), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3437] = 3,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 1,
      sym__empty_line,
    ACTIONS(501), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3449] = 2,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(505), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3459] = 4,
    ACTIONS(435), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(507), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(509), 1,
      sym_old_style_twic_section_comment,
    STATE(96), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [3473] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(249), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3482] = 3,
    ACTIONS(511), 1,
      sym_double_quote,
    STATE(111), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(513), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [3493] = 2,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(518), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3502] = 4,
    ACTIONS(520), 1,
      sym__san_file,
    ACTIONS(522), 1,
      sym__san_rank,
    ACTIONS(524), 1,
      sym__san_capture_symbol,
    STATE(73), 1,
      sym__san_square,
  [3515] = 2,
    ACTIONS(526), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(145), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [3524] = 2,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(530), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3533] = 2,
    ACTIONS(532), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(534), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3542] = 2,
    ACTIONS(536), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(538), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3551] = 2,
    ACTIONS(540), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(542), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3560] = 2,
    ACTIONS(544), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(546), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3569] = 3,
    ACTIONS(548), 1,
      sym_double_quote,
    STATE(111), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(550), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [3580] = 4,
    ACTIONS(552), 1,
      sym__san_file,
    ACTIONS(554), 1,
      sym__san_rank,
    ACTIONS(556), 1,
      sym__san_capture_symbol,
    STATE(26), 1,
      sym__san_square,
  [3593] = 4,
    ACTIONS(459), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(29), 1,
      sym_tagpair,
    STATE(118), 1,
      sym_game,
  [3606] = 2,
    ACTIONS(558), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(560), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3615] = 2,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(564), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3624] = 3,
    ACTIONS(552), 1,
      sym__san_file,
    ACTIONS(556), 1,
      sym__san_capture_symbol,
    STATE(26), 1,
      sym__san_square,
  [3634] = 3,
    ACTIONS(520), 1,
      sym__san_file,
    ACTIONS(524), 1,
      sym__san_capture_symbol,
    STATE(73), 1,
      sym__san_square,
  [3644] = 2,
    ACTIONS(247), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(249), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3652] = 1,
    ACTIONS(566), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [3658] = 2,
    ACTIONS(568), 1,
      sym__san_file,
    STATE(57), 1,
      sym__san_square,
  [3665] = 2,
    ACTIONS(570), 1,
      sym__san_file,
    STATE(8), 1,
      sym__san_square,
  [3672] = 2,
    ACTIONS(552), 1,
      sym__san_file,
    STATE(20), 1,
      sym__san_square,
  [3679] = 2,
    ACTIONS(552), 1,
      sym__san_file,
    STATE(22), 1,
      sym__san_square,
  [3686] = 2,
    ACTIONS(552), 1,
      sym__san_file,
    STATE(26), 1,
      sym__san_square,
  [3693] = 2,
    ACTIONS(570), 1,
      sym__san_file,
    STATE(9), 1,
      sym__san_square,
  [3700] = 2,
    ACTIONS(520), 1,
      sym__san_file,
    STATE(71), 1,
      sym__san_square,
  [3707] = 2,
    ACTIONS(520), 1,
      sym__san_file,
    STATE(74), 1,
      sym__san_square,
  [3714] = 2,
    ACTIONS(568), 1,
      sym__san_file,
    STATE(56), 1,
      sym__san_square,
  [3721] = 2,
    ACTIONS(520), 1,
      sym__san_file,
    STATE(69), 1,
      sym__san_square,
  [3728] = 2,
    ACTIONS(520), 1,
      sym__san_file,
    STATE(76), 1,
      sym__san_square,
  [3735] = 2,
    ACTIONS(520), 1,
      sym__san_file,
    STATE(73), 1,
      sym__san_square,
  [3742] = 2,
    ACTIONS(552), 1,
      sym__san_file,
    STATE(15), 1,
      sym__san_square,
  [3749] = 2,
    ACTIONS(552), 1,
      sym__san_file,
    STATE(17), 1,
      sym__san_square,
  [3756] = 2,
    ACTIONS(520), 1,
      sym__san_file,
    STATE(67), 1,
      sym__san_square,
  [3763] = 2,
    ACTIONS(572), 1,
      sym__san_rank,
    ACTIONS(574), 1,
      sym__san_capture_symbol,
  [3770] = 2,
    ACTIONS(552), 1,
      sym__san_file,
    STATE(19), 1,
      sym__san_square,
  [3777] = 2,
    ACTIONS(576), 1,
      sym__san_rank,
    ACTIONS(578), 1,
      sym__san_capture_symbol,
  [3784] = 2,
    ACTIONS(580), 1,
      sym_double_quote,
    STATE(169), 1,
      sym__tagpair_value,
  [3791] = 1,
    ACTIONS(566), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
  [3796] = 1,
    ACTIONS(582), 1,
      sym_tagpair_key,
  [3800] = 1,
    ACTIONS(584), 1,
      sym_double_quote,
  [3804] = 1,
    ACTIONS(586), 1,
      anon_sym_22,
  [3808] = 1,
    ACTIONS(588), 1,
      anon_sym_1,
  [3812] = 1,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
  [3816] = 1,
    ACTIONS(592), 1,
      sym__san_rank,
  [3820] = 1,
    ACTIONS(594), 1,
      sym_rest_of_line_comment_text,
  [3824] = 1,
    ACTIONS(596), 1,
      sym_inline_comment_delimiter_close,
  [3828] = 1,
    ACTIONS(566), 1,
      anon_sym_1,
  [3832] = 1,
    ACTIONS(598), 1,
      sym_inline_comment_text,
  [3836] = 1,
    ACTIONS(600), 1,
      sym_inline_comment_delimiter_close,
  [3840] = 1,
    ACTIONS(602), 1,
      sym_tagpair_delimiter_close,
  [3844] = 1,
    ACTIONS(604), 1,
      sym_variation_delimiter_close,
  [3848] = 1,
    ACTIONS(606), 1,
      sym__san_promotable_piece,
  [3852] = 1,
    ACTIONS(608), 1,
      anon_sym_AT,
  [3856] = 1,
    ACTIONS(610), 1,
      sym_tagpair_delimiter_close,
  [3860] = 1,
    ACTIONS(612), 1,
      anon_sym_22,
  [3864] = 1,
    ACTIONS(614), 1,
      sym__san_rank,
  [3868] = 1,
    ACTIONS(616), 1,
      sym_rest_of_line_comment_text,
  [3872] = 1,
    ACTIONS(618), 1,
      sym__san_promotable_piece,
  [3876] = 1,
    ACTIONS(620), 1,
      sym_tagpair_delimiter_close,
  [3880] = 1,
    ACTIONS(622), 1,
      sym_variation_delimiter_close,
  [3884] = 1,
    ACTIONS(624), 1,
      sym_rest_of_line_comment_text,
  [3888] = 1,
    ACTIONS(626), 1,
      sym__san_rank,
  [3892] = 1,
    ACTIONS(628), 1,
      sym_rest_of_line_comment_text,
  [3896] = 1,
    ACTIONS(630), 1,
      sym__san_rank,
  [3900] = 1,
    ACTIONS(632), 1,
      sym_rest_of_line_comment_text,
  [3904] = 1,
    ACTIONS(634), 1,
      sym_inline_comment_text,
  [3908] = 1,
    ACTIONS(636), 1,
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
  [SMALL_STATE(11)] = 601,
  [SMALL_STATE(12)] = 646,
  [SMALL_STATE(13)] = 685,
  [SMALL_STATE(14)] = 726,
  [SMALL_STATE(15)] = 765,
  [SMALL_STATE(16)] = 804,
  [SMALL_STATE(17)] = 845,
  [SMALL_STATE(18)] = 884,
  [SMALL_STATE(19)] = 923,
  [SMALL_STATE(20)] = 962,
  [SMALL_STATE(21)] = 1001,
  [SMALL_STATE(22)] = 1050,
  [SMALL_STATE(23)] = 1089,
  [SMALL_STATE(24)] = 1128,
  [SMALL_STATE(25)] = 1177,
  [SMALL_STATE(26)] = 1216,
  [SMALL_STATE(27)] = 1255,
  [SMALL_STATE(28)] = 1296,
  [SMALL_STATE(29)] = 1335,
  [SMALL_STATE(30)] = 1384,
  [SMALL_STATE(31)] = 1422,
  [SMALL_STATE(32)] = 1460,
  [SMALL_STATE(33)] = 1498,
  [SMALL_STATE(34)] = 1536,
  [SMALL_STATE(35)] = 1574,
  [SMALL_STATE(36)] = 1612,
  [SMALL_STATE(37)] = 1650,
  [SMALL_STATE(38)] = 1688,
  [SMALL_STATE(39)] = 1726,
  [SMALL_STATE(40)] = 1764,
  [SMALL_STATE(41)] = 1802,
  [SMALL_STATE(42)] = 1840,
  [SMALL_STATE(43)] = 1877,
  [SMALL_STATE(44)] = 1913,
  [SMALL_STATE(45)] = 1949,
  [SMALL_STATE(46)] = 1985,
  [SMALL_STATE(47)] = 2021,
  [SMALL_STATE(48)] = 2093,
  [SMALL_STATE(49)] = 2165,
  [SMALL_STATE(50)] = 2234,
  [SMALL_STATE(51)] = 2303,
  [SMALL_STATE(52)] = 2334,
  [SMALL_STATE(53)] = 2373,
  [SMALL_STATE(54)] = 2412,
  [SMALL_STATE(55)] = 2447,
  [SMALL_STATE(56)] = 2471,
  [SMALL_STATE(57)] = 2500,
  [SMALL_STATE(58)] = 2529,
  [SMALL_STATE(59)] = 2551,
  [SMALL_STATE(60)] = 2577,
  [SMALL_STATE(61)] = 2596,
  [SMALL_STATE(62)] = 2615,
  [SMALL_STATE(63)] = 2634,
  [SMALL_STATE(64)] = 2654,
  [SMALL_STATE(65)] = 2676,
  [SMALL_STATE(66)] = 2696,
  [SMALL_STATE(67)] = 2718,
  [SMALL_STATE(68)] = 2738,
  [SMALL_STATE(69)] = 2758,
  [SMALL_STATE(70)] = 2778,
  [SMALL_STATE(71)] = 2798,
  [SMALL_STATE(72)] = 2818,
  [SMALL_STATE(73)] = 2838,
  [SMALL_STATE(74)] = 2858,
  [SMALL_STATE(75)] = 2878,
  [SMALL_STATE(76)] = 2898,
  [SMALL_STATE(77)] = 2918,
  [SMALL_STATE(78)] = 2938,
  [SMALL_STATE(79)] = 2957,
  [SMALL_STATE(80)] = 2976,
  [SMALL_STATE(81)] = 2995,
  [SMALL_STATE(82)] = 3014,
  [SMALL_STATE(83)] = 3033,
  [SMALL_STATE(84)] = 3052,
  [SMALL_STATE(85)] = 3071,
  [SMALL_STATE(86)] = 3090,
  [SMALL_STATE(87)] = 3109,
  [SMALL_STATE(88)] = 3128,
  [SMALL_STATE(89)] = 3147,
  [SMALL_STATE(90)] = 3166,
  [SMALL_STATE(91)] = 3198,
  [SMALL_STATE(92)] = 3230,
  [SMALL_STATE(93)] = 3243,
  [SMALL_STATE(94)] = 3260,
  [SMALL_STATE(95)] = 3277,
  [SMALL_STATE(96)] = 3289,
  [SMALL_STATE(97)] = 3303,
  [SMALL_STATE(98)] = 3319,
  [SMALL_STATE(99)] = 3335,
  [SMALL_STATE(100)] = 3347,
  [SMALL_STATE(101)] = 3363,
  [SMALL_STATE(102)] = 3373,
  [SMALL_STATE(103)] = 3383,
  [SMALL_STATE(104)] = 3395,
  [SMALL_STATE(105)] = 3411,
  [SMALL_STATE(106)] = 3425,
  [SMALL_STATE(107)] = 3437,
  [SMALL_STATE(108)] = 3449,
  [SMALL_STATE(109)] = 3459,
  [SMALL_STATE(110)] = 3473,
  [SMALL_STATE(111)] = 3482,
  [SMALL_STATE(112)] = 3493,
  [SMALL_STATE(113)] = 3502,
  [SMALL_STATE(114)] = 3515,
  [SMALL_STATE(115)] = 3524,
  [SMALL_STATE(116)] = 3533,
  [SMALL_STATE(117)] = 3542,
  [SMALL_STATE(118)] = 3551,
  [SMALL_STATE(119)] = 3560,
  [SMALL_STATE(120)] = 3569,
  [SMALL_STATE(121)] = 3580,
  [SMALL_STATE(122)] = 3593,
  [SMALL_STATE(123)] = 3606,
  [SMALL_STATE(124)] = 3615,
  [SMALL_STATE(125)] = 3624,
  [SMALL_STATE(126)] = 3634,
  [SMALL_STATE(127)] = 3644,
  [SMALL_STATE(128)] = 3652,
  [SMALL_STATE(129)] = 3658,
  [SMALL_STATE(130)] = 3665,
  [SMALL_STATE(131)] = 3672,
  [SMALL_STATE(132)] = 3679,
  [SMALL_STATE(133)] = 3686,
  [SMALL_STATE(134)] = 3693,
  [SMALL_STATE(135)] = 3700,
  [SMALL_STATE(136)] = 3707,
  [SMALL_STATE(137)] = 3714,
  [SMALL_STATE(138)] = 3721,
  [SMALL_STATE(139)] = 3728,
  [SMALL_STATE(140)] = 3735,
  [SMALL_STATE(141)] = 3742,
  [SMALL_STATE(142)] = 3749,
  [SMALL_STATE(143)] = 3756,
  [SMALL_STATE(144)] = 3763,
  [SMALL_STATE(145)] = 3770,
  [SMALL_STATE(146)] = 3777,
  [SMALL_STATE(147)] = 3784,
  [SMALL_STATE(148)] = 3791,
  [SMALL_STATE(149)] = 3796,
  [SMALL_STATE(150)] = 3800,
  [SMALL_STATE(151)] = 3804,
  [SMALL_STATE(152)] = 3808,
  [SMALL_STATE(153)] = 3812,
  [SMALL_STATE(154)] = 3816,
  [SMALL_STATE(155)] = 3820,
  [SMALL_STATE(156)] = 3824,
  [SMALL_STATE(157)] = 3828,
  [SMALL_STATE(158)] = 3832,
  [SMALL_STATE(159)] = 3836,
  [SMALL_STATE(160)] = 3840,
  [SMALL_STATE(161)] = 3844,
  [SMALL_STATE(162)] = 3848,
  [SMALL_STATE(163)] = 3852,
  [SMALL_STATE(164)] = 3856,
  [SMALL_STATE(165)] = 3860,
  [SMALL_STATE(166)] = 3864,
  [SMALL_STATE(167)] = 3868,
  [SMALL_STATE(168)] = 3872,
  [SMALL_STATE(169)] = 3876,
  [SMALL_STATE(170)] = 3880,
  [SMALL_STATE(171)] = 3884,
  [SMALL_STATE(172)] = 3888,
  [SMALL_STATE(173)] = 3892,
  [SMALL_STATE(174)] = 3896,
  [SMALL_STATE(175)] = 3900,
  [SMALL_STATE(176)] = 3904,
  [SMALL_STATE(177)] = 3908,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, .production_id = 11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, .production_id = 11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(155),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(47),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(158),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(38),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(144),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(100),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(163),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(141),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 28), SHIFT_REPEAT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 15),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 15),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 29),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 29), SHIFT_REPEAT(171),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 29), SHIFT_REPEAT(149),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 29),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 12),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 12),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 11),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, .production_id = 34),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, .production_id = 34),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 7),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 7),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, .production_id = 36),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, .production_id = 36),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 20),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, .production_id = 20),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 9),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 9),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, .production_id = 31),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, .production_id = 31),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(173),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(48),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(176),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(88),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(146),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(97),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(177),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(177),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(143),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(64),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 35), SHIFT_REPEAT(78),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, .production_id = 24),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 10),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 10),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 18),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 18),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, .production_id = 38),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, .production_id = 38),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, .production_id = 33),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, .production_id = 33),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 26),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 26),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 17),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 17), SHIFT_REPEAT(175),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 17), SHIFT_REPEAT(109),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 17), SHIFT_REPEAT(149),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(167),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(93),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 32),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 32),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(175),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(96),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 14),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 14),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, .production_id = 16),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 19),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 19),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 27),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 27),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(111),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, .production_id = 32),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 5, .production_id = 32),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 10),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 10),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 19),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 19),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 6),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 6),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 27),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 27),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 18),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 18),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 14),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 14),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [590] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, .production_id = 37),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, .production_id = 30),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
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
