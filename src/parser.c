#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
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
  aux_sym__quantity_dot = 27,
  sym__quantity_number = 28,
  sym__unit = 29,
  aux_sym__whitespace = 30,
  sym_date = 31,
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
  [aux_sym__quantity_dot] = "_quantity_dot",
  [sym__quantity_number] = "_quantity_number",
  [sym__unit] = "_unit",
  [aux_sym__whitespace] = "_whitespace",
  [sym_date] = "date",
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
  [aux_sym__quantity_dot] = aux_sym__quantity_dot,
  [sym__quantity_number] = sym__quantity_number,
  [sym__unit] = sym__unit,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [sym_date] = sym_date,
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
  [sym_date] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(31);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(34);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ';') ADVANCE(16);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(4);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_transaction_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_account);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__quantity_number_token1);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__quantity_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__quantity_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_mo);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__4d);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_transaction_token1] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
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
    STATE(23), 1,
      sym_quantity,
    STATE(24), 1,
      aux_sym__quantity_dot,
    STATE(25), 1,
      aux_sym__whitespace,
    STATE(30), 1,
      sym__quantity_number,
    STATE(45), 1,
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
    STATE(24), 1,
      aux_sym__quantity_dot,
    STATE(27), 1,
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
    STATE(22), 1,
      aux_sym__whitespace,
    STATE(24), 1,
      aux_sym__quantity_dot,
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
    STATE(24), 1,
      aux_sym__quantity_dot,
    STATE(27), 1,
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
  [180] = 6,
    ACTIONS(51), 1,
      sym_account,
    ACTIONS(57), 1,
      sym__2d,
    STATE(32), 1,
      aux_sym__whitespace,
    ACTIONS(54), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(7), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [205] = 6,
    ACTIONS(61), 1,
      sym_account,
    ACTIONS(65), 1,
      sym__2d,
    STATE(32), 1,
      aux_sym__whitespace,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(7), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [230] = 6,
    ACTIONS(61), 1,
      sym_account,
    ACTIONS(69), 1,
      sym__2d,
    STATE(32), 1,
      aux_sym__whitespace,
    ACTIONS(63), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(8), 2,
      sym_transaction,
      aux_sym_day_entry_repeat1,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [255] = 9,
    ACTIONS(9), 1,
      sym__2d,
    ACTIONS(11), 1,
      sym__4d,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
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
  [285] = 9,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      sym__2d,
    ACTIONS(86), 1,
      sym__4d,
    STATE(40), 1,
      sym__single_date,
    STATE(41), 1,
      sym_date,
    STATE(42), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(11), 2,
      sym_day_entry,
      aux_sym_source_file_repeat1,
  [315] = 2,
    ACTIONS(91), 1,
      sym__2d,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [329] = 2,
    ACTIONS(95), 1,
      sym__2d,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [343] = 2,
    ACTIONS(99), 1,
      sym__2d,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [357] = 2,
    ACTIONS(103), 1,
      sym__2d,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [371] = 2,
    ACTIONS(107), 1,
      sym__2d,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [385] = 2,
    ACTIONS(111), 1,
      sym__2d,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym__4d,
  [399] = 3,
    STATE(18), 1,
      aux_sym__quantity_dot,
    ACTIONS(115), 2,
      anon_sym_DOT,
      anon_sym_SPACE,
    ACTIONS(113), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_TAB,
  [413] = 5,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym__whitespace,
    STATE(43), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(37), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [431] = 5,
    ACTIONS(118), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(50), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(120), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [449] = 5,
    ACTIONS(122), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(124), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [467] = 5,
    ACTIONS(122), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(47), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(120), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [485] = 5,
    ACTIONS(39), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym__whitespace,
    STATE(36), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(41), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [503] = 4,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_SPACE,
    STATE(18), 1,
      aux_sym__quantity_dot,
    ACTIONS(126), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_TAB,
  [519] = 5,
    ACTIONS(39), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(36), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(120), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [537] = 3,
    STATE(26), 1,
      aux_sym__whitespace,
    ACTIONS(135), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(133), 4,
      anon_sym_LF,
      sym_account,
      anon_sym_POUND,
      anon_sym_SEMI,
  [551] = 5,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(43), 1,
      sym_comment,
    ACTIONS(7), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(120), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [569] = 2,
    ACTIONS(138), 1,
      sym__2d,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      sym__4d,
  [580] = 2,
    ACTIONS(143), 1,
      anon_sym_DOT,
    ACTIONS(140), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [591] = 1,
    ACTIONS(126), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [599] = 1,
    ACTIONS(145), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [607] = 3,
    ACTIONS(147), 1,
      sym_account,
    STATE(26), 1,
      aux_sym__whitespace,
    ACTIONS(120), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [618] = 2,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(151), 1,
      sym__dsep,
  [625] = 1,
    ACTIONS(153), 1,
      anon_sym_LF,
  [629] = 1,
    ACTIONS(155), 1,
      sym__2d,
  [633] = 1,
    ACTIONS(33), 1,
      anon_sym_LF,
  [637] = 1,
    ACTIONS(151), 1,
      sym__dsep,
  [641] = 1,
    ACTIONS(157), 1,
      anon_sym_LF,
  [645] = 1,
    ACTIONS(159), 1,
      sym__2d,
  [649] = 1,
    ACTIONS(161), 1,
      anon_sym_LF,
  [653] = 1,
    ACTIONS(163), 1,
      anon_sym_LF,
  [657] = 1,
    ACTIONS(165), 1,
      anon_sym_LF,
  [661] = 1,
    ACTIONS(122), 1,
      anon_sym_LF,
  [665] = 1,
    ACTIONS(167), 1,
      aux_sym_comment_token1,
  [669] = 1,
    ACTIONS(39), 1,
      anon_sym_LF,
  [673] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [677] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [681] = 1,
    ACTIONS(171), 1,
      sym__2d,
  [685] = 1,
    ACTIONS(173), 1,
      sym__dsep,
  [689] = 1,
    ACTIONS(175), 1,
      anon_sym_LF,
  [693] = 1,
    ACTIONS(177), 1,
      sym__dsep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 230,
  [SMALL_STATE(10)] = 255,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 329,
  [SMALL_STATE(14)] = 343,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 399,
  [SMALL_STATE(19)] = 413,
  [SMALL_STATE(20)] = 431,
  [SMALL_STATE(21)] = 449,
  [SMALL_STATE(22)] = 467,
  [SMALL_STATE(23)] = 485,
  [SMALL_STATE(24)] = 503,
  [SMALL_STATE(25)] = 519,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 551,
  [SMALL_STATE(28)] = 569,
  [SMALL_STATE(29)] = 580,
  [SMALL_STATE(30)] = 591,
  [SMALL_STATE(31)] = 599,
  [SMALL_STATE(32)] = 607,
  [SMALL_STATE(33)] = 618,
  [SMALL_STATE(34)] = 625,
  [SMALL_STATE(35)] = 629,
  [SMALL_STATE(36)] = 633,
  [SMALL_STATE(37)] = 637,
  [SMALL_STATE(38)] = 641,
  [SMALL_STATE(39)] = 645,
  [SMALL_STATE(40)] = 649,
  [SMALL_STATE(41)] = 653,
  [SMALL_STATE(42)] = 657,
  [SMALL_STATE(43)] = 661,
  [SMALL_STATE(44)] = 665,
  [SMALL_STATE(45)] = 669,
  [SMALL_STATE(46)] = 673,
  [SMALL_STATE(47)] = 677,
  [SMALL_STATE(48)] = 681,
  [SMALL_STATE(49)] = 685,
  [SMALL_STATE(50)] = 689,
  [SMALL_STATE(51)] = 693,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity_number, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_entry_repeat1, 2), SHIFT_REPEAT(32),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_day_entry_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_entry, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_day_entry, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quantity_dot, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quantity_dot, 2), SHIFT_REPEAT(18),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quantity, 1), SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(26),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quantity_dot, 1), REDUCE(aux_sym__whitespace, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quantity_dot, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity_number, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
