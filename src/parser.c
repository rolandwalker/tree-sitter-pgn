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
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  anon_sym_AT = 25,
  sym__san_move_castle = 26,
  sym__san_null_move = 27,
  sym_check_or_mate_condition = 28,
  sym_annotation = 29,
  anon_sym_1 = 30,
  anon_sym_DASH = 31,
  anon_sym_ = 32,
  anon_sym_2 = 33,
  anon_sym_3 = 34,
  anon_sym_4 = 35,
  anon_sym_AMP_POUNDx2d_SEMI = 36,
  anon_sym_AMPminus_SEMI = 37,
  anon_sym_AMP_POUNDx2010_SEMI = 38,
  anon_sym_AMPndash_SEMI = 39,
  anon_sym_AMPmdash_SEMI = 40,
  anon_sym_O = 41,
  anon_sym_0 = 42,
  anon_sym_o = 43,
  anon_sym_SLASH = 44,
  anon_sym_5 = 45,
  anon_sym_AMPsol_SEMI = 46,
  anon_sym_AMP_POUNDx2f_SEMI = 47,
  anon_sym_AMP_POUNDx2215_SEMI = 48,
  anon_sym_22 = 49,
  anon_sym_6 = 50,
  anon_sym_AMPhalf_SEMI = 51,
  anon_sym_AMP_POUNDxbd_SEMI = 52,
  anon_sym_STAR = 53,
  anon_sym_7 = 54,
  anon_sym_8 = 55,
  anon_sym_AMPmidast_SEMI = 56,
  anon_sym_AMP_POUNDx2a_SEMI = 57,
  anon_sym_AMPlowast_SEMI = 58,
  anon_sym_AMP_POUNDx2731_SEMI = 59,
  sym_series_of_games = 60,
  sym_game = 61,
  sym_freestanding_comment = 62,
  sym_rest_of_line_comment = 63,
  sym_header = 64,
  sym_tagpair = 65,
  sym__tagpair_value = 66,
  sym_tagpair_value_contents = 67,
  sym_movetext = 68,
  sym_variation_movetext = 69,
  sym__movetext_element = 70,
  sym__variation_movetext_element = 71,
  sym_variation = 72,
  sym_inline_comment = 73,
  sym_san_move = 74,
  sym__san_move_piece = 75,
  sym__san_destination = 76,
  sym__san_promotion = 77,
  sym__san_move_pawn = 78,
  sym__san_drop_pawn = 79,
  sym__san_move_major_or_minor_piece = 80,
  sym__san_drop_major_or_minor_piece = 81,
  sym_result_code = 82,
  aux_sym_series_of_games_repeat1 = 83,
  aux_sym_freestanding_comment_repeat1 = 84,
  aux_sym_header_repeat1 = 85,
  aux_sym_tagpair_value_contents_repeat1 = 86,
  aux_sym_movetext_repeat1 = 87,
  aux_sym_variation_movetext_repeat1 = 88,
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
  [anon_sym_AT] = "@",
  [sym__san_move_castle] = "_san_move_castle",
  [sym__san_null_move] = "_san_null_move",
  [sym_check_or_mate_condition] = "check_or_mate_condition",
  [sym_annotation] = "annotation",
  [anon_sym_1] = "1",
  [anon_sym_DASH] = "-",
  [anon_sym_] = "−",
  [anon_sym_2] = "‐",
  [anon_sym_3] = "–",
  [anon_sym_4] = "—",
  [anon_sym_AMP_POUNDx2d_SEMI] = "&#x2d;",
  [anon_sym_AMPminus_SEMI] = "&minus;",
  [anon_sym_AMP_POUNDx2010_SEMI] = "&#x2010;",
  [anon_sym_AMPndash_SEMI] = "&ndash;",
  [anon_sym_AMPmdash_SEMI] = "&mdash;",
  [anon_sym_O] = "O",
  [anon_sym_0] = "0",
  [anon_sym_o] = "o",
  [anon_sym_SLASH] = "/",
  [anon_sym_5] = "∕",
  [anon_sym_AMPsol_SEMI] = "&sol;",
  [anon_sym_AMP_POUNDx2f_SEMI] = "&#x2f;",
  [anon_sym_AMP_POUNDx2215_SEMI] = "&#x2215;",
  [anon_sym_22] = "2",
  [anon_sym_6] = "½",
  [anon_sym_AMPhalf_SEMI] = "&half;",
  [anon_sym_AMP_POUNDxbd_SEMI] = "&#xbd;",
  [anon_sym_STAR] = "*",
  [anon_sym_7] = "∗",
  [anon_sym_8] = "✱",
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
  [anon_sym_AT] = anon_sym_AT,
  [sym__san_move_castle] = sym__san_move_castle,
  [sym__san_null_move] = sym__san_null_move,
  [sym_check_or_mate_condition] = sym_check_or_mate_condition,
  [sym_annotation] = sym_annotation,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_AMP_POUNDx2d_SEMI] = anon_sym_AMP_POUNDx2d_SEMI,
  [anon_sym_AMPminus_SEMI] = anon_sym_AMPminus_SEMI,
  [anon_sym_AMP_POUNDx2010_SEMI] = anon_sym_AMP_POUNDx2010_SEMI,
  [anon_sym_AMPndash_SEMI] = anon_sym_AMPndash_SEMI,
  [anon_sym_AMPmdash_SEMI] = anon_sym_AMPmdash_SEMI,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_AMPsol_SEMI] = anon_sym_AMPsol_SEMI,
  [anon_sym_AMP_POUNDx2f_SEMI] = anon_sym_AMP_POUNDx2f_SEMI,
  [anon_sym_AMP_POUNDx2215_SEMI] = anon_sym_AMP_POUNDx2215_SEMI,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_AMPhalf_SEMI] = anon_sym_AMPhalf_SEMI,
  [anon_sym_AMP_POUNDxbd_SEMI] = anon_sym_AMP_POUNDxbd_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
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
  [anon_sym_5] = {
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
  [anon_sym_6] = {
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
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
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
      if (eof) ADVANCE(809);
      if (lookahead == '"') ADVANCE(825);
      if (lookahead == '#') ADVANCE(872);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(515);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == ')') ADVANCE(833);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '+') ADVANCE(876);
      if (lookahead == '-') ADVANCE(902);
      if (lookahead == '/') ADVANCE(925);
      if (lookahead == '0') ADVANCE(919);
      if (lookahead == '1') ADVANCE(898);
      if (lookahead == '2') ADVANCE(930);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(844);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(855);
      if (lookahead == '=') ADVANCE(857);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R') ADVANCE(845);
      if (lookahead == 'K') ADVANCE(849);
      if (lookahead == 'O') ADVANCE(915);
      if (lookahead == 'P') ADVANCE(860);
      if (lookahead == '[') ADVANCE(822);
      if (lookahead == '\\') ADVANCE(801);
      if (lookahead == ']') ADVANCE(824);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead == '}') ADVANCE(836);
      if (lookahead == 189) ADVANCE(931);
      if (lookahead == 8208) ADVANCE(904);
      if (lookahead == 8211) ADVANCE(905);
      if (lookahead == 8212) ADVANCE(906);
      if (lookahead == 8722) ADVANCE(903);
      if (lookahead == 8725) ADVANCE(926);
      if (lookahead == 8727) ADVANCE(939);
      if (lookahead == 10033) ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(536);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == 'q') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(179);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(16);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(144);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == '3') ADVANCE(37);
      if (lookahead == '5') ADVANCE(38);
      if (lookahead == '6') ADVANCE(65);
      if (lookahead == '7') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '9') ADVANCE(139);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == '7') ADVANCE(34);
      if (lookahead == ';') ADVANCE(946);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '2') ADVANCE(47);
      if (lookahead == '7') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(120);
      if (lookahead == '4') ADVANCE(71);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '9') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(88);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(29);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(67);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(31);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '3') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead == '3') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(25);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(28);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(26);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == '3') ADVANCE(145);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(125);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(77);
      if (lookahead == '8') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(51);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(80);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(82);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(79);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(77);
      if (lookahead == '8') ADVANCE(77);
      if (lookahead == '9') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(66);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(880);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(871);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(881);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(946);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(936);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(934);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(950);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(948);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(944);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(242);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(882);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(884);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(883);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(159);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'q') ADVANCE(222);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 'q') ADVANCE(219);
      if (lookahead == 'x') ADVANCE(122);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(223);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(224);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(202);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(185);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(53);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(57);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(124);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(871);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(871);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(866);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(867);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(792);
      if (lookahead == '\r') ADVANCE(247);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(792);
      if (lookahead == '\r') SKIP(793)
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(820);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(249);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(250);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(256);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(259);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(261);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(262);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(263);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(264);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(265);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(266);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(267);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(268);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(269);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(273);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(274);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(275);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(278);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(281);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(282);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(283);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(285);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(287);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(288);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(297);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(298);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(299);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(301);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(303);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(304);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(306);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(307);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(312);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(313);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(315);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(316);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(317);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(318);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(322);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(323);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(324);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(326);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(328);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(329);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(332);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(333);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(334);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(335);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(336);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(337);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(338);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(339);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(340);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(343);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(346);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(351);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(352);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(360);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(363);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(821);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(372);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(397);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(398);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(399);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(407);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(408);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(410);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(412);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(413);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(414);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(422);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(427);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(429);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(430);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(431);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(432);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(433);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(439);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(440);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(447);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(448);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(452);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(459);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(464);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(467);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(468);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(469);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(471);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(477);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(480);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '-') ADVANCE(481);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == '\r') ADVANCE(484);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(484);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(485);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-') ADVANCE(879);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(485);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == '.') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == '.') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '.') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(538);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(486);
      if (lookahead == '\r') ADVANCE(484);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(486);
      if (lookahead == '\r') ADVANCE(491);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == '\r') ADVANCE(493);
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(516);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(920);
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'N') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(915);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (lookahead == '[') ADVANCE(822);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == 189) ADVANCE(931);
      if (lookahead == 8727) ADVANCE(939);
      if (lookahead == 10033) ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(493);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == '\r') ADVANCE(493);
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(516);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(920);
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'O') ADVANCE(915);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (lookahead == '[') ADVANCE(822);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == 189) ADVANCE(931);
      if (lookahead == 8727) ADVANCE(939);
      if (lookahead == 10033) ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(493);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(495);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(495);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(505);
      if (lookahead == '\r') ADVANCE(496);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '0') ADVANCE(917);
      if (lookahead == '1') ADVANCE(899);
      if (lookahead == 'O') ADVANCE(914);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == '\r') ADVANCE(496);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '0') ADVANCE(917);
      if (lookahead == '1') ADVANCE(899);
      if (lookahead == 'O') ADVANCE(914);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead == '\r') ADVANCE(497);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '0') ADVANCE(917);
      if (lookahead == '1') ADVANCE(899);
      if (lookahead == 'O') ADVANCE(914);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(493);
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(516);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(920);
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'N') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(915);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (lookahead == '[') ADVANCE(822);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == 189) ADVANCE(931);
      if (lookahead == 8727) ADVANCE(939);
      if (lookahead == 10033) ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(493);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(499);
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(516);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(920);
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'N') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(915);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (lookahead == '[') ADVANCE(822);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == 189) ADVANCE(931);
      if (lookahead == 8727) ADVANCE(939);
      if (lookahead == 10033) ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(493);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(501);
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(518);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == ')') ADVANCE(833);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'N') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(501);
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(518);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == ')') ADVANCE(833);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(496);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '0') ADVANCE(917);
      if (lookahead == '1') ADVANCE(899);
      if (lookahead == 'O') ADVANCE(914);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(503);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '0') ADVANCE(917);
      if (lookahead == '1') ADVANCE(899);
      if (lookahead == 'O') ADVANCE(914);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(503);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '0') ADVANCE(917);
      if (lookahead == '1') ADVANCE(899);
      if (lookahead == 'O') ADVANCE(914);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(506);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(495);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(495);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 508:
      if (lookahead == ' ') SKIP(508)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(826);
      if (lookahead != 0) ADVANCE(827);
      END_STATE();
    case 509:
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '#') ADVANCE(872);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(516);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == ')') ADVANCE(833);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '+') ADVANCE(875);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(920);
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(855);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'O') ADVANCE(915);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == 189) ADVANCE(931);
      if (lookahead == 8727) ADVANCE(939);
      if (lookahead == 10033) ADVANCE(941);
      if (lookahead == 10133) ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(511);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 510:
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '#') ADVANCE(872);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(518);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == ')') ADVANCE(833);
      if (lookahead == '+') ADVANCE(875);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(859);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(845);
      if (lookahead == 'K') ADVANCE(849);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == 10133) ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(512);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 511:
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(516);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == ')') ADVANCE(833);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(920);
      if (lookahead == '1') ADVANCE(901);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'N') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(915);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == 189) ADVANCE(931);
      if (lookahead == 8727) ADVANCE(939);
      if (lookahead == 10033) ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(511);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 512:
      if (lookahead == '!') ADVANCE(896);
      if (lookahead == '$') ADVANCE(800);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(518);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == ')') ADVANCE(833);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(889);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == '<') ADVANCE(637);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q') ADVANCE(849);
      if (lookahead == 'N') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      if (lookahead == 'P') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(799);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '{') ADVANCE(834);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(877);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(512);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 513:
      if (lookahead == '"') ADVANCE(825);
      if (lookahead == '\\') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(828);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(514)
      if (lookahead != 0) ADVANCE(829);
      END_STATE();
    case 514:
      if (lookahead == '"') ADVANCE(825);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(514)
      END_STATE();
    case 515:
      if (lookahead == '#') ADVANCE(783);
      if (lookahead == 'h') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(726);
      if (lookahead == 'm') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(674);
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 516:
      if (lookahead == '#') ADVANCE(589);
      if (lookahead == 'b') ADVANCE(729);
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'h') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead == 'l') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(679);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead == 'q') ADVANCE(769);
      if (lookahead == 'r') ADVANCE(643);
      if (lookahead == 's') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(647);
      if (lookahead == 'x') ADVANCE(727);
      END_STATE();
    case 517:
      if (lookahead == '#') ADVANCE(784);
      if (lookahead == 'm') ADVANCE(676);
      if (lookahead == 'n') ADVANCE(675);
      END_STATE();
    case 518:
      if (lookahead == '#') ADVANCE(590);
      if (lookahead == 'b') ADVANCE(729);
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'h') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead == 'l') ADVANCE(646);
      if (lookahead == 'm') ADVANCE(680);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead == 'q') ADVANCE(769);
      if (lookahead == 'r') ADVANCE(643);
      if (lookahead == 's') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(647);
      if (lookahead == 'x') ADVANCE(727);
      END_STATE();
    case 519:
      if (lookahead == '#') ADVANCE(592);
      END_STATE();
    case 520:
      if (lookahead == '#') ADVANCE(595);
      END_STATE();
    case 521:
      if (lookahead == '#') ADVANCE(786);
      if (lookahead == 'm') ADVANCE(682);
      if (lookahead == 'n') ADVANCE(681);
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 522:
      if (lookahead == '#') ADVANCE(787);
      if (lookahead == 'm') ADVANCE(684);
      if (lookahead == 'n') ADVANCE(683);
      if (lookahead == 'p') ADVANCE(716);
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 523:
      if (lookahead == '#') ADVANCE(788);
      if (lookahead == 'p') ADVANCE(716);
      END_STATE();
    case 524:
      if (lookahead == '#') ADVANCE(789);
      if (lookahead == 'm') ADVANCE(678);
      if (lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 525:
      if (lookahead == '#') ADVANCE(791);
      if (lookahead == 'm') ADVANCE(682);
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 526:
      if (lookahead == '&') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(797);
      END_STATE();
    case 527:
      if (lookahead == '&') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(797);
      if (lookahead == '.') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(538);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 528:
      if (lookahead == '&') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(877);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(532);
      END_STATE();
    case 529:
      if (lookahead == '&') ADVANCE(523);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(877);
      END_STATE();
    case 530:
      if (lookahead == '&') ADVANCE(520);
      END_STATE();
    case 531:
      if (lookahead == '&') ADVANCE(688);
      END_STATE();
    case 532:
      if (lookahead == '&') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(877);
      END_STATE();
    case 533:
      if (lookahead == '-') ADVANCE(365);
      END_STATE();
    case 534:
      if (lookahead == '-') ADVANCE(533);
      END_STATE();
    case 535:
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 536:
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 537:
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(538);
      END_STATE();
    case 538:
      if (lookahead == '.') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(538);
      END_STATE();
    case 539:
      if (lookahead == '.') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(538);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 540:
      if (lookahead == '0') ADVANCE(561);
      if (lookahead == '2') ADVANCE(562);
      if (lookahead == '7') ADVANCE(593);
      if (lookahead == 'a') ADVANCE(610);
      if (lookahead == 'd') ADVANCE(611);
      if (lookahead == 'f') ADVANCE(612);
      END_STATE();
    case 541:
      if (lookahead == '0') ADVANCE(574);
      if (lookahead == '1') ADVANCE(663);
      if (lookahead == '2') ADVANCE(543);
      if (lookahead == '3') ADVANCE(565);
      if (lookahead == '5') ADVANCE(563);
      if (lookahead == '6') ADVANCE(596);
      if (lookahead == '7') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 542:
      if (lookahead == '0') ADVANCE(574);
      if (lookahead == '1') ADVANCE(663);
      if (lookahead == '2') ADVANCE(543);
      if (lookahead == '3') ADVANCE(565);
      if (lookahead == '5') ADVANCE(563);
      if (lookahead == '6') ADVANCE(596);
      if (lookahead == '7') ADVANCE(572);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'b') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 543:
      if (lookahead == '0') ADVANCE(603);
      if (lookahead == '1') ADVANCE(594);
      if (lookahead == '9') ADVANCE(687);
      END_STATE();
    case 544:
      if (lookahead == '0') ADVANCE(552);
      if (lookahead == '7') ADVANCE(568);
      END_STATE();
    case 545:
      if (lookahead == '0') ADVANCE(552);
      if (lookahead == '7') ADVANCE(568);
      if (lookahead == ';') ADVANCE(945);
      END_STATE();
    case 546:
      if (lookahead == '0') ADVANCE(916);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'O') ADVANCE(912);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(921);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(546)
      END_STATE();
    case 547:
      if (lookahead == '0') ADVANCE(916);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(844);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(855);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'O') ADVANCE(912);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(921);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(546)
      END_STATE();
    case 548:
      if (lookahead == '0') ADVANCE(608);
      END_STATE();
    case 549:
      if (lookahead == '0') ADVANCE(618);
      END_STATE();
    case 550:
      if (lookahead == '0') ADVANCE(632);
      END_STATE();
    case 551:
      if (lookahead == '0') ADVANCE(626);
      END_STATE();
    case 552:
      if (lookahead == '0') ADVANCE(626);
      if (lookahead == '1') ADVANCE(626);
      END_STATE();
    case 553:
      if (lookahead == '0') ADVANCE(625);
      END_STATE();
    case 554:
      if (lookahead == '0') ADVANCE(628);
      END_STATE();
    case 555:
      if (lookahead == '0') ADVANCE(570);
      if (lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 556:
      if (lookahead == '0') ADVANCE(573);
      if (lookahead == 'd') ADVANCE(632);
      END_STATE();
    case 557:
      if (lookahead == '0') ADVANCE(576);
      if (lookahead == '2') ADVANCE(575);
      if (lookahead == 'd') ADVANCE(626);
      if (lookahead == 'f') ADVANCE(627);
      END_STATE();
    case 558:
      if (lookahead == '0') ADVANCE(576);
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 559:
      if (lookahead == '0') ADVANCE(578);
      if (lookahead == '2') ADVANCE(577);
      if (lookahead == '7') ADVANCE(607);
      if (lookahead == 'b') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(629);
      END_STATE();
    case 560:
      if (lookahead == '1') ADVANCE(898);
      if (lookahead == '2') ADVANCE(930);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(560)
      END_STATE();
    case 561:
      if (lookahead == '1') ADVANCE(549);
      END_STATE();
    case 562:
      if (lookahead == '1') ADVANCE(598);
      END_STATE();
    case 563:
      if (lookahead == '1') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead == 'c') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(652);
      END_STATE();
    case 564:
      if (lookahead == '1') ADVANCE(587);
      if (lookahead == ';') ADVANCE(528);
      END_STATE();
    case 565:
      if (lookahead == '1') ADVANCE(594);
      END_STATE();
    case 566:
      if (lookahead == '1') ADVANCE(620);
      END_STATE();
    case 567:
      if (lookahead == '1') ADVANCE(626);
      END_STATE();
    case 568:
      if (lookahead == '1') ADVANCE(626);
      if (lookahead == '2') ADVANCE(626);
      END_STATE();
    case 569:
      if (lookahead == '1') ADVANCE(630);
      END_STATE();
    case 570:
      if (lookahead == '1') ADVANCE(548);
      END_STATE();
    case 571:
      if (lookahead == '1') ADVANCE(599);
      if (lookahead == '3') ADVANCE(566);
      if (lookahead == '9') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == 'f') ADVANCE(594);
      END_STATE();
    case 572:
      if (lookahead == '1') ADVANCE(599);
      if (lookahead == '9') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == 'f') ADVANCE(594);
      END_STATE();
    case 573:
      if (lookahead == '1') ADVANCE(550);
      END_STATE();
    case 574:
      if (lookahead == '1') ADVANCE(553);
      if (lookahead == '3') ADVANCE(665);
      if (lookahead == '4') ADVANCE(606);
      END_STATE();
    case 575:
      if (lookahead == '1') ADVANCE(600);
      END_STATE();
    case 576:
      if (lookahead == '1') ADVANCE(551);
      END_STATE();
    case 577:
      if (lookahead == '1') ADVANCE(601);
      END_STATE();
    case 578:
      if (lookahead == '1') ADVANCE(554);
      END_STATE();
    case 579:
      if (lookahead == '2') ADVANCE(540);
      if (lookahead == 'b') ADVANCE(669);
      END_STATE();
    case 580:
      if (lookahead == '2') ADVANCE(555);
      END_STATE();
    case 581:
      if (lookahead == '2') ADVANCE(541);
      if (lookahead == 'b') ADVANCE(669);
      END_STATE();
    case 582:
      if (lookahead == '2') ADVANCE(557);
      END_STATE();
    case 583:
      if (lookahead == '2') ADVANCE(559);
      END_STATE();
    case 584:
      if (lookahead == '2') ADVANCE(604);
      END_STATE();
    case 585:
      if (lookahead == '2') ADVANCE(542);
      END_STATE();
    case 586:
      if (lookahead == '2') ADVANCE(626);
      END_STATE();
    case 587:
      if (lookahead == '2') ADVANCE(626);
      if (lookahead == '3') ADVANCE(626);
      END_STATE();
    case 588:
      if (lookahead == '2') ADVANCE(556);
      END_STATE();
    case 589:
      if (lookahead == '2') ADVANCE(569);
      if (lookahead == '3') ADVANCE(666);
      if (lookahead == 'x') ADVANCE(581);
      END_STATE();
    case 590:
      if (lookahead == '2') ADVANCE(569);
      if (lookahead == '3') ADVANCE(666);
      if (lookahead == 'x') ADVANCE(585);
      END_STATE();
    case 591:
      if (lookahead == '2') ADVANCE(558);
      END_STATE();
    case 592:
      if (lookahead == '2') ADVANCE(567);
      if (lookahead == '3') ADVANCE(694);
      END_STATE();
    case 593:
      if (lookahead == '3') ADVANCE(566);
      END_STATE();
    case 594:
      if (lookahead == '3') ADVANCE(626);
      END_STATE();
    case 595:
      if (lookahead == '3') ADVANCE(671);
      END_STATE();
    case 596:
      if (lookahead == '4') ADVANCE(586);
      END_STATE();
    case 597:
      if (lookahead == '4') ADVANCE(626);
      if (lookahead == '8') ADVANCE(626);
      END_STATE();
    case 598:
      if (lookahead == '5') ADVANCE(619);
      END_STATE();
    case 599:
      if (lookahead == '5') ADVANCE(626);
      END_STATE();
    case 600:
      if (lookahead == '5') ADVANCE(627);
      END_STATE();
    case 601:
      if (lookahead == '5') ADVANCE(629);
      END_STATE();
    case 602:
      if (lookahead == '5') ADVANCE(623);
      END_STATE();
    case 603:
      if (lookahead == '6') ADVANCE(626);
      END_STATE();
    case 604:
      if (lookahead == '7') ADVANCE(607);
      if (lookahead == 'b') ADVANCE(626);
      END_STATE();
    case 605:
      if (lookahead == '7') ADVANCE(626);
      END_STATE();
    case 606:
      if (lookahead == '7') ADVANCE(626);
      if (lookahead == '8') ADVANCE(626);
      if (lookahead == '9') ADVANCE(626);
      END_STATE();
    case 607:
      if (lookahead == '9') ADVANCE(599);
      END_STATE();
    case 608:
      if (lookahead == ';') ADVANCE(797);
      END_STATE();
    case 609:
      if (lookahead == ';') ADVANCE(927);
      END_STATE();
    case 610:
      if (lookahead == ';') ADVANCE(945);
      END_STATE();
    case 611:
      if (lookahead == ';') ADVANCE(907);
      END_STATE();
    case 612:
      if (lookahead == ';') ADVANCE(928);
      END_STATE();
    case 613:
      if (lookahead == ';') ADVANCE(935);
      END_STATE();
    case 614:
      if (lookahead == ';') ADVANCE(933);
      END_STATE();
    case 615:
      if (lookahead == ';') ADVANCE(911);
      END_STATE();
    case 616:
      if (lookahead == ';') ADVANCE(908);
      END_STATE();
    case 617:
      if (lookahead == ';') ADVANCE(910);
      END_STATE();
    case 618:
      if (lookahead == ';') ADVANCE(909);
      END_STATE();
    case 619:
      if (lookahead == ';') ADVANCE(929);
      END_STATE();
    case 620:
      if (lookahead == ';') ADVANCE(949);
      END_STATE();
    case 621:
      if (lookahead == ';') ADVANCE(947);
      END_STATE();
    case 622:
      if (lookahead == ';') ADVANCE(943);
      END_STATE();
    case 623:
      if (lookahead == ';') ADVANCE(528);
      END_STATE();
    case 624:
      if (lookahead == ';') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(720);
      END_STATE();
    case 625:
      if (lookahead == ';') ADVANCE(889);
      END_STATE();
    case 626:
      if (lookahead == ';') ADVANCE(877);
      END_STATE();
    case 627:
      if (lookahead == ';') ADVANCE(532);
      END_STATE();
    case 628:
      if (lookahead == ';') ADVANCE(869);
      END_STATE();
    case 629:
      if (lookahead == ';') ADVANCE(529);
      END_STATE();
    case 630:
      if (lookahead == ';') ADVANCE(890);
      END_STATE();
    case 631:
      if (lookahead == ';') ADVANCE(530);
      END_STATE();
    case 632:
      if (lookahead == ';') ADVANCE(798);
      END_STATE();
    case 633:
      if (lookahead == ';') ADVANCE(891);
      END_STATE();
    case 634:
      if (lookahead == ';') ADVANCE(531);
      END_STATE();
    case 635:
      if (lookahead == ';') ADVANCE(893);
      END_STATE();
    case 636:
      if (lookahead == ';') ADVANCE(892);
      END_STATE();
    case 637:
      if (lookahead == '=') ADVANCE(877);
      END_STATE();
    case 638:
      if (lookahead == 'N') ADVANCE(877);
      END_STATE();
    case 639:
      if (lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 640:
      if (lookahead == 'a') ADVANCE(744);
      END_STATE();
    case 641:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 642:
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead == 'v') ADVANCE(713);
      END_STATE();
    case 643:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 644:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 645:
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 646:
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 647:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 648:
      if (lookahead == 'a') ADVANCE(741);
      END_STATE();
    case 649:
      if (lookahead == 'a') ADVANCE(715);
      END_STATE();
    case 650:
      if (lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 651:
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'b') ADVANCE(626);
      END_STATE();
    case 652:
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'f') ADVANCE(626);
      END_STATE();
    case 653:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 654:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 655:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 656:
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 657:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 658:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 659:
      if (lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 660:
      if (lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 661:
      if (lookahead == 'b') ADVANCE(708);
      END_STATE();
    case 662:
      if (lookahead == 'b') ADVANCE(626);
      END_STATE();
    case 663:
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead == 'd') ADVANCE(605);
      END_STATE();
    case 664:
      if (lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 665:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 666:
      if (lookahead == 'c') ADVANCE(631);
      if (lookahead == 'd') ADVANCE(636);
      if (lookahead == 'f') ADVANCE(630);
      END_STATE();
    case 667:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 668:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 669:
      if (lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 670:
      if (lookahead == 'd') ADVANCE(733);
      if (lookahead == 'p') ADVANCE(716);
      END_STATE();
    case 671:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 672:
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 673:
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 674:
      if (lookahead == 'd') ADVANCE(654);
      END_STATE();
    case 675:
      if (lookahead == 'd') ADVANCE(656);
      END_STATE();
    case 676:
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 677:
      if (lookahead == 'd') ADVANCE(657);
      END_STATE();
    case 678:
      if (lookahead == 'd') ADVANCE(657);
      if (lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 679:
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'i') ADVANCE(673);
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 680:
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 681:
      if (lookahead == 'd') ADVANCE(659);
      END_STATE();
    case 682:
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 683:
      if (lookahead == 'd') ADVANCE(660);
      END_STATE();
    case 684:
      if (lookahead == 'd') ADVANCE(660);
      if (lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 685:
      if (lookahead == 'e') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(771);
      if (lookahead == 'm') ADVANCE(626);
      if (lookahead == 'r') ADVANCE(730);
      END_STATE();
    case 686:
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == 'q') ADVANCE(781);
      END_STATE();
    case 687:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 688:
      if (lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 689:
      if (lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 690:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 691:
      if (lookahead == 'f') ADVANCE(704);
      END_STATE();
    case 692:
      if (lookahead == 'f') ADVANCE(747);
      END_STATE();
    case 693:
      if (lookahead == 'f') ADVANCE(614);
      END_STATE();
    case 694:
      if (lookahead == 'f') ADVANCE(626);
      END_STATE();
    case 695:
      if (lookahead == 'g') ADVANCE(626);
      END_STATE();
    case 696:
      if (lookahead == 'h') ADVANCE(615);
      END_STATE();
    case 697:
      if (lookahead == 'h') ADVANCE(617);
      END_STATE();
    case 698:
      if (lookahead == 'h') ADVANCE(608);
      END_STATE();
    case 699:
      if (lookahead == 'h') ADVANCE(632);
      END_STATE();
    case 700:
      if (lookahead == 'h') ADVANCE(626);
      END_STATE();
    case 701:
      if (lookahead == 'h') ADVANCE(625);
      END_STATE();
    case 702:
      if (lookahead == 'h') ADVANCE(628);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(742);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 705:
      if (lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 706:
      if (lookahead == 'l') ADVANCE(693);
      if (lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 707:
      if (lookahead == 'l') ADVANCE(609);
      END_STATE();
    case 708:
      if (lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 709:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 710:
      if (lookahead == 'l') ADVANCE(633);
      END_STATE();
    case 711:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 712:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 713:
      if (lookahead == 'l') ADVANCE(768);
      END_STATE();
    case 714:
      if (lookahead == 'l') ADVANCE(751);
      END_STATE();
    case 715:
      if (lookahead == 'l') ADVANCE(754);
      END_STATE();
    case 716:
      if (lookahead == 'l') ADVANCE(777);
      END_STATE();
    case 717:
      if (lookahead == 'n') ADVANCE(695);
      END_STATE();
    case 718:
      if (lookahead == 'n') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 719:
      if (lookahead == 'n') ADVANCE(691);
      END_STATE();
    case 720:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 721:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 722:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 723:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 724:
      if (lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 725:
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 726:
      if (lookahead == 'o') ADVANCE(782);
      END_STATE();
    case 727:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 728:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 729:
      if (lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 730:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 731:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 732:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 733:
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 734:
      if (lookahead == 'p') ADVANCE(716);
      END_STATE();
    case 735:
      if (lookahead == 'p') ADVANCE(716);
      if (lookahead == 'q') ADVANCE(774);
      if (lookahead == 'x') ADVANCE(664);
      END_STATE();
    case 736:
      if (lookahead == 'p') ADVANCE(626);
      END_STATE();
    case 737:
      if (lookahead == 'q') ADVANCE(773);
      END_STATE();
    case 738:
      if (lookahead == 'q') ADVANCE(780);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 744:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 746:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(772);
      END_STATE();
    case 748:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 749:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 750:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 751:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 752:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 753:
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 754:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 755:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 756:
      if (lookahead == 's') ADVANCE(765);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 758:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 759:
      if (lookahead == 's') ADVANCE(767);
      END_STATE();
    case 760:
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 761:
      if (lookahead == 's') ADVANCE(766);
      END_STATE();
    case 762:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 763:
      if (lookahead == 's') ADVANCE(702);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(634);
      END_STATE();
    case 769:
      if (lookahead == 'u') ADVANCE(689);
      END_STATE();
    case 770:
      if (lookahead == 'u') ADVANCE(748);
      END_STATE();
    case 771:
      if (lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 772:
      if (lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 773:
      if (lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 774:
      if (lookahead == 'u') ADVANCE(649);
      END_STATE();
    case 775:
      if (lookahead == 'u') ADVANCE(749);
      END_STATE();
    case 776:
      if (lookahead == 'u') ADVANCE(750);
      END_STATE();
    case 777:
      if (lookahead == 'u') ADVANCE(751);
      END_STATE();
    case 778:
      if (lookahead == 'u') ADVANCE(752);
      END_STATE();
    case 779:
      if (lookahead == 'u') ADVANCE(753);
      END_STATE();
    case 780:
      if (lookahead == 'u') ADVANCE(655);
      END_STATE();
    case 781:
      if (lookahead == 'u') ADVANCE(690);
      END_STATE();
    case 782:
      if (lookahead == 'w') ADVANCE(644);
      END_STATE();
    case 783:
      if (lookahead == 'x') ADVANCE(579);
      END_STATE();
    case 784:
      if (lookahead == 'x') ADVANCE(580);
      END_STATE();
    case 785:
      if (lookahead == 'x') ADVANCE(734);
      END_STATE();
    case 786:
      if (lookahead == 'x') ADVANCE(582);
      END_STATE();
    case 787:
      if (lookahead == 'x') ADVANCE(583);
      END_STATE();
    case 788:
      if (lookahead == 'x') ADVANCE(584);
      END_STATE();
    case 789:
      if (lookahead == 'x') ADVANCE(588);
      END_STATE();
    case 790:
      if (lookahead == 'x') ADVANCE(667);
      END_STATE();
    case 791:
      if (lookahead == 'x') ADVANCE(591);
      END_STATE();
    case 792:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(793)
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 793:
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(793)
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 794:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 795:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(869);
      END_STATE();
    case 796:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(795);
      END_STATE();
    case 797:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 798:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 799:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(869);
      END_STATE();
    case 800:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      END_STATE();
    case 801:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(830);
      END_STATE();
    case 802:
      if (eof) ADVANCE(809);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == '\r') ADVANCE(484);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '#') ADVANCE(874);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+') ADVANCE(873);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(858);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(847);
      if (lookahead == 'K') ADVANCE(851);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(846);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == 10133) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 803:
      if (eof) ADVANCE(809);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == '\r') ADVANCE(484);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '#') ADVANCE(874);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+') ADVANCE(873);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(856);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == 10133) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 804:
      if (eof) ADVANCE(809);
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead == '\r') ADVANCE(495);
      if (lookahead == '!') ADVANCE(886);
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(832);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(880);
      if (lookahead == '0') ADVANCE(918);
      if (lookahead == '1') ADVANCE(900);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '?') ADVANCE(886);
      if (lookahead == '@') ADVANCE(864);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q') ADVANCE(851);
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'R') ADVANCE(850);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(241);
      if (lookahead == '[') ADVANCE(823);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(843);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '{') ADVANCE(835);
      if (sym_annotation_character_set_1(lookahead)) ADVANCE(888);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(495);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 805:
      if (eof) ADVANCE(809);
      if (lookahead == '\n') ADVANCE(505);
      if (lookahead == '\r') ADVANCE(496);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '0') ADVANCE(917);
      if (lookahead == '1') ADVANCE(899);
      if (lookahead == 'O') ADVANCE(914);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == 189) ADVANCE(932);
      if (lookahead == 8727) ADVANCE(940);
      if (lookahead == 10033) ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 806:
      if (eof) ADVANCE(809);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(506);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 807:
      if (eof) ADVANCE(809);
      if (lookahead == '"') ADVANCE(825);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(814);
      if (lookahead == '&') ADVANCE(515);
      if (lookahead == '(') ADVANCE(831);
      if (lookahead == ')') ADVANCE(833);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '-') ADVANCE(902);
      if (lookahead == '/') ADVANCE(925);
      if (lookahead == '0') ADVANCE(919);
      if (lookahead == '1') ADVANCE(898);
      if (lookahead == '2') ADVANCE(930);
      if (lookahead == '@') ADVANCE(863);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R') ADVANCE(849);
      if (lookahead == 'O') ADVANCE(915);
      if (lookahead == 'P') ADVANCE(860);
      if (lookahead == '[') ADVANCE(822);
      if (lookahead == ']') ADVANCE(824);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(842);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead == '}') ADVANCE(836);
      if (lookahead == 189) ADVANCE(931);
      if (lookahead == 8208) ADVANCE(904);
      if (lookahead == 8211) ADVANCE(905);
      if (lookahead == 8212) ADVANCE(906);
      if (lookahead == 8722) ADVANCE(903);
      if (lookahead == 8725) ADVANCE(926);
      if (lookahead == 8727) ADVANCE(939);
      if (lookahead == 10033) ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(807)
      END_STATE();
    case 808:
      if (eof) ADVANCE(809);
      if (lookahead == '%' ||
          lookahead == ';') ADVANCE(815);
      if (lookahead == '[') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(808)
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(493);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(498);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(495);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead == '\r') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(495);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(819);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_double_quote);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(827);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(829);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token2);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(838);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(841);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(841);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(841);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(877);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(894);
      if (lookahead == '\r') ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(877);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(877);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      if (lookahead == '=') ADVANCE(877);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(243);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(798);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(16);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(521);
      if (lookahead == '+') ADVANCE(872);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(877);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(532);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '+') ADVANCE(872);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(888);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(13);
      if (lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(871);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(871);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(13);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(142);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(144);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(888);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(522);
      if (lookahead == '+' ||
          lookahead == 10133) ADVANCE(877);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(869);
      if (lookahead == '/' ||
          lookahead == 8725) ADVANCE(529);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(519);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(686);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(520);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(688);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(877);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(877);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == '.') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(538);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2d_SEMI);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_AMPminus_SEMI);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2010_SEMI);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_AMPndash_SEMI);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_AMPmdash_SEMI);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(242);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(797);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(242);
      if (lookahead == '.') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(797);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(797);
      if (lookahead == '.') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(538);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(242);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == 8208 ||
          lookahead == 8211 ||
          lookahead == 8212 ||
          lookahead == 8722) ADVANCE(797);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_AMPsol_SEMI);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2f_SEMI);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2215_SEMI);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_AMPhalf_SEMI);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_AMPhalf_SEMI);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDxbd_SEMI);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDxbd_SEMI);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_7);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_AMPmidast_SEMI);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_AMPmidast_SEMI);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2a_SEMI);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2a_SEMI);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_AMPlowast_SEMI);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_AMPlowast_SEMI);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2731_SEMI);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx2731_SEMI);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 808},
  [2] = {.lex_state = 803},
  [3] = {.lex_state = 803},
  [4] = {.lex_state = 494},
  [5] = {.lex_state = 509},
  [6] = {.lex_state = 802},
  [7] = {.lex_state = 802},
  [8] = {.lex_state = 803},
  [9] = {.lex_state = 802},
  [10] = {.lex_state = 803},
  [11] = {.lex_state = 803},
  [12] = {.lex_state = 803},
  [13] = {.lex_state = 803},
  [14] = {.lex_state = 803},
  [15] = {.lex_state = 803},
  [16] = {.lex_state = 803},
  [17] = {.lex_state = 803},
  [18] = {.lex_state = 803},
  [19] = {.lex_state = 803},
  [20] = {.lex_state = 804},
  [21] = {.lex_state = 803},
  [22] = {.lex_state = 803},
  [23] = {.lex_state = 494},
  [24] = {.lex_state = 803},
  [25] = {.lex_state = 803},
  [26] = {.lex_state = 803},
  [27] = {.lex_state = 803},
  [28] = {.lex_state = 803},
  [29] = {.lex_state = 803},
  [30] = {.lex_state = 803},
  [31] = {.lex_state = 803},
  [32] = {.lex_state = 494},
  [33] = {.lex_state = 803},
  [34] = {.lex_state = 803},
  [35] = {.lex_state = 494},
  [36] = {.lex_state = 494},
  [37] = {.lex_state = 509},
  [38] = {.lex_state = 509},
  [39] = {.lex_state = 509},
  [40] = {.lex_state = 509},
  [41] = {.lex_state = 805},
  [42] = {.lex_state = 805},
  [43] = {.lex_state = 510},
  [44] = {.lex_state = 510},
  [45] = {.lex_state = 509},
  [46] = {.lex_state = 510},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 509},
  [49] = {.lex_state = 509},
  [50] = {.lex_state = 509},
  [51] = {.lex_state = 509},
  [52] = {.lex_state = 502},
  [53] = {.lex_state = 509},
  [54] = {.lex_state = 509},
  [55] = {.lex_state = 509},
  [56] = {.lex_state = 509},
  [57] = {.lex_state = 509},
  [58] = {.lex_state = 509},
  [59] = {.lex_state = 509},
  [60] = {.lex_state = 509},
  [61] = {.lex_state = 509},
  [62] = {.lex_state = 509},
  [63] = {.lex_state = 509},
  [64] = {.lex_state = 509},
  [65] = {.lex_state = 509},
  [66] = {.lex_state = 808},
  [67] = {.lex_state = 808},
  [68] = {.lex_state = 509},
  [69] = {.lex_state = 509},
  [70] = {.lex_state = 509},
  [71] = {.lex_state = 509},
  [72] = {.lex_state = 509},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 808},
  [77] = {.lex_state = 808},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 803},
  [81] = {.lex_state = 808},
  [82] = {.lex_state = 808},
  [83] = {.lex_state = 803},
  [84] = {.lex_state = 803},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 806},
  [87] = {.lex_state = 803},
  [88] = {.lex_state = 547},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 803},
  [91] = {.lex_state = 547},
  [92] = {.lex_state = 803},
  [93] = {.lex_state = 803},
  [94] = {.lex_state = 513},
  [95] = {.lex_state = 808},
  [96] = {.lex_state = 513},
  [97] = {.lex_state = 513},
  [98] = {.lex_state = 808},
  [99] = {.lex_state = 547},
  [100] = {.lex_state = 808},
  [101] = {.lex_state = 808},
  [102] = {.lex_state = 806},
  [103] = {.lex_state = 808},
  [104] = {.lex_state = 808},
  [105] = {.lex_state = 808},
  [106] = {.lex_state = 808},
  [107] = {.lex_state = 808},
  [108] = {.lex_state = 547},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 808},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 547},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 547},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 547},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 547},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 837},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 819},
  [138] = {.lex_state = 508},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 560},
  [145] = {.lex_state = 560},
  [146] = {.lex_state = 547},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 560},
  [149] = {.lex_state = 560},
  [150] = {.lex_state = 547},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 819},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 819},
  [155] = {.lex_state = 547},
  [156] = {.lex_state = 819},
  [157] = {.lex_state = 837},
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
    [anon_sym_AT] = ACTIONS(1),
    [sym__san_move_castle] = ACTIONS(1),
    [sym_check_or_mate_condition] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2d_SEMI] = ACTIONS(1),
    [anon_sym_AMPminus_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2010_SEMI] = ACTIONS(1),
    [anon_sym_AMPndash_SEMI] = ACTIONS(1),
    [anon_sym_AMPmdash_SEMI] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_AMPsol_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2f_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDx2215_SEMI] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_AMPhalf_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUNDxbd_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
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
    [sym_tagpair] = STATE(36),
    [aux_sym_series_of_games_repeat1] = STATE(66),
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
    ACTIONS(33), 1,
      anon_sym_P,
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
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [78] = 18,
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
    ACTIONS(61), 1,
      anon_sym_P,
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
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [156] = 23,
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
    ACTIONS(61), 1,
      anon_sym_P,
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
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(75), 3,
      anon_sym_6,
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
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [243] = 22,
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
    ACTIONS(89), 1,
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
    ACTIONS(91), 2,
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
    ACTIONS(93), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    STATE(21), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(95), 7,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [327] = 5,
    ACTIONS(101), 1,
      sym__san_promotable_piece,
    ACTIONS(103), 1,
      sym__san_promotion_symbol,
    STATE(15), 1,
      sym__san_promotion,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(99), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [371] = 5,
    ACTIONS(103), 1,
      sym__san_promotion_symbol,
    ACTIONS(109), 1,
      sym__san_promotable_piece,
    STATE(17), 1,
      sym__san_promotion,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(107), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [415] = 4,
    ACTIONS(115), 1,
      sym__san_capture_symbol,
    STATE(18), 1,
      sym__san_destination,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(113), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [456] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(113), 30,
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
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [493] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(119), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [528] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(123), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [563] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(127), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [598] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(131), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [633] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(135), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [668] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(139), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [703] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(143), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [738] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(147), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [773] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(151), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [808] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(155), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [843] = 3,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(159), 28,
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
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [880] = 3,
    ACTIONS(167), 1,
      sym_check_or_mate_condition,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(165), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [917] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(113), 28,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [952] = 5,
    ACTIONS(169), 1,
      sym__empty_line,
    ACTIONS(173), 1,
      sym_tagpair_delimiter_open,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    ACTIONS(171), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [992] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(178), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1026] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(182), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1060] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(186), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1094] = 2,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(190), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1128] = 2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(194), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1162] = 2,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(198), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1196] = 2,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(202), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1230] = 2,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(206), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1264] = 5,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(208), 1,
      sym__empty_line,
    STATE(23), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    ACTIONS(210), 25,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1304] = 2,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(214), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1338] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(218), 27,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1372] = 2,
    ACTIONS(220), 1,
      sym__empty_line,
    ACTIONS(222), 26,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1404] = 2,
    ACTIONS(224), 1,
      sym__empty_line,
    ACTIONS(226), 26,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1436] = 18,
    ACTIONS(228), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(230), 1,
      sym_variation_delimiter_open,
    ACTIONS(232), 1,
      sym_variation_delimiter_close,
    ACTIONS(234), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(236), 1,
      sym_move_number,
    ACTIONS(238), 1,
      sym__san_file,
    ACTIONS(240), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(242), 1,
      anon_sym_P,
    ACTIONS(244), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_annotation,
    STATE(39), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(44), 1,
      sym__san_destination,
    STATE(70), 1,
      sym_san_move,
    STATE(142), 1,
      sym_variation_movetext,
    ACTIONS(246), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(62), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(68), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1498] = 18,
    ACTIONS(228), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(230), 1,
      sym_variation_delimiter_open,
    ACTIONS(234), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(236), 1,
      sym_move_number,
    ACTIONS(238), 1,
      sym__san_file,
    ACTIONS(240), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(242), 1,
      anon_sym_P,
    ACTIONS(244), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_annotation,
    ACTIONS(250), 1,
      sym_variation_delimiter_close,
    STATE(39), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(44), 1,
      sym__san_destination,
    STATE(70), 1,
      sym_san_move,
    STATE(140), 1,
      sym_variation_movetext,
    ACTIONS(246), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(62), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(68), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1560] = 17,
    ACTIONS(228), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(230), 1,
      sym_variation_delimiter_open,
    ACTIONS(234), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(236), 1,
      sym_move_number,
    ACTIONS(238), 1,
      sym__san_file,
    ACTIONS(240), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(242), 1,
      anon_sym_P,
    ACTIONS(244), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_annotation,
    ACTIONS(252), 1,
      sym_variation_delimiter_close,
    STATE(40), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(44), 1,
      sym__san_destination,
    STATE(70), 1,
      sym_san_move,
    ACTIONS(246), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(62), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(68), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1619] = 17,
    ACTIONS(254), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(257), 1,
      sym_variation_delimiter_open,
    ACTIONS(260), 1,
      sym_variation_delimiter_close,
    ACTIONS(262), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(265), 1,
      sym_move_number,
    ACTIONS(268), 1,
      sym__san_file,
    ACTIONS(271), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(274), 1,
      anon_sym_P,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_annotation,
    STATE(40), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(44), 1,
      sym__san_destination,
    STATE(70), 1,
      sym_san_move,
    ACTIONS(280), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(62), 2,
      sym__variation_movetext_element,
      sym_variation,
    STATE(68), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(56), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1678] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      sym__empty_line,
    STATE(87), 1,
      sym_result_code,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(75), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    ACTIONS(290), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
    ACTIONS(77), 7,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1715] = 8,
    ACTIONS(71), 1,
      anon_sym_1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym__empty_line,
    STATE(83), 1,
      sym_result_code,
    ACTIONS(73), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(75), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
    ACTIONS(296), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
    ACTIONS(77), 7,
      anon_sym_STAR,
      anon_sym_7,
      anon_sym_8,
      anon_sym_AMPmidast_SEMI,
      anon_sym_AMP_POUNDx2a_SEMI,
      anon_sym_AMPlowast_SEMI,
      anon_sym_AMP_POUNDx2731_SEMI,
  [1752] = 5,
    ACTIONS(298), 1,
      sym__san_promotable_piece,
    ACTIONS(300), 1,
      sym__san_promotion_symbol,
    STATE(58), 1,
      sym__san_promotion,
    ACTIONS(99), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(97), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1779] = 5,
    ACTIONS(300), 1,
      sym__san_promotion_symbol,
    ACTIONS(302), 1,
      sym__san_promotable_piece,
    STATE(51), 1,
      sym__san_promotion,
    ACTIONS(107), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(105), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1806] = 4,
    ACTIONS(304), 1,
      sym__san_capture_symbol,
    STATE(48), 1,
      sym__san_destination,
    ACTIONS(113), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(111), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1830] = 2,
    ACTIONS(113), 6,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(111), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1850] = 2,
    ACTIONS(308), 5,
      anon_sym_SLASH,
      anon_sym_5,
      anon_sym_AMPsol_SEMI,
      anon_sym_AMP_POUNDx2f_SEMI,
      anon_sym_AMP_POUNDx2215_SEMI,
    ACTIONS(306), 10,
      anon_sym_DASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [1870] = 2,
    ACTIONS(151), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(149), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1888] = 2,
    ACTIONS(135), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(133), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1906] = 2,
    ACTIONS(113), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(111), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1924] = 2,
    ACTIONS(147), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(145), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1942] = 2,
    ACTIONS(310), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(159), 12,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1960] = 2,
    ACTIONS(155), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(153), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1978] = 2,
    ACTIONS(119), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(117), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [1996] = 2,
    ACTIONS(131), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(129), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2014] = 3,
    ACTIONS(312), 1,
      sym_check_or_mate_condition,
    ACTIONS(165), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(163), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2034] = 2,
    ACTIONS(123), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(121), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2052] = 2,
    ACTIONS(139), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(137), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2070] = 2,
    ACTIONS(127), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(125), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2088] = 2,
    ACTIONS(143), 4,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(141), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2106] = 2,
    ACTIONS(316), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(314), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2123] = 2,
    ACTIONS(320), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(318), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2140] = 2,
    ACTIONS(324), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(322), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2157] = 2,
    ACTIONS(178), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(176), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2174] = 2,
    ACTIONS(190), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(188), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2191] = 11,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(67), 1,
      aux_sym_series_of_games_repeat1,
    STATE(78), 1,
      sym_freestanding_comment,
    STATE(104), 1,
      sym_game,
    STATE(77), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2226] = 11,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(333), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(336), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(67), 1,
      aux_sym_series_of_games_repeat1,
    STATE(85), 1,
      sym_freestanding_comment,
    STATE(104), 1,
      sym_game,
    STATE(82), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2261] = 2,
    ACTIONS(341), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(339), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2278] = 2,
    ACTIONS(182), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(180), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2295] = 2,
    ACTIONS(345), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(343), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2312] = 2,
    ACTIONS(198), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(196), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2329] = 2,
    ACTIONS(202), 3,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(200), 9,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [2346] = 1,
    ACTIONS(347), 10,
      anon_sym_DASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [2359] = 1,
    ACTIONS(349), 10,
      anon_sym_DASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [2372] = 1,
    ACTIONS(351), 10,
      anon_sym_DASH,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_AMP_POUNDx2d_SEMI,
      anon_sym_AMPminus_SEMI,
      anon_sym_AMP_POUNDx2010_SEMI,
      anon_sym_AMPndash_SEMI,
      anon_sym_AMPmdash_SEMI,
  [2385] = 5,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(358), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(361), 1,
      sym_tagpair_delimiter_open,
    STATE(76), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2402] = 5,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(365), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(367), 1,
      sym_tagpair_delimiter_open,
    STATE(76), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2419] = 6,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2438] = 6,
    ACTIONS(371), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2457] = 2,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(377), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2467] = 4,
    ACTIONS(361), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(379), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(382), 1,
      sym_old_style_twic_section_comment,
    STATE(81), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2481] = 4,
    ACTIONS(367), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(385), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(387), 1,
      sym_old_style_twic_section_comment,
    STATE(81), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
  [2495] = 3,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(391), 1,
      sym__empty_line,
    ACTIONS(393), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2507] = 2,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(397), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2517] = 5,
    ACTIONS(371), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(32), 1,
      aux_sym_header_repeat1,
    STATE(36), 1,
      sym_tagpair,
    STATE(95), 1,
      sym_game,
  [2533] = 3,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(159), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2545] = 3,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 1,
      sym__empty_line,
    ACTIONS(405), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2557] = 5,
    ACTIONS(407), 1,
      sym__san_file,
    ACTIONS(409), 1,
      sym__san_rank,
    ACTIONS(411), 1,
      sym__san_capture_symbol,
    ACTIONS(413), 1,
      anon_sym_AT,
    STATE(60), 1,
      sym__san_destination,
  [2573] = 1,
    ACTIONS(415), 5,
      anon_sym_SLASH,
      anon_sym_5,
      anon_sym_AMPsol_SEMI,
      anon_sym_AMP_POUNDx2f_SEMI,
      anon_sym_AMP_POUNDx2215_SEMI,
  [2581] = 3,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 1,
      sym__empty_line,
    ACTIONS(421), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2593] = 5,
    ACTIONS(423), 1,
      sym__san_file,
    ACTIONS(425), 1,
      sym__san_rank,
    ACTIONS(427), 1,
      sym__san_capture_symbol,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym__san_destination,
  [2609] = 2,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      sym__empty_line,
    ACTIONS(433), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2619] = 3,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      sym__empty_line,
    ACTIONS(439), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2631] = 4,
    ACTIONS(441), 1,
      sym_double_quote,
    STATE(96), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(139), 1,
      sym_tagpair_value_contents,
    ACTIONS(443), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2645] = 2,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(447), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2654] = 3,
    ACTIONS(449), 1,
      sym_double_quote,
    STATE(97), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(451), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2665] = 3,
    ACTIONS(453), 1,
      sym_double_quote,
    STATE(97), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(455), 2,
      aux_sym_tagpair_value_contents_token1,
      aux_sym_tagpair_value_contents_token2,
  [2676] = 2,
    ACTIONS(458), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(460), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2685] = 4,
    ACTIONS(462), 1,
      sym__san_file,
    ACTIONS(464), 1,
      sym__san_rank,
    ACTIONS(466), 1,
      sym__san_capture_symbol,
    STATE(54), 1,
      sym__san_destination,
  [2698] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(182), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2707] = 2,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(470), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2716] = 2,
    ACTIONS(472), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(159), 3,
      sym_rest_of_line_comment_delimiter_open,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
  [2725] = 2,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(476), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2734] = 2,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(480), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2743] = 2,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(484), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2752] = 2,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(488), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2761] = 2,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(492), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2770] = 4,
    ACTIONS(494), 1,
      sym__san_file,
    ACTIONS(496), 1,
      sym__san_rank,
    ACTIONS(498), 1,
      sym__san_capture_symbol,
    STATE(10), 1,
      sym__san_destination,
  [2783] = 1,
    ACTIONS(500), 3,
      anon_sym_6,
      anon_sym_AMPhalf_SEMI,
      anon_sym_AMP_POUNDxbd_SEMI,
  [2789] = 2,
    ACTIONS(180), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(182), 2,
      sym_rest_of_line_comment_delimiter_open,
      sym_tagpair_delimiter_open,
  [2797] = 3,
    ACTIONS(494), 1,
      sym__san_file,
    ACTIONS(498), 1,
      sym__san_capture_symbol,
    STATE(10), 1,
      sym__san_destination,
  [2807] = 1,
    ACTIONS(500), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [2813] = 3,
    ACTIONS(462), 1,
      sym__san_file,
    ACTIONS(466), 1,
      sym__san_capture_symbol,
    STATE(54), 1,
      sym__san_destination,
  [2823] = 2,
    ACTIONS(494), 1,
      sym__san_file,
    STATE(19), 1,
      sym__san_destination,
  [2830] = 2,
    ACTIONS(502), 1,
      sym__san_rank,
    ACTIONS(504), 1,
      sym__san_capture_symbol,
  [2837] = 2,
    ACTIONS(462), 1,
      sym__san_file,
    STATE(55), 1,
      sym__san_destination,
  [2844] = 2,
    ACTIONS(494), 1,
      sym__san_file,
    STATE(11), 1,
      sym__san_destination,
  [2851] = 2,
    ACTIONS(506), 1,
      sym__san_file,
    STATE(43), 1,
      sym__san_destination,
  [2858] = 2,
    ACTIONS(494), 1,
      sym__san_file,
    STATE(12), 1,
      sym__san_destination,
  [2865] = 2,
    ACTIONS(494), 1,
      sym__san_file,
    STATE(10), 1,
      sym__san_destination,
  [2872] = 2,
    ACTIONS(508), 1,
      sym__san_file,
    STATE(6), 1,
      sym__san_destination,
  [2879] = 2,
    ACTIONS(462), 1,
      sym__san_file,
    STATE(53), 1,
      sym__san_destination,
  [2886] = 2,
    ACTIONS(494), 1,
      sym__san_file,
    STATE(13), 1,
      sym__san_destination,
  [2893] = 2,
    ACTIONS(462), 1,
      sym__san_file,
    STATE(54), 1,
      sym__san_destination,
  [2900] = 2,
    ACTIONS(510), 1,
      sym__san_rank,
    ACTIONS(512), 1,
      sym__san_capture_symbol,
  [2907] = 2,
    ACTIONS(462), 1,
      sym__san_file,
    STATE(57), 1,
      sym__san_destination,
  [2914] = 2,
    ACTIONS(514), 1,
      sym_double_quote,
    STATE(135), 1,
      sym__tagpair_value,
  [2921] = 2,
    ACTIONS(494), 1,
      sym__san_file,
    STATE(18), 1,
      sym__san_destination,
  [2928] = 2,
    ACTIONS(462), 1,
      sym__san_file,
    STATE(59), 1,
      sym__san_destination,
  [2935] = 2,
    ACTIONS(462), 1,
      sym__san_file,
    STATE(48), 1,
      sym__san_destination,
  [2942] = 1,
    ACTIONS(510), 1,
      sym__san_rank,
  [2946] = 1,
    ACTIONS(516), 1,
      anon_sym_AT,
  [2950] = 1,
    ACTIONS(518), 1,
      sym_inline_comment_text,
  [2954] = 1,
    ACTIONS(520), 1,
      sym__san_promotable_piece,
  [2958] = 1,
    ACTIONS(522), 1,
      sym_tagpair_delimiter_close,
  [2962] = 1,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
  [2966] = 1,
    ACTIONS(526), 1,
      sym_rest_of_line_comment_text,
  [2970] = 1,
    ACTIONS(528), 1,
      sym_tagpair_key,
  [2974] = 1,
    ACTIONS(530), 1,
      sym_double_quote,
  [2978] = 1,
    ACTIONS(532), 1,
      sym_variation_delimiter_close,
  [2982] = 1,
    ACTIONS(534), 1,
      sym_inline_comment_delimiter_close,
  [2986] = 1,
    ACTIONS(536), 1,
      sym_variation_delimiter_close,
  [2990] = 1,
    ACTIONS(538), 1,
      sym_inline_comment_delimiter_close,
  [2994] = 1,
    ACTIONS(540), 1,
      anon_sym_22,
  [2998] = 1,
    ACTIONS(542), 1,
      anon_sym_1,
  [3002] = 1,
    ACTIONS(544), 1,
      sym__san_rank,
  [3006] = 1,
    ACTIONS(546), 1,
      sym_tagpair_delimiter_close,
  [3010] = 1,
    ACTIONS(548), 1,
      anon_sym_22,
  [3014] = 1,
    ACTIONS(500), 1,
      anon_sym_1,
  [3018] = 1,
    ACTIONS(550), 1,
      sym__san_rank,
  [3022] = 1,
    ACTIONS(552), 1,
      sym__san_promotable_piece,
  [3026] = 1,
    ACTIONS(554), 1,
      sym_rest_of_line_comment_text,
  [3030] = 1,
    ACTIONS(556), 1,
      sym_tagpair_delimiter_close,
  [3034] = 1,
    ACTIONS(558), 1,
      sym_rest_of_line_comment_text,
  [3038] = 1,
    ACTIONS(502), 1,
      sym__san_rank,
  [3042] = 1,
    ACTIONS(560), 1,
      sym_rest_of_line_comment_text,
  [3046] = 1,
    ACTIONS(562), 1,
      sym_inline_comment_text,
  [3050] = 1,
    ACTIONS(564), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 327,
  [SMALL_STATE(7)] = 371,
  [SMALL_STATE(8)] = 415,
  [SMALL_STATE(9)] = 456,
  [SMALL_STATE(10)] = 493,
  [SMALL_STATE(11)] = 528,
  [SMALL_STATE(12)] = 563,
  [SMALL_STATE(13)] = 598,
  [SMALL_STATE(14)] = 633,
  [SMALL_STATE(15)] = 668,
  [SMALL_STATE(16)] = 703,
  [SMALL_STATE(17)] = 738,
  [SMALL_STATE(18)] = 773,
  [SMALL_STATE(19)] = 808,
  [SMALL_STATE(20)] = 843,
  [SMALL_STATE(21)] = 880,
  [SMALL_STATE(22)] = 917,
  [SMALL_STATE(23)] = 952,
  [SMALL_STATE(24)] = 992,
  [SMALL_STATE(25)] = 1026,
  [SMALL_STATE(26)] = 1060,
  [SMALL_STATE(27)] = 1094,
  [SMALL_STATE(28)] = 1128,
  [SMALL_STATE(29)] = 1162,
  [SMALL_STATE(30)] = 1196,
  [SMALL_STATE(31)] = 1230,
  [SMALL_STATE(32)] = 1264,
  [SMALL_STATE(33)] = 1304,
  [SMALL_STATE(34)] = 1338,
  [SMALL_STATE(35)] = 1372,
  [SMALL_STATE(36)] = 1404,
  [SMALL_STATE(37)] = 1436,
  [SMALL_STATE(38)] = 1498,
  [SMALL_STATE(39)] = 1560,
  [SMALL_STATE(40)] = 1619,
  [SMALL_STATE(41)] = 1678,
  [SMALL_STATE(42)] = 1715,
  [SMALL_STATE(43)] = 1752,
  [SMALL_STATE(44)] = 1779,
  [SMALL_STATE(45)] = 1806,
  [SMALL_STATE(46)] = 1830,
  [SMALL_STATE(47)] = 1850,
  [SMALL_STATE(48)] = 1870,
  [SMALL_STATE(49)] = 1888,
  [SMALL_STATE(50)] = 1906,
  [SMALL_STATE(51)] = 1924,
  [SMALL_STATE(52)] = 1942,
  [SMALL_STATE(53)] = 1960,
  [SMALL_STATE(54)] = 1978,
  [SMALL_STATE(55)] = 1996,
  [SMALL_STATE(56)] = 2014,
  [SMALL_STATE(57)] = 2034,
  [SMALL_STATE(58)] = 2052,
  [SMALL_STATE(59)] = 2070,
  [SMALL_STATE(60)] = 2088,
  [SMALL_STATE(61)] = 2106,
  [SMALL_STATE(62)] = 2123,
  [SMALL_STATE(63)] = 2140,
  [SMALL_STATE(64)] = 2157,
  [SMALL_STATE(65)] = 2174,
  [SMALL_STATE(66)] = 2191,
  [SMALL_STATE(67)] = 2226,
  [SMALL_STATE(68)] = 2261,
  [SMALL_STATE(69)] = 2278,
  [SMALL_STATE(70)] = 2295,
  [SMALL_STATE(71)] = 2312,
  [SMALL_STATE(72)] = 2329,
  [SMALL_STATE(73)] = 2346,
  [SMALL_STATE(74)] = 2359,
  [SMALL_STATE(75)] = 2372,
  [SMALL_STATE(76)] = 2385,
  [SMALL_STATE(77)] = 2402,
  [SMALL_STATE(78)] = 2419,
  [SMALL_STATE(79)] = 2438,
  [SMALL_STATE(80)] = 2457,
  [SMALL_STATE(81)] = 2467,
  [SMALL_STATE(82)] = 2481,
  [SMALL_STATE(83)] = 2495,
  [SMALL_STATE(84)] = 2507,
  [SMALL_STATE(85)] = 2517,
  [SMALL_STATE(86)] = 2533,
  [SMALL_STATE(87)] = 2545,
  [SMALL_STATE(88)] = 2557,
  [SMALL_STATE(89)] = 2573,
  [SMALL_STATE(90)] = 2581,
  [SMALL_STATE(91)] = 2593,
  [SMALL_STATE(92)] = 2609,
  [SMALL_STATE(93)] = 2619,
  [SMALL_STATE(94)] = 2631,
  [SMALL_STATE(95)] = 2645,
  [SMALL_STATE(96)] = 2654,
  [SMALL_STATE(97)] = 2665,
  [SMALL_STATE(98)] = 2676,
  [SMALL_STATE(99)] = 2685,
  [SMALL_STATE(100)] = 2698,
  [SMALL_STATE(101)] = 2707,
  [SMALL_STATE(102)] = 2716,
  [SMALL_STATE(103)] = 2725,
  [SMALL_STATE(104)] = 2734,
  [SMALL_STATE(105)] = 2743,
  [SMALL_STATE(106)] = 2752,
  [SMALL_STATE(107)] = 2761,
  [SMALL_STATE(108)] = 2770,
  [SMALL_STATE(109)] = 2783,
  [SMALL_STATE(110)] = 2789,
  [SMALL_STATE(111)] = 2797,
  [SMALL_STATE(112)] = 2807,
  [SMALL_STATE(113)] = 2813,
  [SMALL_STATE(114)] = 2823,
  [SMALL_STATE(115)] = 2830,
  [SMALL_STATE(116)] = 2837,
  [SMALL_STATE(117)] = 2844,
  [SMALL_STATE(118)] = 2851,
  [SMALL_STATE(119)] = 2858,
  [SMALL_STATE(120)] = 2865,
  [SMALL_STATE(121)] = 2872,
  [SMALL_STATE(122)] = 2879,
  [SMALL_STATE(123)] = 2886,
  [SMALL_STATE(124)] = 2893,
  [SMALL_STATE(125)] = 2900,
  [SMALL_STATE(126)] = 2907,
  [SMALL_STATE(127)] = 2914,
  [SMALL_STATE(128)] = 2921,
  [SMALL_STATE(129)] = 2928,
  [SMALL_STATE(130)] = 2935,
  [SMALL_STATE(131)] = 2942,
  [SMALL_STATE(132)] = 2946,
  [SMALL_STATE(133)] = 2950,
  [SMALL_STATE(134)] = 2954,
  [SMALL_STATE(135)] = 2958,
  [SMALL_STATE(136)] = 2962,
  [SMALL_STATE(137)] = 2966,
  [SMALL_STATE(138)] = 2970,
  [SMALL_STATE(139)] = 2974,
  [SMALL_STATE(140)] = 2978,
  [SMALL_STATE(141)] = 2982,
  [SMALL_STATE(142)] = 2986,
  [SMALL_STATE(143)] = 2990,
  [SMALL_STATE(144)] = 2994,
  [SMALL_STATE(145)] = 2998,
  [SMALL_STATE(146)] = 3002,
  [SMALL_STATE(147)] = 3006,
  [SMALL_STATE(148)] = 3010,
  [SMALL_STATE(149)] = 3014,
  [SMALL_STATE(150)] = 3018,
  [SMALL_STATE(151)] = 3022,
  [SMALL_STATE(152)] = 3026,
  [SMALL_STATE(153)] = 3030,
  [SMALL_STATE(154)] = 3034,
  [SMALL_STATE(155)] = 3038,
  [SMALL_STATE(156)] = 3042,
  [SMALL_STATE(157)] = 3046,
  [SMALL_STATE(158)] = 3050,
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
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, .production_id = 27), SHIFT_REPEAT(28),
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
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_destination, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_destination, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, .production_id = 17), SHIFT_REPEAT(138),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 20),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, .production_id = 20),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 8),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, .production_id = 31),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, .production_id = 31),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, .production_id = 33),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 10),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, .production_id = 12),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, .production_id = 13),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, .production_id = 29),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, .production_id = 24),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(154),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(37),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(157),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(63),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(115),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(88),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(158),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(116),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(56),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, .production_id = 32), SHIFT_REPEAT(61),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 11),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 11),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 18),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 18),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 22),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, .production_id = 24),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 21),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(156),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(82),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 16), SHIFT_REPEAT(138),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 23),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, .production_id = 25),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(152),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(76),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, .production_id = 15),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, .production_id = 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(156),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2), SHIFT_REPEAT(81),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 30),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 30),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 26),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 26),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 19),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 19),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, .production_id = 14),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, .production_id = 14),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, .production_id = 7),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2), SHIFT_REPEAT(97),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, .production_id = 30),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 5, .production_id = 30),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 18),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 18),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 19),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 19),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 11),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 11),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, .production_id = 14),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, .production_id = 14),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, .production_id = 26),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, .production_id = 26),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [524] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, .production_id = 34),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, .production_id = 28),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
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
