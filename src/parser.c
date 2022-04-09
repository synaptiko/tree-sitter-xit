#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_ = 2,
  sym_at = 3,
  aux_sym_priority_token1 = 4,
  aux_sym_priority_token2 = 5,
  aux_sym_priority_token3 = 6,
  aux_sym_priority_token4 = 7,
  sym_text_a = 8,
  sym_document = 9,
  sym_line = 10,
  sym_name = 11,
  sym_priority = 12,
  aux_sym_document_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_] = " ",
  [sym_at] = "at",
  [aux_sym_priority_token1] = "priority_token1",
  [aux_sym_priority_token2] = "priority_token2",
  [aux_sym_priority_token3] = "priority_token3",
  [aux_sym_priority_token4] = "priority_token4",
  [sym_text_a] = "text_a",
  [sym_document] = "document",
  [sym_line] = "line",
  [sym_name] = "name",
  [sym_priority] = "priority",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_] = anon_sym_,
  [sym_at] = sym_at,
  [aux_sym_priority_token1] = aux_sym_priority_token1,
  [aux_sym_priority_token2] = aux_sym_priority_token2,
  [aux_sym_priority_token3] = aux_sym_priority_token3,
  [aux_sym_priority_token4] = aux_sym_priority_token4,
  [sym_text_a] = sym_text_a,
  [sym_document] = sym_document,
  [sym_line] = sym_line,
  [sym_name] = sym_name,
  [sym_priority] = sym_priority,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_at] = {
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
  [sym_text_a] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '@') ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_at);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_priority_token2);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_priority_token3);
      if (lookahead == '!') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_priority_token4);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text_a);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [aux_sym_priority_token1] = ACTIONS(1),
    [aux_sym_priority_token2] = ACTIONS(1),
    [aux_sym_priority_token3] = ACTIONS(1),
    [aux_sym_priority_token4] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(11),
    [sym_line] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_at] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      sym_text_a,
    STATE(6), 1,
      sym_priority,
    STATE(8), 1,
      sym_name,
    ACTIONS(9), 2,
      aux_sym_priority_token1,
      aux_sym_priority_token4,
    ACTIONS(11), 2,
      aux_sym_priority_token2,
      aux_sym_priority_token3,
  [18] = 4,
    ACTIONS(7), 1,
      sym_at,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(4), 2,
      sym_line,
      aux_sym_document_repeat1,
  [32] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(24), 1,
      sym_at,
    STATE(4), 2,
      sym_line,
      aux_sym_document_repeat1,
  [46] = 1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_,
      sym_at,
  [53] = 2,
    ACTIONS(31), 1,
      anon_sym_,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_at,
  [62] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_at,
  [68] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_at,
  [74] = 1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_at,
  [80] = 1,
    ACTIONS(37), 1,
      anon_sym_,
  [84] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [88] = 1,
    ACTIONS(41), 1,
      sym_text_a,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 88,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
