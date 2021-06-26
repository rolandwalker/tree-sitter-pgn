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
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 35

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
  sym__san_move_castle = 28,
  sym__san_null_move = 29,
  sym_check_or_mate_condition = 30,
  sym_annotation = 31,
  anon_sym_1 = 32,
  anon_sym_DASH = 33,
  aux_sym_result_code_token1 = 34,
  anon_sym_3 = 35,
  aux_sym_result_code_token2 = 36,
  anon_sym_4 = 37,
  aux_sym_result_code_token3 = 38,
  anon_sym_5 = 39,
  aux_sym_result_code_token4 = 40,
  anon_sym_6 = 41,
  aux_sym_result_code_token5 = 42,
  anon_sym_7 = 43,
  aux_sym_result_code_token6 = 44,
  anon_sym_8 = 45,
  aux_sym_result_code_token7 = 46,
  anon_sym_9 = 47,
  aux_sym_result_code_token8 = 48,
  anon_sym_O = 49,
  anon_sym_0 = 50,
  anon_sym_o = 51,
  anon_sym_SLASH = 52,
  aux_sym_result_code_token9 = 53,
  anon_sym_10 = 54,
  aux_sym_result_code_token10 = 55,
  anon_sym_11 = 56,
  aux_sym_result_code_token11 = 57,
  anon_sym_12 = 58,
  aux_sym_result_code_token12 = 59,
  anon_sym_13 = 60,
  aux_sym_result_code_token13 = 61,
  anon_sym_22 = 62,
  anon_sym_14 = 63,
  aux_sym_result_code_token14 = 64,
  anon_sym_STAR = 65,
  aux_sym_result_code_token15 = 66,
  anon_sym_15 = 67,
  aux_sym_result_code_token16 = 68,
  anon_sym_16 = 69,
  aux_sym_result_code_token17 = 70,
  anon_sym_17 = 71,
  aux_sym_result_code_token18 = 72,
  anon_sym_18 = 73,
  aux_sym_result_code_token19 = 74,
  sym_series_of_games = 75,
  sym_game = 76,
  sym_freestanding_comment = 77,
  sym_rest_of_line_comment = 78,
  sym_header = 79,
  sym_tagpair = 80,
  sym__tagpair_value = 81,
  sym_tagpair_value_contents = 82,
  sym_movetext = 83,
  sym_variation_movetext = 84,
  sym__movetext_element = 85,
  sym__variation_movetext_element = 86,
  sym_variation = 87,
  sym_inline_comment = 88,
  sym_san_move = 89,
  sym__san_move_piece = 90,
  sym__san_destination = 91,
  sym__san_promotion = 92,
  sym__san_move_pawn = 93,
  sym__san_drop_pawn = 94,
  sym__san_move_major_or_minor_piece = 95,
  sym__san_drop_major_or_minor_piece = 96,
  sym_result_code = 97,
  aux_sym_series_of_games_repeat1 = 98,
  aux_sym_freestanding_comment_repeat1 = 99,
  aux_sym_header_repeat1 = 100,
  aux_sym_tagpair_value_contents_repeat1 = 101,
  aux_sym_movetext_repeat1 = 102,
  aux_sym_variation_movetext_repeat1 = 103,
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
  [sym_inline_comment] = "inline_comment",
  [sym_san_move] = "san_move",
  [sym__san_move_piece] = "_san_move_piece",
  [sym__san_destination] = "_san_destination",
  [sym__san_promotion] = "_san_promotion",
  [sym__san_move_pawn] = "_san_move_pawn",
  [sym__san_drop_pawn] = "_san_drop_pawn",
  [sym__san_move_major_or_minor_piece] = "_san_move_major_or_minor_piece",
  [sym__san_drop_major_or_minor_piece] = "_san_drop_major_or_minor_piece",
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
  [sym_inline_comment] = sym_inline_comment,
  [sym_san_move] = sym_san_move,
  [sym__san_move_piece] = sym__san_move_piece,
  [sym__san_destination] = sym__san_destination,
  [sym__san_promotion] = sym__san_promotion,
  [sym__san_move_pawn] = sym__san_move_pawn,
  [sym__san_drop_pawn] = sym__san_drop_pawn,
  [sym__san_move_major_or_minor_piece] = sym__san_move_major_or_minor_piece,
  [sym__san_drop_major_or_minor_piece] = sym__san_drop_major_or_minor_piece,
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
  [sym__san_destination] = {
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
  field_move_number = 8,
  field_movetext = 9,
  field_result_code = 10,
  field_san_move = 11,
  field_tagpair = 12,
  field_tagpair_delimiter = 13,
  field_tagpair_key = 14,
  field_tagpair_value_contents = 15,
  field_tagpair_value_delimiter = 16,
  field_variation_annotation = 17,
  field_variation_comment = 18,
  field_variation_content = 19,
  field_variation_delimiter = 20,
  field_variation_move_number = 21,
  field_variation_san_move = 22,
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
  [field_move_number] = "move_number",
  [field_movetext] = "movetext",
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
  [12] = {.index = 15, .length = 4},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 3},
  [16] = {.index = 25, .length = 4},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 1},
  [22] = {.index = 38, .length = 1},
  [23] = {.index = 39, .length = 1},
  [24] = {.index = 40, .length = 4},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 3},
  [27] = {.index = 48, .length = 8},
  [28] = {.index = 56, .length = 2},
  [29] = {.index = 58, .length = 5},
  [30] = {.index = 63, .length = 3},
  [31] = {.index = 66, .length = 3},
  [32] = {.index = 69, .length = 8},
  [33] = {.index = 77, .length = 3},
  [34] = {.index = 80, .length = 3},
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
    {field_move_number, 0, .inherited = true},
    {field_san_move, 0, .inherited = true},
  [19] =
    {field_san_move, 0},
  [20] =
    {field_header, 0},
    {field_result_code, 1},
  [22] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1},
    {field_game, 0, .inherited = true},
  [25] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
  [29] =
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [31] =
    {field_header, 0},
    {field_movetext, 2},
  [33] =
    {field_header, 0},
    {field_result_code, 2},
  [35] =
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [37] =
    {field_variation_move_number, 0},
  [38] =
    {field_variation_annotation, 0},
  [39] =
    {field_variation_comment, 0},
  [40] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
  [44] =
    {field_variation_san_move, 0},
  [45] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 2},
  [48] =
    {field_annotation, 0, .inherited = true},
    {field_annotation, 1, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_move_number, 1, .inherited = true},
    {field_san_move, 0, .inherited = true},
    {field_san_move, 1, .inherited = true},
  [56] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [58] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [63] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [66] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [69] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_annotation, 1, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_comment, 1, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_move_number, 1, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
    {field_variation_san_move, 1, .inherited = true},
  [77] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [80] =
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
      if (eof) ADVANCE(1436);
      if (lookahead == '"') ADVANCE(1452);
      if (lookahead == '#') ADVANCE(1503);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(792);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == ')') ADVANCE(1460);
      if (lookahead == '*') ADVANCE(1573);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1506);
      if (lookahead == '-') ADVANCE(1529);
      if (lookahead == '/') ADVANCE(1558);
      if (lookahead == '0') ADVANCE(1552);
      if (lookahead == '1') ADVANCE(1525);
      if (lookahead == '2') ADVANCE(1568);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(1471);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1482);
      if (lookahead == '=') ADVANCE(1484);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1472);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1476);
      if (lookahead == 'O') ADVANCE(1548);
      if (lookahead == 'P') ADVANCE(1487);
      if (lookahead == '[') ADVANCE(1449);
      if (lookahead == '\\') ADVANCE(1428);
      if (lookahead == ']') ADVANCE(1451);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '}') ADVANCE(1463);
      if (lookahead == 189) ADVANCE(1569);
      if (lookahead == 1645) ADVANCE(1589);
      if (lookahead == 8208) ADVANCE(1533);
      if (lookahead == 8209) ADVANCE(1535);
      if (lookahead == 8210) ADVANCE(1537);
      if (lookahead == 8211) ADVANCE(1539);
      if (lookahead == 8212) ADVANCE(1541);
      if (lookahead == 8260) ADVANCE(1562);
      if (lookahead == 8270) ADVANCE(1585);
      if (lookahead == 8722) ADVANCE(1531);
      if (lookahead == 8725) ADVANCE(1560);
      if (lookahead == 8727) ADVANCE(1577);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == 10033) ADVANCE(1581);
      if (lookahead == 10134) ADVANCE(1543);
      if (lookahead == 10187) ADVANCE(1564);
      if (lookahead == 10744) ADVANCE(1566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1434)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(817);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == 'D') ADVANCE(327);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == 'M') ADVANCE(368);
      if (lookahead == 'P') ADVANCE(374);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'S') ADVANCE(351);
      if (lookahead == 'U') ADVANCE(410);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(366);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 'h') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead == 'q') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead == 'x') ADVANCE(402);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'q') ADVANCE(484);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 'h') ADVANCE(303);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == 'D') ADVANCE(327);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == 'M') ADVANCE(368);
      if (lookahead == 'P') ADVANCE(374);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == 'S') ADVANCE(351);
      if (lookahead == 'U') ADVANCE(410);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(366);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 'h') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 'q') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead == 'x') ADVANCE(402);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'h') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1517);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(17);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(759);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '6') ADVANCE(190);
      if (lookahead == '7') ADVANCE(219);
      if (lookahead == '8') ADVANCE(249);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(161);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == '7') ADVANCE(196);
      if (lookahead == '8') ADVANCE(207);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == '7') ADVANCE(196);
      if (lookahead == '8') ADVANCE(207);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(228);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == '5') ADVANCE(117);
      if (lookahead == '6') ADVANCE(153);
      if (lookahead == '7') ADVANCE(58);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(23);
      if (lookahead == '7') ADVANCE(71);
      if (lookahead == ';') ADVANCE(1576);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(98);
      if (lookahead == '5') ADVANCE(78);
      if (lookahead == '6') ADVANCE(185);
      if (lookahead == '7') ADVANCE(91);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '3') ADVANCE(98);
      if (lookahead == '5') ADVANCE(78);
      if (lookahead == '6') ADVANCE(185);
      if (lookahead == '7') ADVANCE(92);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == '1') ADVANCE(141);
      if (lookahead == '6') ADVANCE(180);
      if (lookahead == '9') ADVANCE(507);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '2') ADVANCE(80);
      if (lookahead == '7') ADVANCE(241);
      if (lookahead == '9') ADVANCE(514);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '2') ADVANCE(80);
      if (lookahead == '7') ADVANCE(245);
      if (lookahead == '9') ADVANCE(514);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(180);
      if (lookahead == '6') ADVANCE(121);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(226);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '6') ADVANCE(51);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(226);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '7') ADVANCE(244);
      if (lookahead == '9') ADVANCE(515);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(260);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead == '3') ADVANCE(170);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(255);
      if (lookahead == '1') ADVANCE(255);
      if (lookahead == '2') ADVANCE(255);
      if (lookahead == '3') ADVANCE(255);
      if (lookahead == '4') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(255);
      if (lookahead == '1') ADVANCE(255);
      if (lookahead == '2') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '6') ADVANCE(190);
      if (lookahead == '8') ADVANCE(249);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == '1') ADVANCE(275);
      if (lookahead == '3') ADVANCE(266);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '2') ADVANCE(108);
      if (lookahead == '7') ADVANCE(166);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '2') ADVANCE(105);
      if (lookahead == '7') ADVANCE(247);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '7') ADVANCE(246);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(264);
      if (lookahead == '1') ADVANCE(264);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead == '3') ADVANCE(264);
      if (lookahead == '4') ADVANCE(264);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(264);
      if (lookahead == '1') ADVANCE(264);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(274);
      if (lookahead == '1') ADVANCE(274);
      if (lookahead == '2') ADVANCE(274);
      if (lookahead == '3') ADVANCE(274);
      if (lookahead == '4') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(274);
      if (lookahead == '1') ADVANCE(274);
      if (lookahead == '2') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(271);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(276);
      if (lookahead == '1') ADVANCE(276);
      if (lookahead == '2') ADVANCE(276);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '4') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(276);
      if (lookahead == '1') ADVANCE(276);
      if (lookahead == '2') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(231);
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(100);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(175);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '2') ADVANCE(109);
      if (lookahead == '7') ADVANCE(251);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '6') ADVANCE(190);
      if (lookahead == '7') ADVANCE(219);
      if (lookahead == '8') ADVANCE(249);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(158);
      if (lookahead == '4') ADVANCE(134);
      if (lookahead == '5') ADVANCE(227);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == '8') ADVANCE(123);
      if (lookahead == '9') ADVANCE(181);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == ';') ADVANCE(1504);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead == '3') ADVANCE(180);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '3') ADVANCE(499);
      if (lookahead == '4') ADVANCE(218);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(496);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(495);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(163);
      if (lookahead == '7') ADVANCE(183);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(118);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '4') ADVANCE(136);
      if (lookahead == '8') ADVANCE(139);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(129);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '4') ADVANCE(169);
      if (lookahead == '5') ADVANCE(236);
      if (lookahead == '8') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(114);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(205);
      if (lookahead == '2') ADVANCE(30);
      if (lookahead == '3') ADVANCE(500);
      if (lookahead == '6') ADVANCE(206);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(72);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(226);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '4') ADVANCE(186);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(159);
      if (lookahead == '7') ADVANCE(183);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(145);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(176);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(42);
      if (lookahead == '4') ADVANCE(200);
      if (lookahead == '8') ADVANCE(130);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '9') ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(157);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '9') ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(157);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(160);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(173);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(144);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(273);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(157);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '4') ADVANCE(187);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '7') ADVANCE(191);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(62);
      if (lookahead == '4') ADVANCE(194);
      if (lookahead == '8') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(126);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(213);
      if (lookahead == '2') ADVANCE(222);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(213);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '4') ADVANCE(195);
      if (lookahead == '8') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(146);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(56);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '4') ADVANCE(157);
      if (lookahead == '5') ADVANCE(229);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(102);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(225);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(147);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(59);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '4') ADVANCE(156);
      if (lookahead == '5') ADVANCE(229);
      if (lookahead == '8') ADVANCE(131);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '2') ADVANCE(31);
      if (lookahead == '3') ADVANCE(500);
      if (lookahead == '6') ADVANCE(206);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(72);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(177);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(217);
      if (lookahead == '2') ADVANCE(34);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '4') ADVANCE(202);
      if (lookahead == '8') ADVANCE(152);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(148);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '3') ADVANCE(158);
      if (lookahead == '4') ADVANCE(135);
      if (lookahead == '5') ADVANCE(235);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == '8') ADVANCE(123);
      if (lookahead == '9') ADVANCE(181);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(112);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '5') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '7') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '9') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(28);
      if (lookahead == '5') ADVANCE(238);
      if (lookahead == '6') ADVANCE(184);
      if (lookahead == '7') ADVANCE(76);
      if (lookahead == '8') ADVANCE(36);
      if (lookahead == '9') ADVANCE(221);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == '7') ADVANCE(128);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(50);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(203);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(47);
      if (lookahead == '6') ADVANCE(206);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(504);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '7') ADVANCE(149);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(61);
      if (lookahead == '7') ADVANCE(133);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(145);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(267);
      if (lookahead == '3') ADVANCE(254);
      if (lookahead == '5') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(267);
      if (lookahead == '3') ADVANCE(262);
      if (lookahead == '5') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(267);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(120);
      if (lookahead == '9') ADVANCE(180);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == '7') ADVANCE(143);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(220);
      if (lookahead == '7') ADVANCE(150);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '3') ADVANCE(513);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(255);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '7') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(255);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '7') ADVANCE(272);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(122);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(269);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(68);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(146);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(225);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(147);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(64);
      if (lookahead == '7') ADVANCE(151);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '4') ADVANCE(264);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '5') ADVANCE(264);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(266);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(180);
      if (lookahead == '8') ADVANCE(223);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(180);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(164);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(501);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(168);
      if (lookahead == '8') ADVANCE(223);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(254);
      if (lookahead == '4') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(155);
      if (lookahead == '8') ADVANCE(224);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(262);
      if (lookahead == '4') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(252);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(252);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead == '7') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(273);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead == '6') ADVANCE(157);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead == '7') ADVANCE(195);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(167);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(170);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(188);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(189);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead == '7') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(239);
      if (lookahead == '6') ADVANCE(172);
      if (lookahead == '7') ADVANCE(137);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(509);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(186);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(204);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(122);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(201);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(187);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead == '7') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(117);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(254);
      if (lookahead == '6') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(262);
      if (lookahead == '6') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(252);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(270);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead == '7') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(510);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(506);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(192);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(237);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(73);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(242);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(508);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(248);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(250);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(511);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(512);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(260);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead == '9') ADVANCE(260);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(58);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(237);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(240);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(272);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead == '9') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(212);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(255);
      if (lookahead == '9') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(208);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(264);
      if (lookahead == '9') ADVANCE(264);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(274);
      if (lookahead == '9') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(276);
      if (lookahead == '9') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(214);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(215);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(154);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(119);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(195);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(199);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(497);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(254);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(71);
      if (lookahead == ';') ADVANCE(1510);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(193);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(498);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(204);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(497);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(204);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(210);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(262);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(269);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(252);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(211);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1505);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1504);
      if (lookahead == 'b') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(389);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1504);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1513);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1517);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1517);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'q') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1517);
      if (lookahead == 'o') ADVANCE(485);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1517);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(389);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1502);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1510);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1576);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1572);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1592);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1588);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1580);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1584);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(519);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1511);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(520);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'R') ADVANCE(363);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(331);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(334);
      if (lookahead == 'R') ADVANCE(363);
      if (lookahead == 'U') ADVANCE(414);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(371);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(386);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(363);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'y') ADVANCE(412);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(385);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == 'p') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(380);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(460);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(402);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(356);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(406);
      if (lookahead == 'q') ADVANCE(482);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(460);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(332);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(330);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(264);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(335);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(336);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(337);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'q') ADVANCE(468);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(485);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 'q') ADVANCE(472);
      if (lookahead == 'x') ADVANCE(313);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(424);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == 'x') ADVANCE(416);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(438);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(439);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(436);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(443);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(430);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(302);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(447);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(448);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(449);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(339);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(307);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(311);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(418);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(419);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(420);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 65038) ADVANCE(1493);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(230);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(232);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1502);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(516);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1502);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1497);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1498);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1516);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(1394);
      if (lookahead == '\r') ADVANCE(524);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(1394);
      if (lookahead == '\r') SKIP(1395)
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(1447);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(526);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(527);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(528);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(530);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(531);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(533);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(536);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(539);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(553);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(555);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(557);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(560);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(561);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(565);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(572);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(576);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(580);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(581);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(584);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(585);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(586);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(589);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(590);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(597);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(602);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(605);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(618);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(619);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(621);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(623);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(628);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(630);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(632);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(634);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(635);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(636);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(637);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(640);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1447);
      if (lookahead == '\r') ADVANCE(525);
      if (lookahead == '-') ADVANCE(641);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1448);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(760);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(644);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(646);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(647);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(648);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(649);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(650);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(651);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(652);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(653);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(654);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(656);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(657);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(658);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(661);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(662);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(664);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(669);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(671);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(672);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(674);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(676);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(692);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(699);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(700);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(702);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(704);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(717);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(724);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(725);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(726);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(727);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(728);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(731);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(732);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(735);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(739);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(740);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(741);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(744);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(748);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(750);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(753);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(754);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(756);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(757);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead == '-') ADVANCE(758);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1448);
      if (lookahead == '\r') ADVANCE(643);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(761);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'N') ADVANCE(1479);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1437);
      if (lookahead == '\r') ADVANCE(761);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'N') ADVANCE(1479);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1437);
      if (lookahead == '\r') ADVANCE(762);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-') ADVANCE(1512);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'N') ADVANCE(1479);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if ((8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1437);
      if (lookahead == '\r') ADVANCE(762);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'N') ADVANCE(1479);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(767);
      if (lookahead == '.') ADVANCE(1465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(767);
      if (lookahead == '.') ADVANCE(1465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '.') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(819);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(761);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'N') ADVANCE(1479);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\r') ADVANCE(768);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'N') ADVANCE(1479);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(777);
      if (lookahead == '\r') ADVANCE(770);
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(795);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == '*') ADVANCE(1573);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(810);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(1553);
      if (lookahead == '1') ADVANCE(1528);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'N') ADVANCE(1481);
      if (lookahead == 'O') ADVANCE(1548);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (lookahead == '[') ADVANCE(1449);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 189) ADVANCE(1569);
      if (lookahead == 1645) ADVANCE(1589);
      if (lookahead == 8270) ADVANCE(1585);
      if (lookahead == 8727) ADVANCE(1577);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == 10033) ADVANCE(1581);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(770);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(777);
      if (lookahead == '\r') ADVANCE(770);
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(795);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == '*') ADVANCE(1573);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(810);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(1553);
      if (lookahead == '1') ADVANCE(1528);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'O') ADVANCE(1548);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (lookahead == '[') ADVANCE(1449);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 189) ADVANCE(1569);
      if (lookahead == 1645) ADVANCE(1589);
      if (lookahead == 8270) ADVANCE(1585);
      if (lookahead == 8727) ADVANCE(1577);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == 10033) ADVANCE(1581);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(770);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1445);
      if (lookahead == '\r') ADVANCE(772);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'N') ADVANCE(1479);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(772);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(782);
      if (lookahead == '\r') ADVANCE(773);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '0') ADVANCE(1550);
      if (lookahead == '1') ADVANCE(1526);
      if (lookahead == 'O') ADVANCE(1547);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == 'o') ADVANCE(1556);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(781);
      if (lookahead == '\r') ADVANCE(773);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '0') ADVANCE(1550);
      if (lookahead == '1') ADVANCE(1526);
      if (lookahead == 'O') ADVANCE(1547);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == 'o') ADVANCE(1556);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(781);
      if (lookahead == '\r') ADVANCE(774);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '0') ADVANCE(1550);
      if (lookahead == '1') ADVANCE(1526);
      if (lookahead == 'O') ADVANCE(1547);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == 'o') ADVANCE(1556);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1438);
      if (lookahead == '\r') ADVANCE(770);
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(795);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == '*') ADVANCE(1573);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(810);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(1553);
      if (lookahead == '1') ADVANCE(1528);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'N') ADVANCE(1481);
      if (lookahead == 'O') ADVANCE(1548);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (lookahead == '[') ADVANCE(1449);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 189) ADVANCE(1569);
      if (lookahead == 1645) ADVANCE(1589);
      if (lookahead == 8270) ADVANCE(1585);
      if (lookahead == 8727) ADVANCE(1577);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == 10033) ADVANCE(1581);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(770);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(1438);
      if (lookahead == '\r') ADVANCE(776);
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(795);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == '*') ADVANCE(1573);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(810);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(1553);
      if (lookahead == '1') ADVANCE(1528);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'N') ADVANCE(1481);
      if (lookahead == 'O') ADVANCE(1548);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (lookahead == '[') ADVANCE(1449);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 189) ADVANCE(1569);
      if (lookahead == 1645) ADVANCE(1589);
      if (lookahead == 8270) ADVANCE(1585);
      if (lookahead == 8727) ADVANCE(1577);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == 10033) ADVANCE(1581);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(770);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(1443);
      if (lookahead == '\r') ADVANCE(778);
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(803);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == ')') ADVANCE(1460);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(810);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(809);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'N') ADVANCE(1481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(778);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1443);
      if (lookahead == '\r') ADVANCE(778);
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(803);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == ')') ADVANCE(1460);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(810);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(809);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(778);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1439);
      if (lookahead == '\r') ADVANCE(773);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '0') ADVANCE(1550);
      if (lookahead == '1') ADVANCE(1526);
      if (lookahead == 'O') ADVANCE(1547);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == 'o') ADVANCE(1556);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1439);
      if (lookahead == '\r') ADVANCE(780);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '0') ADVANCE(1550);
      if (lookahead == '1') ADVANCE(1526);
      if (lookahead == 'O') ADVANCE(1547);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == 'o') ADVANCE(1556);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1439);
      if (lookahead == '\r') ADVANCE(780);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '0') ADVANCE(1550);
      if (lookahead == '1') ADVANCE(1526);
      if (lookahead == 'O') ADVANCE(1547);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == 'o') ADVANCE(1556);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1444);
      if (lookahead == '\r') ADVANCE(783);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(783);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1440);
      if (lookahead == '\r') ADVANCE(772);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'N') ADVANCE(1479);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(772);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 785:
      if (lookahead == ' ') SKIP(785)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1453);
      if (lookahead != 0) ADVANCE(1454);
      END_STATE();
    case 786:
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '#') ADVANCE(1503);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(800);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == ')') ADVANCE(1460);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1507);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(809);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1486);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1472);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1476);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1475);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(789);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 787:
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '#') ADVANCE(1503);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(806);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == ')') ADVANCE(1460);
      if (lookahead == '*') ADVANCE(1573);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1507);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(1553);
      if (lookahead == '1') ADVANCE(1528);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1482);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'O') ADVANCE(1548);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 189) ADVANCE(1569);
      if (lookahead == 1645) ADVANCE(1589);
      if (lookahead == 8270) ADVANCE(1585);
      if (lookahead == 8727) ADVANCE(1577);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == 10033) ADVANCE(1581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(788);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 788:
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(795);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == ')') ADVANCE(1460);
      if (lookahead == '*') ADVANCE(1573);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(810);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(1553);
      if (lookahead == '1') ADVANCE(1528);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'N') ADVANCE(1481);
      if (lookahead == 'O') ADVANCE(1548);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 189) ADVANCE(1569);
      if (lookahead == 1645) ADVANCE(1589);
      if (lookahead == 8270) ADVANCE(1585);
      if (lookahead == 8727) ADVANCE(1577);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == 10033) ADVANCE(1581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(788);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 789:
      if (lookahead == '!') ADVANCE(1523);
      if (lookahead == '$') ADVANCE(1427);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(803);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == ')') ADVANCE(1460);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(810);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1518);
      if (lookahead == '0') ADVANCE(809);
      if (lookahead == '<') ADVANCE(1153);
      if (lookahead == '=') ADVANCE(1522);
      if (lookahead == '?') ADVANCE(1523);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'N') ADVANCE(1481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (lookahead == 'P') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1480);
      if (lookahead == 'T') ADVANCE(1159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1426);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'p') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(1461);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1508);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(789);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 790:
      if (lookahead == '"') ADVANCE(1452);
      if (lookahead == '\\') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1455);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(791)
      if (lookahead != 0) ADVANCE(1456);
      END_STATE();
    case 791:
      if (lookahead == '"') ADVANCE(1452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(791)
      END_STATE();
    case 792:
      if (lookahead == '#') ADVANCE(891);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'd') ADVANCE(1166);
      if (lookahead == 'f') ADVANCE(1318);
      if (lookahead == 'h') ADVANCE(1167);
      if (lookahead == 'l') ADVANCE(1293);
      if (lookahead == 'm') ADVANCE(1196);
      if (lookahead == 'n') ADVANCE(1199);
      if (lookahead == 'p') ADVANCE(1260);
      if (lookahead == 's') ADVANCE(1297);
      END_STATE();
    case 793:
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == 'p') ADVANCE(1273);
      END_STATE();
    case 794:
      if (lookahead == '#') ADVANCE(912);
      if (lookahead == 'd') ADVANCE(1184);
      if (lookahead == 'h') ADVANCE(1389);
      if (lookahead == 'm') ADVANCE(1201);
      if (lookahead == 'n') ADVANCE(1200);
      END_STATE();
    case 795:
      if (lookahead == '#') ADVANCE(894);
      if (lookahead == 'D') ADVANCE(1218);
      if (lookahead == 'L') ADVANCE(1174);
      if (lookahead == 'M') ADVANCE(1258);
      if (lookahead == 'P') ADVANCE(1275);
      if (lookahead == 'R') ADVANCE(1175);
      if (lookahead == 'S') ADVANCE(1236);
      if (lookahead == 'U') ADVANCE(1303);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'b') ADVANCE(1254);
      if (lookahead == 'c') ADVANCE(1253);
      if (lookahead == 'd') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == 'f') ADVANCE(1318);
      if (lookahead == 'h') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1279);
      if (lookahead == 'l') ADVANCE(1208);
      if (lookahead == 'm') ADVANCE(1172);
      if (lookahead == 'n') ADVANCE(1165);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'q') ADVANCE(1369);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == 's') ADVANCE(1263);
      if (lookahead == 'u') ADVANCE(1170);
      if (lookahead == 'x') ADVANCE(1294);
      END_STATE();
    case 796:
      if (lookahead == '#') ADVANCE(1017);
      if (lookahead == 'e') ADVANCE(1388);
      if (lookahead == 'q') ADVANCE(1384);
      END_STATE();
    case 797:
      if (lookahead == '#') ADVANCE(1065);
      if (lookahead == 'e') ADVANCE(1315);
      END_STATE();
    case 798:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == 'd') ADVANCE(1188);
      if (lookahead == 'h') ADVANCE(1392);
      if (lookahead == 'm') ADVANCE(1207);
      if (lookahead == 'n') ADVANCE(1206);
      if (lookahead == 'p') ADVANCE(1277);
      if (lookahead == 's') ADVANCE(1302);
      END_STATE();
    case 799:
      if (lookahead == '#') ADVANCE(932);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'd') ADVANCE(1166);
      if (lookahead == 'f') ADVANCE(1318);
      if (lookahead == 'h') ADVANCE(1167);
      if (lookahead == 'l') ADVANCE(1293);
      if (lookahead == 'm') ADVANCE(1196);
      if (lookahead == 'n') ADVANCE(1199);
      if (lookahead == 's') ADVANCE(1297);
      END_STATE();
    case 800:
      if (lookahead == '#') ADVANCE(899);
      if (lookahead == 'D') ADVANCE(1218);
      if (lookahead == 'L') ADVANCE(1174);
      if (lookahead == 'M') ADVANCE(1258);
      if (lookahead == 'P') ADVANCE(1275);
      if (lookahead == 'R') ADVANCE(1175);
      if (lookahead == 'S') ADVANCE(1236);
      if (lookahead == 'U') ADVANCE(1303);
      if (lookahead == 'b') ADVANCE(1254);
      if (lookahead == 'c') ADVANCE(1253);
      if (lookahead == 'd') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == 'h') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1279);
      if (lookahead == 'l') ADVANCE(1209);
      if (lookahead == 'm') ADVANCE(1173);
      if (lookahead == 'n') ADVANCE(1165);
      if (lookahead == 'p') ADVANCE(1212);
      if (lookahead == 'q') ADVANCE(1369);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == 's') ADVANCE(1263);
      if (lookahead == 'u') ADVANCE(1170);
      if (lookahead == 'x') ADVANCE(1294);
      END_STATE();
    case 801:
      if (lookahead == '#') ADVANCE(906);
      if (lookahead == 'd') ADVANCE(1187);
      if (lookahead == 'h') ADVANCE(1391);
      if (lookahead == 'm') ADVANCE(1205);
      if (lookahead == 'n') ADVANCE(1204);
      if (lookahead == 's') ADVANCE(1300);
      END_STATE();
    case 802:
      if (lookahead == '#') ADVANCE(949);
      if (lookahead == 'd') ADVANCE(1187);
      if (lookahead == 'h') ADVANCE(1391);
      if (lookahead == 'm') ADVANCE(1205);
      if (lookahead == 'n') ADVANCE(1204);
      if (lookahead == 'p') ADVANCE(1273);
      if (lookahead == 's') ADVANCE(1300);
      END_STATE();
    case 803:
      if (lookahead == '#') ADVANCE(951);
      if (lookahead == 'D') ADVANCE(1218);
      if (lookahead == 'L') ADVANCE(1174);
      if (lookahead == 'M') ADVANCE(1258);
      if (lookahead == 'P') ADVANCE(1275);
      if (lookahead == 'R') ADVANCE(1175);
      if (lookahead == 'S') ADVANCE(1236);
      if (lookahead == 'U') ADVANCE(1303);
      if (lookahead == 'b') ADVANCE(1254);
      if (lookahead == 'c') ADVANCE(1253);
      if (lookahead == 'd') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == 'h') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1279);
      if (lookahead == 'l') ADVANCE(1209);
      if (lookahead == 'm') ADVANCE(1173);
      if (lookahead == 'n') ADVANCE(1165);
      if (lookahead == 'p') ADVANCE(1211);
      if (lookahead == 'q') ADVANCE(1369);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == 's') ADVANCE(1263);
      if (lookahead == 'u') ADVANCE(1170);
      if (lookahead == 'x') ADVANCE(1294);
      END_STATE();
    case 804:
      if (lookahead == '#') ADVANCE(933);
      if (lookahead == 'p') ADVANCE(1277);
      END_STATE();
    case 805:
      if (lookahead == '#') ADVANCE(939);
      if (lookahead == 'd') ADVANCE(1185);
      if (lookahead == 'h') ADVANCE(1390);
      if (lookahead == 'm') ADVANCE(1203);
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 806:
      if (lookahead == '#') ADVANCE(950);
      if (lookahead == 'D') ADVANCE(1218);
      if (lookahead == 'L') ADVANCE(1174);
      if (lookahead == 'M') ADVANCE(1258);
      if (lookahead == 'P') ADVANCE(1275);
      if (lookahead == 'R') ADVANCE(1175);
      if (lookahead == 'S') ADVANCE(1236);
      if (lookahead == 'U') ADVANCE(1303);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'b') ADVANCE(1254);
      if (lookahead == 'c') ADVANCE(1253);
      if (lookahead == 'd') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == 'f') ADVANCE(1318);
      if (lookahead == 'h') ADVANCE(1164);
      if (lookahead == 'i') ADVANCE(1279);
      if (lookahead == 'l') ADVANCE(1208);
      if (lookahead == 'm') ADVANCE(1172);
      if (lookahead == 'n') ADVANCE(1165);
      if (lookahead == 'p') ADVANCE(1212);
      if (lookahead == 'q') ADVANCE(1369);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == 's') ADVANCE(1263);
      if (lookahead == 'u') ADVANCE(1170);
      if (lookahead == 'x') ADVANCE(1294);
      END_STATE();
    case 807:
      if (lookahead == '#') ADVANCE(944);
      if (lookahead == 'd') ADVANCE(1187);
      if (lookahead == 'h') ADVANCE(1391);
      if (lookahead == 'm') ADVANCE(1205);
      if (lookahead == 'n') ADVANCE(1204);
      END_STATE();
    case 808:
      if (lookahead == '&') ADVANCE(794);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1424);
      END_STATE();
    case 809:
      if (lookahead == '&') ADVANCE(794);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1424);
      if (lookahead == '.') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 810:
      if (lookahead == '&') ADVANCE(801);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1508);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(813);
      END_STATE();
    case 811:
      if (lookahead == '&') ADVANCE(797);
      END_STATE();
    case 812:
      if (lookahead == '&') ADVANCE(804);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1508);
      END_STATE();
    case 813:
      if (lookahead == '&') ADVANCE(807);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1508);
      END_STATE();
    case 814:
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 815:
      if (lookahead == '-') ADVANCE(814);
      END_STATE();
    case 816:
      if (lookahead == '-') ADVANCE(815);
      END_STATE();
    case 817:
      if (lookahead == '-') ADVANCE(816);
      END_STATE();
    case 818:
      if (lookahead == '-') ADVANCE(816);
      if (lookahead == '.') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(819);
      END_STATE();
    case 819:
      if (lookahead == '.') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(819);
      END_STATE();
    case 820:
      if (lookahead == '.') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 821:
      if (lookahead == '0') ADVANCE(835);
      if (lookahead == '6') ADVANCE(1038);
      if (lookahead == '8') ADVANCE(1101);
      END_STATE();
    case 822:
      if (lookahead == '0') ADVANCE(1084);
      if (lookahead == '1') ADVANCE(854);
      if (lookahead == '6') ADVANCE(855);
      if (lookahead == '7') ADVANCE(856);
      END_STATE();
    case 823:
      if (lookahead == '0') ADVANCE(893);
      if (lookahead == '2') ADVANCE(901);
      if (lookahead == '7') ADVANCE(996);
      if (lookahead == '9') ADVANCE(1418);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1117);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1115);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1119);
      END_STATE();
    case 824:
      if (lookahead == '0') ADVANCE(893);
      if (lookahead == '2') ADVANCE(901);
      if (lookahead == '7') ADVANCE(997);
      if (lookahead == '9') ADVANCE(1418);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1119);
      END_STATE();
    case 825:
      if (lookahead == '0') ADVANCE(826);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '6') ADVANCE(1038);
      if (lookahead == '7') ADVANCE(1076);
      if (lookahead == '8') ADVANCE(1101);
      END_STATE();
    case 826:
      if (lookahead == '0') ADVANCE(877);
      if (lookahead == '1') ADVANCE(1014);
      if (lookahead == '2') ADVANCE(928);
      if (lookahead == '7') ADVANCE(1043);
      if (lookahead == '8') ADVANCE(1064);
      END_STATE();
    case 827:
      if (lookahead == '0') ADVANCE(877);
      if (lookahead == '1') ADVANCE(1021);
      if (lookahead == '2') ADVANCE(928);
      if (lookahead == '7') ADVANCE(1043);
      if (lookahead == '8') ADVANCE(1064);
      END_STATE();
    case 828:
      if (lookahead == '0') ADVANCE(921);
      if (lookahead == '1') ADVANCE(1100);
      if (lookahead == '2') ADVANCE(831);
      if (lookahead == '3') ADVANCE(920);
      if (lookahead == '5') ADVANCE(897);
      if (lookahead == '6') ADVANCE(1040);
      if (lookahead == '7') ADVANCE(924);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(895);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1138);
      END_STATE();
    case 829:
      if (lookahead == '0') ADVANCE(921);
      if (lookahead == '1') ADVANCE(1100);
      if (lookahead == '2') ADVANCE(831);
      if (lookahead == '3') ADVANCE(920);
      if (lookahead == '5') ADVANCE(897);
      if (lookahead == '6') ADVANCE(1040);
      if (lookahead == '7') ADVANCE(925);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(896);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1138);
      END_STATE();
    case 830:
      if (lookahead == '0') ADVANCE(916);
      END_STATE();
    case 831:
      if (lookahead == '0') ADVANCE(1061);
      if (lookahead == '1') ADVANCE(980);
      if (lookahead == '6') ADVANCE(1033);
      if (lookahead == '9') ADVANCE(1412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1050);
      END_STATE();
    case 832:
      if (lookahead == '0') ADVANCE(1061);
      if (lookahead == '1') ADVANCE(981);
      if (lookahead == '6') ADVANCE(1033);
      if (lookahead == '9') ADVANCE(1412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1050);
      END_STATE();
    case 833:
      if (lookahead == '0') ADVANCE(1549);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'O') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(833)
      END_STATE();
    case 834:
      if (lookahead == '0') ADVANCE(1549);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(1471);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1482);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'O') ADVANCE(1545);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(833)
      END_STATE();
    case 835:
      if (lookahead == '0') ADVANCE(1012);
      if (lookahead == '1') ADVANCE(994);
      if (lookahead == '7') ADVANCE(1026);
      END_STATE();
    case 836:
      if (lookahead == '0') ADVANCE(1012);
      if (lookahead == '1') ADVANCE(1015);
      if (lookahead == '7') ADVANCE(1026);
      END_STATE();
    case 837:
      if (lookahead == '0') ADVANCE(930);
      if (lookahead == '2') ADVANCE(898);
      if (lookahead == '7') ADVANCE(1111);
      if (lookahead == '9') ADVANCE(1420);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1139);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1144);
      END_STATE();
    case 838:
      if (lookahead == '0') ADVANCE(930);
      if (lookahead == '2') ADVANCE(898);
      if (lookahead == '7') ADVANCE(1113);
      if (lookahead == '9') ADVANCE(1420);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1139);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1144);
      END_STATE();
    case 839:
      if (lookahead == '0') ADVANCE(859);
      if (lookahead == '7') ADVANCE(910);
      END_STATE();
    case 840:
      if (lookahead == '0') ADVANCE(859);
      if (lookahead == '7') ADVANCE(910);
      if (lookahead == ';') ADVANCE(1575);
      END_STATE();
    case 841:
      if (lookahead == '0') ADVANCE(850);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '7') ADVANCE(1076);
      END_STATE();
    case 842:
      if (lookahead == '0') ADVANCE(922);
      if (lookahead == '1') ADVANCE(1100);
      if (lookahead == '2') ADVANCE(832);
      if (lookahead == '3') ADVANCE(920);
      if (lookahead == '5') ADVANCE(897);
      if (lookahead == '6') ADVANCE(1040);
      if (lookahead == '7') ADVANCE(927);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(896);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1138);
      END_STATE();
    case 843:
      if (lookahead == '0') ADVANCE(922);
      if (lookahead == '1') ADVANCE(1100);
      if (lookahead == '2') ADVANCE(832);
      if (lookahead == '3') ADVANCE(920);
      if (lookahead == '5') ADVANCE(897);
      if (lookahead == '6') ADVANCE(1040);
      if (lookahead == '7') ADVANCE(926);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(895);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1138);
      END_STATE();
    case 844:
      if (lookahead == '0') ADVANCE(934);
      END_STATE();
    case 845:
      if (lookahead == '0') ADVANCE(915);
      END_STATE();
    case 846:
      if (lookahead == '0') ADVANCE(904);
      END_STATE();
    case 847:
      if (lookahead == '0') ADVANCE(1121);
      if (lookahead == '1') ADVANCE(1123);
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1125);
      if (lookahead == '4') ADVANCE(1126);
      END_STATE();
    case 848:
      if (lookahead == '0') ADVANCE(963);
      END_STATE();
    case 849:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(1014);
      if (lookahead == '2') ADVANCE(928);
      if (lookahead == '7') ADVANCE(1043);
      if (lookahead == '8') ADVANCE(1064);
      END_STATE();
    case 850:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(1021);
      if (lookahead == '2') ADVANCE(928);
      if (lookahead == '7') ADVANCE(1043);
      if (lookahead == '8') ADVANCE(1064);
      END_STATE();
    case 851:
      if (lookahead == '0') ADVANCE(913);
      if (lookahead == '2') ADVANCE(917);
      if (lookahead == '7') ADVANCE(1099);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1116);
      END_STATE();
    case 852:
      if (lookahead == '0') ADVANCE(1116);
      if (lookahead == '1') ADVANCE(1116);
      if (lookahead == '2') ADVANCE(1116);
      END_STATE();
    case 853:
      if (lookahead == '0') ADVANCE(1116);
      if (lookahead == '1') ADVANCE(1116);
      if (lookahead == '2') ADVANCE(1116);
      if (lookahead == '3') ADVANCE(1116);
      if (lookahead == '4') ADVANCE(1116);
      END_STATE();
    case 854:
      if (lookahead == '0') ADVANCE(1124);
      if (lookahead == '1') ADVANCE(1125);
      if (lookahead == '2') ADVANCE(1126);
      END_STATE();
    case 855:
      if (lookahead == '0') ADVANCE(1127);
      END_STATE();
    case 856:
      if (lookahead == '0') ADVANCE(1128);
      END_STATE();
    case 857:
      if (lookahead == '0') ADVANCE(1151);
      if (lookahead == '1') ADVANCE(1151);
      if (lookahead == '2') ADVANCE(1151);
      END_STATE();
    case 858:
      if (lookahead == '0') ADVANCE(1151);
      if (lookahead == '1') ADVANCE(1151);
      if (lookahead == '2') ADVANCE(1151);
      if (lookahead == '3') ADVANCE(1151);
      if (lookahead == '4') ADVANCE(1151);
      END_STATE();
    case 859:
      if (lookahead == '0') ADVANCE(1139);
      if (lookahead == '1') ADVANCE(1139);
      END_STATE();
    case 860:
      if (lookahead == '0') ADVANCE(1139);
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '2') ADVANCE(1139);
      END_STATE();
    case 861:
      if (lookahead == '0') ADVANCE(1139);
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '2') ADVANCE(1139);
      if (lookahead == '3') ADVANCE(1139);
      if (lookahead == '4') ADVANCE(1139);
      END_STATE();
    case 862:
      if (lookahead == '0') ADVANCE(1139);
      if (lookahead == '3') ADVANCE(1139);
      END_STATE();
    case 863:
      if (lookahead == '0') ADVANCE(1138);
      if (lookahead == '1') ADVANCE(1138);
      if (lookahead == '2') ADVANCE(1138);
      END_STATE();
    case 864:
      if (lookahead == '0') ADVANCE(1138);
      if (lookahead == '1') ADVANCE(1138);
      if (lookahead == '2') ADVANCE(1138);
      if (lookahead == '3') ADVANCE(1138);
      if (lookahead == '4') ADVANCE(1138);
      END_STATE();
    case 865:
      if (lookahead == '0') ADVANCE(1148);
      if (lookahead == '1') ADVANCE(1152);
      if (lookahead == '3') ADVANCE(1147);
      END_STATE();
    case 866:
      if (lookahead == '0') ADVANCE(1144);
      END_STATE();
    case 867:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1145);
      if (lookahead == '2') ADVANCE(1145);
      END_STATE();
    case 868:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1145);
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '4') ADVANCE(1145);
      END_STATE();
    case 869:
      if (lookahead == '0') ADVANCE(1146);
      END_STATE();
    case 870:
      if (lookahead == '0') ADVANCE(836);
      if (lookahead == '6') ADVANCE(1038);
      if (lookahead == '8') ADVANCE(1101);
      END_STATE();
    case 871:
      if (lookahead == '0') ADVANCE(1085);
      if (lookahead == '1') ADVANCE(852);
      END_STATE();
    case 872:
      if (lookahead == '0') ADVANCE(937);
      END_STATE();
    case 873:
      if (lookahead == '0') ADVANCE(1087);
      if (lookahead == '1') ADVANCE(857);
      END_STATE();
    case 874:
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '1') ADVANCE(863);
      if (lookahead == '5') ADVANCE(973);
      if (lookahead == '6') ADVANCE(1004);
      END_STATE();
    case 875:
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '1') ADVANCE(863);
      if (lookahead == '5') ADVANCE(973);
      if (lookahead == '6') ADVANCE(1004);
      if (lookahead == '7') ADVANCE(856);
      END_STATE();
    case 876:
      if (lookahead == '0') ADVANCE(1050);
      END_STATE();
    case 877:
      if (lookahead == '0') ADVANCE(1050);
      if (lookahead == '3') ADVANCE(1001);
      END_STATE();
    case 878:
      if (lookahead == '0') ADVANCE(1088);
      if (lookahead == '1') ADVANCE(860);
      END_STATE();
    case 879:
      if (lookahead == '0') ADVANCE(1088);
      if (lookahead == '1') ADVANCE(860);
      if (lookahead == '6') ADVANCE(866);
      END_STATE();
    case 880:
      if (lookahead == '0') ADVANCE(1033);
      if (lookahead == '6') ADVANCE(977);
      END_STATE();
    case 881:
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(867);
      if (lookahead == '6') ADVANCE(869);
      END_STATE();
    case 882:
      if (lookahead == '0') ADVANCE(931);
      if (lookahead == '2') ADVANCE(914);
      if (lookahead == '7') ADVANCE(1109);
      if (lookahead == '9') ADVANCE(1421);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1139);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1145);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1146);
      END_STATE();
    case 883:
      if (lookahead == '0') ADVANCE(938);
      END_STATE();
    case 884:
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '2') ADVANCE(919);
      if (lookahead == '7') ADVANCE(1107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1151);
      END_STATE();
    case 885:
      if (lookahead == '0') ADVANCE(943);
      END_STATE();
    case 886:
      if (lookahead == '0') ADVANCE(929);
      if (lookahead == '2') ADVANCE(923);
      if (lookahead == '7') ADVANCE(1110);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1139);
      END_STATE();
    case 887:
      if (lookahead == '0') ADVANCE(827);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '6') ADVANCE(1038);
      if (lookahead == '7') ADVANCE(1076);
      if (lookahead == '8') ADVANCE(1101);
      END_STATE();
    case 888:
      if (lookahead == '0') ADVANCE(849);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '7') ADVANCE(1076);
      END_STATE();
    case 889:
      if (lookahead == '0') ADVANCE(940);
      END_STATE();
    case 890:
      if (lookahead == '1') ADVANCE(1525);
      if (lookahead == '2') ADVANCE(1568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(890)
      END_STATE();
    case 891:
      if (lookahead == '1') ADVANCE(821);
      if (lookahead == '4') ADVANCE(952);
      if (lookahead == '5') ADVANCE(1083);
      if (lookahead == '8') ADVANCE(956);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(900);
      END_STATE();
    case 892:
      if (lookahead == '1') ADVANCE(845);
      if (lookahead == '4') ADVANCE(998);
      if (lookahead == '5') ADVANCE(1093);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(935);
      END_STATE();
    case 893:
      if (lookahead == '1') ADVANCE(847);
      if (lookahead == '4') ADVANCE(1029);
      END_STATE();
    case 894:
      if (lookahead == '1') ADVANCE(825);
      if (lookahead == '3') ADVANCE(1007);
      if (lookahead == '4') ADVANCE(953);
      if (lookahead == '5') ADVANCE(1094);
      if (lookahead == '6') ADVANCE(865);
      if (lookahead == '8') ADVANCE(960);
      if (lookahead == '9') ADVANCE(1027);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(941);
      END_STATE();
    case 895:
      if (lookahead == '1') ADVANCE(973);
      if (lookahead == ';') ADVANCE(810);
      END_STATE();
    case 896:
      if (lookahead == '1') ADVANCE(973);
      if (lookahead == ';') ADVANCE(1507);
      END_STATE();
    case 897:
      if (lookahead == '1') ADVANCE(1035);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(909);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1400);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1398);
      END_STATE();
    case 898:
      if (lookahead == '1') ADVANCE(974);
      END_STATE();
    case 899:
      if (lookahead == '1') ADVANCE(841);
      if (lookahead == '3') ADVANCE(1007);
      if (lookahead == '4') ADVANCE(1011);
      if (lookahead == '5') ADVANCE(1096);
      if (lookahead == '6') ADVANCE(865);
      if (lookahead == '8') ADVANCE(965);
      if (lookahead == '9') ADVANCE(1027);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(947);
      END_STATE();
    case 900:
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(823);
      if (lookahead == '6') ADVANCE(1063);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1406);
      END_STATE();
    case 901:
      if (lookahead == '1') ADVANCE(970);
      END_STATE();
    case 902:
      if (lookahead == '1') ADVANCE(859);
      if (lookahead == '2') ADVANCE(979);
      if (lookahead == '3') ADVANCE(1033);
      END_STATE();
    case 903:
      if (lookahead == '1') ADVANCE(859);
      if (lookahead == '2') ADVANCE(978);
      if (lookahead == '3') ADVANCE(1033);
      END_STATE();
    case 904:
      if (lookahead == '1') ADVANCE(1013);
      END_STATE();
    case 905:
      if (lookahead == '1') ADVANCE(968);
      END_STATE();
    case 906:
      if (lookahead == '1') ADVANCE(830);
      if (lookahead == '4') ADVANCE(1053);
      if (lookahead == '8') ADVANCE(961);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(962);
      END_STATE();
    case 907:
      if (lookahead == '1') ADVANCE(844);
      if (lookahead == '4') ADVANCE(1006);
      if (lookahead == '5') ADVANCE(1095);
      if (lookahead == '8') ADVANCE(991);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(945);
      END_STATE();
    case 908:
      if (lookahead == '1') ADVANCE(1132);
      END_STATE();
    case 909:
      if (lookahead == '1') ADVANCE(1139);
      END_STATE();
    case 910:
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '2') ADVANCE(1139);
      END_STATE();
    case 911:
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1120);
      END_STATE();
    case 912:
      if (lookahead == '1') ADVANCE(846);
      if (lookahead == '4') ADVANCE(1047);
      if (lookahead == '8') ADVANCE(957);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(958);
      END_STATE();
    case 913:
      if (lookahead == '1') ADVANCE(853);
      END_STATE();
    case 914:
      if (lookahead == '1') ADVANCE(982);
      END_STATE();
    case 915:
      if (lookahead == '1') ADVANCE(993);
      END_STATE();
    case 916:
      if (lookahead == '1') ADVANCE(1023);
      if (lookahead == '7') ADVANCE(1041);
      END_STATE();
    case 917:
      if (lookahead == '1') ADVANCE(969);
      END_STATE();
    case 918:
      if (lookahead == '1') ADVANCE(858);
      END_STATE();
    case 919:
      if (lookahead == '1') ADVANCE(971);
      END_STATE();
    case 920:
      if (lookahead == '1') ADVANCE(1002);
      END_STATE();
    case 921:
      if (lookahead == '1') ADVANCE(864);
      if (lookahead == '3') ADVANCE(1403);
      if (lookahead == '4') ADVANCE(1078);
      END_STATE();
    case 922:
      if (lookahead == '1') ADVANCE(864);
      if (lookahead == '3') ADVANCE(1403);
      if (lookahead == '4') ADVANCE(1077);
      END_STATE();
    case 923:
      if (lookahead == '1') ADVANCE(972);
      END_STATE();
    case 924:
      if (lookahead == '1') ADVANCE(1050);
      if (lookahead == '3') ADVANCE(908);
      if (lookahead == '9') ADVANCE(1054);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1397);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1002);
      END_STATE();
    case 925:
      if (lookahead == '1') ADVANCE(1050);
      if (lookahead == '3') ADVANCE(908);
      if (lookahead == '9') ADVANCE(1055);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1397);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1002);
      END_STATE();
    case 926:
      if (lookahead == '1') ADVANCE(1050);
      if (lookahead == '9') ADVANCE(1054);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1397);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1002);
      END_STATE();
    case 927:
      if (lookahead == '1') ADVANCE(1050);
      if (lookahead == '9') ADVANCE(1055);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1397);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1002);
      END_STATE();
    case 928:
      if (lookahead == '1') ADVANCE(1088);
      if (lookahead == '2') ADVANCE(1076);
      END_STATE();
    case 929:
      if (lookahead == '1') ADVANCE(861);
      END_STATE();
    case 930:
      if (lookahead == '1') ADVANCE(861);
      if (lookahead == '4') ADVANCE(1036);
      END_STATE();
    case 931:
      if (lookahead == '1') ADVANCE(868);
      if (lookahead == '4') ADVANCE(1037);
      END_STATE();
    case 932:
      if (lookahead == '1') ADVANCE(870);
      if (lookahead == '4') ADVANCE(955);
      if (lookahead == '8') ADVANCE(956);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(959);
      END_STATE();
    case 933:
      if (lookahead == '1') ADVANCE(872);
      if (lookahead == '4') ADVANCE(1002);
      if (lookahead == '5') ADVANCE(1095);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(946);
      END_STATE();
    case 934:
      if (lookahead == '1') ADVANCE(1019);
      if (lookahead == '7') ADVANCE(1042);
      END_STATE();
    case 935:
      if (lookahead == '1') ADVANCE(1070);
      if (lookahead == '2') ADVANCE(1074);
      END_STATE();
    case 936:
      if (lookahead == '1') ADVANCE(1070);
      if (lookahead == '2') ADVANCE(838);
      END_STATE();
    case 937:
      if (lookahead == '1') ADVANCE(1016);
      END_STATE();
    case 938:
      if (lookahead == '1') ADVANCE(1020);
      END_STATE();
    case 939:
      if (lookahead == '1') ADVANCE(883);
      if (lookahead == '4') ADVANCE(1049);
      if (lookahead == '8') ADVANCE(990);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(983);
      END_STATE();
    case 940:
      if (lookahead == '1') ADVANCE(1025);
      if (lookahead == '7') ADVANCE(1041);
      END_STATE();
    case 941:
      if (lookahead == '1') ADVANCE(1071);
      if (lookahead == '2') ADVANCE(828);
      if (lookahead == '3') ADVANCE(1404);
      if (lookahead == '6') ADVANCE(1063);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(911);
      END_STATE();
    case 942:
      if (lookahead == '1') ADVANCE(1071);
      if (lookahead == '2') ADVANCE(843);
      if (lookahead == '3') ADVANCE(1404);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(909);
      END_STATE();
    case 943:
      if (lookahead == '1') ADVANCE(1022);
      END_STATE();
    case 944:
      if (lookahead == '1') ADVANCE(885);
      if (lookahead == '4') ADVANCE(1050);
      if (lookahead == '8') ADVANCE(992);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(987);
      END_STATE();
    case 945:
      if (lookahead == '1') ADVANCE(1072);
      if (lookahead == '2') ADVANCE(882);
      END_STATE();
    case 946:
      if (lookahead == '1') ADVANCE(1072);
      if (lookahead == '2') ADVANCE(1082);
      END_STATE();
    case 947:
      if (lookahead == '1') ADVANCE(1073);
      if (lookahead == '2') ADVANCE(842);
      if (lookahead == '3') ADVANCE(1404);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(909);
      END_STATE();
    case 948:
      if (lookahead == '1') ADVANCE(1073);
      if (lookahead == '2') ADVANCE(829);
      if (lookahead == '3') ADVANCE(1404);
      if (lookahead == '6') ADVANCE(1063);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(911);
      END_STATE();
    case 949:
      if (lookahead == '1') ADVANCE(889);
      if (lookahead == '4') ADVANCE(1000);
      if (lookahead == '5') ADVANCE(1093);
      if (lookahead == '8') ADVANCE(961);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(936);
      END_STATE();
    case 950:
      if (lookahead == '1') ADVANCE(887);
      if (lookahead == '3') ADVANCE(1007);
      if (lookahead == '4') ADVANCE(954);
      if (lookahead == '5') ADVANCE(1096);
      if (lookahead == '6') ADVANCE(865);
      if (lookahead == '8') ADVANCE(960);
      if (lookahead == '9') ADVANCE(1027);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(948);
      END_STATE();
    case 951:
      if (lookahead == '1') ADVANCE(888);
      if (lookahead == '3') ADVANCE(1007);
      if (lookahead == '4') ADVANCE(1009);
      if (lookahead == '5') ADVANCE(1094);
      if (lookahead == '6') ADVANCE(865);
      if (lookahead == '8') ADVANCE(965);
      if (lookahead == '9') ADVANCE(1027);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(942);
      END_STATE();
    case 952:
      if (lookahead == '2') ADVANCE(1117);
      if (lookahead == '3') ADVANCE(1115);
      if (lookahead == '5') ADVANCE(1118);
      if (lookahead == '7') ADVANCE(1119);
      END_STATE();
    case 953:
      if (lookahead == '2') ADVANCE(1117);
      if (lookahead == '3') ADVANCE(1136);
      if (lookahead == '5') ADVANCE(1138);
      END_STATE();
    case 954:
      if (lookahead == '2') ADVANCE(1117);
      if (lookahead == '3') ADVANCE(1149);
      if (lookahead == '5') ADVANCE(1138);
      END_STATE();
    case 955:
      if (lookahead == '2') ADVANCE(1117);
      if (lookahead == '5') ADVANCE(1118);
      if (lookahead == '7') ADVANCE(1119);
      END_STATE();
    case 956:
      if (lookahead == '2') ADVANCE(822);
      if (lookahead == '7') ADVANCE(966);
      END_STATE();
    case 957:
      if (lookahead == '2') ADVANCE(871);
      if (lookahead == '7') ADVANCE(985);
      END_STATE();
    case 958:
      if (lookahead == '2') ADVANCE(851);
      END_STATE();
    case 959:
      if (lookahead == '2') ADVANCE(824);
      if (lookahead == '6') ADVANCE(1063);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1406);
      END_STATE();
    case 960:
      if (lookahead == '2') ADVANCE(875);
      if (lookahead == '5') ADVANCE(1106);
      if (lookahead == '6') ADVANCE(1039);
      if (lookahead == '7') ADVANCE(902);
      if (lookahead == '8') ADVANCE(880);
      if (lookahead == '9') ADVANCE(1081);
      END_STATE();
    case 961:
      if (lookahead == '2') ADVANCE(879);
      if (lookahead == '7') ADVANCE(964);
      END_STATE();
    case 962:
      if (lookahead == '2') ADVANCE(837);
      END_STATE();
    case 963:
      if (lookahead == '2') ADVANCE(1061);
      END_STATE();
    case 964:
      if (lookahead == '2') ADVANCE(974);
      END_STATE();
    case 965:
      if (lookahead == '2') ADVANCE(874);
      if (lookahead == '5') ADVANCE(1106);
      if (lookahead == '6') ADVANCE(1039);
      if (lookahead == '7') ADVANCE(903);
      if (lookahead == '8') ADVANCE(880);
      if (lookahead == '9') ADVANCE(1081);
      END_STATE();
    case 966:
      if (lookahead == '2') ADVANCE(970);
      END_STATE();
    case 967:
      if (lookahead == '2') ADVANCE(976);
      if (lookahead == '9') ADVANCE(1033);
      END_STATE();
    case 968:
      if (lookahead == '2') ADVANCE(1120);
      END_STATE();
    case 969:
      if (lookahead == '2') ADVANCE(1116);
      END_STATE();
    case 970:
      if (lookahead == '2') ADVANCE(1129);
      if (lookahead == '5') ADVANCE(1130);
      if (lookahead == '7') ADVANCE(1131);
      END_STATE();
    case 971:
      if (lookahead == '2') ADVANCE(1151);
      END_STATE();
    case 972:
      if (lookahead == '2') ADVANCE(1139);
      END_STATE();
    case 973:
      if (lookahead == '2') ADVANCE(1139);
      if (lookahead == '3') ADVANCE(1139);
      END_STATE();
    case 974:
      if (lookahead == '2') ADVANCE(1139);
      if (lookahead == '5') ADVANCE(1144);
      END_STATE();
    case 975:
      if (lookahead == '2') ADVANCE(1139);
      if (lookahead == '6') ADVANCE(1139);
      END_STATE();
    case 976:
      if (lookahead == '2') ADVANCE(1139);
      if (lookahead == '7') ADVANCE(1139);
      END_STATE();
    case 977:
      if (lookahead == '2') ADVANCE(1139);
      if (lookahead == '9') ADVANCE(1139);
      END_STATE();
    case 978:
      if (lookahead == '2') ADVANCE(1138);
      if (lookahead == '3') ADVANCE(1139);
      END_STATE();
    case 979:
      if (lookahead == '2') ADVANCE(1138);
      if (lookahead == '3') ADVANCE(1139);
      if (lookahead == '7') ADVANCE(1131);
      END_STATE();
    case 980:
      if (lookahead == '2') ADVANCE(1138);
      if (lookahead == '3') ADVANCE(1139);
      if (lookahead == '7') ADVANCE(1131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 981:
      if (lookahead == '2') ADVANCE(1138);
      if (lookahead == '3') ADVANCE(1139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 982:
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '5') ADVANCE(1146);
      END_STATE();
    case 983:
      if (lookahead == '2') ADVANCE(884);
      END_STATE();
    case 984:
      if (lookahead == '2') ADVANCE(982);
      END_STATE();
    case 985:
      if (lookahead == '2') ADVANCE(969);
      END_STATE();
    case 986:
      if (lookahead == '2') ADVANCE(909);
      if (lookahead == '3') ADVANCE(1419);
      END_STATE();
    case 987:
      if (lookahead == '2') ADVANCE(886);
      END_STATE();
    case 988:
      if (lookahead == '2') ADVANCE(971);
      END_STATE();
    case 989:
      if (lookahead == '2') ADVANCE(972);
      END_STATE();
    case 990:
      if (lookahead == '2') ADVANCE(873);
      if (lookahead == '7') ADVANCE(988);
      END_STATE();
    case 991:
      if (lookahead == '2') ADVANCE(881);
      if (lookahead == '7') ADVANCE(984);
      END_STATE();
    case 992:
      if (lookahead == '2') ADVANCE(878);
      if (lookahead == '7') ADVANCE(989);
      END_STATE();
    case 993:
      if (lookahead == '3') ADVANCE(998);
      END_STATE();
    case 994:
      if (lookahead == '3') ADVANCE(995);
      if (lookahead == '8') ADVANCE(1075);
      END_STATE();
    case 995:
      if (lookahead == '3') ADVANCE(1115);
      if (lookahead == '4') ADVANCE(1133);
      END_STATE();
    case 996:
      if (lookahead == '3') ADVANCE(908);
      if (lookahead == '9') ADVANCE(1044);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1399);
      END_STATE();
    case 997:
      if (lookahead == '3') ADVANCE(908);
      if (lookahead == '9') ADVANCE(1058);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1399);
      END_STATE();
    case 998:
      if (lookahead == '3') ADVANCE(1114);
      END_STATE();
    case 999:
      if (lookahead == '3') ADVANCE(1114);
      if (lookahead == '4') ADVANCE(1139);
      END_STATE();
    case 1000:
      if (lookahead == '3') ADVANCE(1114);
      if (lookahead == '5') ADVANCE(1139);
      if (lookahead == '7') ADVANCE(1144);
      END_STATE();
    case 1001:
      if (lookahead == '3') ADVANCE(1132);
      END_STATE();
    case 1002:
      if (lookahead == '3') ADVANCE(1139);
      END_STATE();
    case 1003:
      if (lookahead == '3') ADVANCE(1139);
      if (lookahead == '4') ADVANCE(1139);
      END_STATE();
    case 1004:
      if (lookahead == '3') ADVANCE(1139);
      if (lookahead == '4') ADVANCE(1139);
      if (lookahead == '5') ADVANCE(1139);
      END_STATE();
    case 1005:
      if (lookahead == '3') ADVANCE(1139);
      if (lookahead == '4') ADVANCE(1145);
      END_STATE();
    case 1006:
      if (lookahead == '3') ADVANCE(1139);
      if (lookahead == '5') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1146);
      END_STATE();
    case 1007:
      if (lookahead == '3') ADVANCE(1147);
      END_STATE();
    case 1008:
      if (lookahead == '3') ADVANCE(1136);
      if (lookahead == '4') ADVANCE(1138);
      END_STATE();
    case 1009:
      if (lookahead == '3') ADVANCE(1136);
      if (lookahead == '5') ADVANCE(1138);
      END_STATE();
    case 1010:
      if (lookahead == '3') ADVANCE(1149);
      if (lookahead == '4') ADVANCE(1138);
      END_STATE();
    case 1011:
      if (lookahead == '3') ADVANCE(1149);
      if (lookahead == '5') ADVANCE(1138);
      END_STATE();
    case 1012:
      if (lookahead == '3') ADVANCE(1001);
      END_STATE();
    case 1013:
      if (lookahead == '3') ADVANCE(1028);
      END_STATE();
    case 1014:
      if (lookahead == '3') ADVANCE(1008);
      END_STATE();
    case 1015:
      if (lookahead == '3') ADVANCE(1030);
      if (lookahead == '8') ADVANCE(1075);
      END_STATE();
    case 1016:
      if (lookahead == '3') ADVANCE(1002);
      END_STATE();
    case 1017:
      if (lookahead == '3') ADVANCE(1002);
      if (lookahead == '6') ADVANCE(1002);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(986);
      END_STATE();
    case 1018:
      if (lookahead == '3') ADVANCE(1002);
      if (lookahead == '7') ADVANCE(1050);
      END_STATE();
    case 1019:
      if (lookahead == '3') ADVANCE(1005);
      if (lookahead == '8') ADVANCE(1080);
      END_STATE();
    case 1020:
      if (lookahead == '3') ADVANCE(1032);
      END_STATE();
    case 1021:
      if (lookahead == '3') ADVANCE(1010);
      END_STATE();
    case 1022:
      if (lookahead == '3') ADVANCE(1033);
      END_STATE();
    case 1023:
      if (lookahead == '3') ADVANCE(1033);
      if (lookahead == '8') ADVANCE(1079);
      END_STATE();
    case 1024:
      if (lookahead == '3') ADVANCE(1409);
      END_STATE();
    case 1025:
      if (lookahead == '3') ADVANCE(999);
      if (lookahead == '8') ADVANCE(1079);
      END_STATE();
    case 1026:
      if (lookahead == '4') ADVANCE(1031);
      END_STATE();
    case 1027:
      if (lookahead == '4') ADVANCE(1097);
      if (lookahead == '6') ADVANCE(1018);
      if (lookahead == '7') ADVANCE(967);
      END_STATE();
    case 1028:
      if (lookahead == '4') ADVANCE(1116);
      END_STATE();
    case 1029:
      if (lookahead == '4') ADVANCE(1127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1128);
      END_STATE();
    case 1030:
      if (lookahead == '4') ADVANCE(1133);
      END_STATE();
    case 1031:
      if (lookahead == '4') ADVANCE(1135);
      END_STATE();
    case 1032:
      if (lookahead == '4') ADVANCE(1151);
      END_STATE();
    case 1033:
      if (lookahead == '4') ADVANCE(1139);
      END_STATE();
    case 1034:
      if (lookahead == '4') ADVANCE(1139);
      if (lookahead == '7') ADVANCE(1139);
      END_STATE();
    case 1035:
      if (lookahead == '4') ADVANCE(1139);
      if (lookahead == '8') ADVANCE(1139);
      END_STATE();
    case 1036:
      if (lookahead == '4') ADVANCE(1144);
      END_STATE();
    case 1037:
      if (lookahead == '4') ADVANCE(1146);
      END_STATE();
    case 1038:
      if (lookahead == '4') ADVANCE(1048);
      END_STATE();
    case 1039:
      if (lookahead == '4') ADVANCE(1060);
      if (lookahead == '6') ADVANCE(862);
      END_STATE();
    case 1040:
      if (lookahead == '4') ADVANCE(972);
      END_STATE();
    case 1041:
      if (lookahead == '4') ADVANCE(1036);
      END_STATE();
    case 1042:
      if (lookahead == '4') ADVANCE(1037);
      END_STATE();
    case 1043:
      if (lookahead == '5') ADVANCE(973);
      END_STATE();
    case 1044:
      if (lookahead == '5') ADVANCE(1115);
      if (lookahead == '6') ADVANCE(1133);
      END_STATE();
    case 1045:
      if (lookahead == '5') ADVANCE(1114);
      END_STATE();
    case 1046:
      if (lookahead == '5') ADVANCE(1114);
      if (lookahead == '6') ADVANCE(1139);
      END_STATE();
    case 1047:
      if (lookahead == '5') ADVANCE(1116);
      END_STATE();
    case 1048:
      if (lookahead == '5') ADVANCE(1122);
      END_STATE();
    case 1049:
      if (lookahead == '5') ADVANCE(1151);
      END_STATE();
    case 1050:
      if (lookahead == '5') ADVANCE(1139);
      END_STATE();
    case 1051:
      if (lookahead == '5') ADVANCE(1139);
      if (lookahead == '6') ADVANCE(1139);
      END_STATE();
    case 1052:
      if (lookahead == '5') ADVANCE(1139);
      if (lookahead == '6') ADVANCE(1145);
      END_STATE();
    case 1053:
      if (lookahead == '5') ADVANCE(1139);
      if (lookahead == '7') ADVANCE(1144);
      END_STATE();
    case 1054:
      if (lookahead == '5') ADVANCE(1136);
      if (lookahead == '6') ADVANCE(1138);
      END_STATE();
    case 1055:
      if (lookahead == '5') ADVANCE(1149);
      if (lookahead == '6') ADVANCE(1138);
      END_STATE();
    case 1056:
      if (lookahead == '6') ADVANCE(1413);
      END_STATE();
    case 1057:
      if (lookahead == '6') ADVANCE(1116);
      END_STATE();
    case 1058:
      if (lookahead == '6') ADVANCE(1133);
      END_STATE();
    case 1059:
      if (lookahead == '6') ADVANCE(1151);
      END_STATE();
    case 1060:
      if (lookahead == '6') ADVANCE(1139);
      END_STATE();
    case 1061:
      if (lookahead == '6') ADVANCE(1139);
      if (lookahead == '7') ADVANCE(1139);
      END_STATE();
    case 1062:
      if (lookahead == '6') ADVANCE(1098);
      END_STATE();
    case 1063:
      if (lookahead == '6') ADVANCE(1408);
      END_STATE();
    case 1064:
      if (lookahead == '6') ADVANCE(1051);
      END_STATE();
    case 1065:
      if (lookahead == '6') ADVANCE(909);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1024);
      END_STATE();
    case 1066:
      if (lookahead == '6') ADVANCE(1102);
      END_STATE();
    case 1067:
      if (lookahead == '6') ADVANCE(1104);
      END_STATE();
    case 1068:
      if (lookahead == '6') ADVANCE(1103);
      END_STATE();
    case 1069:
      if (lookahead == '6') ADVANCE(1105);
      END_STATE();
    case 1070:
      if (lookahead == '6') ADVANCE(1414);
      END_STATE();
    case 1071:
      if (lookahead == '6') ADVANCE(1415);
      END_STATE();
    case 1072:
      if (lookahead == '6') ADVANCE(1416);
      END_STATE();
    case 1073:
      if (lookahead == '6') ADVANCE(1417);
      END_STATE();
    case 1074:
      if (lookahead == '7') ADVANCE(1108);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1114);
      END_STATE();
    case 1075:
      if (lookahead == '7') ADVANCE(1134);
      END_STATE();
    case 1076:
      if (lookahead == '7') ADVANCE(1139);
      END_STATE();
    case 1077:
      if (lookahead == '7') ADVANCE(1139);
      if (lookahead == '8') ADVANCE(1139);
      if (lookahead == '9') ADVANCE(1139);
      END_STATE();
    case 1078:
      if (lookahead == '7') ADVANCE(1139);
      if (lookahead == '8') ADVANCE(1139);
      if (lookahead == '9') ADVANCE(1139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1128);
      END_STATE();
    case 1079:
      if (lookahead == '7') ADVANCE(1144);
      END_STATE();
    case 1080:
      if (lookahead == '7') ADVANCE(1146);
      END_STATE();
    case 1081:
      if (lookahead == '7') ADVANCE(1103);
      END_STATE();
    case 1082:
      if (lookahead == '7') ADVANCE(1112);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1139);
      END_STATE();
    case 1083:
      if (lookahead == '8') ADVANCE(1062);
      END_STATE();
    case 1084:
      if (lookahead == '8') ADVANCE(1121);
      if (lookahead == '9') ADVANCE(1123);
      END_STATE();
    case 1085:
      if (lookahead == '8') ADVANCE(1116);
      if (lookahead == '9') ADVANCE(1116);
      END_STATE();
    case 1086:
      if (lookahead == '8') ADVANCE(1135);
      END_STATE();
    case 1087:
      if (lookahead == '8') ADVANCE(1151);
      if (lookahead == '9') ADVANCE(1151);
      END_STATE();
    case 1088:
      if (lookahead == '8') ADVANCE(1139);
      if (lookahead == '9') ADVANCE(1139);
      END_STATE();
    case 1089:
      if (lookahead == '8') ADVANCE(1138);
      if (lookahead == '9') ADVANCE(1138);
      END_STATE();
    case 1090:
      if (lookahead == '8') ADVANCE(1144);
      END_STATE();
    case 1091:
      if (lookahead == '8') ADVANCE(1145);
      if (lookahead == '9') ADVANCE(1145);
      END_STATE();
    case 1092:
      if (lookahead == '8') ADVANCE(1146);
      END_STATE();
    case 1093:
      if (lookahead == '8') ADVANCE(1066);
      END_STATE();
    case 1094:
      if (lookahead == '8') ADVANCE(1067);
      END_STATE();
    case 1095:
      if (lookahead == '8') ADVANCE(1068);
      END_STATE();
    case 1096:
      if (lookahead == '8') ADVANCE(1069);
      END_STATE();
    case 1097:
      if (lookahead == '9') ADVANCE(975);
      END_STATE();
    case 1098:
      if (lookahead == '9') ADVANCE(1115);
      END_STATE();
    case 1099:
      if (lookahead == '9') ADVANCE(1057);
      END_STATE();
    case 1100:
      if (lookahead == '9') ADVANCE(910);
      if (lookahead == ';') ADVANCE(1519);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1060);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1034);
      END_STATE();
    case 1101:
      if (lookahead == '9') ADVANCE(1120);
      END_STATE();
    case 1102:
      if (lookahead == '9') ADVANCE(1114);
      END_STATE();
    case 1103:
      if (lookahead == '9') ADVANCE(1139);
      END_STATE();
    case 1104:
      if (lookahead == '9') ADVANCE(1136);
      END_STATE();
    case 1105:
      if (lookahead == '9') ADVANCE(1149);
      END_STATE();
    case 1106:
      if (lookahead == '9') ADVANCE(1003);
      END_STATE();
    case 1107:
      if (lookahead == '9') ADVANCE(1059);
      END_STATE();
    case 1108:
      if (lookahead == '9') ADVANCE(1045);
      END_STATE();
    case 1109:
      if (lookahead == '9') ADVANCE(1052);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1402);
      END_STATE();
    case 1110:
      if (lookahead == '9') ADVANCE(1060);
      END_STATE();
    case 1111:
      if (lookahead == '9') ADVANCE(1060);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1401);
      END_STATE();
    case 1112:
      if (lookahead == '9') ADVANCE(1050);
      END_STATE();
    case 1113:
      if (lookahead == '9') ADVANCE(1046);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1401);
      END_STATE();
    case 1114:
      if (lookahead == ';') ADVANCE(1503);
      END_STATE();
    case 1115:
      if (lookahead == ';') ADVANCE(1506);
      END_STATE();
    case 1116:
      if (lookahead == ';') ADVANCE(1424);
      END_STATE();
    case 1117:
      if (lookahead == ';') ADVANCE(1575);
      END_STATE();
    case 1118:
      if (lookahead == ';') ADVANCE(1530);
      END_STATE();
    case 1119:
      if (lookahead == ';') ADVANCE(1559);
      END_STATE();
    case 1120:
      if (lookahead == ';') ADVANCE(1571);
      END_STATE();
    case 1121:
      if (lookahead == ';') ADVANCE(1534);
      END_STATE();
    case 1122:
      if (lookahead == ';') ADVANCE(1591);
      END_STATE();
    case 1123:
      if (lookahead == ';') ADVANCE(1536);
      END_STATE();
    case 1124:
      if (lookahead == ';') ADVANCE(1538);
      END_STATE();
    case 1125:
      if (lookahead == ';') ADVANCE(1540);
      END_STATE();
    case 1126:
      if (lookahead == ';') ADVANCE(1542);
      END_STATE();
    case 1127:
      if (lookahead == ';') ADVANCE(1563);
      END_STATE();
    case 1128:
      if (lookahead == ';') ADVANCE(1587);
      END_STATE();
    case 1129:
      if (lookahead == ';') ADVANCE(1532);
      END_STATE();
    case 1130:
      if (lookahead == ';') ADVANCE(1561);
      END_STATE();
    case 1131:
      if (lookahead == ';') ADVANCE(1579);
      END_STATE();
    case 1132:
      if (lookahead == ';') ADVANCE(1583);
      END_STATE();
    case 1133:
      if (lookahead == ';') ADVANCE(1544);
      END_STATE();
    case 1134:
      if (lookahead == ';') ADVANCE(1565);
      END_STATE();
    case 1135:
      if (lookahead == ';') ADVANCE(1567);
      END_STATE();
    case 1136:
      if (lookahead == ';') ADVANCE(810);
      END_STATE();
    case 1137:
      if (lookahead == ';') ADVANCE(810);
      if (lookahead == 'b') ADVANCE(1139);
      if (lookahead == 'e') ADVANCE(1139);
      if (lookahead == 'm') ADVANCE(1284);
      END_STATE();
    case 1138:
      if (lookahead == ';') ADVANCE(1518);
      END_STATE();
    case 1139:
      if (lookahead == ';') ADVANCE(1508);
      END_STATE();
    case 1140:
      if (lookahead == ';') ADVANCE(1508);
      if (lookahead == 'a') ADVANCE(1323);
      END_STATE();
    case 1141:
      if (lookahead == ';') ADVANCE(1508);
      if (lookahead == 'f') ADVANCE(1358);
      if (lookahead == 'q') ADVANCE(1139);
      END_STATE();
    case 1142:
      if (lookahead == ';') ADVANCE(1508);
      if (lookahead == 'o') ADVANCE(1387);
      END_STATE();
    case 1143:
      if (lookahead == ';') ADVANCE(1508);
      if (lookahead == 't') ADVANCE(1295);
      END_STATE();
    case 1144:
      if (lookahead == ';') ADVANCE(813);
      END_STATE();
    case 1145:
      if (lookahead == ';') ADVANCE(1500);
      END_STATE();
    case 1146:
      if (lookahead == ';') ADVANCE(812);
      END_STATE();
    case 1147:
      if (lookahead == ';') ADVANCE(1519);
      END_STATE();
    case 1148:
      if (lookahead == ';') ADVANCE(811);
      END_STATE();
    case 1149:
      if (lookahead == ';') ADVANCE(1507);
      END_STATE();
    case 1150:
      if (lookahead == ';') ADVANCE(1507);
      if (lookahead == 'b') ADVANCE(1139);
      if (lookahead == 'e') ADVANCE(1139);
      if (lookahead == 'm') ADVANCE(1284);
      END_STATE();
    case 1151:
      if (lookahead == ';') ADVANCE(1425);
      END_STATE();
    case 1152:
      if (lookahead == ';') ADVANCE(1520);
      END_STATE();
    case 1153:
      if (lookahead == '=') ADVANCE(1508);
      END_STATE();
    case 1154:
      if (lookahead == 'A') ADVANCE(1324);
      END_STATE();
    case 1155:
      if (lookahead == 'A') ADVANCE(1324);
      if (lookahead == 'R') ADVANCE(1252);
      END_STATE();
    case 1156:
      if (lookahead == 'A') ADVANCE(1324);
      if (lookahead == 'T') ADVANCE(1213);
      if (lookahead == 'p') ADVANCE(1214);
      END_STATE();
    case 1157:
      if (lookahead == 'L') ADVANCE(1216);
      if (lookahead == 'R') ADVANCE(1252);
      if (lookahead == 'U') ADVANCE(1306);
      END_STATE();
    case 1158:
      if (lookahead == 'M') ADVANCE(1259);
      END_STATE();
    case 1159:
      if (lookahead == 'N') ADVANCE(1508);
      END_STATE();
    case 1160:
      if (lookahead == 'P') ADVANCE(1277);
      END_STATE();
    case 1161:
      if (lookahead == 'R') ADVANCE(1252);
      END_STATE();
    case 1162:
      if (lookahead == 'a') ADVANCE(1329);
      END_STATE();
    case 1163:
      if (lookahead == 'a') ADVANCE(1192);
      END_STATE();
    case 1164:
      if (lookahead == 'a') ADVANCE(1262);
      if (lookahead == 'y') ADVANCE(1312);
      END_STATE();
    case 1165:
      if (lookahead == 'a') ADVANCE(1191);
      if (lookahead == 'd') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == 'v') ADVANCE(1272);
      END_STATE();
    case 1166:
      if (lookahead == 'a') ADVANCE(1330);
      END_STATE();
    case 1167:
      if (lookahead == 'a') ADVANCE(1261);
      if (lookahead == 'y') ADVANCE(1304);
      END_STATE();
    case 1168:
      if (lookahead == 'a') ADVANCE(1319);
      END_STATE();
    case 1169:
      if (lookahead == 'a') ADVANCE(1319);
      if (lookahead == 'i') ADVANCE(1234);
      END_STATE();
    case 1170:
      if (lookahead == 'a') ADVANCE(1319);
      if (lookahead == 'p') ADVANCE(1176);
      END_STATE();
    case 1171:
      if (lookahead == 'a') ADVANCE(1319);
      if (lookahead == 'y') ADVANCE(1312);
      END_STATE();
    case 1172:
      if (lookahead == 'a') ADVANCE(1266);
      if (lookahead == 'd') ADVANCE(1186);
      if (lookahead == 'i') ADVANCE(1198);
      if (lookahead == 'n') ADVANCE(1309);
      if (lookahead == 'p') ADVANCE(1139);
      END_STATE();
    case 1173:
      if (lookahead == 'a') ADVANCE(1266);
      if (lookahead == 'd') ADVANCE(1186);
      if (lookahead == 'i') ADVANCE(1291);
      if (lookahead == 'n') ADVANCE(1309);
      if (lookahead == 'p') ADVANCE(1139);
      END_STATE();
    case 1174:
      if (lookahead == 'a') ADVANCE(1280);
      if (lookahead == 'e') ADVANCE(1225);
      END_STATE();
    case 1175:
      if (lookahead == 'a') ADVANCE(1280);
      if (lookahead == 'i') ADVANCE(1232);
      END_STATE();
    case 1176:
      if (lookahead == 'a') ADVANCE(1324);
      END_STATE();
    case 1177:
      if (lookahead == 'a') ADVANCE(1324);
      if (lookahead == 'r') ADVANCE(1257);
      END_STATE();
    case 1178:
      if (lookahead == 'a') ADVANCE(1276);
      END_STATE();
    case 1179:
      if (lookahead == 'a') ADVANCE(1323);
      END_STATE();
    case 1180:
      if (lookahead == 'a') ADVANCE(1139);
      END_STATE();
    case 1181:
      if (lookahead == 'a') ADVANCE(1346);
      END_STATE();
    case 1182:
      if (lookahead == 'a') ADVANCE(1325);
      END_STATE();
    case 1183:
      if (lookahead == 'a') ADVANCE(1347);
      END_STATE();
    case 1184:
      if (lookahead == 'a') ADVANCE(1349);
      END_STATE();
    case 1185:
      if (lookahead == 'a') ADVANCE(1351);
      END_STATE();
    case 1186:
      if (lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 1187:
      if (lookahead == 'a') ADVANCE(1353);
      END_STATE();
    case 1188:
      if (lookahead == 'a') ADVANCE(1354);
      END_STATE();
    case 1189:
      if (lookahead == 'a') ADVANCE(1345);
      END_STATE();
    case 1190:
      if (lookahead == 'a') ADVANCE(1274);
      END_STATE();
    case 1191:
      if (lookahead == 'b') ADVANCE(1265);
      END_STATE();
    case 1192:
      if (lookahead == 'c') ADVANCE(905);
      END_STATE();
    case 1193:
      if (lookahead == 'c') ADVANCE(1267);
      END_STATE();
    case 1194:
      if (lookahead == 'c') ADVANCE(1269);
      END_STATE();
    case 1195:
      if (lookahead == 'd') ADVANCE(1301);
      if (lookahead == 'p') ADVANCE(1277);
      END_STATE();
    case 1196:
      if (lookahead == 'd') ADVANCE(1181);
      if (lookahead == 'i') ADVANCE(1197);
      END_STATE();
    case 1197:
      if (lookahead == 'd') ADVANCE(1162);
      if (lookahead == 'n') ADVANCE(1370);
      END_STATE();
    case 1198:
      if (lookahead == 'd') ADVANCE(1162);
      if (lookahead == 'n') ADVANCE(1382);
      END_STATE();
    case 1199:
      if (lookahead == 'd') ADVANCE(1183);
      END_STATE();
    case 1200:
      if (lookahead == 'd') ADVANCE(1184);
      END_STATE();
    case 1201:
      if (lookahead == 'd') ADVANCE(1184);
      if (lookahead == 'i') ADVANCE(1287);
      END_STATE();
    case 1202:
      if (lookahead == 'd') ADVANCE(1185);
      END_STATE();
    case 1203:
      if (lookahead == 'd') ADVANCE(1185);
      if (lookahead == 'i') ADVANCE(1288);
      END_STATE();
    case 1204:
      if (lookahead == 'd') ADVANCE(1187);
      END_STATE();
    case 1205:
      if (lookahead == 'd') ADVANCE(1187);
      if (lookahead == 'i') ADVANCE(1290);
      END_STATE();
    case 1206:
      if (lookahead == 'd') ADVANCE(1188);
      END_STATE();
    case 1207:
      if (lookahead == 'd') ADVANCE(1188);
      if (lookahead == 'i') ADVANCE(1292);
      END_STATE();
    case 1208:
      if (lookahead == 'e') ADVANCE(1141);
      if (lookahead == 'l') ADVANCE(1361);
      if (lookahead == 'o') ADVANCE(1386);
      if (lookahead == 'r') ADVANCE(1168);
      END_STATE();
    case 1209:
      if (lookahead == 'e') ADVANCE(1141);
      if (lookahead == 'l') ADVANCE(1361);
      if (lookahead == 'r') ADVANCE(1168);
      END_STATE();
    case 1210:
      if (lookahead == 'e') ADVANCE(1281);
      END_STATE();
    case 1211:
      if (lookahead == 'e') ADVANCE(1320);
      if (lookahead == 'l') ADVANCE(1373);
      if (lookahead == 'm') ADVANCE(1139);
      if (lookahead == 'r') ADVANCE(1298);
      END_STATE();
    case 1212:
      if (lookahead == 'e') ADVANCE(1320);
      if (lookahead == 'l') ADVANCE(1375);
      if (lookahead == 'm') ADVANCE(1139);
      if (lookahead == 'r') ADVANCE(1298);
      END_STATE();
    case 1213:
      if (lookahead == 'e') ADVANCE(1215);
      END_STATE();
    case 1214:
      if (lookahead == 'e') ADVANCE(1316);
      END_STATE();
    case 1215:
      if (lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 1216:
      if (lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 1217:
      if (lookahead == 'e') ADVANCE(1282);
      END_STATE();
    case 1218:
      if (lookahead == 'e') ADVANCE(1267);
      END_STATE();
    case 1219:
      if (lookahead == 'e') ADVANCE(1283);
      END_STATE();
    case 1220:
      if (lookahead == 'e') ADVANCE(1284);
      END_STATE();
    case 1221:
      if (lookahead == 'e') ADVANCE(1285);
      END_STATE();
    case 1222:
      if (lookahead == 'e') ADVANCE(1286);
      END_STATE();
    case 1223:
      if (lookahead == 'e') ADVANCE(1348);
      END_STATE();
    case 1224:
      if (lookahead == 'e') ADVANCE(1350);
      END_STATE();
    case 1225:
      if (lookahead == 'f') ADVANCE(1357);
      END_STATE();
    case 1226:
      if (lookahead == 'f') ADVANCE(1256);
      END_STATE();
    case 1227:
      if (lookahead == 'f') ADVANCE(1359);
      END_STATE();
    case 1228:
      if (lookahead == 'f') ADVANCE(1120);
      END_STATE();
    case 1229:
      if (lookahead == 'f') ADVANCE(1336);
      END_STATE();
    case 1230:
      if (lookahead == 'f') ADVANCE(1139);
      END_STATE();
    case 1231:
      if (lookahead == 'g') ADVANCE(1294);
      END_STATE();
    case 1232:
      if (lookahead == 'g') ADVANCE(1237);
      END_STATE();
    case 1233:
      if (lookahead == 'g') ADVANCE(1139);
      END_STATE();
    case 1234:
      if (lookahead == 'g') ADVANCE(1239);
      END_STATE();
    case 1235:
      if (lookahead == 'h') ADVANCE(1210);
      END_STATE();
    case 1236:
      if (lookahead == 'h') ADVANCE(1299);
      if (lookahead == 'q') ADVANCE(1380);
      END_STATE();
    case 1237:
      if (lookahead == 'h') ADVANCE(1359);
      END_STATE();
    case 1238:
      if (lookahead == 'h') ADVANCE(1121);
      END_STATE();
    case 1239:
      if (lookahead == 'h') ADVANCE(1366);
      END_STATE();
    case 1240:
      if (lookahead == 'h') ADVANCE(1116);
      END_STATE();
    case 1241:
      if (lookahead == 'h') ADVANCE(1125);
      END_STATE();
    case 1242:
      if (lookahead == 'h') ADVANCE(1126);
      END_STATE();
    case 1243:
      if (lookahead == 'h') ADVANCE(1151);
      END_STATE();
    case 1244:
      if (lookahead == 'h') ADVANCE(1139);
      END_STATE();
    case 1245:
      if (lookahead == 'h') ADVANCE(1138);
      END_STATE();
    case 1246:
      if (lookahead == 'h') ADVANCE(1145);
      END_STATE();
    case 1247:
      if (lookahead == 'h') ADVANCE(1217);
      END_STATE();
    case 1248:
      if (lookahead == 'h') ADVANCE(1219);
      END_STATE();
    case 1249:
      if (lookahead == 'h') ADVANCE(1221);
      END_STATE();
    case 1250:
      if (lookahead == 'h') ADVANCE(1220);
      END_STATE();
    case 1251:
      if (lookahead == 'h') ADVANCE(1222);
      END_STATE();
    case 1252:
      if (lookahead == 'i') ADVANCE(1232);
      END_STATE();
    case 1253:
      if (lookahead == 'i') ADVANCE(1326);
      END_STATE();
    case 1254:
      if (lookahead == 'i') ADVANCE(1231);
      if (lookahead == 'o') ADVANCE(1356);
      END_STATE();
    case 1255:
      if (lookahead == 'i') ADVANCE(1139);
      END_STATE();
    case 1256:
      if (lookahead == 'i') ADVANCE(1284);
      END_STATE();
    case 1257:
      if (lookahead == 'i') ADVANCE(1234);
      END_STATE();
    case 1258:
      if (lookahead == 'i') ADVANCE(1289);
      END_STATE();
    case 1259:
      if (lookahead == 'i') ADVANCE(1290);
      END_STATE();
    case 1260:
      if (lookahead == 'l') ADVANCE(1368);
      END_STATE();
    case 1261:
      if (lookahead == 'l') ADVANCE(1228);
      END_STATE();
    case 1262:
      if (lookahead == 'l') ADVANCE(1228);
      if (lookahead == 'r') ADVANCE(1326);
      END_STATE();
    case 1263:
      if (lookahead == 'l') ADVANCE(1168);
      if (lookahead == 'q') ADVANCE(1367);
      if (lookahead == 'r') ADVANCE(1168);
      END_STATE();
    case 1264:
      if (lookahead == 'l') ADVANCE(1119);
      END_STATE();
    case 1265:
      if (lookahead == 'l') ADVANCE(1180);
      END_STATE();
    case 1266:
      if (lookahead == 'l') ADVANCE(1215);
      END_STATE();
    case 1267:
      if (lookahead == 'l') ADVANCE(1139);
      END_STATE();
    case 1268:
      if (lookahead == 'l') ADVANCE(1139);
      if (lookahead == 'r') ADVANCE(1139);
      END_STATE();
    case 1269:
      if (lookahead == 'l') ADVANCE(1147);
      END_STATE();
    case 1270:
      if (lookahead == 'l') ADVANCE(1144);
      END_STATE();
    case 1271:
      if (lookahead == 'l') ADVANCE(1146);
      END_STATE();
    case 1272:
      if (lookahead == 'l') ADVANCE(1365);
      END_STATE();
    case 1273:
      if (lookahead == 'l') ADVANCE(1377);
      END_STATE();
    case 1274:
      if (lookahead == 'l') ADVANCE(1341);
      END_STATE();
    case 1275:
      if (lookahead == 'l') ADVANCE(1371);
      END_STATE();
    case 1276:
      if (lookahead == 'l') ADVANCE(1343);
      END_STATE();
    case 1277:
      if (lookahead == 'l') ADVANCE(1381);
      END_STATE();
    case 1278:
      if (lookahead == 'm') ADVANCE(1139);
      END_STATE();
    case 1279:
      if (lookahead == 'n') ADVANCE(1226);
      END_STATE();
    case 1280:
      if (lookahead == 'n') ADVANCE(1233);
      END_STATE();
    case 1281:
      if (lookahead == 'n') ADVANCE(1121);
      END_STATE();
    case 1282:
      if (lookahead == 'n') ADVANCE(1116);
      END_STATE();
    case 1283:
      if (lookahead == 'n') ADVANCE(1151);
      END_STATE();
    case 1284:
      if (lookahead == 'n') ADVANCE(1139);
      END_STATE();
    case 1285:
      if (lookahead == 'n') ADVANCE(1138);
      END_STATE();
    case 1286:
      if (lookahead == 'n') ADVANCE(1145);
      END_STATE();
    case 1287:
      if (lookahead == 'n') ADVANCE(1378);
      END_STATE();
    case 1288:
      if (lookahead == 'n') ADVANCE(1379);
      END_STATE();
    case 1289:
      if (lookahead == 'n') ADVANCE(1374);
      END_STATE();
    case 1290:
      if (lookahead == 'n') ADVANCE(1381);
      END_STATE();
    case 1291:
      if (lookahead == 'n') ADVANCE(1382);
      END_STATE();
    case 1292:
      if (lookahead == 'n') ADVANCE(1383);
      END_STATE();
    case 1293:
      if (lookahead == 'o') ADVANCE(1386);
      END_STATE();
    case 1294:
      if (lookahead == 'o') ADVANCE(1195);
      END_STATE();
    case 1295:
      if (lookahead == 'o') ADVANCE(1278);
      END_STATE();
    case 1296:
      if (lookahead == 'o') ADVANCE(1387);
      END_STATE();
    case 1297:
      if (lookahead == 'o') ADVANCE(1264);
      END_STATE();
    case 1298:
      if (lookahead == 'o') ADVANCE(1229);
      END_STATE();
    case 1299:
      if (lookahead == 'o') ADVANCE(1322);
      END_STATE();
    case 1300:
      if (lookahead == 'o') ADVANCE(1270);
      END_STATE();
    case 1301:
      if (lookahead == 'o') ADVANCE(1363);
      END_STATE();
    case 1302:
      if (lookahead == 'o') ADVANCE(1271);
      END_STATE();
    case 1303:
      if (lookahead == 'p') ADVANCE(1156);
      END_STATE();
    case 1304:
      if (lookahead == 'p') ADVANCE(1235);
      END_STATE();
    case 1305:
      if (lookahead == 'p') ADVANCE(1139);
      END_STATE();
    case 1306:
      if (lookahead == 'p') ADVANCE(1176);
      END_STATE();
    case 1307:
      if (lookahead == 'p') ADVANCE(1247);
      END_STATE();
    case 1308:
      if (lookahead == 'p') ADVANCE(1248);
      END_STATE();
    case 1309:
      if (lookahead == 'p') ADVANCE(1277);
      END_STATE();
    case 1310:
      if (lookahead == 'p') ADVANCE(1277);
      if (lookahead == 'q') ADVANCE(1372);
      if (lookahead == 'x') ADVANCE(1194);
      END_STATE();
    case 1311:
      if (lookahead == 'p') ADVANCE(1277);
      if (lookahead == 'u') ADVANCE(1268);
      END_STATE();
    case 1312:
      if (lookahead == 'p') ADVANCE(1249);
      END_STATE();
    case 1313:
      if (lookahead == 'p') ADVANCE(1250);
      END_STATE();
    case 1314:
      if (lookahead == 'p') ADVANCE(1251);
      END_STATE();
    case 1315:
      if (lookahead == 'q') ADVANCE(1385);
      END_STATE();
    case 1316:
      if (lookahead == 'r') ADVANCE(1161);
      END_STATE();
    case 1317:
      if (lookahead == 'r') ADVANCE(1142);
      END_STATE();
    case 1318:
      if (lookahead == 'r') ADVANCE(1163);
      END_STATE();
    case 1319:
      if (lookahead == 'r') ADVANCE(1326);
      END_STATE();
    case 1320:
      if (lookahead == 'r') ADVANCE(1305);
      END_STATE();
    case 1321:
      if (lookahead == 'r') ADVANCE(1255);
      END_STATE();
    case 1322:
      if (lookahead == 'r') ADVANCE(1360);
      END_STATE();
    case 1323:
      if (lookahead == 'r') ADVANCE(1215);
      END_STATE();
    case 1324:
      if (lookahead == 'r') ADVANCE(1327);
      END_STATE();
    case 1325:
      if (lookahead == 'r') ADVANCE(1317);
      END_STATE();
    case 1326:
      if (lookahead == 'r') ADVANCE(1139);
      END_STATE();
    case 1327:
      if (lookahead == 'r') ADVANCE(1296);
      END_STATE();
    case 1328:
      if (lookahead == 'r') ADVANCE(1230);
      END_STATE();
    case 1329:
      if (lookahead == 's') ADVANCE(1355);
      END_STATE();
    case 1330:
      if (lookahead == 's') ADVANCE(1238);
      END_STATE();
    case 1331:
      if (lookahead == 's') ADVANCE(1158);
      END_STATE();
    case 1332:
      if (lookahead == 's') ADVANCE(1137);
      END_STATE();
    case 1333:
      if (lookahead == 's') ADVANCE(1160);
      END_STATE();
    case 1334:
      if (lookahead == 's') ADVANCE(1115);
      END_STATE();
    case 1335:
      if (lookahead == 's') ADVANCE(1150);
      END_STATE();
    case 1336:
      if (lookahead == 's') ADVANCE(1376);
      END_STATE();
    case 1337:
      if (lookahead == 's') ADVANCE(1114);
      END_STATE();
    case 1338:
      if (lookahead == 's') ADVANCE(1116);
      END_STATE();
    case 1339:
      if (lookahead == 's') ADVANCE(1129);
      END_STATE();
    case 1340:
      if (lookahead == 's') ADVANCE(1151);
      END_STATE();
    case 1341:
      if (lookahead == 's') ADVANCE(1139);
      END_STATE();
    case 1342:
      if (lookahead == 's') ADVANCE(1138);
      END_STATE();
    case 1343:
      if (lookahead == 's') ADVANCE(1152);
      END_STATE();
    case 1344:
      if (lookahead == 's') ADVANCE(1145);
      END_STATE();
    case 1345:
      if (lookahead == 's') ADVANCE(1362);
      END_STATE();
    case 1346:
      if (lookahead == 's') ADVANCE(1242);
      END_STATE();
    case 1347:
      if (lookahead == 's') ADVANCE(1241);
      END_STATE();
    case 1348:
      if (lookahead == 's') ADVANCE(1364);
      END_STATE();
    case 1349:
      if (lookahead == 's') ADVANCE(1240);
      END_STATE();
    case 1350:
      if (lookahead == 's') ADVANCE(1363);
      END_STATE();
    case 1351:
      if (lookahead == 's') ADVANCE(1243);
      END_STATE();
    case 1352:
      if (lookahead == 's') ADVANCE(1245);
      END_STATE();
    case 1353:
      if (lookahead == 's') ADVANCE(1244);
      END_STATE();
    case 1354:
      if (lookahead == 's') ADVANCE(1246);
      END_STATE();
    case 1355:
      if (lookahead == 't') ADVANCE(1117);
      END_STATE();
    case 1356:
      if (lookahead == 't') ADVANCE(1143);
      if (lookahead == 'x') ADVANCE(1311);
      END_STATE();
    case 1357:
      if (lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 1358:
      if (lookahead == 't') ADVANCE(1177);
      END_STATE();
    case 1359:
      if (lookahead == 't') ADVANCE(1154);
      END_STATE();
    case 1360:
      if (lookahead == 't') ADVANCE(1157);
      END_STATE();
    case 1361:
      if (lookahead == 't') ADVANCE(1321);
      END_STATE();
    case 1362:
      if (lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 1363:
      if (lookahead == 't') ADVANCE(1139);
      END_STATE();
    case 1364:
      if (lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 1365:
      if (lookahead == 't') ADVANCE(1148);
      END_STATE();
    case 1366:
      if (lookahead == 't') ADVANCE(1176);
      END_STATE();
    case 1367:
      if (lookahead == 'u') ADVANCE(1140);
      END_STATE();
    case 1368:
      if (lookahead == 'u') ADVANCE(1334);
      END_STATE();
    case 1369:
      if (lookahead == 'u') ADVANCE(1223);
      END_STATE();
    case 1370:
      if (lookahead == 'u') ADVANCE(1339);
      END_STATE();
    case 1371:
      if (lookahead == 'u') ADVANCE(1331);
      END_STATE();
    case 1372:
      if (lookahead == 'u') ADVANCE(1178);
      END_STATE();
    case 1373:
      if (lookahead == 'u') ADVANCE(1332);
      END_STATE();
    case 1374:
      if (lookahead == 'u') ADVANCE(1333);
      END_STATE();
    case 1375:
      if (lookahead == 'u') ADVANCE(1335);
      END_STATE();
    case 1376:
      if (lookahead == 'u') ADVANCE(1328);
      END_STATE();
    case 1377:
      if (lookahead == 'u') ADVANCE(1337);
      END_STATE();
    case 1378:
      if (lookahead == 'u') ADVANCE(1338);
      END_STATE();
    case 1379:
      if (lookahead == 'u') ADVANCE(1340);
      END_STATE();
    case 1380:
      if (lookahead == 'u') ADVANCE(1179);
      END_STATE();
    case 1381:
      if (lookahead == 'u') ADVANCE(1341);
      END_STATE();
    case 1382:
      if (lookahead == 'u') ADVANCE(1342);
      END_STATE();
    case 1383:
      if (lookahead == 'u') ADVANCE(1344);
      END_STATE();
    case 1384:
      if (lookahead == 'u') ADVANCE(1224);
      END_STATE();
    case 1385:
      if (lookahead == 'u') ADVANCE(1190);
      END_STATE();
    case 1386:
      if (lookahead == 'w') ADVANCE(1189);
      END_STATE();
    case 1387:
      if (lookahead == 'w') ADVANCE(1139);
      END_STATE();
    case 1388:
      if (lookahead == 'x') ADVANCE(1193);
      END_STATE();
    case 1389:
      if (lookahead == 'y') ADVANCE(1307);
      END_STATE();
    case 1390:
      if (lookahead == 'y') ADVANCE(1308);
      END_STATE();
    case 1391:
      if (lookahead == 'y') ADVANCE(1313);
      END_STATE();
    case 1392:
      if (lookahead == 'y') ADVANCE(1314);
      END_STATE();
    case 1393:
      if (lookahead == 65038) ADVANCE(1492);
      END_STATE();
    case 1394:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1395)
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1395:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1395)
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1396:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1423);
      END_STATE();
    case 1397:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1139);
      END_STATE();
    case 1398:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1139);
      END_STATE();
    case 1399:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1134);
      END_STATE();
    case 1400:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1139);
      END_STATE();
    case 1401:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1144);
      END_STATE();
    case 1402:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1146);
      END_STATE();
    case 1403:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1139);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1139);
      END_STATE();
    case 1404:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1148);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1152);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1147);
      END_STATE();
    case 1405:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1115);
      END_STATE();
    case 1406:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1120);
      END_STATE();
    case 1407:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1114);
      END_STATE();
    case 1408:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1122);
      END_STATE();
    case 1409:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1139);
      END_STATE();
    case 1410:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1136);
      END_STATE();
    case 1411:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1149);
      END_STATE();
    case 1412:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 1413:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 1414:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 1415:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 1416:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1409);
      END_STATE();
    case 1417:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 1418:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1086);
      END_STATE();
    case 1419:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1139);
      END_STATE();
    case 1420:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1090);
      END_STATE();
    case 1421:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1092);
      END_STATE();
    case 1422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1500);
      END_STATE();
    case 1423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1422);
      END_STATE();
    case 1424:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1499);
      END_STATE();
    case 1425:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1496);
      END_STATE();
    case 1426:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1500);
      END_STATE();
    case 1427:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1524);
      END_STATE();
    case 1428:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1457);
      END_STATE();
    case 1429:
      if (eof) ADVANCE(1436);
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(761);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '#') ADVANCE(1505);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1504);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1485);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(1474);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(1478);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1473);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1430:
      if (eof) ADVANCE(1436);
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(761);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '#') ADVANCE(1505);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1504);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1483);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1431:
      if (eof) ADVANCE(1436);
      if (lookahead == '\n') ADVANCE(1445);
      if (lookahead == '\r') ADVANCE(772);
      if (lookahead == '!') ADVANCE(1515);
      if (lookahead == '$') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(1459);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1513);
      if (lookahead == '0') ADVANCE(1551);
      if (lookahead == '1') ADVANCE(1527);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(1514);
      if (lookahead == '?') ADVANCE(1515);
      if (lookahead == '@') ADVANCE(1495);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1478);
      if (lookahead == 'O') ADVANCE(1546);
      if (lookahead == 'P') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(518);
      if (lookahead == '[') ADVANCE(1450);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1470);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '{') ADVANCE(1462);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(1517);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 9817) ADVANCE(1491);
      if (lookahead == 9823) ADVANCE(492);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(772);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1432:
      if (eof) ADVANCE(1436);
      if (lookahead == '\n') ADVANCE(782);
      if (lookahead == '\r') ADVANCE(773);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(1574);
      if (lookahead == '0') ADVANCE(1550);
      if (lookahead == '1') ADVANCE(1526);
      if (lookahead == 'O') ADVANCE(1547);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == 'o') ADVANCE(1556);
      if (lookahead == 189) ADVANCE(1570);
      if (lookahead == 1645) ADVANCE(1590);
      if (lookahead == 8270) ADVANCE(1586);
      if (lookahead == 8727) ADVANCE(1578);
      if (lookahead == 10033) ADVANCE(1582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(775);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1433:
      if (eof) ADVANCE(1436);
      if (lookahead == '\n') ADVANCE(1444);
      if (lookahead == '\r') ADVANCE(783);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(783);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1434:
      if (eof) ADVANCE(1436);
      if (lookahead == '"') ADVANCE(1452);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1441);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '(') ADVANCE(1458);
      if (lookahead == ')') ADVANCE(1460);
      if (lookahead == '*') ADVANCE(1573);
      if (lookahead == '-') ADVANCE(1529);
      if (lookahead == '/') ADVANCE(1558);
      if (lookahead == '0') ADVANCE(1552);
      if (lookahead == '1') ADVANCE(1525);
      if (lookahead == '2') ADVANCE(1568);
      if (lookahead == '@') ADVANCE(1494);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(1476);
      if (lookahead == 'O') ADVANCE(1548);
      if (lookahead == 'P') ADVANCE(1487);
      if (lookahead == '[') ADVANCE(1449);
      if (lookahead == ']') ADVANCE(1451);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1469);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '}') ADVANCE(1463);
      if (lookahead == 189) ADVANCE(1569);
      if (lookahead == 1645) ADVANCE(1589);
      if (lookahead == 8208) ADVANCE(1533);
      if (lookahead == 8209) ADVANCE(1535);
      if (lookahead == 8210) ADVANCE(1537);
      if (lookahead == 8211) ADVANCE(1539);
      if (lookahead == 8212) ADVANCE(1541);
      if (lookahead == 8260) ADVANCE(1562);
      if (lookahead == 8270) ADVANCE(1585);
      if (lookahead == 8722) ADVANCE(1531);
      if (lookahead == 8725) ADVANCE(1560);
      if (lookahead == 8727) ADVANCE(1577);
      if (lookahead == 9817) ADVANCE(1490);
      if (lookahead == 9823) ADVANCE(1393);
      if (lookahead == 10033) ADVANCE(1581);
      if (lookahead == 10134) ADVANCE(1543);
      if (lookahead == 10187) ADVANCE(1564);
      if (lookahead == 10744) ADVANCE(1566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1434)
      END_STATE();
    case 1435:
      if (eof) ADVANCE(1436);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(1442);
      if (lookahead == '[') ADVANCE(1450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1435)
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1437);
      if (lookahead == '\r') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(769);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1438);
      if (lookahead == '\r') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(770);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1439);
      if (lookahead == '\r') ADVANCE(780);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(775);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1440);
      if (lookahead == '\r') ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(772);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1443);
      if (lookahead == '\r') ADVANCE(778);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(778);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1444);
      if (lookahead == '\r') ADVANCE(783);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(783);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1440);
      if (lookahead == '\r') ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(772);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1446);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(816);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_double_quote);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1454);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1454);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1456);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1456);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token2);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1464);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1467);
      if (lookahead == '\r') ADVANCE(1466);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1465);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1467);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1468);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(816);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1468);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1468);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(1508);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1521);
      if (lookahead == '\r') ADVANCE(1509);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(1508);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1508);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '=') ADVANCE(1508);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1423);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(520);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(805);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1425);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1505);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1517);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(17);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(793);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1503);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(802);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1503);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1508);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(813);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1517);
      if (lookahead == '-') ADVANCE(1501);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(15);
      if ((8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1502);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1517);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1502);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(15);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1517);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1516);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(798);
      if (lookahead == '+' ||
          lookahead == 5869 ||
          lookahead == 10133) ADVANCE(1508);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1500);
      if (lookahead == '/' ||
          lookahead == 8260 ||
          lookahead == 8725 ||
          lookahead == 10187 ||
          lookahead == 10744) ADVANCE(812);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(796);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(797);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(816);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(1508);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1508);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1524);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(767);
      if (lookahead == '.') ADVANCE(1465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(519);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(794);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1424);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(767);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(519);
      if (lookahead == '.') ADVANCE(1465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(794);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1424);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(794);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1424);
      if (lookahead == '.') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(519);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(794);
      if (lookahead == '-' ||
          (8208 <= lookahead && lookahead <= 8212) ||
          lookahead == 8722 ||
          lookahead == 10134) ADVANCE(1424);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_15);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_16);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_17);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_18);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1435},
  [2] = {.lex_state = 1430},
  [3] = {.lex_state = 1430},
  [4] = {.lex_state = 771},
  [5] = {.lex_state = 787},
  [6] = {.lex_state = 1429},
  [7] = {.lex_state = 1429},
  [8] = {.lex_state = 1429},
  [9] = {.lex_state = 1430},
  [10] = {.lex_state = 1430},
  [11] = {.lex_state = 1430},
  [12] = {.lex_state = 1431},
  [13] = {.lex_state = 1430},
  [14] = {.lex_state = 1430},
  [15] = {.lex_state = 1430},
  [16] = {.lex_state = 1430},
  [17] = {.lex_state = 1430},
  [18] = {.lex_state = 1430},
  [19] = {.lex_state = 1430},
  [20] = {.lex_state = 1430},
  [21] = {.lex_state = 1430},
  [22] = {.lex_state = 1430},
  [23] = {.lex_state = 771},
  [24] = {.lex_state = 1430},
  [25] = {.lex_state = 1430},
  [26] = {.lex_state = 1430},
  [27] = {.lex_state = 1430},
  [28] = {.lex_state = 1430},
  [29] = {.lex_state = 1430},
  [30] = {.lex_state = 1430},
  [31] = {.lex_state = 1430},
  [32] = {.lex_state = 1430},
  [33] = {.lex_state = 771},
  [34] = {.lex_state = 1430},
  [35] = {.lex_state = 771},
  [36] = {.lex_state = 771},
  [37] = {.lex_state = 787},
  [38] = {.lex_state = 787},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 787},
  [41] = {.lex_state = 787},
  [42] = {.lex_state = 1432},
  [43] = {.lex_state = 1432},
  [44] = {.lex_state = 786},
  [45] = {.lex_state = 786},
  [46] = {.lex_state = 787},
  [47] = {.lex_state = 786},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 787},
  [52] = {.lex_state = 787},
  [53] = {.lex_state = 787},
  [54] = {.lex_state = 787},
  [55] = {.lex_state = 787},
  [56] = {.lex_state = 787},
  [57] = {.lex_state = 787},
  [58] = {.lex_state = 787},
  [59] = {.lex_state = 787},
  [60] = {.lex_state = 787},
  [61] = {.lex_state = 787},
  [62] = {.lex_state = 779},
  [63] = {.lex_state = 787},
  [64] = {.lex_state = 787},
  [65] = {.lex_state = 787},
  [66] = {.lex_state = 787},
  [67] = {.lex_state = 787},
  [68] = {.lex_state = 787},
  [69] = {.lex_state = 787},
  [70] = {.lex_state = 787},
  [71] = {.lex_state = 787},
  [72] = {.lex_state = 787},
  [73] = {.lex_state = 787},
  [74] = {.lex_state = 1435},
  [75] = {.lex_state = 1435},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1435},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1435},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1435},
  [82] = {.lex_state = 834},
  [83] = {.lex_state = 1430},
  [84] = {.lex_state = 1433},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 834},
  [87] = {.lex_state = 1430},
  [88] = {.lex_state = 1430},
  [89] = {.lex_state = 1430},
  [90] = {.lex_state = 790},
  [91] = {.lex_state = 1430},
  [92] = {.lex_state = 1430},
  [93] = {.lex_state = 1435},
  [94] = {.lex_state = 1430},
  [95] = {.lex_state = 1435},
  [96] = {.lex_state = 790},
  [97] = {.lex_state = 834},
  [98] = {.lex_state = 790},
  [99] = {.lex_state = 1435},
  [100] = {.lex_state = 1435},
  [101] = {.lex_state = 1435},
  [102] = {.lex_state = 1433},
  [103] = {.lex_state = 1435},
  [104] = {.lex_state = 1435},
  [105] = {.lex_state = 1435},
  [106] = {.lex_state = 834},
  [107] = {.lex_state = 1435},
  [108] = {.lex_state = 1435},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 834},
  [111] = {.lex_state = 1435},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 834},
  [127] = {.lex_state = 834},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1464},
  [133] = {.lex_state = 890},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1446},
  [138] = {.lex_state = 785},
  [139] = {.lex_state = 890},
  [140] = {.lex_state = 890},
  [141] = {.lex_state = 834},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1446},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 834},
  [150] = {.lex_state = 834},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 890},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1446},
  [155] = {.lex_state = 834},
  [156] = {.lex_state = 1446},
  [157] = {.lex_state = 1464},
  [158] = {.lex_state = 0},
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
    [sym_series_of_games] = STATE(136),
    [sym_game] = STATE(103),
    [sym_freestanding_comment] = STATE(78),
    [sym_rest_of_line_comment] = STATE(79),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(36),
    [aux_sym_series_of_games_repeat1] = STATE(75),
    [aux_sym_freestanding_comment_repeat1] = STATE(79),
    [aux_sym_header_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(5),
    [sym_old_style_twic_section_comment] = ACTIONS(7),
    [sym_tagpair_delimiter_open] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
    STATE(7), 1,
      sym__san_destination,
    STATE(31), 1,
      sym_san_move,
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
    STATE(22), 5,
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
  [82] = 18,
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
    STATE(7), 1,
      sym__san_destination,
    STATE(31), 1,
      sym_san_move,
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
    STATE(22), 5,
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
  [164] = 23,
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
    STATE(7), 1,
      sym__san_destination,
    STATE(31), 1,
      sym_san_move,
    STATE(43), 1,
      sym_movetext,
    STATE(88), 1,
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
    STATE(22), 5,
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
  [255] = 23,
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
    ACTIONS(87), 1,
      sym__san_file,
    ACTIONS(91), 1,
      anon_sym_AT,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(31), 1,
      sym_san_move,
    STATE(42), 1,
      sym_movetext,
    STATE(91), 1,
      sym_result_code,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(93), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(95), 2,
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
    STATE(22), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(97), 10,
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
  [345] = 5,
    ACTIONS(103), 1,
      sym__san_promotable_piece,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    STATE(14), 1,
      sym__san_promotion,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(101), 32,
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
  [393] = 5,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    ACTIONS(111), 1,
      sym__san_promotable_piece,
    STATE(15), 1,
      sym__san_promotion,
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
  [441] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(115), 34,
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
  [482] = 4,
    ACTIONS(117), 1,
      sym__san_capture_symbol,
    STATE(13), 1,
      sym__san_destination,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(115), 32,
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
  [527] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(115), 32,
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
  [566] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(121), 32,
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
  [605] = 3,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(125), 32,
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
  [646] = 2,
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
  [685] = 2,
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
  [724] = 2,
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
  [763] = 2,
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
  [802] = 2,
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
  [841] = 2,
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
  [880] = 2,
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
  [919] = 2,
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
  [958] = 2,
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
  [997] = 3,
    ACTIONS(169), 1,
      sym_check_or_mate_condition,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(167), 31,
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
  [1038] = 5,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(171), 1,
      sym__empty_line,
    STATE(33), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    ACTIONS(173), 29,
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
  [1082] = 2,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(177), 31,
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
  [1120] = 2,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(181), 31,
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
  [1158] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(185), 31,
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
  [1196] = 2,
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
  [1234] = 2,
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
  [1272] = 2,
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
  [1310] = 2,
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
  [1348] = 2,
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
  [1386] = 2,
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
  [1424] = 5,
    ACTIONS(211), 1,
      sym__empty_line,
    ACTIONS(215), 1,
      sym_tagpair_delimiter_open,
    STATE(33), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    ACTIONS(213), 29,
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
  [1468] = 2,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(220), 31,
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
  [1506] = 2,
    ACTIONS(222), 1,
      sym__empty_line,
    ACTIONS(224), 30,
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
  [1542] = 2,
    ACTIONS(226), 1,
      sym__empty_line,
    ACTIONS(228), 30,
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
  [1578] = 19,
    ACTIONS(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(232), 1,
      sym_variation_delimiter_open,
    ACTIONS(234), 1,
      sym_variation_delimiter_close,
    ACTIONS(236), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(238), 1,
      sym_move_number,
    ACTIONS(240), 1,
      sym__san_file,
    ACTIONS(242), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(244), 1,
      anon_sym_P,
    ACTIONS(248), 1,
      anon_sym_AT,
    ACTIONS(252), 1,
      sym_annotation,
    STATE(40), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(45), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    STATE(153), 1,
      sym_variation_movetext,
    ACTIONS(246), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(250), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(69), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(71), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1644] = 19,
    ACTIONS(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(232), 1,
      sym_variation_delimiter_open,
    ACTIONS(236), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(238), 1,
      sym_move_number,
    ACTIONS(240), 1,
      sym__san_file,
    ACTIONS(242), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(244), 1,
      anon_sym_P,
    ACTIONS(248), 1,
      anon_sym_AT,
    ACTIONS(252), 1,
      sym_annotation,
    ACTIONS(254), 1,
      sym_variation_delimiter_close,
    STATE(40), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(45), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    STATE(142), 1,
      sym_variation_movetext,
    ACTIONS(246), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(250), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(69), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(71), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1710] = 2,
    ACTIONS(258), 10,
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
    ACTIONS(256), 16,
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
  [1741] = 18,
    ACTIONS(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(232), 1,
      sym_variation_delimiter_open,
    ACTIONS(236), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(238), 1,
      sym_move_number,
    ACTIONS(240), 1,
      sym__san_file,
    ACTIONS(242), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(244), 1,
      anon_sym_P,
    ACTIONS(248), 1,
      anon_sym_AT,
    ACTIONS(252), 1,
      sym_annotation,
    ACTIONS(260), 1,
      sym_variation_delimiter_close,
    STATE(41), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(45), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    ACTIONS(246), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(250), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(69), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(71), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1804] = 18,
    ACTIONS(262), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(265), 1,
      sym_variation_delimiter_open,
    ACTIONS(268), 1,
      sym_variation_delimiter_close,
    ACTIONS(270), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(273), 1,
      sym_move_number,
    ACTIONS(276), 1,
      sym__san_file,
    ACTIONS(279), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(282), 1,
      anon_sym_P,
    ACTIONS(288), 1,
      anon_sym_AT,
    ACTIONS(294), 1,
      sym_annotation,
    STATE(41), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(45), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    ACTIONS(285), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(291), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(69), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(71), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1867] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 1,
      sym__empty_line,
    STATE(83), 1,
      sym_result_code,
    ACTIONS(75), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(301), 3,
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
  [1906] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      sym__empty_line,
    STATE(89), 1,
      sym_result_code,
    ACTIONS(75), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(307), 3,
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
  [1945] = 5,
    ACTIONS(309), 1,
      sym__san_promotable_piece,
    ACTIONS(311), 1,
      sym__san_promotion_symbol,
    STATE(58), 1,
      sym__san_promotion,
    ACTIONS(101), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(99), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1974] = 5,
    ACTIONS(311), 1,
      sym__san_promotion_symbol,
    ACTIONS(313), 1,
      sym__san_promotable_piece,
    STATE(52), 1,
      sym__san_promotion,
    ACTIONS(109), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(107), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2003] = 4,
    ACTIONS(315), 1,
      sym__san_capture_symbol,
    STATE(57), 1,
      sym__san_destination,
    ACTIONS(115), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(113), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2029] = 2,
    ACTIONS(115), 6,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(113), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2051] = 1,
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
  [2070] = 1,
    ACTIONS(319), 16,
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
  [2089] = 1,
    ACTIONS(321), 16,
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
  [2108] = 2,
    ACTIONS(163), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(161), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2128] = 2,
    ACTIONS(139), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(137), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2148] = 2,
    ACTIONS(143), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(141), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2168] = 2,
    ACTIONS(159), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(157), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2188] = 2,
    ACTIONS(121), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(119), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2208] = 3,
    ACTIONS(323), 1,
      sym_check_or_mate_condition,
    ACTIONS(167), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(165), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2230] = 2,
    ACTIONS(131), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(129), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2250] = 2,
    ACTIONS(135), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(133), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2270] = 2,
    ACTIONS(151), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(149), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2290] = 2,
    ACTIONS(147), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(145), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2310] = 2,
    ACTIONS(155), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(153), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2330] = 2,
    ACTIONS(325), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(125), 14,
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
  [2350] = 2,
    ACTIONS(115), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(113), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2370] = 2,
    ACTIONS(329), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(327), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2389] = 2,
    ACTIONS(220), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(218), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2408] = 2,
    ACTIONS(185), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(183), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2427] = 2,
    ACTIONS(181), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(179), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2446] = 2,
    ACTIONS(333), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(331), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2465] = 2,
    ACTIONS(337), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(335), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2484] = 2,
    ACTIONS(197), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(195), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2503] = 2,
    ACTIONS(341), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(339), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2522] = 2,
    ACTIONS(189), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(187), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2541] = 2,
    ACTIONS(345), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(343), 11,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_,
      anon_sym_2,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2560] = 11,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(352), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(355), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(74), 1,
      aux_sym_series_of_games_repeat1,
    STATE(85), 1,
      sym_freestanding_comment,
    STATE(103), 1,
      sym_game,
    STATE(81), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2595] = 11,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(74), 1,
      aux_sym_series_of_games_repeat1,
    STATE(80), 1,
      sym_freestanding_comment,
    STATE(103), 1,
      sym_game,
    STATE(79), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2630] = 1,
    ACTIONS(360), 10,
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
  [2643] = 5,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(367), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(370), 1,
      sym_tagpair_delimiter_open,
    STATE(77), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2660] = 6,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(105), 1,
      sym_game,
  [2679] = 5,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(380), 1,
      sym_tagpair_delimiter_open,
    STATE(77), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2696] = 6,
    ACTIONS(374), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(105), 1,
      sym_game,
  [2715] = 4,
    ACTIONS(380), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(384), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(386), 1,
      sym_old_style_twic_section_comment,
    STATE(93), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2729] = 5,
    ACTIONS(388), 1,
      sym__san_file,
    ACTIONS(390), 1,
      sym__san_rank,
    ACTIONS(392), 1,
      sym__san_capture_symbol,
    ACTIONS(394), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym__san_destination,
  [2745] = 3,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      sym__empty_line,
    ACTIONS(400), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2757] = 3,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(125), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2769] = 5,
    ACTIONS(374), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(105), 1,
      sym_game,
  [2785] = 5,
    ACTIONS(404), 1,
      sym__san_file,
    ACTIONS(406), 1,
      sym__san_rank,
    ACTIONS(408), 1,
      sym__san_capture_symbol,
    ACTIONS(410), 1,
      anon_sym_AT,
    STATE(20), 1,
      sym__san_destination,
  [2801] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(414), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2811] = 3,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 1,
      sym__empty_line,
    ACTIONS(420), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2823] = 3,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 1,
      sym__empty_line,
    ACTIONS(426), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2835] = 4,
    ACTIONS(428), 1,
      sym_double_quote,
    STATE(96), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(131), 1,
      sym_tagpair_value_contents,
    ACTIONS(430), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2849] = 3,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    ACTIONS(434), 1,
      sym__empty_line,
    ACTIONS(436), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2861] = 2,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(440), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2871] = 4,
    ACTIONS(370), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(442), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(445), 1,
      sym_old_style_twic_section_comment,
    STATE(93), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2885] = 2,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(450), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2895] = 2,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(189), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2904] = 3,
    ACTIONS(452), 1,
      sym_double_quote,
    STATE(98), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(454), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2915] = 4,
    ACTIONS(456), 1,
      sym__san_file,
    ACTIONS(458), 1,
      sym__san_rank,
    ACTIONS(460), 1,
      sym__san_capture_symbol,
    STATE(61), 1,
      sym__san_destination,
  [2928] = 3,
    ACTIONS(462), 1,
      sym_double_quote,
    STATE(98), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(464), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2939] = 2,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(469), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2948] = 2,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(473), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2957] = 2,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(477), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2966] = 2,
    ACTIONS(479), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(125), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2975] = 2,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(483), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2984] = 2,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(487), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2993] = 2,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(491), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3002] = 4,
    ACTIONS(493), 1,
      sym__san_file,
    ACTIONS(495), 1,
      sym__san_rank,
    ACTIONS(497), 1,
      sym__san_capture_symbol,
    STATE(19), 1,
      sym__san_destination,
  [3015] = 2,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(501), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3024] = 2,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(505), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3033] = 3,
    ACTIONS(456), 1,
      sym__san_file,
    ACTIONS(460), 1,
      sym__san_capture_symbol,
    STATE(61), 1,
      sym__san_destination,
  [3043] = 1,
    ACTIONS(507), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [3049] = 2,
    ACTIONS(187), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(189), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [3057] = 3,
    ACTIONS(493), 1,
      sym__san_file,
    ACTIONS(497), 1,
      sym__san_capture_symbol,
    STATE(19), 1,
      sym__san_destination,
  [3067] = 2,
    ACTIONS(456), 1,
      sym__san_file,
    STATE(53), 1,
      sym__san_destination,
  [3074] = 2,
    ACTIONS(493), 1,
      sym__san_file,
    STATE(19), 1,
      sym__san_destination,
  [3081] = 2,
    ACTIONS(456), 1,
      sym__san_file,
    STATE(55), 1,
      sym__san_destination,
  [3088] = 2,
    ACTIONS(456), 1,
      sym__san_file,
    STATE(57), 1,
      sym__san_destination,
  [3095] = 2,
    ACTIONS(456), 1,
      sym__san_file,
    STATE(60), 1,
      sym__san_destination,
  [3102] = 2,
    ACTIONS(456), 1,
      sym__san_file,
    STATE(51), 1,
      sym__san_destination,
  [3109] = 2,
    ACTIONS(456), 1,
      sym__san_file,
    STATE(61), 1,
      sym__san_destination,
  [3116] = 1,
    ACTIONS(507), 2,
      anon_sym_14,
      aux_sym_result_code_token14,
  [3121] = 2,
    ACTIONS(493), 1,
      sym__san_file,
    STATE(13), 1,
      sym__san_destination,
  [3128] = 2,
    ACTIONS(493), 1,
      sym__san_file,
    STATE(11), 1,
      sym__san_destination,
  [3135] = 2,
    ACTIONS(493), 1,
      sym__san_file,
    STATE(16), 1,
      sym__san_destination,
  [3142] = 2,
    ACTIONS(509), 1,
      sym__san_file,
    STATE(44), 1,
      sym__san_destination,
  [3149] = 2,
    ACTIONS(511), 1,
      sym__san_file,
    STATE(6), 1,
      sym__san_destination,
  [3156] = 2,
    ACTIONS(513), 1,
      sym__san_rank,
    ACTIONS(515), 1,
      sym__san_capture_symbol,
  [3163] = 2,
    ACTIONS(517), 1,
      sym__san_rank,
    ACTIONS(519), 1,
      sym__san_capture_symbol,
  [3170] = 2,
    ACTIONS(493), 1,
      sym__san_file,
    STATE(17), 1,
      sym__san_destination,
  [3177] = 2,
    ACTIONS(521), 1,
      sym_double_quote,
    STATE(148), 1,
      sym__tagpair_value,
  [3184] = 2,
    ACTIONS(493), 1,
      sym__san_file,
    STATE(21), 1,
      sym__san_destination,
  [3191] = 1,
    ACTIONS(523), 1,
      sym_double_quote,
  [3195] = 1,
    ACTIONS(525), 1,
      sym_inline_comment_text,
  [3199] = 1,
    ACTIONS(527), 1,
      anon_sym_22,
  [3203] = 1,
    ACTIONS(529), 1,
      sym_inline_comment_delimiter_close,
  [3207] = 1,
    ACTIONS(531), 1,
      sym_tagpair_delimiter_close,
  [3211] = 1,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
  [3215] = 1,
    ACTIONS(535), 1,
      sym_rest_of_line_comment_text,
  [3219] = 1,
    ACTIONS(537), 1,
      sym_tagpair_key,
  [3223] = 1,
    ACTIONS(539), 1,
      anon_sym_22,
  [3227] = 1,
    ACTIONS(541), 1,
      anon_sym_1,
  [3231] = 1,
    ACTIONS(543), 1,
      sym__san_rank,
  [3235] = 1,
    ACTIONS(545), 1,
      sym_variation_delimiter_close,
  [3239] = 1,
    ACTIONS(547), 1,
      sym_inline_comment_delimiter_close,
  [3243] = 1,
    ACTIONS(549), 1,
      sym__san_promotable_piece,
  [3247] = 1,
    ACTIONS(551), 1,
      anon_sym_AT,
  [3251] = 1,
    ACTIONS(553), 1,
      sym_tagpair_delimiter_close,
  [3255] = 1,
    ACTIONS(555), 1,
      sym_rest_of_line_comment_text,
  [3259] = 1,
    ACTIONS(557), 1,
      sym_tagpair_delimiter_close,
  [3263] = 1,
    ACTIONS(513), 1,
      sym__san_rank,
  [3267] = 1,
    ACTIONS(559), 1,
      sym__san_rank,
  [3271] = 1,
    ACTIONS(561), 1,
      sym__san_promotable_piece,
  [3275] = 1,
    ACTIONS(507), 1,
      anon_sym_1,
  [3279] = 1,
    ACTIONS(563), 1,
      sym_variation_delimiter_close,
  [3283] = 1,
    ACTIONS(565), 1,
      sym_rest_of_line_comment_text,
  [3287] = 1,
    ACTIONS(517), 1,
      sym__san_rank,
  [3291] = 1,
    ACTIONS(567), 1,
      sym_rest_of_line_comment_text,
  [3295] = 1,
    ACTIONS(569), 1,
      sym_inline_comment_text,
  [3299] = 1,
    ACTIONS(571), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 345,
  [SMALL_STATE(7)] = 393,
  [SMALL_STATE(8)] = 441,
  [SMALL_STATE(9)] = 482,
  [SMALL_STATE(10)] = 527,
  [SMALL_STATE(11)] = 566,
  [SMALL_STATE(12)] = 605,
  [SMALL_STATE(13)] = 646,
  [SMALL_STATE(14)] = 685,
  [SMALL_STATE(15)] = 724,
  [SMALL_STATE(16)] = 763,
  [SMALL_STATE(17)] = 802,
  [SMALL_STATE(18)] = 841,
  [SMALL_STATE(19)] = 880,
  [SMALL_STATE(20)] = 919,
  [SMALL_STATE(21)] = 958,
  [SMALL_STATE(22)] = 997,
  [SMALL_STATE(23)] = 1038,
  [SMALL_STATE(24)] = 1082,
  [SMALL_STATE(25)] = 1120,
  [SMALL_STATE(26)] = 1158,
  [SMALL_STATE(27)] = 1196,
  [SMALL_STATE(28)] = 1234,
  [SMALL_STATE(29)] = 1272,
  [SMALL_STATE(30)] = 1310,
  [SMALL_STATE(31)] = 1348,
  [SMALL_STATE(32)] = 1386,
  [SMALL_STATE(33)] = 1424,
  [SMALL_STATE(34)] = 1468,
  [SMALL_STATE(35)] = 1506,
  [SMALL_STATE(36)] = 1542,
  [SMALL_STATE(37)] = 1578,
  [SMALL_STATE(38)] = 1644,
  [SMALL_STATE(39)] = 1710,
  [SMALL_STATE(40)] = 1741,
  [SMALL_STATE(41)] = 1804,
  [SMALL_STATE(42)] = 1867,
  [SMALL_STATE(43)] = 1906,
  [SMALL_STATE(44)] = 1945,
  [SMALL_STATE(45)] = 1974,
  [SMALL_STATE(46)] = 2003,
  [SMALL_STATE(47)] = 2029,
  [SMALL_STATE(48)] = 2051,
  [SMALL_STATE(49)] = 2070,
  [SMALL_STATE(50)] = 2089,
  [SMALL_STATE(51)] = 2108,
  [SMALL_STATE(52)] = 2128,
  [SMALL_STATE(53)] = 2148,
  [SMALL_STATE(54)] = 2168,
  [SMALL_STATE(55)] = 2188,
  [SMALL_STATE(56)] = 2208,
  [SMALL_STATE(57)] = 2230,
  [SMALL_STATE(58)] = 2250,
  [SMALL_STATE(59)] = 2270,
  [SMALL_STATE(60)] = 2290,
  [SMALL_STATE(61)] = 2310,
  [SMALL_STATE(62)] = 2330,
  [SMALL_STATE(63)] = 2350,
  [SMALL_STATE(64)] = 2370,
  [SMALL_STATE(65)] = 2389,
  [SMALL_STATE(66)] = 2408,
  [SMALL_STATE(67)] = 2427,
  [SMALL_STATE(68)] = 2446,
  [SMALL_STATE(69)] = 2465,
  [SMALL_STATE(70)] = 2484,
  [SMALL_STATE(71)] = 2503,
  [SMALL_STATE(72)] = 2522,
  [SMALL_STATE(73)] = 2541,
  [SMALL_STATE(74)] = 2560,
  [SMALL_STATE(75)] = 2595,
  [SMALL_STATE(76)] = 2630,
  [SMALL_STATE(77)] = 2643,
  [SMALL_STATE(78)] = 2660,
  [SMALL_STATE(79)] = 2679,
  [SMALL_STATE(80)] = 2696,
  [SMALL_STATE(81)] = 2715,
  [SMALL_STATE(82)] = 2729,
  [SMALL_STATE(83)] = 2745,
  [SMALL_STATE(84)] = 2757,
  [SMALL_STATE(85)] = 2769,
  [SMALL_STATE(86)] = 2785,
  [SMALL_STATE(87)] = 2801,
  [SMALL_STATE(88)] = 2811,
  [SMALL_STATE(89)] = 2823,
  [SMALL_STATE(90)] = 2835,
  [SMALL_STATE(91)] = 2849,
  [SMALL_STATE(92)] = 2861,
  [SMALL_STATE(93)] = 2871,
  [SMALL_STATE(94)] = 2885,
  [SMALL_STATE(95)] = 2895,
  [SMALL_STATE(96)] = 2904,
  [SMALL_STATE(97)] = 2915,
  [SMALL_STATE(98)] = 2928,
  [SMALL_STATE(99)] = 2939,
  [SMALL_STATE(100)] = 2948,
  [SMALL_STATE(101)] = 2957,
  [SMALL_STATE(102)] = 2966,
  [SMALL_STATE(103)] = 2975,
  [SMALL_STATE(104)] = 2984,
  [SMALL_STATE(105)] = 2993,
  [SMALL_STATE(106)] = 3002,
  [SMALL_STATE(107)] = 3015,
  [SMALL_STATE(108)] = 3024,
  [SMALL_STATE(109)] = 3033,
  [SMALL_STATE(110)] = 3043,
  [SMALL_STATE(111)] = 3049,
  [SMALL_STATE(112)] = 3057,
  [SMALL_STATE(113)] = 3067,
  [SMALL_STATE(114)] = 3074,
  [SMALL_STATE(115)] = 3081,
  [SMALL_STATE(116)] = 3088,
  [SMALL_STATE(117)] = 3095,
  [SMALL_STATE(118)] = 3102,
  [SMALL_STATE(119)] = 3109,
  [SMALL_STATE(120)] = 3116,
  [SMALL_STATE(121)] = 3121,
  [SMALL_STATE(122)] = 3128,
  [SMALL_STATE(123)] = 3135,
  [SMALL_STATE(124)] = 3142,
  [SMALL_STATE(125)] = 3149,
  [SMALL_STATE(126)] = 3156,
  [SMALL_STATE(127)] = 3163,
  [SMALL_STATE(128)] = 3170,
  [SMALL_STATE(129)] = 3177,
  [SMALL_STATE(130)] = 3184,
  [SMALL_STATE(131)] = 3191,
  [SMALL_STATE(132)] = 3195,
  [SMALL_STATE(133)] = 3199,
  [SMALL_STATE(134)] = 3203,
  [SMALL_STATE(135)] = 3207,
  [SMALL_STATE(136)] = 3211,
  [SMALL_STATE(137)] = 3215,
  [SMALL_STATE(138)] = 3219,
  [SMALL_STATE(139)] = 3223,
  [SMALL_STATE(140)] = 3227,
  [SMALL_STATE(141)] = 3231,
  [SMALL_STATE(142)] = 3235,
  [SMALL_STATE(143)] = 3239,
  [SMALL_STATE(144)] = 3243,
  [SMALL_STATE(145)] = 3247,
  [SMALL_STATE(146)] = 3251,
  [SMALL_STATE(147)] = 3255,
  [SMALL_STATE(148)] = 3259,
  [SMALL_STATE(149)] = 3263,
  [SMALL_STATE(150)] = 3267,
  [SMALL_STATE(151)] = 3271,
  [SMALL_STATE(152)] = 3275,
  [SMALL_STATE(153)] = 3279,
  [SMALL_STATE(154)] = 3283,
  [SMALL_STATE(155)] = 3287,
  [SMALL_STATE(156)] = 3291,
  [SMALL_STATE(157)] = 3295,
  [SMALL_STATE(158)] = 3299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(137),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(37),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(132),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(24),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(126),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(86),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(145),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(123),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(22),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_destination, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_destination, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, .production_id = 31),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, .production_id = 31),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 20),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, .production_id = 20),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17), SHIFT_REPEAT(138),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, .production_id = 24),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(154),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(38),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(157),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(68),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(127),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(82),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(158),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(158),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(113),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(56),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(73),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 18),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 18),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 11),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 11),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(156),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(81),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(138),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(147),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(77),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, .production_id = 15),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 30),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 30),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 14),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 14),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 26),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 26),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 19),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 19),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(156),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(93),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(98),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, .production_id = 30),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 5, .production_id = 30),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 26),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 26),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 18),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 18),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 19),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 19),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 14),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 14),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 11),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 11),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, .production_id = 28),
  [533] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, .production_id = 34),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
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
