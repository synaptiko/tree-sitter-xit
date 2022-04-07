#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_LBRACK_RBRACK = 2,
  anon_sym_LBRACK_AT_RBRACK = 3,
  anon_sym_LBRACKx_RBRACK = 4,
  anon_sym_LBRACK_TILDE_RBRACK = 5,
  anon_sym_ = 6,
  anon_sym_2 = 7,
  aux_sym_task_name_token1 = 8,
  anon_sym_LF2 = 9,
  aux_sym_task_name_token2 = 10,
  sym_document = 11,
  sym_task_definition = 12,
  sym_open_checkbox = 13,
  sym_open_task = 14,
  sym_ongoing_checkbox = 15,
  sym_ongoing_task = 16,
  sym_checked_checkbox = 17,
  sym_checked_task = 18,
  sym_obsolete_checkbox = 19,
  sym_obsolete_task = 20,
  sym_task_description = 21,
  sym_task_name = 22,
  aux_sym_document_repeat1 = 23,
  aux_sym_task_description_repeat1 = 24,
  aux_sym_task_name_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACK_RBRACK] = "[ ]",
  [anon_sym_LBRACK_AT_RBRACK] = "[@]",
  [anon_sym_LBRACKx_RBRACK] = "[x]",
  [anon_sym_LBRACK_TILDE_RBRACK] = "[~]",
  [anon_sym_] = " ",
  [anon_sym_2] = " ",
  [aux_sym_task_name_token1] = "task_name_token1",
  [anon_sym_LF2] = "\n   ",
  [aux_sym_task_name_token2] = "task_name_token2",
  [sym_document] = "document",
  [sym_task_definition] = "task_definition",
  [sym_open_checkbox] = "open_checkbox",
  [sym_open_task] = "open_task",
  [sym_ongoing_checkbox] = "ongoing_checkbox",
  [sym_ongoing_task] = "ongoing_task",
  [sym_checked_checkbox] = "checked_checkbox",
  [sym_checked_task] = "checked_task",
  [sym_obsolete_checkbox] = "obsolete_checkbox",
  [sym_obsolete_task] = "obsolete_task",
  [sym_task_description] = "task_description",
  [sym_task_name] = "task_name",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_task_description_repeat1] = "task_description_repeat1",
  [aux_sym_task_name_repeat1] = "task_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACK_AT_RBRACK] = anon_sym_LBRACK_AT_RBRACK,
  [anon_sym_LBRACKx_RBRACK] = anon_sym_LBRACKx_RBRACK,
  [anon_sym_LBRACK_TILDE_RBRACK] = anon_sym_LBRACK_TILDE_RBRACK,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_,
  [aux_sym_task_name_token1] = aux_sym_task_name_token1,
  [anon_sym_LF2] = anon_sym_LF2,
  [aux_sym_task_name_token2] = aux_sym_task_name_token2,
  [sym_document] = sym_document,
  [sym_task_definition] = sym_task_definition,
  [sym_open_checkbox] = sym_open_checkbox,
  [sym_open_task] = sym_open_task,
  [sym_ongoing_checkbox] = sym_ongoing_checkbox,
  [sym_ongoing_task] = sym_ongoing_task,
  [sym_checked_checkbox] = sym_checked_checkbox,
  [sym_checked_task] = sym_checked_task,
  [sym_obsolete_checkbox] = sym_obsolete_checkbox,
  [sym_obsolete_task] = sym_obsolete_task,
  [sym_task_description] = sym_task_description,
  [sym_task_name] = sym_task_name,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_task_description_repeat1] = aux_sym_task_description_repeat1,
  [aux_sym_task_name_repeat1] = aux_sym_task_name_repeat1,
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
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_AT_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKx_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_TILDE_RBRACK] = {
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
  [aux_sym_task_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_task_name_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_task_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_open_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_open_task] = {
    .visible = true,
    .named = true,
  },
  [sym_ongoing_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_ongoing_task] = {
    .visible = true,
    .named = true,
  },
  [sym_checked_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_checked_task] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_task] = {
    .visible = true,
    .named = true,
  },
  [sym_task_description] = {
    .visible = true,
    .named = true,
  },
  [sym_task_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_name_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(7);
      if (lookahead == '~') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '[') ADVANCE(3);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '[') ADVANCE(3);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK_AT_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK_AT_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK_TILDE_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK_TILDE_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_task_name_token1);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_task_name_token1);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_task_name_token1);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_task_name_token1);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_task_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_task_name_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_AT_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_TILDE_RBRACK] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [aux_sym_task_name_token1] = ACTIONS(1),
    [anon_sym_LF2] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(26),
    [sym_task_definition] = STATE(3),
    [sym_open_checkbox] = STATE(12),
    [sym_open_task] = STATE(22),
    [sym_ongoing_checkbox] = STATE(8),
    [sym_ongoing_task] = STATE(22),
    [sym_checked_checkbox] = STATE(13),
    [sym_checked_task] = STATE(22),
    [sym_obsolete_checkbox] = STATE(9),
    [sym_obsolete_task] = STATE(22),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(7),
    [anon_sym_LBRACK_AT_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACK_TILDE_RBRACK] = ACTIONS(13),
  },
  [2] = {
    [sym_task_definition] = STATE(2),
    [sym_open_checkbox] = STATE(12),
    [sym_open_task] = STATE(22),
    [sym_ongoing_checkbox] = STATE(8),
    [sym_ongoing_task] = STATE(22),
    [sym_checked_checkbox] = STATE(13),
    [sym_checked_task] = STATE(22),
    [sym_obsolete_checkbox] = STATE(9),
    [sym_obsolete_task] = STATE(22),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(20),
    [anon_sym_LBRACK_AT_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(26),
    [anon_sym_LBRACK_TILDE_RBRACK] = ACTIONS(29),
  },
  [3] = {
    [sym_task_definition] = STATE(2),
    [sym_open_checkbox] = STATE(12),
    [sym_open_task] = STATE(22),
    [sym_ongoing_checkbox] = STATE(8),
    [sym_ongoing_task] = STATE(22),
    [sym_checked_checkbox] = STATE(13),
    [sym_checked_task] = STATE(22),
    [sym_obsolete_checkbox] = STATE(9),
    [sym_obsolete_task] = STATE(22),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(34),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(7),
    [anon_sym_LBRACK_AT_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACK_TILDE_RBRACK] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(40), 1,
      anon_sym_2,
    ACTIONS(42), 1,
      aux_sym_task_name_token1,
    STATE(5), 1,
      aux_sym_task_description_repeat1,
    STATE(20), 1,
      sym_task_name,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(38), 4,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [23] = 3,
    ACTIONS(46), 1,
      anon_sym_2,
    STATE(10), 1,
      aux_sym_task_description_repeat1,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [38] = 4,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(52), 1,
      anon_sym_LF2,
    STATE(11), 1,
      aux_sym_task_name_repeat1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [55] = 4,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      anon_sym_LF2,
    STATE(7), 1,
      aux_sym_task_name_repeat1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [72] = 3,
    ACTIONS(63), 1,
      anon_sym_,
    STATE(21), 1,
      sym_task_description,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [87] = 3,
    ACTIONS(63), 1,
      anon_sym_,
    STATE(23), 1,
      sym_task_description,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [102] = 3,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(10), 1,
      aux_sym_task_description_repeat1,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [117] = 4,
    ACTIONS(52), 1,
      anon_sym_LF2,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_task_name_repeat1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [134] = 3,
    ACTIONS(63), 1,
      anon_sym_,
    STATE(24), 1,
      sym_task_description,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [149] = 3,
    ACTIONS(63), 1,
      anon_sym_,
    STATE(19), 1,
      sym_task_description,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [164] = 1,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
      anon_sym_,
  [174] = 1,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
      anon_sym_,
  [184] = 1,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
      anon_sym_,
  [194] = 2,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
      anon_sym_LF2,
  [206] = 1,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
      anon_sym_,
  [216] = 1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [225] = 1,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [234] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [243] = 1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [252] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [261] = 1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACK_AT_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACK_TILDE_RBRACK,
  [270] = 1,
    ACTIONS(98), 1,
      aux_sym_task_name_token2,
  [274] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 149,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 184,
  [SMALL_STATE(17)] = 194,
  [SMALL_STATE(18)] = 206,
  [SMALL_STATE(19)] = 216,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 234,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 252,
  [SMALL_STATE(24)] = 261,
  [SMALL_STATE(25)] = 270,
  [SMALL_STATE(26)] = 274,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_description, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_description, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_description, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_name, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_name, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_name_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_name_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_name_repeat1, 2), SHIFT_REPEAT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_description_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_description_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_name, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_name, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_checkbox, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_checkbox, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_checkbox, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_checkbox, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_definition, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xit(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
