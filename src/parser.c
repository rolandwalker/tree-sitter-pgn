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
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  anon_sym_3 = 34,
  anon_sym_4 = 35,
  anon_sym_5 = 36,
  anon_sym_6 = 37,
  anon_sym_AMP_POUNDx2d_SEMI = 38,
  anon_sym_AMPminus_SEMI = 39,
  anon_sym_AMP_POUNDx2010_SEMI = 40,
  anon_sym_AMPndash_SEMI = 41,
  anon_sym_AMPmdash_SEMI = 42,
  anon_sym_O = 43,
  anon_sym_0 = 44,
  anon_sym_o = 45,
  anon_sym_SLASH = 46,
  anon_sym_7 = 47,
  anon_sym_AMPsol_SEMI = 48,
  anon_sym_AMP_POUNDx2f_SEMI = 49,
  anon_sym_AMP_POUNDx2215_SEMI = 50,
  anon_sym_22 = 51,
  anon_sym_8 = 52,
  anon_sym_AMPhalf_SEMI = 53,
  anon_sym_AMP_POUNDxbd_SEMI = 54,
  anon_sym_STAR = 55,
  anon_sym_9 = 56,
  anon_sym_10 = 57,
  anon_sym_AMPmidast_SEMI = 58,
  anon_sym_AMP_POUNDx2a_SEMI = 59,
  anon_sym_AMPlowast_SEMI = 60,
  anon_sym_AMP_POUNDx2731_SEMI = 61,
  sym_series_of_games = 62,
  sym_game = 63,
  sym_freestanding_comment = 64,
  sym_rest_of_line_comment = 65,
  sym_header = 66,
  sym_tagpair = 67,
  sym__tagpair_value = 68,
  sym_tagpair_value_contents = 69,
  sym_movetext = 70,
  sym_variation_movetext = 71,
  sym__movetext_element = 72,
  sym__variation_movetext_element = 73,
  sym_variation = 74,
  sym_inline_comment = 75,
  sym_san_move = 76,
  sym__san_move_piece = 77,
  sym__san_destination = 78,
  sym__san_promotion = 79,
  sym__san_move_pawn = 80,
  sym__san_drop_pawn = 81,
  sym__san_move_major_or_minor_piece = 82,
  sym__san_drop_major_or_minor_piece = 83,
  sym_result_code = 84,
  aux_sym_series_of_games_repeat1 = 85,
  aux_sym_freestanding_comment_repeat1 = 86,
  aux_sym_header_repeat1 = 87,
  aux_sym_tagpair_value_contents_repeat1 = 88,
  aux_sym_movetext_repeat1 = 89,
  aux_sym_variation_movetext_repeat1 = 90,
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
  [anon_sym_3] = "−",
  [anon_sym_4] = "‐",
  [anon_sym_5] = "–",
  [anon_sym_6] = "—",
  [anon_sym_AMP_POUNDx2d_SEMI] = "&#x2d;",
  [anon_sym_AMPminus_SEMI] = "&minus;",
  [anon_sym_AMP_POUNDx2010_SEMI] = "&#x2010;",
  [anon_sym_AMPndash_SEMI] = "&ndash;",
  [anon_sym_AMPmdash_SEMI] = "&mdash;",
  [anon_sym_O] = "O",
  [anon_sym_0] = "0",
  [anon_sym_o] = "o",
  [anon_sym_SLASH] = "/",
  [anon_sym_7] = "∕",
  [anon_sym_AMPsol_SEMI] = "&sol;",
  [anon_sym_AMP_POUNDx2f_SEMI] = "&#x2f;",
  [anon_sym_AMP_POUNDx2215_SEMI] = "&#x2215;",
  [anon_sym_22] = "2",
  [anon_sym_8] = "½",
  [anon_sym_AMPhalf_SEMI] = "&half;",
  [anon_sym_AMP_POUNDxbd_SEMI] = "&#xbd;",
  [anon_sym_STAR] = "*",
  [anon_sym_9] = "∗",
  [anon_sym_10] = "✱",
  [anon_sym_AMPmidast_SEMI] = "&midast;",
  [anon_sym_AMP_POUNDx2a_SEMI] = "&#x2a;",
  [anon_sym_AMPlowast_SEMI] = "&lowast;",
  [anon_sym_AMP_POUNDx2731_SEMI] = "&#x2731;",
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
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_AMP_POUNDx2d_SEMI] = anon_sym_AMP_POUNDx2d_SEMI,
  [anon_sym_AMPminus_SEMI] = anon_sym_AMPminus_SEMI,
  [anon_sym_AMP_POUNDx2010_SEMI] = anon_sym_AMP_POUNDx2010_SEMI,
  [anon_sym_AMPndash_SEMI] = anon_sym_AMPndash_SEMI,
  [anon_sym_AMPmdash_SEMI] = anon_sym_AMPmdash_SEMI,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_AMPsol_SEMI] = anon_sym_AMPsol_SEMI,
  [anon_sym_AMP_POUNDx2f_SEMI] = anon_sym_AMP_POUNDx2f_SEMI,
  [anon_sym_AMP_POUNDx2215_SEMI] = anon_sym_AMP_POUNDx2215_SEMI,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_AMPhalf_SEMI] = anon_sym_AMPhalf_SEMI,
  [anon_sym_AMP_POUNDxbd_SEMI] = anon_sym_AMP_POUNDxbd_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_AMPmidast_SEMI] = anon_sym_AMPmidast_SEMI,
  [anon_sym_AMP_POUNDx2a_SEMI] = anon_sym_AMP_POUNDx2a_SEMI,
  [anon_sym_AMPlowast_SEMI] = anon_sym_AMPlowast_SEMI,
  [anon_sym_AMP_POUNDx2731_SEMI] = anon_sym_AMP_POUNDx2731_SEMI,
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
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2d_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPminus_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2010_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPndash_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPmdash_SEMI] = {
    .visible = true,
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
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPsol_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2f_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2215_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPhalf_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDxbd_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPmidast_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2a_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPlowast_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUNDx2731_SEMI] = {
    .visible = true,
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
          : (c <= 8252 || (c >= 8263 && c <= 8265)))
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
      if (eof) ADVANCE(874);
      if (lookahead == '"') ADVANCE(890);
      if (lookahead == '#') ADVANCE(941);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(538);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == ')') ADVANCE(898);
      if (lookahead == '*') ADVANCE(1006);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(944);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead == '/') ADVANCE(994);
      if (lookahead == '0') ADVANCE(988);
      if (lookahead == '1') ADVANCE(967);
      if (lookahead == '2') ADVANCE(999);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(909);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(920);
      if (lookahead == '=') ADVANCE(922);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(910);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(914);
      if (lookahead == 'O') ADVANCE(984);
      if (lookahead == 'P') ADVANCE(925);
      if (lookahead == '[') ADVANCE(887);
      if (lookahead == '\\') ADVANCE(866);
      if (lookahead == ']') ADVANCE(889);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == '{') ADVANCE(899);
      if (lookahead == '}') ADVANCE(901);
      if (lookahead == 189) ADVANCE(1000);
      if (lookahead == 8208) ADVANCE(973);
      if (lookahead == 8211) ADVANCE(974);
      if (lookahead == 8212) ADVANCE(975);
      if (lookahead == 8722) ADVANCE(972);
      if (lookahead == 8725) ADVANCE(995);
      if (lookahead == 8727) ADVANCE(1008);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == 10033) ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(872)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(564);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == 'q') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 'q') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(957);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(18);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(160);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(505);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '2') ADVANCE(26);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '5') ADVANCE(42);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == '7') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '2') ADVANCE(26);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '5') ADVANCE(42);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == '7') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '9') ADVANCE(154);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == '7') ADVANCE(38);
      if (lookahead == ';') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == '7') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '2') ADVANCE(54);
      if (lookahead == '7') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(109);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '3') ADVANCE(135);
      if (lookahead == '4') ADVANCE(82);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '3') ADVANCE(49);
      if (lookahead == '9') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '3') ADVANCE(49);
      if (lookahead == '9') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == ';') ADVANCE(942);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(103);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(33);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(34);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(47);
      if (lookahead == '3') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(59);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(47);
      if (lookahead == '3') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(68);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead == '3') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(28);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(29);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(30);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == '3') ADVANCE(161);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(140);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(49);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(92);
      if (lookahead == '8') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(58);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(95);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(97);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(88);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(90);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(94);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(92);
      if (lookahead == '8') ADVANCE(92);
      if (lookahead == '9') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(75);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(78);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(943);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(942);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(942);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(953);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(940);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1005);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(949);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(951);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(950);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'v') ADVANCE(175);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'q') ADVANCE(243);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == 'q') ADVANCE(238);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(244);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(248);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(219);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(220);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(202);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(64);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(61);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(62);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(66);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(63);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(139);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(69);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 65038) ADVANCE(931);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(940);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(935);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(936);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(857);
      if (lookahead == '\r') ADVANCE(270);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(857);
      if (lookahead == '\r') SKIP(858)
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(885);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(273);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(274);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(275);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(278);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(281);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(282);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(283);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(285);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(287);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(288);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(297);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(298);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(299);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(301);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(303);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(304);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(306);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(307);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(312);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(313);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(315);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(316);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(317);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(318);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(322);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(323);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(324);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(326);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(328);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(329);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(332);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(333);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(334);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(335);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(336);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(337);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(338);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(339);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(340);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(343);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(346);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(351);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(352);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(360);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(363);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(365);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(366);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(368);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(369);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(370);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(372);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(373);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(375);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(376);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(377);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(378);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(380);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(381);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(384);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(386);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(885);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == '-') ADVANCE(387);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(886);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(506);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(397);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(398);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(399);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(407);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(408);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(410);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(412);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(413);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(414);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(422);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(427);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(429);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(430);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(431);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(432);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(433);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(439);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(440);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(447);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(448);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(452);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(459);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(464);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(467);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(468);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(469);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(471);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(477);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(480);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(481);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(485);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(487);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(495);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(496);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(501);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(502);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(886);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(507);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'N') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(875);
      if (lookahead == '\r') ADVANCE(507);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'N') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(875);
      if (lookahead == '\r') ADVANCE(508);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-') ADVANCE(952);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'N') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(875);
      if (lookahead == '\r') ADVANCE(508);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'N') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '\r') ADVANCE(513);
      if (lookahead == '.') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '\r') ADVANCE(513);
      if (lookahead == '.') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '.') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(566);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(507);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'N') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(514);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'N') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(539);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == '*') ADVANCE(1006);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(989);
      if (lookahead == '1') ADVANCE(970);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'N') ADVANCE(919);
      if (lookahead == 'O') ADVANCE(984);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (lookahead == '[') ADVANCE(887);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 189) ADVANCE(1000);
      if (lookahead == 8727) ADVANCE(1008);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == 10033) ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(539);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == '*') ADVANCE(1006);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(989);
      if (lookahead == '1') ADVANCE(970);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'O') ADVANCE(984);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (lookahead == '[') ADVANCE(887);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 189) ADVANCE(1000);
      if (lookahead == 8727) ADVANCE(1008);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == 10033) ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(883);
      if (lookahead == '\r') ADVANCE(518);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'N') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(519);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '0') ADVANCE(986);
      if (lookahead == '1') ADVANCE(968);
      if (lookahead == 'O') ADVANCE(983);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(527);
      if (lookahead == '\r') ADVANCE(519);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '0') ADVANCE(986);
      if (lookahead == '1') ADVANCE(968);
      if (lookahead == 'O') ADVANCE(983);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(527);
      if (lookahead == '\r') ADVANCE(520);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '0') ADVANCE(986);
      if (lookahead == '1') ADVANCE(968);
      if (lookahead == 'O') ADVANCE(983);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(876);
      if (lookahead == '\r') ADVANCE(516);
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(539);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == '*') ADVANCE(1006);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(989);
      if (lookahead == '1') ADVANCE(970);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'N') ADVANCE(919);
      if (lookahead == 'O') ADVANCE(984);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (lookahead == '[') ADVANCE(887);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 189) ADVANCE(1000);
      if (lookahead == 8727) ADVANCE(1008);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == 10033) ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(876);
      if (lookahead == '\r') ADVANCE(522);
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(539);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == '*') ADVANCE(1006);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(989);
      if (lookahead == '1') ADVANCE(970);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'N') ADVANCE(919);
      if (lookahead == 'O') ADVANCE(984);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (lookahead == '[') ADVANCE(887);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 189) ADVANCE(1000);
      if (lookahead == 8727) ADVANCE(1008);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == 10033) ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(881);
      if (lookahead == '\r') ADVANCE(524);
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(548);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == ')') ADVANCE(898);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(555);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'N') ADVANCE(919);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(524);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(881);
      if (lookahead == '\r') ADVANCE(524);
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(548);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == ')') ADVANCE(898);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(555);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(524);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(877);
      if (lookahead == '\r') ADVANCE(519);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '0') ADVANCE(986);
      if (lookahead == '1') ADVANCE(968);
      if (lookahead == 'O') ADVANCE(983);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(877);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '0') ADVANCE(986);
      if (lookahead == '1') ADVANCE(968);
      if (lookahead == 'O') ADVANCE(983);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(877);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '0') ADVANCE(986);
      if (lookahead == '1') ADVANCE(968);
      if (lookahead == 'O') ADVANCE(983);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(882);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(529);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(878);
      if (lookahead == '\r') ADVANCE(518);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'N') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 531:
      if (lookahead == ' ') SKIP(531)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(891);
      if (lookahead != 0) ADVANCE(892);
      END_STATE();
    case 532:
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '#') ADVANCE(941);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(541);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == ')') ADVANCE(898);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(945);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(555);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(924);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(910);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(914);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(913);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(535);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 533:
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '#') ADVANCE(941);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(552);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == ')') ADVANCE(898);
      if (lookahead == '*') ADVANCE(1006);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(945);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(989);
      if (lookahead == '1') ADVANCE(970);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(920);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'O') ADVANCE(984);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 189) ADVANCE(1000);
      if (lookahead == 8727) ADVANCE(1008);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == 10033) ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(534);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 534:
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(539);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == ')') ADVANCE(898);
      if (lookahead == '*') ADVANCE(1006);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(989);
      if (lookahead == '1') ADVANCE(970);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'N') ADVANCE(919);
      if (lookahead == 'O') ADVANCE(984);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 189) ADVANCE(1000);
      if (lookahead == 8727) ADVANCE(1008);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == 10033) ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(534);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 535:
      if (lookahead == '!') ADVANCE(965);
      if (lookahead == '$') ADVANCE(865);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(548);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == ')') ADVANCE(898);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(958);
      if (lookahead == '0') ADVANCE(555);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(964);
      if (lookahead == '?') ADVANCE(965);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'N') ADVANCE(919);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
      if (lookahead == 'P') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(864);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '{') ADVANCE(899);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(946);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(535);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 536:
      if (lookahead == '"') ADVANCE(890);
      if (lookahead == '\\') ADVANCE(866);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(893);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(537)
      if (lookahead != 0) ADVANCE(894);
      END_STATE();
    case 537:
      if (lookahead == '"') ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(537)
      END_STATE();
    case 538:
      if (lookahead == '#') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(695);
      if (lookahead == 'l') ADVANCE(781);
      if (lookahead == 'm') ADVANCE(720);
      if (lookahead == 'n') ADVANCE(724);
      if (lookahead == 'p') ADVANCE(758);
      if (lookahead == 's') ADVANCE(783);
      END_STATE();
    case 539:
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'b') ADVANCE(785);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead == 'h') ADVANCE(692);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead == 'p') ADVANCE(737);
      if (lookahead == 'q') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead == 's') ADVANCE(792);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead == 'x') ADVANCE(782);
      END_STATE();
    case 540:
      if (lookahead == '#') ADVANCE(845);
      if (lookahead == 'p') ADVANCE(770);
      END_STATE();
    case 541:
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == 'b') ADVANCE(785);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead == 'h') ADVANCE(699);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead == 'l') ADVANCE(698);
      if (lookahead == 'm') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead == 'p') ADVANCE(738);
      if (lookahead == 'q') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead == 's') ADVANCE(792);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead == 'x') ADVANCE(782);
      END_STATE();
    case 542:
      if (lookahead == '#') ADVANCE(634);
      END_STATE();
    case 543:
      if (lookahead == '#') ADVANCE(848);
      if (lookahead == 'm') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(727);
      END_STATE();
    case 544:
      if (lookahead == '#') ADVANCE(638);
      END_STATE();
    case 545:
      if (lookahead == '#') ADVANCE(849);
      if (lookahead == 'm') ADVANCE(734);
      if (lookahead == 'n') ADVANCE(733);
      if (lookahead == 's') ADVANCE(786);
      END_STATE();
    case 546:
      if (lookahead == '#') ADVANCE(850);
      if (lookahead == 'm') ADVANCE(736);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead == 'p') ADVANCE(771);
      if (lookahead == 's') ADVANCE(787);
      END_STATE();
    case 547:
      if (lookahead == '#') ADVANCE(847);
      if (lookahead == 'h') ADVANCE(695);
      if (lookahead == 'l') ADVANCE(781);
      if (lookahead == 'm') ADVANCE(720);
      if (lookahead == 'n') ADVANCE(724);
      if (lookahead == 's') ADVANCE(783);
      END_STATE();
    case 548:
      if (lookahead == '#') ADVANCE(631);
      if (lookahead == 'b') ADVANCE(785);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead == 'h') ADVANCE(699);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead == 'l') ADVANCE(698);
      if (lookahead == 'm') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead == 'p') ADVANCE(737);
      if (lookahead == 'q') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead == 's') ADVANCE(792);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead == 'x') ADVANCE(782);
      END_STATE();
    case 549:
      if (lookahead == '#') ADVANCE(851);
      if (lookahead == 'm') ADVANCE(730);
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 550:
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'm') ADVANCE(734);
      if (lookahead == 'n') ADVANCE(733);
      if (lookahead == 'p') ADVANCE(770);
      if (lookahead == 's') ADVANCE(786);
      END_STATE();
    case 551:
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'm') ADVANCE(734);
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 552:
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == 'b') ADVANCE(785);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead == 'h') ADVANCE(692);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead == 'p') ADVANCE(738);
      if (lookahead == 'q') ADVANCE(827);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead == 's') ADVANCE(792);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead == 'x') ADVANCE(782);
      END_STATE();
    case 553:
      if (lookahead == '#') ADVANCE(854);
      if (lookahead == 'p') ADVANCE(771);
      END_STATE();
    case 554:
      if (lookahead == '&') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(862);
      END_STATE();
    case 555:
      if (lookahead == '&') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(862);
      if (lookahead == '.') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 556:
      if (lookahead == '&') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(946);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(559);
      END_STATE();
    case 557:
      if (lookahead == '&') ADVANCE(544);
      END_STATE();
    case 558:
      if (lookahead == '&') ADVANCE(741);
      END_STATE();
    case 559:
      if (lookahead == '&') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(946);
      END_STATE();
    case 560:
      if (lookahead == '&') ADVANCE(553);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(946);
      END_STATE();
    case 561:
      if (lookahead == '-') ADVANCE(388);
      END_STATE();
    case 562:
      if (lookahead == '-') ADVANCE(561);
      END_STATE();
    case 563:
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 564:
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 565:
      if (lookahead == '-') ADVANCE(563);
      if (lookahead == '.') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(566);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(566);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 568:
      if (lookahead == '0') ADVANCE(593);
      if (lookahead == '2') ADVANCE(594);
      if (lookahead == '7') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(660);
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(662);
      END_STATE();
    case 569:
      if (lookahead == '0') ADVANCE(593);
      if (lookahead == '2') ADVANCE(594);
      if (lookahead == '7') ADVANCE(635);
      if (lookahead == 'a') ADVANCE(660);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(662);
      END_STATE();
    case 570:
      if (lookahead == '0') ADVANCE(605);
      if (lookahead == '1') ADVANCE(715);
      if (lookahead == '2') ADVANCE(574);
      if (lookahead == '3') ADVANCE(598);
      if (lookahead == '5') ADVANCE(595);
      if (lookahead == '6') ADVANCE(639);
      if (lookahead == '7') ADVANCE(606);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'b') ADVANCE(596);
      if (lookahead == 'd') ADVANCE(675);
      END_STATE();
    case 571:
      if (lookahead == '0') ADVANCE(605);
      if (lookahead == '1') ADVANCE(715);
      if (lookahead == '2') ADVANCE(574);
      if (lookahead == '3') ADVANCE(598);
      if (lookahead == '5') ADVANCE(595);
      if (lookahead == '6') ADVANCE(639);
      if (lookahead == '7') ADVANCE(609);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(675);
      END_STATE();
    case 572:
      if (lookahead == '0') ADVANCE(605);
      if (lookahead == '1') ADVANCE(715);
      if (lookahead == '2') ADVANCE(574);
      if (lookahead == '3') ADVANCE(598);
      if (lookahead == '5') ADVANCE(595);
      if (lookahead == '6') ADVANCE(639);
      if (lookahead == '7') ADVANCE(607);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'b') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(675);
      END_STATE();
    case 573:
      if (lookahead == '0') ADVANCE(605);
      if (lookahead == '1') ADVANCE(715);
      if (lookahead == '2') ADVANCE(574);
      if (lookahead == '3') ADVANCE(598);
      if (lookahead == '5') ADVANCE(595);
      if (lookahead == '6') ADVANCE(639);
      if (lookahead == '7') ADVANCE(608);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == 'b') ADVANCE(596);
      if (lookahead == 'd') ADVANCE(675);
      END_STATE();
    case 574:
      if (lookahead == '0') ADVANCE(649);
      if (lookahead == '1') ADVANCE(637);
      if (lookahead == '9') ADVANCE(740);
      END_STATE();
    case 575:
      if (lookahead == '0') ADVANCE(583);
      if (lookahead == '7') ADVANCE(601);
      END_STATE();
    case 576:
      if (lookahead == '0') ADVANCE(583);
      if (lookahead == '7') ADVANCE(601);
      if (lookahead == ';') ADVANCE(1014);
      END_STATE();
    case 577:
      if (lookahead == '0') ADVANCE(985);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'O') ADVANCE(981);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(577)
      END_STATE();
    case 578:
      if (lookahead == '0') ADVANCE(985);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(909);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(920);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'O') ADVANCE(981);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(577)
      END_STATE();
    case 579:
      if (lookahead == '0') ADVANCE(658);
      END_STATE();
    case 580:
      if (lookahead == '0') ADVANCE(668);
      END_STATE();
    case 581:
      if (lookahead == '0') ADVANCE(684);
      END_STATE();
    case 582:
      if (lookahead == '0') ADVANCE(676);
      END_STATE();
    case 583:
      if (lookahead == '0') ADVANCE(676);
      if (lookahead == '1') ADVANCE(676);
      END_STATE();
    case 584:
      if (lookahead == '0') ADVANCE(675);
      END_STATE();
    case 585:
      if (lookahead == '0') ADVANCE(678);
      END_STATE();
    case 586:
      if (lookahead == '0') ADVANCE(603);
      if (lookahead == 'd') ADVANCE(658);
      END_STATE();
    case 587:
      if (lookahead == '0') ADVANCE(604);
      if (lookahead == 'd') ADVANCE(684);
      END_STATE();
    case 588:
      if (lookahead == '0') ADVANCE(610);
      if (lookahead == '2') ADVANCE(612);
      if (lookahead == '7') ADVANCE(654);
      if (lookahead == 'b') ADVANCE(656);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'f') ADVANCE(677);
      END_STATE();
    case 589:
      if (lookahead == '0') ADVANCE(610);
      if (lookahead == '2') ADVANCE(612);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'f') ADVANCE(677);
      END_STATE();
    case 590:
      if (lookahead == '0') ADVANCE(610);
      if (lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 591:
      if (lookahead == '0') ADVANCE(611);
      if (lookahead == '2') ADVANCE(613);
      if (lookahead == '7') ADVANCE(655);
      if (lookahead == 'b') ADVANCE(676);
      if (lookahead == 'd') ADVANCE(678);
      if (lookahead == 'f') ADVANCE(679);
      END_STATE();
    case 592:
      if (lookahead == '1') ADVANCE(967);
      if (lookahead == '2') ADVANCE(999);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(592)
      END_STATE();
    case 593:
      if (lookahead == '1') ADVANCE(580);
      END_STATE();
    case 594:
      if (lookahead == '1') ADVANCE(643);
      END_STATE();
    case 595:
      if (lookahead == '1') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'c') ADVANCE(714);
      if (lookahead == 'f') ADVANCE(704);
      END_STATE();
    case 596:
      if (lookahead == '1') ADVANCE(624);
      if (lookahead == ';') ADVANCE(556);
      END_STATE();
    case 597:
      if (lookahead == '1') ADVANCE(624);
      if (lookahead == ';') ADVANCE(945);
      END_STATE();
    case 598:
      if (lookahead == '1') ADVANCE(637);
      END_STATE();
    case 599:
      if (lookahead == '1') ADVANCE(670);
      END_STATE();
    case 600:
      if (lookahead == '1') ADVANCE(676);
      END_STATE();
    case 601:
      if (lookahead == '1') ADVANCE(676);
      if (lookahead == '2') ADVANCE(676);
      END_STATE();
    case 602:
      if (lookahead == '1') ADVANCE(680);
      END_STATE();
    case 603:
      if (lookahead == '1') ADVANCE(579);
      END_STATE();
    case 604:
      if (lookahead == '1') ADVANCE(581);
      END_STATE();
    case 605:
      if (lookahead == '1') ADVANCE(584);
      if (lookahead == '3') ADVANCE(717);
      if (lookahead == '4') ADVANCE(652);
      END_STATE();
    case 606:
      if (lookahead == '1') ADVANCE(644);
      if (lookahead == '3') ADVANCE(599);
      if (lookahead == '9') ADVANCE(647);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(637);
      END_STATE();
    case 607:
      if (lookahead == '1') ADVANCE(644);
      if (lookahead == '3') ADVANCE(599);
      if (lookahead == '9') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(637);
      END_STATE();
    case 608:
      if (lookahead == '1') ADVANCE(644);
      if (lookahead == '9') ADVANCE(647);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(637);
      END_STATE();
    case 609:
      if (lookahead == '1') ADVANCE(644);
      if (lookahead == '9') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(637);
      END_STATE();
    case 610:
      if (lookahead == '1') ADVANCE(582);
      END_STATE();
    case 611:
      if (lookahead == '1') ADVANCE(585);
      END_STATE();
    case 612:
      if (lookahead == '1') ADVANCE(645);
      END_STATE();
    case 613:
      if (lookahead == '1') ADVANCE(646);
      END_STATE();
    case 614:
      if (lookahead == '2') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(722);
      END_STATE();
    case 615:
      if (lookahead == '2') ADVANCE(650);
      END_STATE();
    case 616:
      if (lookahead == '2') ADVANCE(586);
      END_STATE();
    case 617:
      if (lookahead == '2') ADVANCE(569);
      if (lookahead == 'b') ADVANCE(722);
      END_STATE();
    case 618:
      if (lookahead == '2') ADVANCE(570);
      if (lookahead == 'b') ADVANCE(722);
      END_STATE();
    case 619:
      if (lookahead == '2') ADVANCE(589);
      END_STATE();
    case 620:
      if (lookahead == '2') ADVANCE(591);
      END_STATE();
    case 621:
      if (lookahead == '2') ADVANCE(571);
      END_STATE();
    case 622:
      if (lookahead == '2') ADVANCE(573);
      END_STATE();
    case 623:
      if (lookahead == '2') ADVANCE(676);
      END_STATE();
    case 624:
      if (lookahead == '2') ADVANCE(676);
      if (lookahead == '3') ADVANCE(676);
      END_STATE();
    case 625:
      if (lookahead == '2') ADVANCE(653);
      END_STATE();
    case 626:
      if (lookahead == '2') ADVANCE(587);
      END_STATE();
    case 627:
      if (lookahead == '2') ADVANCE(572);
      if (lookahead == 'b') ADVANCE(722);
      END_STATE();
    case 628:
      if (lookahead == '2') ADVANCE(588);
      END_STATE();
    case 629:
      if (lookahead == '2') ADVANCE(602);
      if (lookahead == '3') ADVANCE(718);
      if (lookahead == 'x') ADVANCE(618);
      END_STATE();
    case 630:
      if (lookahead == '2') ADVANCE(602);
      if (lookahead == '3') ADVANCE(718);
      if (lookahead == 'x') ADVANCE(621);
      END_STATE();
    case 631:
      if (lookahead == '2') ADVANCE(602);
      if (lookahead == '3') ADVANCE(718);
      if (lookahead == 'x') ADVANCE(622);
      END_STATE();
    case 632:
      if (lookahead == '2') ADVANCE(602);
      if (lookahead == '3') ADVANCE(718);
      if (lookahead == 'x') ADVANCE(627);
      END_STATE();
    case 633:
      if (lookahead == '2') ADVANCE(590);
      END_STATE();
    case 634:
      if (lookahead == '2') ADVANCE(600);
      if (lookahead == '3') ADVANCE(747);
      END_STATE();
    case 635:
      if (lookahead == '3') ADVANCE(599);
      END_STATE();
    case 636:
      if (lookahead == '3') ADVANCE(599);
      if (lookahead == '9') ADVANCE(641);
      END_STATE();
    case 637:
      if (lookahead == '3') ADVANCE(676);
      END_STATE();
    case 638:
      if (lookahead == '3') ADVANCE(723);
      END_STATE();
    case 639:
      if (lookahead == '4') ADVANCE(623);
      END_STATE();
    case 640:
      if (lookahead == '4') ADVANCE(676);
      if (lookahead == '8') ADVANCE(676);
      END_STATE();
    case 641:
      if (lookahead == '5') ADVANCE(657);
      END_STATE();
    case 642:
      if (lookahead == '5') ADVANCE(656);
      END_STATE();
    case 643:
      if (lookahead == '5') ADVANCE(669);
      END_STATE();
    case 644:
      if (lookahead == '5') ADVANCE(676);
      END_STATE();
    case 645:
      if (lookahead == '5') ADVANCE(677);
      END_STATE();
    case 646:
      if (lookahead == '5') ADVANCE(679);
      END_STATE();
    case 647:
      if (lookahead == '5') ADVANCE(673);
      END_STATE();
    case 648:
      if (lookahead == '5') ADVANCE(682);
      END_STATE();
    case 649:
      if (lookahead == '6') ADVANCE(676);
      END_STATE();
    case 650:
      if (lookahead == '7') ADVANCE(654);
      if (lookahead == 'b') ADVANCE(656);
      END_STATE();
    case 651:
      if (lookahead == '7') ADVANCE(676);
      END_STATE();
    case 652:
      if (lookahead == '7') ADVANCE(676);
      if (lookahead == '8') ADVANCE(676);
      if (lookahead == '9') ADVANCE(676);
      END_STATE();
    case 653:
      if (lookahead == '7') ADVANCE(655);
      if (lookahead == 'b') ADVANCE(676);
      END_STATE();
    case 654:
      if (lookahead == '9') ADVANCE(642);
      END_STATE();
    case 655:
      if (lookahead == '9') ADVANCE(644);
      END_STATE();
    case 656:
      if (lookahead == ';') ADVANCE(941);
      END_STATE();
    case 657:
      if (lookahead == ';') ADVANCE(944);
      END_STATE();
    case 658:
      if (lookahead == ';') ADVANCE(862);
      END_STATE();
    case 659:
      if (lookahead == ';') ADVANCE(996);
      END_STATE();
    case 660:
      if (lookahead == ';') ADVANCE(1014);
      END_STATE();
    case 661:
      if (lookahead == ';') ADVANCE(976);
      END_STATE();
    case 662:
      if (lookahead == ';') ADVANCE(997);
      END_STATE();
    case 663:
      if (lookahead == ';') ADVANCE(1004);
      END_STATE();
    case 664:
      if (lookahead == ';') ADVANCE(1002);
      END_STATE();
    case 665:
      if (lookahead == ';') ADVANCE(980);
      END_STATE();
    case 666:
      if (lookahead == ';') ADVANCE(977);
      END_STATE();
    case 667:
      if (lookahead == ';') ADVANCE(979);
      END_STATE();
    case 668:
      if (lookahead == ';') ADVANCE(978);
      END_STATE();
    case 669:
      if (lookahead == ';') ADVANCE(998);
      END_STATE();
    case 670:
      if (lookahead == ';') ADVANCE(1018);
      END_STATE();
    case 671:
      if (lookahead == ';') ADVANCE(1016);
      END_STATE();
    case 672:
      if (lookahead == ';') ADVANCE(1012);
      END_STATE();
    case 673:
      if (lookahead == ';') ADVANCE(556);
      END_STATE();
    case 674:
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == 'm') ADVANCE(775);
      END_STATE();
    case 675:
      if (lookahead == ';') ADVANCE(958);
      END_STATE();
    case 676:
      if (lookahead == ';') ADVANCE(946);
      END_STATE();
    case 677:
      if (lookahead == ';') ADVANCE(559);
      END_STATE();
    case 678:
      if (lookahead == ';') ADVANCE(938);
      END_STATE();
    case 679:
      if (lookahead == ';') ADVANCE(560);
      END_STATE();
    case 680:
      if (lookahead == ';') ADVANCE(959);
      END_STATE();
    case 681:
      if (lookahead == ';') ADVANCE(557);
      END_STATE();
    case 682:
      if (lookahead == ';') ADVANCE(945);
      END_STATE();
    case 683:
      if (lookahead == ';') ADVANCE(945);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == 'm') ADVANCE(775);
      END_STATE();
    case 684:
      if (lookahead == ';') ADVANCE(863);
      END_STATE();
    case 685:
      if (lookahead == ';') ADVANCE(960);
      END_STATE();
    case 686:
      if (lookahead == ';') ADVANCE(558);
      END_STATE();
    case 687:
      if (lookahead == ';') ADVANCE(962);
      END_STATE();
    case 688:
      if (lookahead == ';') ADVANCE(961);
      END_STATE();
    case 689:
      if (lookahead == '=') ADVANCE(946);
      END_STATE();
    case 690:
      if (lookahead == 'N') ADVANCE(946);
      END_STATE();
    case 691:
      if (lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 692:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 693:
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == 'd') ADVANCE(710);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 'v') ADVANCE(767);
      END_STATE();
    case 694:
      if (lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 695:
      if (lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 696:
      if (lookahead == 'a') ADVANCE(800);
      END_STATE();
    case 697:
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(843);
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 698:
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 699:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 700:
      if (lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 701:
      if (lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 702:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 703:
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'b') ADVANCE(676);
      END_STATE();
    case 704:
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'f') ADVANCE(676);
      END_STATE();
    case 705:
      if (lookahead == 'a') ADVANCE(814);
      END_STATE();
    case 706:
      if (lookahead == 'a') ADVANCE(813);
      END_STATE();
    case 707:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 708:
      if (lookahead == 'a') ADVANCE(815);
      END_STATE();
    case 709:
      if (lookahead == 'a') ADVANCE(816);
      END_STATE();
    case 710:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 711:
      if (lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 712:
      if (lookahead == 'a') ADVANCE(821);
      END_STATE();
    case 713:
      if (lookahead == 'b') ADVANCE(762);
      END_STATE();
    case 714:
      if (lookahead == 'b') ADVANCE(676);
      END_STATE();
    case 715:
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(651);
      END_STATE();
    case 716:
      if (lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 717:
      if (lookahead == 'c') ADVANCE(676);
      END_STATE();
    case 718:
      if (lookahead == 'c') ADVANCE(681);
      if (lookahead == 'd') ADVANCE(688);
      if (lookahead == 'f') ADVANCE(680);
      END_STATE();
    case 719:
      if (lookahead == 'c') ADVANCE(763);
      END_STATE();
    case 720:
      if (lookahead == 'd') ADVANCE(691);
      if (lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 721:
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'p') ADVANCE(771);
      END_STATE();
    case 722:
      if (lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 723:
      if (lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 724:
      if (lookahead == 'd') ADVANCE(706);
      END_STATE();
    case 725:
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 726:
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 727:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 728:
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(776);
      END_STATE();
    case 729:
      if (lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 730:
      if (lookahead == 'd') ADVANCE(709);
      if (lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 731:
      if (lookahead == 'd') ADVANCE(710);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == 'n') ADVANCE(790);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(710);
      if (lookahead == 'i') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(790);
      END_STATE();
    case 733:
      if (lookahead == 'd') ADVANCE(711);
      END_STATE();
    case 734:
      if (lookahead == 'd') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 735:
      if (lookahead == 'd') ADVANCE(712);
      END_STATE();
    case 736:
      if (lookahead == 'd') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == 'm') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead == 'l') ADVANCE(831);
      if (lookahead == 'm') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == 'q') ADVANCE(842);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 744:
      if (lookahead == 'f') ADVANCE(757);
      END_STATE();
    case 745:
      if (lookahead == 'f') ADVANCE(804);
      END_STATE();
    case 746:
      if (lookahead == 'f') ADVANCE(664);
      END_STATE();
    case 747:
      if (lookahead == 'f') ADVANCE(676);
      END_STATE();
    case 748:
      if (lookahead == 'g') ADVANCE(676);
      END_STATE();
    case 749:
      if (lookahead == 'h') ADVANCE(665);
      END_STATE();
    case 750:
      if (lookahead == 'h') ADVANCE(667);
      END_STATE();
    case 751:
      if (lookahead == 'h') ADVANCE(658);
      END_STATE();
    case 752:
      if (lookahead == 'h') ADVANCE(684);
      END_STATE();
    case 753:
      if (lookahead == 'h') ADVANCE(676);
      END_STATE();
    case 754:
      if (lookahead == 'h') ADVANCE(675);
      END_STATE();
    case 755:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 756:
      if (lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 757:
      if (lookahead == 'i') ADVANCE(775);
      END_STATE();
    case 758:
      if (lookahead == 'l') ADVANCE(828);
      END_STATE();
    case 759:
      if (lookahead == 'l') ADVANCE(746);
      END_STATE();
    case 760:
      if (lookahead == 'l') ADVANCE(746);
      if (lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 761:
      if (lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 762:
      if (lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 763:
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 764:
      if (lookahead == 'l') ADVANCE(685);
      END_STATE();
    case 765:
      if (lookahead == 'l') ADVANCE(677);
      END_STATE();
    case 766:
      if (lookahead == 'l') ADVANCE(679);
      END_STATE();
    case 767:
      if (lookahead == 'l') ADVANCE(826);
      END_STATE();
    case 768:
      if (lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 769:
      if (lookahead == 'l') ADVANCE(812);
      END_STATE();
    case 770:
      if (lookahead == 'l') ADVANCE(835);
      END_STATE();
    case 771:
      if (lookahead == 'l') ADVANCE(838);
      END_STATE();
    case 772:
      if (lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 773:
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 774:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 775:
      if (lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 776:
      if (lookahead == 'n') ADVANCE(836);
      END_STATE();
    case 777:
      if (lookahead == 'n') ADVANCE(837);
      END_STATE();
    case 778:
      if (lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 779:
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 780:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 781:
      if (lookahead == 'o') ADVANCE(843);
      END_STATE();
    case 782:
      if (lookahead == 'o') ADVANCE(721);
      END_STATE();
    case 783:
      if (lookahead == 'o') ADVANCE(761);
      END_STATE();
    case 784:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 785:
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 786:
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 787:
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 788:
      if (lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 789:
      if (lookahead == 'p') ADVANCE(676);
      END_STATE();
    case 790:
      if (lookahead == 'p') ADVANCE(771);
      END_STATE();
    case 791:
      if (lookahead == 'p') ADVANCE(771);
      if (lookahead == 'q') ADVANCE(833);
      if (lookahead == 'x') ADVANCE(716);
      END_STATE();
    case 792:
      if (lookahead == 'q') ADVANCE(832);
      END_STATE();
    case 793:
      if (lookahead == 'q') ADVANCE(841);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(789);
      END_STATE();
    case 796:
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 797:
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 798:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 799:
      if (lookahead == 's') ADVANCE(749);
      END_STATE();
    case 800:
      if (lookahead == 's') ADVANCE(822);
      END_STATE();
    case 801:
      if (lookahead == 's') ADVANCE(674);
      END_STATE();
    case 802:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 803:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 804:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 805:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 806:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 807:
      if (lookahead == 's') ADVANCE(658);
      END_STATE();
    case 808:
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 809:
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 810:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 811:
      if (lookahead == 's') ADVANCE(678);
      END_STATE();
    case 812:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 813:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 814:
      if (lookahead == 's') ADVANCE(823);
      END_STATE();
    case 815:
      if (lookahead == 's') ADVANCE(751);
      END_STATE();
    case 816:
      if (lookahead == 's') ADVANCE(752);
      END_STATE();
    case 817:
      if (lookahead == 's') ADVANCE(825);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 819:
      if (lookahead == 's') ADVANCE(824);
      END_STATE();
    case 820:
      if (lookahead == 's') ADVANCE(753);
      END_STATE();
    case 821:
      if (lookahead == 's') ADVANCE(755);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 827:
      if (lookahead == 'u') ADVANCE(742);
      END_STATE();
    case 828:
      if (lookahead == 'u') ADVANCE(803);
      END_STATE();
    case 829:
      if (lookahead == 'u') ADVANCE(801);
      END_STATE();
    case 830:
      if (lookahead == 'u') ADVANCE(798);
      END_STATE();
    case 831:
      if (lookahead == 'u') ADVANCE(802);
      END_STATE();
    case 832:
      if (lookahead == 'u') ADVANCE(700);
      END_STATE();
    case 833:
      if (lookahead == 'u') ADVANCE(701);
      END_STATE();
    case 834:
      if (lookahead == 'u') ADVANCE(805);
      END_STATE();
    case 835:
      if (lookahead == 'u') ADVANCE(806);
      END_STATE();
    case 836:
      if (lookahead == 'u') ADVANCE(807);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(808);
      END_STATE();
    case 838:
      if (lookahead == 'u') ADVANCE(809);
      END_STATE();
    case 839:
      if (lookahead == 'u') ADVANCE(810);
      END_STATE();
    case 840:
      if (lookahead == 'u') ADVANCE(811);
      END_STATE();
    case 841:
      if (lookahead == 'u') ADVANCE(707);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 843:
      if (lookahead == 'w') ADVANCE(696);
      END_STATE();
    case 844:
      if (lookahead == 'x') ADVANCE(614);
      END_STATE();
    case 845:
      if (lookahead == 'x') ADVANCE(615);
      END_STATE();
    case 846:
      if (lookahead == 'x') ADVANCE(790);
      END_STATE();
    case 847:
      if (lookahead == 'x') ADVANCE(617);
      END_STATE();
    case 848:
      if (lookahead == 'x') ADVANCE(616);
      END_STATE();
    case 849:
      if (lookahead == 'x') ADVANCE(619);
      END_STATE();
    case 850:
      if (lookahead == 'x') ADVANCE(620);
      END_STATE();
    case 851:
      if (lookahead == 'x') ADVANCE(626);
      END_STATE();
    case 852:
      if (lookahead == 'x') ADVANCE(628);
      END_STATE();
    case 853:
      if (lookahead == 'x') ADVANCE(633);
      END_STATE();
    case 854:
      if (lookahead == 'x') ADVANCE(625);
      END_STATE();
    case 855:
      if (lookahead == 'x') ADVANCE(719);
      END_STATE();
    case 856:
      if (lookahead == 65038) ADVANCE(930);
      END_STATE();
    case 857:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(858)
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 858:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(858)
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 859:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(861);
      END_STATE();
    case 860:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(938);
      END_STATE();
    case 861:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(860);
      END_STATE();
    case 862:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(937);
      END_STATE();
    case 863:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(934);
      END_STATE();
    case 864:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(938);
      END_STATE();
    case 865:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(966);
      END_STATE();
    case 866:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(895);
      END_STATE();
    case 867:
      if (eof) ADVANCE(874);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(507);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '#') ADVANCE(943);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(942);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(923);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9813 <= lookahead && lookahead <= 9816) ||
          (9819 <= lookahead && lookahead <= 9822)) ADVANCE(912);
      if (lookahead == 'K' ||
          lookahead == 9812 ||
          lookahead == 9818) ADVANCE(916);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(911);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 868:
      if (eof) ADVANCE(874);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '\r') ADVANCE(507);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '#') ADVANCE(943);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(942);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(921);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 869:
      if (eof) ADVANCE(874);
      if (lookahead == '\n') ADVANCE(883);
      if (lookahead == '\r') ADVANCE(518);
      if (lookahead == '!') ADVANCE(955);
      if (lookahead == '$') ADVANCE(267);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(953);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(969);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(954);
      if (lookahead == '?') ADVANCE(955);
      if (lookahead == '@') ADVANCE(933);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(916);
      if (lookahead == 'O') ADVANCE(982);
      if (lookahead == 'P') ADVANCE(926);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(264);
      if (lookahead == '[') ADVANCE(888);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(908);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '{') ADVANCE(900);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 9817) ADVANCE(929);
      if (lookahead == 9823) ADVANCE(260);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 870:
      if (eof) ADVANCE(874);
      if (lookahead == '\n') ADVANCE(528);
      if (lookahead == '\r') ADVANCE(519);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(1007);
      if (lookahead == '0') ADVANCE(986);
      if (lookahead == '1') ADVANCE(968);
      if (lookahead == 'O') ADVANCE(983);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 189) ADVANCE(1001);
      if (lookahead == 8727) ADVANCE(1009);
      if (lookahead == 10033) ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 871:
      if (eof) ADVANCE(874);
      if (lookahead == '\n') ADVANCE(882);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(529);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 872:
      if (eof) ADVANCE(874);
      if (lookahead == '"') ADVANCE(890);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(879);
      if (lookahead == '&') ADVANCE(547);
      if (lookahead == '(') ADVANCE(896);
      if (lookahead == ')') ADVANCE(898);
      if (lookahead == '*') ADVANCE(1006);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead == '/') ADVANCE(994);
      if (lookahead == '0') ADVANCE(988);
      if (lookahead == '1') ADVANCE(967);
      if (lookahead == '2') ADVANCE(999);
      if (lookahead == '@') ADVANCE(932);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          (9812 <= lookahead && lookahead <= 9816) ||
          (9818 <= lookahead && lookahead <= 9822)) ADVANCE(914);
      if (lookahead == 'O') ADVANCE(984);
      if (lookahead == 'P') ADVANCE(925);
      if (lookahead == '[') ADVANCE(887);
      if (lookahead == ']') ADVANCE(889);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(907);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == '{') ADVANCE(899);
      if (lookahead == '}') ADVANCE(901);
      if (lookahead == 189) ADVANCE(1000);
      if (lookahead == 8208) ADVANCE(973);
      if (lookahead == 8211) ADVANCE(974);
      if (lookahead == 8212) ADVANCE(975);
      if (lookahead == 8722) ADVANCE(972);
      if (lookahead == 8725) ADVANCE(995);
      if (lookahead == 8727) ADVANCE(1008);
      if (lookahead == 9817) ADVANCE(928);
      if (lookahead == 9823) ADVANCE(856);
      if (lookahead == 10033) ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(872)
      END_STATE();
    case 873:
      if (eof) ADVANCE(874);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(880);
      if (lookahead == '[') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(873)
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(875);
      if (lookahead == '\r') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(876);
      if (lookahead == '\r') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(877);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(878);
      if (lookahead == '\r') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(881);
      if (lookahead == '\r') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(524);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(882);
      if (lookahead == '\r') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(529);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(878);
      if (lookahead == '\r') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(884);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_double_quote);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(892);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(892);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(894);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token2);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(905);
      if (lookahead == '\r') ADVANCE(904);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(903);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(905);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(906);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(906);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(946);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(963);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(946);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(946);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '=') ADVANCE(946);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(861);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(266);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(863);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(957);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(18);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(941);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(550);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(946);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(559);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(158);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(160);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(957);
      if (lookahead == '-') ADVANCE(939);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(15);
      if (lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(940);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(957);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(940);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(15);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(957);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(546);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(946);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(938);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(560);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(542);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(739);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(544);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(741);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(946);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(946);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(966);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '\r') ADVANCE(513);
      if (lookahead == '.') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2d_SEMI);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_AMPminus_SEMI);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2010_SEMI);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_AMPndash_SEMI);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_AMPmdash_SEMI);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(265);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(862);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '\r') ADVANCE(513);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(265);
      if (lookahead == '.') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(862);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(862);
      if (lookahead == '.') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(265);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(862);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_AMPsol_SEMI);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2f_SEMI);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2215_SEMI);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_AMPhalf_SEMI);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_AMPhalf_SEMI);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDxbd_SEMI);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDxbd_SEMI);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_9);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_10);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_AMPmidast_SEMI);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_AMPmidast_SEMI);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2a_SEMI);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2a_SEMI);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_AMPlowast_SEMI);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_AMPlowast_SEMI);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2731_SEMI);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2731_SEMI);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 873},
  [2] = {.lex_state = 868},
  [3] = {.lex_state = 868},
  [4] = {.lex_state = 517},
  [5] = {.lex_state = 533},
  [6] = {.lex_state = 867},
  [7] = {.lex_state = 867},
  [8] = {.lex_state = 868},
  [9] = {.lex_state = 867},
  [10] = {.lex_state = 868},
  [11] = {.lex_state = 868},
  [12] = {.lex_state = 868},
  [13] = {.lex_state = 868},
  [14] = {.lex_state = 868},
  [15] = {.lex_state = 868},
  [16] = {.lex_state = 868},
  [17] = {.lex_state = 868},
  [18] = {.lex_state = 868},
  [19] = {.lex_state = 868},
  [20] = {.lex_state = 869},
  [21] = {.lex_state = 868},
  [22] = {.lex_state = 868},
  [23] = {.lex_state = 517},
  [24] = {.lex_state = 868},
  [25] = {.lex_state = 868},
  [26] = {.lex_state = 868},
  [27] = {.lex_state = 868},
  [28] = {.lex_state = 868},
  [29] = {.lex_state = 868},
  [30] = {.lex_state = 868},
  [31] = {.lex_state = 868},
  [32] = {.lex_state = 517},
  [33] = {.lex_state = 868},
  [34] = {.lex_state = 868},
  [35] = {.lex_state = 517},
  [36] = {.lex_state = 517},
  [37] = {.lex_state = 533},
  [38] = {.lex_state = 533},
  [39] = {.lex_state = 533},
  [40] = {.lex_state = 533},
  [41] = {.lex_state = 870},
  [42] = {.lex_state = 870},
  [43] = {.lex_state = 532},
  [44] = {.lex_state = 532},
  [45] = {.lex_state = 533},
  [46] = {.lex_state = 532},
  [47] = {.lex_state = 533},
  [48] = {.lex_state = 525},
  [49] = {.lex_state = 533},
  [50] = {.lex_state = 533},
  [51] = {.lex_state = 533},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 533},
  [54] = {.lex_state = 533},
  [55] = {.lex_state = 533},
  [56] = {.lex_state = 533},
  [57] = {.lex_state = 533},
  [58] = {.lex_state = 533},
  [59] = {.lex_state = 533},
  [60] = {.lex_state = 533},
  [61] = {.lex_state = 533},
  [62] = {.lex_state = 533},
  [63] = {.lex_state = 533},
  [64] = {.lex_state = 533},
  [65] = {.lex_state = 533},
  [66] = {.lex_state = 533},
  [67] = {.lex_state = 533},
  [68] = {.lex_state = 533},
  [69] = {.lex_state = 533},
  [70] = {.lex_state = 533},
  [71] = {.lex_state = 873},
  [72] = {.lex_state = 873},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 873},
  [77] = {.lex_state = 873},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 868},
  [81] = {.lex_state = 873},
  [82] = {.lex_state = 873},
  [83] = {.lex_state = 868},
  [84] = {.lex_state = 868},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 871},
  [87] = {.lex_state = 868},
  [88] = {.lex_state = 578},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 868},
  [91] = {.lex_state = 578},
  [92] = {.lex_state = 868},
  [93] = {.lex_state = 868},
  [94] = {.lex_state = 536},
  [95] = {.lex_state = 873},
  [96] = {.lex_state = 536},
  [97] = {.lex_state = 536},
  [98] = {.lex_state = 873},
  [99] = {.lex_state = 578},
  [100] = {.lex_state = 873},
  [101] = {.lex_state = 873},
  [102] = {.lex_state = 871},
  [103] = {.lex_state = 873},
  [104] = {.lex_state = 873},
  [105] = {.lex_state = 873},
  [106] = {.lex_state = 873},
  [107] = {.lex_state = 873},
  [108] = {.lex_state = 578},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 873},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 578},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 578},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 578},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 578},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 902},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 884},
  [138] = {.lex_state = 531},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 592},
  [145] = {.lex_state = 592},
  [146] = {.lex_state = 578},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 592},
  [149] = {.lex_state = 592},
  [150] = {.lex_state = 578},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 884},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 884},
  [155] = {.lex_state = 578},
  [156] = {.lex_state = 884},
  [157] = {.lex_state = 902},
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
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2d_SEMI] = ACTIONS(1),
    [anon_sym_AMPminus_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2010_SEMI] = ACTIONS(1),
    [anon_sym_AMPndash_SEMI] = ACTIONS(1),
    [anon_sym_AMPmdash_SEMI] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_AMPsol_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2f_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2215_SEMI] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_AMPhalf_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDxbd_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_AMPmidast_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2a_SEMI] = ACTIONS(1),
    [anon_sym_AMPlowast_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2731_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_series_of_games] = STATE(136),
    [sym_game] = STATE(104),
    [sym_freestanding_comment] = STATE(79),
    [sym_rest_of_line_comment] = STATE(77),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(35),
    [aux_sym_series_of_games_repeat1] = STATE(72),
    [aux_sym_freestanding_comment_repeat1] = STATE(77),
    [aux_sym_header_repeat1] = STATE(32),
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
    ACTIONS(18), 1,
      sym_variation_delimiter_open,
    ACTIONS(21), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(24), 1,
      sym_move_number,
    ACTIONS(27), 1,
      sym__san_file,
    ACTIONS(30), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(36), 1,
      anon_sym_AT,
    ACTIONS(42), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(34), 1,
      sym_san_move,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(39), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(31), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(33), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(16), 16,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [80] = 18,
    ACTIONS(47), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(51), 1,
      sym_variation_delimiter_open,
    ACTIONS(53), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(55), 1,
      sym_move_number,
    ACTIONS(57), 1,
      sym__san_file,
    ACTIONS(59), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(34), 1,
      sym_san_move,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(65), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(31), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(61), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(49), 16,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [160] = 23,
    ACTIONS(47), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(51), 1,
      sym_variation_delimiter_open,
    ACTIONS(53), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(55), 1,
      sym_move_number,
    ACTIONS(57), 1,
      sym__san_file,
    ACTIONS(59), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_annotation,
    ACTIONS(69), 1,
      sym__empty_line,
    ACTIONS(71), 1,
      anon_sym_1,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(34), 1,
      sym_san_move,
    STATE(41), 1,
      sym_movetext,
    STATE(93), 1,
      sym_result_code,
    ACTIONS(65), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(31), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(61), 3,
      anon_sym_P,
      anon_sym_,
      anon_sym_2,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(75), 3,
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(77), 7,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [249] = 23,
    ACTIONS(59), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(61), 1,
      anon_sym_P,
    ACTIONS(67), 1,
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
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(7), 1,
      sym__san_destination,
    STATE(34), 1,
      sym_san_move,
    STATE(42), 1,
      sym_movetext,
    STATE(90), 1,
      sym_result_code,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(93), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(31), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(33), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(95), 3,
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(97), 7,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [337] = 5,
    ACTIONS(103), 1,
      sym__san_promotable_piece,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    STATE(15), 1,
      sym__san_promotion,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(101), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [383] = 5,
    ACTIONS(105), 1,
      sym__san_promotion_symbol,
    ACTIONS(111), 1,
      sym__san_promotable_piece,
    STATE(17), 1,
      sym__san_promotion,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(109), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [429] = 4,
    ACTIONS(117), 1,
      sym__san_capture_symbol,
    STATE(18), 1,
      sym__san_destination,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(115), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [472] = 2,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [511] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(121), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [548] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(125), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [585] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(129), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [622] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(133), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [659] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(137), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [696] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(141), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [733] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(145), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [770] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(149), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [807] = 2,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(153), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [844] = 2,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(157), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [881] = 3,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(161), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [920] = 3,
    ACTIONS(169), 1,
      sym_check_or_mate_condition,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(167), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [959] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(115), 30,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [996] = 5,
    ACTIONS(171), 1,
      sym__empty_line,
    ACTIONS(175), 1,
      sym_tagpair_delimiter_open,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    ACTIONS(173), 27,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1038] = 2,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(180), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1074] = 2,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(184), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1110] = 2,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(188), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1146] = 2,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(192), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1182] = 2,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(196), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1218] = 2,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(200), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1254] = 2,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(204), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1290] = 2,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(208), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1326] = 5,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(210), 1,
      sym__empty_line,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    ACTIONS(212), 27,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1368] = 2,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(216), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1404] = 2,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(220), 29,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1440] = 2,
    ACTIONS(222), 1,
      sym__empty_line,
    ACTIONS(224), 28,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1474] = 2,
    ACTIONS(226), 1,
      sym__empty_line,
    ACTIONS(228), 28,
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
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1508] = 19,
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
    STATE(39), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(43), 1,
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
    STATE(65), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1574] = 19,
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
    STATE(39), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(43), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    STATE(140), 1,
      sym_variation_movetext,
    ACTIONS(246), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(250), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(65), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1640] = 18,
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
    ACTIONS(256), 1,
      sym_variation_delimiter_close,
    STATE(40), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(43), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    ACTIONS(246), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(250), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(65), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1703] = 18,
    ACTIONS(258), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(261), 1,
      sym_variation_delimiter_open,
    ACTIONS(264), 1,
      sym_variation_delimiter_close,
    ACTIONS(266), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(269), 1,
      sym_move_number,
    ACTIONS(272), 1,
      sym__san_file,
    ACTIONS(275), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(278), 1,
      anon_sym_P,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_annotation,
    STATE(40), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(43), 1,
      sym__san_destination,
    STATE(64), 1,
      sym_san_move,
    ACTIONS(281), 2,
      anon_sym_,
      anon_sym_2,
    ACTIONS(287), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(65), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(66), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1766] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym__empty_line,
    STATE(87), 1,
      sym_result_code,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(75), 3,
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    ACTIONS(297), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
    ACTIONS(77), 7,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1803] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym__empty_line,
    STATE(83), 1,
      sym_result_code,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(75), 3,
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    ACTIONS(303), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
    ACTIONS(77), 7,
      anon_sym_STAR,
      anon_sym_9,
      anon_sym_10,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1840] = 5,
    ACTIONS(305), 1,
      sym__san_promotable_piece,
    ACTIONS(307), 1,
      sym__san_promotion_symbol,
    STATE(50), 1,
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
  [1869] = 5,
    ACTIONS(307), 1,
      sym__san_promotion_symbol,
    ACTIONS(309), 1,
      sym__san_promotable_piece,
    STATE(53), 1,
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
  [1898] = 4,
    ACTIONS(311), 1,
      sym__san_capture_symbol,
    STATE(47), 1,
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
  [1924] = 2,
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
  [1946] = 2,
    ACTIONS(153), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(151), 11,
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
  [1966] = 2,
    ACTIONS(313), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(161), 14,
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
  [1986] = 2,
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
  [2006] = 2,
    ACTIONS(149), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(147), 11,
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
  [2026] = 2,
    ACTIONS(157), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(155), 11,
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
  [2046] = 2,
    ACTIONS(317), 5,
      anon_sym_SLASH,
      anon_sym_7,
      anon_sym_AMPsol_SEMI,
      anon_sym_AMP_POUNDx2f_SEMI,
      anon_sym_AMP_POUNDx2215_SEMI,
    ACTIONS(315), 10,
      anon_sym_DASH,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [2066] = 2,
    ACTIONS(141), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(139), 11,
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
  [2086] = 2,
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
  [2106] = 2,
    ACTIONS(137), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(135), 11,
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
  [2126] = 3,
    ACTIONS(319), 1,
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
  [2148] = 2,
    ACTIONS(125), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(123), 11,
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
    ACTIONS(145), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(143), 11,
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
    ACTIONS(129), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(127), 11,
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
  [2208] = 2,
    ACTIONS(133), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(131), 11,
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
  [2228] = 2,
    ACTIONS(323), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(321), 11,
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
  [2247] = 2,
    ACTIONS(327), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(325), 11,
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
  [2266] = 2,
    ACTIONS(204), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(202), 11,
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
  [2285] = 2,
    ACTIONS(331), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(329), 11,
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
  [2304] = 2,
    ACTIONS(335), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(333), 11,
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
  [2323] = 2,
    ACTIONS(339), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(337), 11,
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
  [2342] = 2,
    ACTIONS(196), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(194), 11,
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
  [2361] = 2,
    ACTIONS(184), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(182), 11,
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
  [2380] = 2,
    ACTIONS(192), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(190), 11,
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
  [2399] = 2,
    ACTIONS(180), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(178), 11,
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
  [2418] = 11,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(346), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(349), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(71), 1,
      aux_sym_series_of_games_repeat1,
    STATE(85), 1,
      sym_freestanding_comment,
    STATE(104), 1,
      sym_game,
    STATE(82), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2453] = 11,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(71), 1,
      aux_sym_series_of_games_repeat1,
    STATE(78), 1,
      sym_freestanding_comment,
    STATE(104), 1,
      sym_game,
    STATE(77), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2488] = 1,
    ACTIONS(354), 10,
      anon_sym_DASH,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [2501] = 1,
    ACTIONS(356), 10,
      anon_sym_DASH,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [2514] = 1,
    ACTIONS(358), 10,
      anon_sym_DASH,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [2527] = 5,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(365), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(368), 1,
      sym_tagpair_delimiter_open,
    STATE(76), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2544] = 5,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(374), 1,
      sym_tagpair_delimiter_open,
    STATE(76), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2561] = 6,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2580] = 6,
    ACTIONS(378), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2599] = 2,
    ACTIONS(382), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(384), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2609] = 4,
    ACTIONS(368), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(386), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(389), 1,
      sym_old_style_twic_section_comment,
    STATE(81), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2623] = 4,
    ACTIONS(374), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(392), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(394), 1,
      sym_old_style_twic_section_comment,
    STATE(81), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2637] = 3,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      sym__empty_line,
    ACTIONS(400), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2649] = 2,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(404), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2659] = 5,
    ACTIONS(378), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(35), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2675] = 3,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(406), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(161), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2687] = 3,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    ACTIONS(410), 1,
      sym__empty_line,
    ACTIONS(412), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2699] = 5,
    ACTIONS(414), 1,
      sym__san_file,
    ACTIONS(416), 1,
      sym__san_rank,
    ACTIONS(418), 1,
      sym__san_capture_symbol,
    ACTIONS(420), 1,
      anon_sym_AT,
    STATE(58), 1,
      sym__san_destination,
  [2715] = 1,
    ACTIONS(422), 5,
      anon_sym_SLASH,
      anon_sym_7,
      anon_sym_AMPsol_SEMI,
      anon_sym_AMP_POUNDx2f_SEMI,
      anon_sym_AMP_POUNDx2215_SEMI,
  [2723] = 3,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(426), 1,
      sym__empty_line,
    ACTIONS(428), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2735] = 5,
    ACTIONS(430), 1,
      sym__san_file,
    ACTIONS(432), 1,
      sym__san_rank,
    ACTIONS(434), 1,
      sym__san_capture_symbol,
    ACTIONS(436), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym__san_destination,
  [2751] = 2,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(440), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2761] = 3,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(444), 1,
      sym__empty_line,
    ACTIONS(446), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2773] = 4,
    ACTIONS(448), 1,
      sym_double_quote,
    STATE(96), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(139), 1,
      sym_tagpair_value_contents,
    ACTIONS(450), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2787] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(454), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2796] = 3,
    ACTIONS(456), 1,
      sym_double_quote,
    STATE(97), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(458), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2807] = 3,
    ACTIONS(460), 1,
      sym_double_quote,
    STATE(97), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(462), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2818] = 2,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(467), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2827] = 4,
    ACTIONS(469), 1,
      sym__san_file,
    ACTIONS(471), 1,
      sym__san_rank,
    ACTIONS(473), 1,
      sym__san_capture_symbol,
    STATE(54), 1,
      sym__san_destination,
  [2840] = 2,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(184), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2849] = 2,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(477), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2858] = 2,
    ACTIONS(479), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(161), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2867] = 2,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(483), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2876] = 2,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(487), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2885] = 2,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(491), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2894] = 2,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(495), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2903] = 2,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(499), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2912] = 4,
    ACTIONS(501), 1,
      sym__san_file,
    ACTIONS(503), 1,
      sym__san_rank,
    ACTIONS(505), 1,
      sym__san_capture_symbol,
    STATE(10), 1,
      sym__san_destination,
  [2925] = 1,
    ACTIONS(507), 3,
      anon_sym_8,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
  [2931] = 2,
    ACTIONS(182), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(184), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2939] = 3,
    ACTIONS(501), 1,
      sym__san_file,
    ACTIONS(505), 1,
      sym__san_capture_symbol,
    STATE(10), 1,
      sym__san_destination,
  [2949] = 1,
    ACTIONS(507), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [2955] = 3,
    ACTIONS(469), 1,
      sym__san_file,
    ACTIONS(473), 1,
      sym__san_capture_symbol,
    STATE(54), 1,
      sym__san_destination,
  [2965] = 2,
    ACTIONS(501), 1,
      sym__san_file,
    STATE(19), 1,
      sym__san_destination,
  [2972] = 2,
    ACTIONS(509), 1,
      sym__san_rank,
    ACTIONS(511), 1,
      sym__san_capture_symbol,
  [2979] = 2,
    ACTIONS(469), 1,
      sym__san_file,
    STATE(60), 1,
      sym__san_destination,
  [2986] = 2,
    ACTIONS(501), 1,
      sym__san_file,
    STATE(11), 1,
      sym__san_destination,
  [2993] = 2,
    ACTIONS(513), 1,
      sym__san_file,
    STATE(44), 1,
      sym__san_destination,
  [3000] = 2,
    ACTIONS(501), 1,
      sym__san_file,
    STATE(12), 1,
      sym__san_destination,
  [3007] = 2,
    ACTIONS(501), 1,
      sym__san_file,
    STATE(10), 1,
      sym__san_destination,
  [3014] = 2,
    ACTIONS(515), 1,
      sym__san_file,
    STATE(6), 1,
      sym__san_destination,
  [3021] = 2,
    ACTIONS(469), 1,
      sym__san_file,
    STATE(51), 1,
      sym__san_destination,
  [3028] = 2,
    ACTIONS(501), 1,
      sym__san_file,
    STATE(13), 1,
      sym__san_destination,
  [3035] = 2,
    ACTIONS(469), 1,
      sym__san_file,
    STATE(54), 1,
      sym__san_destination,
  [3042] = 2,
    ACTIONS(517), 1,
      sym__san_rank,
    ACTIONS(519), 1,
      sym__san_capture_symbol,
  [3049] = 2,
    ACTIONS(469), 1,
      sym__san_file,
    STATE(57), 1,
      sym__san_destination,
  [3056] = 2,
    ACTIONS(521), 1,
      sym_double_quote,
    STATE(135), 1,
      sym__tagpair_value,
  [3063] = 2,
    ACTIONS(501), 1,
      sym__san_file,
    STATE(18), 1,
      sym__san_destination,
  [3070] = 2,
    ACTIONS(469), 1,
      sym__san_file,
    STATE(59), 1,
      sym__san_destination,
  [3077] = 2,
    ACTIONS(469), 1,
      sym__san_file,
    STATE(47), 1,
      sym__san_destination,
  [3084] = 1,
    ACTIONS(517), 1,
      sym__san_rank,
  [3088] = 1,
    ACTIONS(523), 1,
      anon_sym_AT,
  [3092] = 1,
    ACTIONS(525), 1,
      sym_inline_comment_text,
  [3096] = 1,
    ACTIONS(527), 1,
      sym__san_promotable_piece,
  [3100] = 1,
    ACTIONS(529), 1,
      sym_tagpair_delimiter_close,
  [3104] = 1,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
  [3108] = 1,
    ACTIONS(533), 1,
      sym_rest_of_line_comment_text,
  [3112] = 1,
    ACTIONS(535), 1,
      sym_tagpair_key,
  [3116] = 1,
    ACTIONS(537), 1,
      sym_double_quote,
  [3120] = 1,
    ACTIONS(539), 1,
      sym_variation_delimiter_close,
  [3124] = 1,
    ACTIONS(541), 1,
      sym_inline_comment_delimiter_close,
  [3128] = 1,
    ACTIONS(543), 1,
      sym_variation_delimiter_close,
  [3132] = 1,
    ACTIONS(545), 1,
      sym_inline_comment_delimiter_close,
  [3136] = 1,
    ACTIONS(547), 1,
      anon_sym_22,
  [3140] = 1,
    ACTIONS(549), 1,
      anon_sym_1,
  [3144] = 1,
    ACTIONS(551), 1,
      sym__san_rank,
  [3148] = 1,
    ACTIONS(553), 1,
      sym_tagpair_delimiter_close,
  [3152] = 1,
    ACTIONS(555), 1,
      anon_sym_22,
  [3156] = 1,
    ACTIONS(507), 1,
      anon_sym_1,
  [3160] = 1,
    ACTIONS(557), 1,
      sym__san_rank,
  [3164] = 1,
    ACTIONS(559), 1,
      sym__san_promotable_piece,
  [3168] = 1,
    ACTIONS(561), 1,
      sym_rest_of_line_comment_text,
  [3172] = 1,
    ACTIONS(563), 1,
      sym_tagpair_delimiter_close,
  [3176] = 1,
    ACTIONS(565), 1,
      sym_rest_of_line_comment_text,
  [3180] = 1,
    ACTIONS(509), 1,
      sym__san_rank,
  [3184] = 1,
    ACTIONS(567), 1,
      sym_rest_of_line_comment_text,
  [3188] = 1,
    ACTIONS(569), 1,
      sym_inline_comment_text,
  [3192] = 1,
    ACTIONS(571), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 249,
  [SMALL_STATE(6)] = 337,
  [SMALL_STATE(7)] = 383,
  [SMALL_STATE(8)] = 429,
  [SMALL_STATE(9)] = 472,
  [SMALL_STATE(10)] = 511,
  [SMALL_STATE(11)] = 548,
  [SMALL_STATE(12)] = 585,
  [SMALL_STATE(13)] = 622,
  [SMALL_STATE(14)] = 659,
  [SMALL_STATE(15)] = 696,
  [SMALL_STATE(16)] = 733,
  [SMALL_STATE(17)] = 770,
  [SMALL_STATE(18)] = 807,
  [SMALL_STATE(19)] = 844,
  [SMALL_STATE(20)] = 881,
  [SMALL_STATE(21)] = 920,
  [SMALL_STATE(22)] = 959,
  [SMALL_STATE(23)] = 996,
  [SMALL_STATE(24)] = 1038,
  [SMALL_STATE(25)] = 1074,
  [SMALL_STATE(26)] = 1110,
  [SMALL_STATE(27)] = 1146,
  [SMALL_STATE(28)] = 1182,
  [SMALL_STATE(29)] = 1218,
  [SMALL_STATE(30)] = 1254,
  [SMALL_STATE(31)] = 1290,
  [SMALL_STATE(32)] = 1326,
  [SMALL_STATE(33)] = 1368,
  [SMALL_STATE(34)] = 1404,
  [SMALL_STATE(35)] = 1440,
  [SMALL_STATE(36)] = 1474,
  [SMALL_STATE(37)] = 1508,
  [SMALL_STATE(38)] = 1574,
  [SMALL_STATE(39)] = 1640,
  [SMALL_STATE(40)] = 1703,
  [SMALL_STATE(41)] = 1766,
  [SMALL_STATE(42)] = 1803,
  [SMALL_STATE(43)] = 1840,
  [SMALL_STATE(44)] = 1869,
  [SMALL_STATE(45)] = 1898,
  [SMALL_STATE(46)] = 1924,
  [SMALL_STATE(47)] = 1946,
  [SMALL_STATE(48)] = 1966,
  [SMALL_STATE(49)] = 1986,
  [SMALL_STATE(50)] = 2006,
  [SMALL_STATE(51)] = 2026,
  [SMALL_STATE(52)] = 2046,
  [SMALL_STATE(53)] = 2066,
  [SMALL_STATE(54)] = 2086,
  [SMALL_STATE(55)] = 2106,
  [SMALL_STATE(56)] = 2126,
  [SMALL_STATE(57)] = 2148,
  [SMALL_STATE(58)] = 2168,
  [SMALL_STATE(59)] = 2188,
  [SMALL_STATE(60)] = 2208,
  [SMALL_STATE(61)] = 2228,
  [SMALL_STATE(62)] = 2247,
  [SMALL_STATE(63)] = 2266,
  [SMALL_STATE(64)] = 2285,
  [SMALL_STATE(65)] = 2304,
  [SMALL_STATE(66)] = 2323,
  [SMALL_STATE(67)] = 2342,
  [SMALL_STATE(68)] = 2361,
  [SMALL_STATE(69)] = 2380,
  [SMALL_STATE(70)] = 2399,
  [SMALL_STATE(71)] = 2418,
  [SMALL_STATE(72)] = 2453,
  [SMALL_STATE(73)] = 2488,
  [SMALL_STATE(74)] = 2501,
  [SMALL_STATE(75)] = 2514,
  [SMALL_STATE(76)] = 2527,
  [SMALL_STATE(77)] = 2544,
  [SMALL_STATE(78)] = 2561,
  [SMALL_STATE(79)] = 2580,
  [SMALL_STATE(80)] = 2599,
  [SMALL_STATE(81)] = 2609,
  [SMALL_STATE(82)] = 2623,
  [SMALL_STATE(83)] = 2637,
  [SMALL_STATE(84)] = 2649,
  [SMALL_STATE(85)] = 2659,
  [SMALL_STATE(86)] = 2675,
  [SMALL_STATE(87)] = 2687,
  [SMALL_STATE(88)] = 2699,
  [SMALL_STATE(89)] = 2715,
  [SMALL_STATE(90)] = 2723,
  [SMALL_STATE(91)] = 2735,
  [SMALL_STATE(92)] = 2751,
  [SMALL_STATE(93)] = 2761,
  [SMALL_STATE(94)] = 2773,
  [SMALL_STATE(95)] = 2787,
  [SMALL_STATE(96)] = 2796,
  [SMALL_STATE(97)] = 2807,
  [SMALL_STATE(98)] = 2818,
  [SMALL_STATE(99)] = 2827,
  [SMALL_STATE(100)] = 2840,
  [SMALL_STATE(101)] = 2849,
  [SMALL_STATE(102)] = 2858,
  [SMALL_STATE(103)] = 2867,
  [SMALL_STATE(104)] = 2876,
  [SMALL_STATE(105)] = 2885,
  [SMALL_STATE(106)] = 2894,
  [SMALL_STATE(107)] = 2903,
  [SMALL_STATE(108)] = 2912,
  [SMALL_STATE(109)] = 2925,
  [SMALL_STATE(110)] = 2931,
  [SMALL_STATE(111)] = 2939,
  [SMALL_STATE(112)] = 2949,
  [SMALL_STATE(113)] = 2955,
  [SMALL_STATE(114)] = 2965,
  [SMALL_STATE(115)] = 2972,
  [SMALL_STATE(116)] = 2979,
  [SMALL_STATE(117)] = 2986,
  [SMALL_STATE(118)] = 2993,
  [SMALL_STATE(119)] = 3000,
  [SMALL_STATE(120)] = 3007,
  [SMALL_STATE(121)] = 3014,
  [SMALL_STATE(122)] = 3021,
  [SMALL_STATE(123)] = 3028,
  [SMALL_STATE(124)] = 3035,
  [SMALL_STATE(125)] = 3042,
  [SMALL_STATE(126)] = 3049,
  [SMALL_STATE(127)] = 3056,
  [SMALL_STATE(128)] = 3063,
  [SMALL_STATE(129)] = 3070,
  [SMALL_STATE(130)] = 3077,
  [SMALL_STATE(131)] = 3084,
  [SMALL_STATE(132)] = 3088,
  [SMALL_STATE(133)] = 3092,
  [SMALL_STATE(134)] = 3096,
  [SMALL_STATE(135)] = 3100,
  [SMALL_STATE(136)] = 3104,
  [SMALL_STATE(137)] = 3108,
  [SMALL_STATE(138)] = 3112,
  [SMALL_STATE(139)] = 3116,
  [SMALL_STATE(140)] = 3120,
  [SMALL_STATE(141)] = 3124,
  [SMALL_STATE(142)] = 3128,
  [SMALL_STATE(143)] = 3132,
  [SMALL_STATE(144)] = 3136,
  [SMALL_STATE(145)] = 3140,
  [SMALL_STATE(146)] = 3144,
  [SMALL_STATE(147)] = 3148,
  [SMALL_STATE(148)] = 3152,
  [SMALL_STATE(149)] = 3156,
  [SMALL_STATE(150)] = 3160,
  [SMALL_STATE(151)] = 3164,
  [SMALL_STATE(152)] = 3168,
  [SMALL_STATE(153)] = 3172,
  [SMALL_STATE(154)] = 3176,
  [SMALL_STATE(155)] = 3180,
  [SMALL_STATE(156)] = 3184,
  [SMALL_STATE(157)] = 3188,
  [SMALL_STATE(158)] = 3192,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(137),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(38),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(133),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(29),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(125),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(91),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(132),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(123),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_destination, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_destination, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17), SHIFT_REPEAT(138),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 20),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, .production_id = 20),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, .production_id = 31),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, .production_id = 31),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, .production_id = 24),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(154),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(37),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(157),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(61),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(115),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(88),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(158),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(158),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(116),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(56),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(62),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 11),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 18),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 18),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(156),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(82),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(138),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(152),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(76),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, .production_id = 15),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(156),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(81),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 30),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 30),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 26),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 26),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 19),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 19),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 14),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 14),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(97),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, .production_id = 30),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 5, .production_id = 30),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 18),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 18),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 19),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 19),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 11),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 11),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 14),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 14),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 26),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 26),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [531] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, .production_id = 34),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, .production_id = 28),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
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
