#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  aux_sym_headline_token1 = 2,
  anon_sym_ = 3,
  aux_sym_indent_token1 = 4,
  sym_main_line = 5,
  sym_other_line = 6,
  sym_open_checkbox = 7,
  sym_checked_checkbox = 8,
  sym_ongoing_checkbox = 9,
  sym_obsolete_checkbox = 10,
  sym_in_question_checkbox = 11,
  aux_sym_priority_token1 = 12,
  aux_sym_priority_token2 = 13,
  aux_sym_priority_token3 = 14,
  aux_sym_priority_token4 = 15,
  sym_document = 16,
  sym_headline = 17,
  sym_task = 18,
  sym_indent = 19,
  sym_open_task = 20,
  sym_checked_task = 21,
  sym_ongoing_task = 22,
  sym_obsolete_task = 23,
  sym_in_question_task = 24,
  sym_description = 25,
  sym_priority = 26,
  aux_sym_document_repeat1 = 27,
  aux_sym_empty_line_repeat1 = 28,
  aux_sym_description_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_headline_token1] = "headline_token1",
  [anon_sym_] = " ",
  [aux_sym_indent_token1] = "indent_token1",
  [sym_main_line] = "main_line",
  [sym_other_line] = "other_line",
  [sym_open_checkbox] = "open_checkbox",
  [sym_checked_checkbox] = "checked_checkbox",
  [sym_ongoing_checkbox] = "ongoing_checkbox",
  [sym_obsolete_checkbox] = "obsolete_checkbox",
  [sym_in_question_checkbox] = "in_question_checkbox",
  [aux_sym_priority_token1] = "priority_token1",
  [aux_sym_priority_token2] = "priority_token2",
  [aux_sym_priority_token3] = "priority_token3",
  [aux_sym_priority_token4] = "priority_token4",
  [sym_document] = "document",
  [sym_headline] = "headline",
  [sym_task] = "task",
  [sym_indent] = "indent",
  [sym_open_task] = "open_task",
  [sym_checked_task] = "checked_task",
  [sym_ongoing_task] = "ongoing_task",
  [sym_obsolete_task] = "obsolete_task",
  [sym_in_question_task] = "in_question_task",
  [sym_description] = "description",
  [sym_priority] = "priority",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_empty_line_repeat1] = "empty_line_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [anon_sym_] = anon_sym_,
  [aux_sym_indent_token1] = aux_sym_indent_token1,
  [sym_main_line] = sym_main_line,
  [sym_other_line] = sym_other_line,
  [sym_open_checkbox] = sym_open_checkbox,
  [sym_checked_checkbox] = sym_checked_checkbox,
  [sym_ongoing_checkbox] = sym_ongoing_checkbox,
  [sym_obsolete_checkbox] = sym_obsolete_checkbox,
  [sym_in_question_checkbox] = sym_in_question_checkbox,
  [aux_sym_priority_token1] = aux_sym_priority_token1,
  [aux_sym_priority_token2] = aux_sym_priority_token2,
  [aux_sym_priority_token3] = aux_sym_priority_token3,
  [aux_sym_priority_token4] = aux_sym_priority_token4,
  [sym_document] = sym_document,
  [sym_headline] = sym_headline,
  [sym_task] = sym_task,
  [sym_indent] = sym_indent,
  [sym_open_task] = sym_open_task,
  [sym_checked_task] = sym_checked_task,
  [sym_ongoing_task] = sym_ongoing_task,
  [sym_obsolete_task] = sym_obsolete_task,
  [sym_in_question_task] = sym_in_question_task,
  [sym_description] = sym_description,
  [sym_priority] = sym_priority,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_empty_line_repeat1] = aux_sym_empty_line_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
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
  [aux_sym_headline_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indent_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_main_line] = {
    .visible = true,
    .named = true,
  },
  [sym_other_line] = {
    .visible = true,
    .named = true,
  },
  [sym_open_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_checked_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_ongoing_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_in_question_checkbox] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_priority_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_open_task] = {
    .visible = true,
    .named = true,
  },
  [sym_checked_task] = {
    .visible = true,
    .named = true,
  },
  [sym_ongoing_task] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_task] = {
    .visible = true,
    .named = true,
  },
  [sym_in_question_task] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_empty_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '[') ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(10);
      if (lookahead == '~') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '.') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_indent_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_main_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_other_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_open_checkbox);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_checked_checkbox);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ongoing_checkbox);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_obsolete_checkbox);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_in_question_checkbox);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_priority_token2);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_priority_token3);
      if (lookahead == '!') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_priority_token4);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '.') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
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
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_open_checkbox] = ACTIONS(1),
    [sym_checked_checkbox] = ACTIONS(1),
    [sym_ongoing_checkbox] = ACTIONS(1),
    [sym_obsolete_checkbox] = ACTIONS(1),
    [sym_in_question_checkbox] = ACTIONS(1),
    [aux_sym_priority_token1] = ACTIONS(1),
    [aux_sym_priority_token2] = ACTIONS(1),
    [aux_sym_priority_token3] = ACTIONS(1),
    [aux_sym_priority_token4] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(41),
    [sym_headline] = STATE(2),
    [sym_task] = STATE(33),
    [sym_open_task] = STATE(31),
    [sym_checked_task] = STATE(31),
    [sym_ongoing_task] = STATE(31),
    [sym_obsolete_task] = STATE(31),
    [sym_in_question_task] = STATE(31),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_empty_line_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_headline_token1] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym_open_checkbox] = ACTIONS(11),
    [sym_checked_checkbox] = ACTIONS(13),
    [sym_ongoing_checkbox] = ACTIONS(15),
    [sym_obsolete_checkbox] = ACTIONS(17),
    [sym_in_question_checkbox] = ACTIONS(19),
  },
  [2] = {
    [sym_headline] = STATE(3),
    [sym_task] = STATE(23),
    [sym_open_task] = STATE(31),
    [sym_checked_task] = STATE(31),
    [sym_ongoing_task] = STATE(31),
    [sym_obsolete_task] = STATE(31),
    [sym_in_question_task] = STATE(31),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_empty_line_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(23),
    [aux_sym_headline_token1] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym_open_checkbox] = ACTIONS(11),
    [sym_checked_checkbox] = ACTIONS(13),
    [sym_ongoing_checkbox] = ACTIONS(15),
    [sym_obsolete_checkbox] = ACTIONS(17),
    [sym_in_question_checkbox] = ACTIONS(19),
  },
  [3] = {
    [sym_headline] = STATE(3),
    [sym_task] = STATE(46),
    [sym_open_task] = STATE(31),
    [sym_checked_task] = STATE(31),
    [sym_ongoing_task] = STATE(31),
    [sym_obsolete_task] = STATE(31),
    [sym_in_question_task] = STATE(31),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_empty_line_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [aux_sym_headline_token1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(33),
    [sym_open_checkbox] = ACTIONS(36),
    [sym_checked_checkbox] = ACTIONS(39),
    [sym_ongoing_checkbox] = ACTIONS(42),
    [sym_obsolete_checkbox] = ACTIONS(45),
    [sym_in_question_checkbox] = ACTIONS(48),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
      sym_in_question_checkbox,
  [12] = 6,
    ACTIONS(53), 1,
      sym_main_line,
    STATE(30), 1,
      sym_description,
    STATE(40), 1,
      sym_priority,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(57), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
  [34] = 6,
    ACTIONS(53), 1,
      sym_main_line,
    STATE(29), 1,
      sym_description,
    STATE(40), 1,
      sym_priority,
    ACTIONS(55), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(57), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [56] = 6,
    ACTIONS(53), 1,
      sym_main_line,
    STATE(28), 1,
      sym_description,
    STATE(40), 1,
      sym_priority,
    ACTIONS(55), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(57), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [78] = 6,
    ACTIONS(53), 1,
      sym_main_line,
    STATE(27), 1,
      sym_description,
    STATE(40), 1,
      sym_priority,
    ACTIONS(55), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(57), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [100] = 6,
    ACTIONS(53), 1,
      sym_main_line,
    STATE(25), 1,
      sym_description,
    STATE(40), 1,
      sym_priority,
    ACTIONS(55), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(57), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [122] = 1,
    ACTIONS(67), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
      sym_in_question_checkbox,
  [134] = 3,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(71), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_empty_line_repeat1,
  [144] = 3,
    ACTIONS(74), 1,
      aux_sym_indent_token1,
    STATE(16), 1,
      aux_sym_description_repeat1,
    STATE(35), 1,
      sym_indent,
  [154] = 3,
    ACTIONS(74), 1,
      aux_sym_indent_token1,
    STATE(15), 1,
      aux_sym_description_repeat1,
    STATE(26), 1,
      sym_indent,
  [164] = 3,
    ACTIONS(74), 1,
      aux_sym_indent_token1,
    STATE(13), 1,
      aux_sym_description_repeat1,
    STATE(32), 1,
      sym_indent,
  [174] = 3,
    ACTIONS(76), 1,
      aux_sym_indent_token1,
    STATE(15), 1,
      aux_sym_description_repeat1,
    STATE(43), 1,
      sym_indent,
  [184] = 3,
    ACTIONS(74), 1,
      aux_sym_indent_token1,
    STATE(15), 1,
      aux_sym_description_repeat1,
    STATE(34), 1,
      sym_indent,
  [194] = 2,
    ACTIONS(81), 1,
      anon_sym_,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [202] = 2,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [210] = 2,
    ACTIONS(89), 1,
      anon_sym_,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [218] = 3,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_empty_line_repeat1,
  [228] = 2,
    ACTIONS(97), 1,
      anon_sym_,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [236] = 2,
    ACTIONS(101), 1,
      anon_sym_,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [244] = 2,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [251] = 1,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [256] = 1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [261] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_LF,
  [268] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [273] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [278] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [283] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [288] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [293] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_LF,
  [300] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_LF,
  [307] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_LF,
  [314] = 2,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      anon_sym_LF,
  [321] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      anon_sym_LF,
  [328] = 2,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      anon_sym_LF,
  [335] = 1,
    ACTIONS(147), 1,
      sym_other_line,
  [339] = 1,
    ACTIONS(149), 1,
      aux_sym_indent_token1,
  [343] = 1,
    ACTIONS(151), 1,
      anon_sym_,
  [347] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [351] = 1,
    ACTIONS(155), 1,
      anon_sym_,
  [355] = 1,
    ACTIONS(157), 1,
      anon_sym_LF,
  [359] = 1,
    ACTIONS(159), 1,
      sym_main_line,
  [363] = 1,
    ACTIONS(161), 1,
      anon_sym_LF,
  [367] = 1,
    ACTIONS(91), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 154,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 184,
  [SMALL_STATE(17)] = 194,
  [SMALL_STATE(18)] = 202,
  [SMALL_STATE(19)] = 210,
  [SMALL_STATE(20)] = 218,
  [SMALL_STATE(21)] = 228,
  [SMALL_STATE(22)] = 236,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 251,
  [SMALL_STATE(25)] = 256,
  [SMALL_STATE(26)] = 261,
  [SMALL_STATE(27)] = 268,
  [SMALL_STATE(28)] = 273,
  [SMALL_STATE(29)] = 278,
  [SMALL_STATE(30)] = 283,
  [SMALL_STATE(31)] = 288,
  [SMALL_STATE(32)] = 293,
  [SMALL_STATE(33)] = 300,
  [SMALL_STATE(34)] = 307,
  [SMALL_STATE(35)] = 314,
  [SMALL_STATE(36)] = 321,
  [SMALL_STATE(37)] = 328,
  [SMALL_STATE(38)] = 335,
  [SMALL_STATE(39)] = 339,
  [SMALL_STATE(40)] = 343,
  [SMALL_STATE(41)] = 347,
  [SMALL_STATE(42)] = 351,
  [SMALL_STATE(43)] = 355,
  [SMALL_STATE(44)] = 359,
  [SMALL_STATE(45)] = 363,
  [SMALL_STATE(46)] = 367,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(38),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 6),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 6), SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 5), SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 4), SHIFT(39),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 1), SHIFT(12),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
