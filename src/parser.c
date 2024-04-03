#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_transaction_token1 = 2,
  sym_account = 3,
  anon_sym_POUND = 4,
  anon_sym_SEMI = 5,
  aux_sym_comment_token1 = 6,
  anon_sym_DOT = 7,
  anon_sym_SPACE = 8,
  aux_sym__quantity_number_token1 = 9,
  aux_sym__quantity_number_token2 = 10,
  anon_sym_s = 11,
  anon_sym_m = 12,
  anon_sym_h = 13,
  anon_sym_d = 14,
  anon_sym_w = 15,
  anon_sym_mo = 16,
  anon_sym_y = 17,
  anon_sym_TAB = 18,
  sym__dsep = 19,
  sym__2d = 20,
  sym__4d = 21,
  sym_source_file = 22,
  sym_day_entry = 23,
  sym_transaction = 24,
  sym_comment = 25,
  sym_quantity = 26,
  sym_date = 27,
  aux_sym__quantity_dot = 28,
  sym__quantity_number = 29,
  sym__unit = 30,
  aux_sym__whitespace = 31,
  sym__single_date = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_day_entry_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_transaction_token1] = "transaction_token1",
  [sym_account] = "account",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_SPACE] = " ",
  [aux_sym__quantity_number_token1] = "_quantity_number_token1",
  [aux_sym__quantity_number_token2] = "_quantity_number_token2",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [anon_sym_w] = "w",
  [anon_sym_mo] = "mo",
  [anon_sym_y] = "y",
  [anon_sym_TAB] = "\t",
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym__4d] = "_4d",
  [sym_source_file] = "source_file",
  [sym_day_entry] = "day_entry",
  [sym_transaction] = "transaction",
  [sym_comment] = "comment",
  [sym_quantity] = "quantity",
  [sym_date] = "date",
  [aux_sym__quantity_dot] = "_quantity_dot",
  [sym__quantity_number] = "_quantity_number",
  [sym__unit] = "_unit",
  [aux_sym__whitespace] = "_whitespace",
  [sym__single_date] = "_single_date",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_day_entry_repeat1] = "day_entry_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_transaction_token1] = aux_sym_transaction_token1,
  [sym_account] = sym_account,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [aux_sym__quantity_number_token1] = aux_sym__quantity_number_token1,
  [aux_sym__quantity_number_token2] = aux_sym__quantity_number_token2,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_mo] = anon_sym_mo,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_TAB] = anon_sym_TAB,
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym__4d] = sym__4d,
  [sym_source_file] = sym_source_file,
  [sym_day_entry] = sym_day_entry,
  [sym_transaction] = sym_transaction,
  [sym_comment] = sym_comment,
  [sym_quantity] = sym_quantity,
  [sym_date] = sym_date,
  [aux_sym__quantity_dot] = aux_sym__quantity_dot,
  [sym__quantity_number] = sym__quantity_number,
  [sym__unit] = sym__unit,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [sym__single_date] = sym__single_date,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_day_entry_repeat1] = aux_sym_day_entry_repeat1,
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
  [aux_sym_transaction_token1] = {
    .visible = false,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
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
  [anon_sym_TAB] = {
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
  [aux_sym__quantity_dot] = {
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
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
      if (eof) ADVANCE(11);
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(33);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(37);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ';') ADVANCE(19);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ';') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(12);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(37);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(17);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == ';') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_transaction_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_account);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__quantity_number_token1);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__quantity_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__quantity_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_mo);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__4d);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_transaction_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [aux_sym__quantity_number_token1] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_mo] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym__4d] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym_day_entry] = STATE(10),
    [sym_comment] = STATE(42),
    [sym_date] = STATE(41),
    [sym__single_date] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [sym__2d] = ACTIONS(9),
    [sym__4d] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      aux_sym_transaction_token1,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_SPACE,
    ACTIONS(21), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(23), 1,
      aux_sym__quantity_number_token2,
    ACTIONS(25), 1,
      anon_sym_TAB,
    STATE(22), 1,
      sym_quantity,
    STATE(23), 1,
      aux_sym__quantity_dot,
    STATE(24), 1,
      aux_sym__whitespace,
    STATE(30), 1,
      sym__quantity_number,
    STATE(48), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [41] = 13,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_SPACE,
    ACTIONS(21), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(23), 1,
      aux_sym__quantity_number_token2,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      aux_sym_transaction_token1,
    ACTIONS(31), 1,
      anon_sym_TAB,
    STATE(19), 1,
      sym_quantity,
    STATE(23), 1,
      aux_sym__quantity_dot,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(30), 1,
      sym__quantity_number,
    STATE(36), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [82] = 12,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(23), 1,
      aux_sym__quantity_number_token2,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      anon_sym_SPACE,
    ACTIONS(37), 1,
      anon_sym_TAB,
    STATE(21), 1,
      sym_quantity,
    STATE(23), 1,
      aux_sym__quantity_dot,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(30), 1,
      sym__quantity_number,
    STATE(43), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [120] = 12,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      aux_sym__quantity_number_token1,
    ACTIONS(23), 1,
      aux_sym__quantity_number_token2,
    ACTIONS(35), 1,
      anon_sym_SPACE,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      anon_sym_TAB,
    STATE(19), 1,
      sym_quantity,
    STATE(23), 1,
      aux_sym__quantity_dot,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(30), 1,
      sym__quantity_number,
    STATE(36), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [158] = 4,
    ACTIONS(47), 1,
      anon_sym_m,
    STATE(31), 1,
      sym__unit,
    ACTIONS(43), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(45), 6,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_mo,
      anon_sym_y,
  [180] = 7,
    ACTIONS(53), 1,
      sym_account,
    ACTIONS(56), 1,
      anon_sym_SPACE,
    ACTIONS(59), 1,
      anon_sym_TAB,
    STATE(32), 1,
      aux_sym__whitespace,
    ACTIONS(51), 2,
      anon_sym_LF,
      sym__2d,
    STATE(7), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [207] = 7,
    ACTIONS(66), 1,
      sym_account,
    ACTIONS(68), 1,
      anon_sym_SPACE,
    ACTIONS(70), 1,
      anon_sym_TAB,
    STATE(32), 1,
      aux_sym__whitespace,
    ACTIONS(64), 2,
      anon_sym_LF,
      sym__2d,
    STATE(7), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [234] = 7,
    ACTIONS(66), 1,
      sym_account,
    ACTIONS(68), 1,
      anon_sym_SPACE,
    ACTIONS(70), 1,
      anon_sym_TAB,
    STATE(32), 1,
      aux_sym__whitespace,
    ACTIONS(74), 2,
      anon_sym_LF,
      sym__2d,
    STATE(8), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [261] = 9,
    ACTIONS(9), 1,
      sym__2d,
    ACTIONS(11), 1,
      sym__4d,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__single_date,
    STATE(41), 1,
      sym_date,
    STATE(42), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(11), 2,
      sym_day_entry,
      aux_sym_source_file_repeat1,
  [291] = 9,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      sym__2d,
    ACTIONS(91), 1,
      sym__4d,
    STATE(40), 1,
      sym__single_date,
    STATE(41), 1,
      sym_date,
    STATE(42), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(11), 2,
      sym_day_entry,
      aux_sym_source_file_repeat1,
  [321] = 2,
    ACTIONS(96), 4,
      anon_sym_LF,
      sym_account,
      anon_sym_TAB,
      sym__2d,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym__4d,
  [335] = 2,
    ACTIONS(100), 4,
      anon_sym_LF,
      sym_account,
      anon_sym_TAB,
      sym__2d,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym__4d,
  [349] = 2,
    ACTIONS(104), 4,
      anon_sym_LF,
      sym_account,
      anon_sym_TAB,
      sym__2d,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym__4d,
  [363] = 2,
    ACTIONS(108), 4,
      anon_sym_LF,
      sym_account,
      anon_sym_TAB,
      sym__2d,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym__4d,
  [377] = 2,
    ACTIONS(112), 4,
      anon_sym_LF,
      sym_account,
      anon_sym_TAB,
      sym__2d,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym__4d,
  [391] = 2,
    ACTIONS(116), 4,
      anon_sym_LF,
      sym_account,
      anon_sym_TAB,
      sym__2d,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym__4d,
  [405] = 3,
    STATE(18), 1,
      aux_sym__quantity_dot,
    ACTIONS(120), 2,
      anon_sym_DOT,
      anon_sym_SPACE,
    ACTIONS(118), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_TAB,
  [419] = 5,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(43), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(37), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [437] = 5,
    ACTIONS(123), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym__whitespace,
    STATE(50), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(125), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [455] = 5,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(129), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [473] = 5,
    ACTIONS(39), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(36), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(41), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [491] = 4,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_SPACE,
    STATE(18), 1,
      aux_sym__quantity_dot,
    ACTIONS(131), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_TAB,
  [507] = 5,
    ACTIONS(39), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym__whitespace,
    STATE(36), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(125), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [525] = 5,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(125), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [543] = 5,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym__whitespace,
    STATE(43), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(125), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [561] = 2,
    ACTIONS(138), 1,
      sym__2d,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [572] = 3,
    STATE(28), 1,
      aux_sym__whitespace,
    ACTIONS(142), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(140), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
  [585] = 2,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(145), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [596] = 1,
    ACTIONS(131), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [604] = 1,
    ACTIONS(150), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [612] = 4,
    ACTIONS(152), 1,
      sym_account,
    ACTIONS(154), 1,
      anon_sym_SPACE,
    ACTIONS(156), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym__whitespace,
  [625] = 4,
    ACTIONS(158), 1,
      sym_account,
    ACTIONS(160), 1,
      anon_sym_SPACE,
    ACTIONS(163), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym__whitespace,
  [638] = 2,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      sym__dsep,
  [645] = 1,
    ACTIONS(170), 1,
      anon_sym_LF,
  [649] = 1,
    ACTIONS(33), 1,
      anon_sym_LF,
  [653] = 1,
    ACTIONS(168), 1,
      sym__dsep,
  [657] = 1,
    ACTIONS(172), 1,
      sym__2d,
  [661] = 1,
    ACTIONS(174), 1,
      anon_sym_LF,
  [665] = 1,
    ACTIONS(176), 1,
      anon_sym_LF,
  [669] = 1,
    ACTIONS(178), 1,
      anon_sym_LF,
  [673] = 1,
    ACTIONS(180), 1,
      anon_sym_LF,
  [677] = 1,
    ACTIONS(127), 1,
      anon_sym_LF,
  [681] = 1,
    ACTIONS(182), 1,
      sym__2d,
  [685] = 1,
    ACTIONS(184), 1,
      aux_sym_comment_token1,
  [689] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [693] = 1,
    ACTIONS(123), 1,
      anon_sym_LF,
  [697] = 1,
    ACTIONS(39), 1,
      anon_sym_LF,
  [701] = 1,
    ACTIONS(188), 1,
      sym__dsep,
  [705] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [709] = 1,
    ACTIONS(192), 1,
      sym__dsep,
  [713] = 1,
    ACTIONS(194), 1,
      sym__2d,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 261,
  [SMALL_STATE(11)] = 291,
  [SMALL_STATE(12)] = 321,
  [SMALL_STATE(13)] = 335,
  [SMALL_STATE(14)] = 349,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 377,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 419,
  [SMALL_STATE(20)] = 437,
  [SMALL_STATE(21)] = 455,
  [SMALL_STATE(22)] = 473,
  [SMALL_STATE(23)] = 491,
  [SMALL_STATE(24)] = 507,
  [SMALL_STATE(25)] = 525,
  [SMALL_STATE(26)] = 543,
  [SMALL_STATE(27)] = 561,
  [SMALL_STATE(28)] = 572,
  [SMALL_STATE(29)] = 585,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 604,
  [SMALL_STATE(32)] = 612,
  [SMALL_STATE(33)] = 625,
  [SMALL_STATE(34)] = 638,
  [SMALL_STATE(35)] = 645,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 653,
  [SMALL_STATE(38)] = 657,
  [SMALL_STATE(39)] = 661,
  [SMALL_STATE(40)] = 665,
  [SMALL_STATE(41)] = 669,
  [SMALL_STATE(42)] = 673,
  [SMALL_STATE(43)] = 677,
  [SMALL_STATE(44)] = 681,
  [SMALL_STATE(45)] = 685,
  [SMALL_STATE(46)] = 689,
  [SMALL_STATE(47)] = 693,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 701,
  [SMALL_STATE(50)] = 705,
  [SMALL_STATE(51)] = 709,
  [SMALL_STATE(52)] = 713,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity_number, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(32),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(32),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quantity_dot, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quantity_dot, 2), SHIFT_REPEAT(18),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quantity, 1), SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(28),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quantity_dot, 1), REDUCE(aux_sym__whitespace, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quantity_dot, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity_number, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(33),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
