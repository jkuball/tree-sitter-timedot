#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_account = 2,
  anon_sym_POUND = 3,
  anon_sym_SEMI = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_STAR = 6,
  aux_sym__quantity_character_token1 = 7,
  aux_sym__quantity_number_token1 = 8,
  aux_sym__quantity_number_token2 = 9,
  anon_sym_s = 10,
  anon_sym_m = 11,
  anon_sym_h = 12,
  anon_sym_d = 13,
  anon_sym_w = 14,
  anon_sym_mo = 15,
  anon_sym_y = 16,
  anon_sym_SPACE = 17,
  anon_sym_TAB = 18,
  anon_sym_ = 19,
  anon_sym_TAB2 = 20,
  sym__dsep = 21,
  sym__2d = 22,
  sym__4d = 23,
  sym_source_file = 24,
  sym_day_entry = 25,
  sym_transaction = 26,
  sym_comment = 27,
  sym_quantity = 28,
  sym_date = 29,
  sym_org_heading = 30,
  aux_sym__quantity_character = 31,
  sym__quantity_number = 32,
  sym__unit = 33,
  aux_sym__whitespace = 34,
  sym__spacer = 35,
  sym__single_date = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_day_entry_repeat1 = 38,
  aux_sym_org_heading_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_account] = "account",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_STAR] = "*",
  [aux_sym__quantity_character_token1] = "_quantity_character_token1",
  [aux_sym__quantity_number_token1] = "_quantity_number_token1",
  [aux_sym__quantity_number_token2] = "_quantity_number_token2",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [anon_sym_w] = "w",
  [anon_sym_mo] = "mo",
  [anon_sym_y] = "y",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym__4d] = "_4d",
  [sym_source_file] = "source_file",
  [sym_day_entry] = "day_entry",
  [sym_transaction] = "transaction",
  [sym_comment] = "comment",
  [sym_quantity] = "quantity",
  [sym_date] = "date",
  [sym_org_heading] = "org_heading",
  [aux_sym__quantity_character] = "_quantity_character",
  [sym__quantity_number] = "_quantity_number",
  [sym__unit] = "_unit",
  [aux_sym__whitespace] = "_whitespace",
  [sym__spacer] = "_spacer",
  [sym__single_date] = "_single_date",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_day_entry_repeat1] = "day_entry_repeat1",
  [aux_sym_org_heading_repeat1] = "org_heading_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_account] = sym_account,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym__quantity_character_token1] = aux_sym__quantity_character_token1,
  [aux_sym__quantity_number_token1] = aux_sym__quantity_number_token1,
  [aux_sym__quantity_number_token2] = aux_sym__quantity_number_token2,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_mo] = anon_sym_mo,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym__4d] = sym__4d,
  [sym_source_file] = sym_source_file,
  [sym_day_entry] = sym_day_entry,
  [sym_transaction] = sym_transaction,
  [sym_comment] = sym_comment,
  [sym_quantity] = sym_quantity,
  [sym_date] = sym_date,
  [sym_org_heading] = sym_org_heading,
  [aux_sym__quantity_character] = aux_sym__quantity_character,
  [sym__quantity_number] = sym__quantity_number,
  [sym__unit] = sym__unit,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [sym__spacer] = sym__spacer,
  [sym__single_date] = sym__single_date,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_day_entry_repeat1] = aux_sym_day_entry_repeat1,
  [aux_sym_org_heading_repeat1] = aux_sym_org_heading_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quantity_character_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quantity_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quantity_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB2] = {
    .visible = true,
    .named = false,
  },
  [sym__dsep] = {
    .visible = false,
    .named = true,
  },
  [sym__2d] = {
    .visible = false,
    .named = true,
  },
  [sym__4d] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_day_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_org_heading] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quantity_character] = {
    .visible = false,
    .named = false,
  },
  [sym__quantity_number] = {
    .visible = false,
    .named = true,
  },
  [sym__unit] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [sym__spacer] = {
    .visible = false,
    .named = true,
  },
  [sym__single_date] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_day_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_org_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [10] = 10,
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
  [25] = 25,
  [26] = 26,
  [27] = 17,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(34);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ';') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ';') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == ' ' ||
          lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == ';') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_account);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_account);
      if (eof) ADVANCE(8);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < 11 || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__quantity_character_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__quantity_number_token1);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__quantity_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__quantity_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_mo);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__4d);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym__quantity_number_token1] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_mo] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym__4d] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_day_entry] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_date] = STATE(34),
    [sym_org_heading] = STATE(26),
    [aux_sym__whitespace] = STATE(18),
    [sym__single_date] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_org_heading_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_SPACE] = ACTIONS(11),
    [anon_sym_TAB] = ACTIONS(11),
    [sym__2d] = ACTIONS(13),
    [sym__4d] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(31), 1,
      sym__2d,
    ACTIONS(34), 1,
      sym__4d,
    STATE(18), 1,
      aux_sym__whitespace,
    STATE(22), 1,
      aux_sym_org_heading_repeat1,
    STATE(26), 1,
      sym_org_heading,
    STATE(34), 1,
      sym_date,
    STATE(38), 1,
      sym__single_date,
    ACTIONS(22), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(28), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(2), 3,
      sym_day_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [44] = 13,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(13), 1,
      sym__2d,
    ACTIONS(15), 1,
      sym__4d,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__whitespace,
    STATE(22), 1,
      aux_sym_org_heading_repeat1,
    STATE(26), 1,
      sym_org_heading,
    STATE(34), 1,
      sym_date,
    STATE(38), 1,
      sym__single_date,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(11), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(2), 3,
      sym_day_entry,
      sym_comment,
      aux_sym_source_file_repeat1,
  [88] = 7,
    ACTIONS(43), 1,
      sym_account,
    STATE(4), 1,
      aux_sym_day_entry_repeat1,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_transaction,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(48), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(46), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [116] = 7,
    ACTIONS(53), 1,
      sym_account,
    STATE(4), 1,
      aux_sym_day_entry_repeat1,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_transaction,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(57), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(55), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [144] = 7,
    ACTIONS(53), 1,
      sym_account,
    STATE(4), 1,
      aux_sym_day_entry_repeat1,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_transaction,
    ACTIONS(57), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(61), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [172] = 7,
    ACTIONS(53), 1,
      sym_account,
    STATE(9), 1,
      aux_sym_day_entry_repeat1,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_transaction,
    ACTIONS(57), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(61), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [200] = 7,
    ACTIONS(53), 1,
      sym_account,
    STATE(5), 1,
      aux_sym_day_entry_repeat1,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_transaction,
    ACTIONS(57), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(65), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [228] = 7,
    ACTIONS(53), 1,
      sym_account,
    STATE(4), 1,
      aux_sym_day_entry_repeat1,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_transaction,
    ACTIONS(57), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(65), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [256] = 7,
    ACTIONS(53), 1,
      sym_account,
    STATE(6), 1,
      aux_sym_day_entry_repeat1,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_transaction,
    ACTIONS(57), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 5,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [284] = 4,
    ACTIONS(75), 1,
      anon_sym_m,
    STATE(36), 1,
      sym__unit,
    ACTIONS(71), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(73), 6,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_mo,
      anon_sym_y,
  [304] = 2,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(46), 6,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__2d,
      sym__4d,
  [319] = 2,
    ACTIONS(79), 1,
      sym__2d,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [333] = 2,
    ACTIONS(81), 1,
      sym__2d,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [347] = 5,
    ACTIONS(83), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym__spacer,
    STATE(44), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(85), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [366] = 5,
    ACTIONS(87), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__spacer,
    STATE(40), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(89), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [385] = 4,
    ACTIONS(96), 1,
      sym__2d,
    STATE(17), 1,
      aux_sym__whitespace,
    ACTIONS(93), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(91), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [402] = 5,
    ACTIONS(98), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(100), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [420] = 6,
    ACTIONS(102), 1,
      aux_sym__quantity_character_token1,
    ACTIONS(104), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(106), 1,
      aux_sym__quantity_number_token2,
    STATE(24), 1,
      aux_sym__quantity_character,
    STATE(35), 1,
      sym_quantity,
    STATE(37), 1,
      sym__quantity_number,
  [439] = 6,
    ACTIONS(102), 1,
      aux_sym__quantity_character_token1,
    ACTIONS(104), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(106), 1,
      aux_sym__quantity_number_token2,
    STATE(24), 1,
      aux_sym__quantity_character,
    STATE(28), 1,
      sym_quantity,
    STATE(37), 1,
      sym__quantity_number,
  [458] = 3,
    ACTIONS(110), 1,
      aux_sym__quantity_character_token1,
    STATE(21), 1,
      aux_sym__quantity_character,
    ACTIONS(108), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [470] = 4,
    ACTIONS(113), 1,
      anon_sym_STAR,
    STATE(23), 1,
      aux_sym__whitespace,
    STATE(31), 1,
      aux_sym_org_heading_repeat1,
    ACTIONS(115), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [484] = 4,
    ACTIONS(117), 1,
      sym__2d,
    ACTIONS(119), 1,
      sym__4d,
    STATE(17), 1,
      aux_sym__whitespace,
    ACTIONS(100), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [498] = 3,
    ACTIONS(123), 1,
      aux_sym__quantity_character_token1,
    STATE(21), 1,
      aux_sym__quantity_character,
    ACTIONS(121), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [510] = 3,
    ACTIONS(125), 1,
      sym_account,
    STATE(27), 1,
      aux_sym__whitespace,
    ACTIONS(127), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [521] = 4,
    ACTIONS(13), 1,
      sym__2d,
    ACTIONS(15), 1,
      sym__4d,
    STATE(32), 1,
      sym_date,
    STATE(38), 1,
      sym__single_date,
  [534] = 3,
    ACTIONS(96), 1,
      sym_account,
    STATE(27), 1,
      aux_sym__whitespace,
    ACTIONS(129), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [545] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [556] = 2,
    ACTIONS(136), 1,
      sym__dsep,
    ACTIONS(134), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [565] = 3,
    ACTIONS(138), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__whitespace,
    ACTIONS(100), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [576] = 3,
    ACTIONS(140), 1,
      anon_sym_STAR,
    STATE(31), 1,
      aux_sym_org_heading_repeat1,
    ACTIONS(143), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [587] = 3,
    ACTIONS(145), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym__whitespace,
    ACTIONS(147), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [598] = 3,
    ACTIONS(145), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__whitespace,
    ACTIONS(100), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [609] = 3,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym__whitespace,
    ACTIONS(151), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [620] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [631] = 1,
    ACTIONS(155), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [637] = 1,
    ACTIONS(121), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [643] = 1,
    ACTIONS(157), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [649] = 1,
    ACTIONS(159), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [655] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [659] = 1,
    ACTIONS(161), 1,
      aux_sym_comment_token1,
  [663] = 1,
    ACTIONS(163), 1,
      sym__2d,
  [667] = 1,
    ACTIONS(165), 1,
      sym__2d,
  [671] = 1,
    ACTIONS(153), 1,
      anon_sym_LF,
  [675] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [679] = 1,
    ACTIONS(169), 1,
      sym__dsep,
  [683] = 1,
    ACTIONS(171), 1,
      anon_sym_LF,
  [687] = 1,
    ACTIONS(132), 1,
      anon_sym_LF,
  [691] = 1,
    ACTIONS(173), 1,
      sym__dsep,
  [695] = 1,
    ACTIONS(175), 1,
      sym__2d,
  [699] = 1,
    ACTIONS(177), 1,
      anon_sym_LF,
  [703] = 1,
    ACTIONS(136), 1,
      sym__dsep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 284,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 319,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 420,
  [SMALL_STATE(20)] = 439,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 484,
  [SMALL_STATE(24)] = 498,
  [SMALL_STATE(25)] = 510,
  [SMALL_STATE(26)] = 521,
  [SMALL_STATE(27)] = 534,
  [SMALL_STATE(28)] = 545,
  [SMALL_STATE(29)] = 556,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 576,
  [SMALL_STATE(32)] = 587,
  [SMALL_STATE(33)] = 598,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 620,
  [SMALL_STATE(36)] = 631,
  [SMALL_STATE(37)] = 637,
  [SMALL_STATE(38)] = 643,
  [SMALL_STATE(39)] = 649,
  [SMALL_STATE(40)] = 655,
  [SMALL_STATE(41)] = 659,
  [SMALL_STATE(42)] = 663,
  [SMALL_STATE(43)] = 667,
  [SMALL_STATE(44)] = 671,
  [SMALL_STATE(45)] = 675,
  [SMALL_STATE(46)] = 679,
  [SMALL_STATE(47)] = 683,
  [SMALL_STATE(48)] = 687,
  [SMALL_STATE(49)] = 691,
  [SMALL_STATE(50)] = 695,
  [SMALL_STATE(51)] = 699,
  [SMALL_STATE(52)] = 703,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity_number, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quantity_character, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quantity_character, 2), SHIFT_REPEAT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_org_heading, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_org_heading, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_org_heading_repeat1, 2), SHIFT_REPEAT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_org_heading_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity_number, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_timedot(void) {
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
