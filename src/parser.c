#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  aux_sym_indent_token1 = 2,
  aux_sym_main_line_token1 = 3,
  sym_open_checkbox = 4,
  anon_sym_ = 5,
  sym_checked_checkbox = 6,
  sym_ongoing_checkbox = 7,
  sym_obsolete_checkbox = 8,
  anon_sym_BANG = 9,
  sym_document = 10,
  sym_task = 11,
  sym_indent = 12,
  sym_main_line = 13,
  sym_other_line = 14,
  sym_open_task = 15,
  sym_checked_task = 16,
  sym_ongoing_task = 17,
  sym_obsolete_task = 18,
  sym_description = 19,
  sym_priority = 20,
  aux_sym_document_repeat1 = 21,
  aux_sym_description_repeat1 = 22,
  aux_sym_priority_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_indent_token1] = "indent_token1",
  [aux_sym_main_line_token1] = "main_line_token1",
  [sym_open_checkbox] = "open_checkbox",
  [anon_sym_] = " ",
  [sym_checked_checkbox] = "checked_checkbox",
  [sym_ongoing_checkbox] = "ongoing_checkbox",
  [sym_obsolete_checkbox] = "obsolete_checkbox",
  [anon_sym_BANG] = "!",
  [sym_document] = "document",
  [sym_task] = "task",
  [sym_indent] = "indent",
  [sym_main_line] = "main_line",
  [sym_other_line] = "other_line",
  [sym_open_task] = "open_task",
  [sym_checked_task] = "checked_task",
  [sym_ongoing_task] = "ongoing_task",
  [sym_obsolete_task] = "obsolete_task",
  [sym_description] = "description",
  [sym_priority] = "priority",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_priority_repeat1] = "priority_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_indent_token1] = aux_sym_indent_token1,
  [aux_sym_main_line_token1] = aux_sym_main_line_token1,
  [sym_open_checkbox] = sym_open_checkbox,
  [anon_sym_] = anon_sym_,
  [sym_checked_checkbox] = sym_checked_checkbox,
  [sym_ongoing_checkbox] = sym_ongoing_checkbox,
  [sym_obsolete_checkbox] = sym_obsolete_checkbox,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_document] = sym_document,
  [sym_task] = sym_task,
  [sym_indent] = sym_indent,
  [sym_main_line] = sym_main_line,
  [sym_other_line] = sym_other_line,
  [sym_open_task] = sym_open_task,
  [sym_checked_task] = sym_checked_task,
  [sym_ongoing_task] = sym_ongoing_task,
  [sym_obsolete_task] = sym_obsolete_task,
  [sym_description] = sym_description,
  [sym_priority] = sym_priority,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_priority_repeat1] = aux_sym_priority_repeat1,
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
  [aux_sym_indent_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_main_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_open_checkbox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
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
  [sym_main_line] = {
    .visible = true,
    .named = true,
  },
  [sym_other_line] = {
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
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_repeat1] = {
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
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '[') ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(8);
      if (lookahead == '~') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(14);
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
      if (lookahead == ']') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_indent_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_main_line_token1);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead == '~') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_main_line_token1);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_main_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_open_checkbox);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_checked_checkbox);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_ongoing_checkbox);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_obsolete_checkbox);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
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
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_open_checkbox] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_checked_checkbox] = ACTIONS(1),
    [sym_ongoing_checkbox] = ACTIONS(1),
    [sym_obsolete_checkbox] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(37),
    [sym_task] = STATE(7),
    [sym_open_task] = STATE(12),
    [sym_checked_task] = STATE(12),
    [sym_ongoing_task] = STATE(12),
    [sym_obsolete_task] = STATE(12),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_open_checkbox] = ACTIONS(7),
    [sym_checked_checkbox] = ACTIONS(9),
    [sym_ongoing_checkbox] = ACTIONS(11),
    [sym_obsolete_checkbox] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(17), 1,
      aux_sym_main_line_token1,
    ACTIONS(21), 1,
      anon_sym_BANG,
    STATE(16), 1,
      sym_main_line,
    STATE(21), 1,
      sym_description,
    STATE(26), 1,
      aux_sym_priority_repeat1,
    STATE(38), 1,
      sym_priority,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(19), 4,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [29] = 8,
    ACTIONS(17), 1,
      aux_sym_main_line_token1,
    ACTIONS(21), 1,
      anon_sym_BANG,
    STATE(16), 1,
      sym_main_line,
    STATE(20), 1,
      sym_description,
    STATE(26), 1,
      aux_sym_priority_repeat1,
    STATE(38), 1,
      sym_priority,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(25), 4,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [58] = 8,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(32), 1,
      sym_open_checkbox,
    ACTIONS(35), 1,
      sym_checked_checkbox,
    ACTIONS(38), 1,
      sym_ongoing_checkbox,
    ACTIONS(41), 1,
      sym_obsolete_checkbox,
    STATE(4), 2,
      sym_task,
      aux_sym_document_repeat1,
    STATE(12), 4,
      sym_open_task,
      sym_checked_task,
      sym_ongoing_task,
      sym_obsolete_task,
  [87] = 8,
    ACTIONS(17), 1,
      aux_sym_main_line_token1,
    ACTIONS(21), 1,
      anon_sym_BANG,
    STATE(15), 1,
      sym_description,
    STATE(16), 1,
      sym_main_line,
    STATE(26), 1,
      aux_sym_priority_repeat1,
    STATE(38), 1,
      sym_priority,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(46), 4,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [116] = 8,
    ACTIONS(17), 1,
      aux_sym_main_line_token1,
    ACTIONS(21), 1,
      anon_sym_BANG,
    STATE(16), 1,
      sym_main_line,
    STATE(17), 1,
      sym_description,
    STATE(26), 1,
      aux_sym_priority_repeat1,
    STATE(38), 1,
      sym_priority,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(50), 4,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [145] = 8,
    ACTIONS(7), 1,
      sym_open_checkbox,
    ACTIONS(9), 1,
      sym_checked_checkbox,
    ACTIONS(11), 1,
      sym_ongoing_checkbox,
    ACTIONS(13), 1,
      sym_obsolete_checkbox,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_LF,
    STATE(4), 2,
      sym_task,
      aux_sym_document_repeat1,
    STATE(12), 4,
      sym_open_task,
      sym_checked_task,
      sym_ongoing_task,
      sym_obsolete_task,
  [174] = 2,
    ACTIONS(58), 1,
      anon_sym_,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [186] = 2,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [198] = 2,
    ACTIONS(66), 1,
      anon_sym_,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [210] = 2,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [222] = 1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [231] = 2,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [242] = 2,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [253] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [262] = 2,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [273] = 1,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [282] = 2,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [293] = 1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [302] = 1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [311] = 1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [320] = 2,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [331] = 2,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [342] = 1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [351] = 1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
  [360] = 3,
    ACTIONS(116), 1,
      anon_sym_,
    ACTIONS(118), 1,
      anon_sym_BANG,
    STATE(28), 1,
      aux_sym_priority_repeat1,
  [370] = 3,
    ACTIONS(120), 1,
      aux_sym_indent_token1,
    STATE(23), 1,
      sym_indent,
    STATE(30), 1,
      aux_sym_description_repeat1,
  [380] = 3,
    ACTIONS(122), 1,
      anon_sym_,
    ACTIONS(124), 1,
      anon_sym_BANG,
    STATE(28), 1,
      aux_sym_priority_repeat1,
  [390] = 3,
    ACTIONS(120), 1,
      aux_sym_indent_token1,
    STATE(22), 1,
      sym_indent,
    STATE(27), 1,
      aux_sym_description_repeat1,
  [400] = 3,
    ACTIONS(127), 1,
      aux_sym_indent_token1,
    STATE(30), 1,
      aux_sym_description_repeat1,
    STATE(36), 1,
      sym_indent,
  [410] = 3,
    ACTIONS(120), 1,
      aux_sym_indent_token1,
    STATE(18), 1,
      sym_indent,
    STATE(32), 1,
      aux_sym_description_repeat1,
  [420] = 3,
    ACTIONS(120), 1,
      aux_sym_indent_token1,
    STATE(13), 1,
      sym_indent,
    STATE(30), 1,
      aux_sym_description_repeat1,
  [430] = 2,
    ACTIONS(130), 1,
      aux_sym_main_line_token1,
    STATE(14), 1,
      sym_main_line,
  [437] = 2,
    ACTIONS(132), 1,
      aux_sym_main_line_token1,
    STATE(25), 1,
      sym_other_line,
  [444] = 1,
    ACTIONS(134), 1,
      aux_sym_indent_token1,
  [448] = 1,
    ACTIONS(136), 1,
      anon_sym_LF,
  [452] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [456] = 1,
    ACTIONS(140), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 231,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 282,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 302,
  [SMALL_STATE(21)] = 311,
  [SMALL_STATE(22)] = 320,
  [SMALL_STATE(23)] = 331,
  [SMALL_STATE(24)] = 342,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 360,
  [SMALL_STATE(27)] = 370,
  [SMALL_STATE(28)] = 380,
  [SMALL_STATE(29)] = 390,
  [SMALL_STATE(30)] = 400,
  [SMALL_STATE(31)] = 410,
  [SMALL_STATE(32)] = 420,
  [SMALL_STATE(33)] = 430,
  [SMALL_STATE(34)] = 437,
  [SMALL_STATE(35)] = 444,
  [SMALL_STATE(36)] = 448,
  [SMALL_STATE(37)] = 452,
  [SMALL_STATE(38)] = 456,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_obsolete_task, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ongoing_task, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checked_task, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_task, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 6),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 6), SHIFT(35),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 1), SHIFT(29),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 5), SHIFT(35),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_line, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 3),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3), SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 4), SHIFT(35),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_line, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_priority_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_priority_repeat1, 2), SHIFT_REPEAT(28),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(34),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
