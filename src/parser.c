#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_id = 1,
  anon_sym_package = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COLON_COLON = 5,
  sym_comment = 6,
  sym_template = 7,
  sym_source_file = 8,
  sym_portable_stimulus_description = 9,
  sym_package_declaration = 10,
  sym_package_id_path = 11,
  sym_package_body_item = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym_package_declaration_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [anon_sym_package] = "package",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_COLON] = "::",
  [sym_comment] = "comment",
  [sym_template] = "template",
  [sym_source_file] = "source_file",
  [sym_portable_stimulus_description] = "portable_stimulus_description",
  [sym_package_declaration] = "package_declaration",
  [sym_package_id_path] = "package_id_path",
  [sym_package_body_item] = "package_body_item",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_package_declaration_repeat1] = "package_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_comment] = sym_comment,
  [sym_template] = sym_template,
  [sym_source_file] = sym_source_file,
  [sym_portable_stimulus_description] = sym_portable_stimulus_description,
  [sym_package_declaration] = sym_package_declaration,
  [sym_package_id_path] = sym_package_id_path,
  [sym_package_body_item] = sym_package_body_item,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_package_declaration_repeat1] = aux_sym_package_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_portable_stimulus_description] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_package_id_path] = {
    .visible = true,
    .named = true,
  },
  [sym_package_body_item] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_declaration_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(7);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1);
      if (lookahead == 'p') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'k') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_template] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_portable_stimulus_description] = STATE(2),
    [sym_package_declaration] = STATE(7),
    [sym_package_body_item] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_package_declaration,
    STATE(11), 1,
      sym_package_body_item,
    STATE(3), 2,
      sym_portable_stimulus_description,
      aux_sym_source_file_repeat1,
  [20] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_package,
    STATE(7), 1,
      sym_package_declaration,
    STATE(11), 1,
      sym_package_body_item,
    STATE(3), 2,
      sym_portable_stimulus_description,
      aux_sym_source_file_repeat1,
  [40] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_package_declaration,
    STATE(5), 2,
      sym_package_body_item,
      aux_sym_package_declaration_repeat1,
  [57] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_package_declaration,
    STATE(6), 2,
      sym_package_body_item,
      aux_sym_package_declaration_repeat1,
  [74] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_package,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_package_declaration,
    STATE(6), 2,
      sym_package_body_item,
      aux_sym_package_declaration_repeat1,
  [91] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
  [100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
  [109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
  [118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_id,
    STATE(14), 1,
      sym_package_id_path,
  [128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_package,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
  [146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_id,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 136,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 167,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_body_item, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 4, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 5, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portable_stimulus_description, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_id_path, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_id_path, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pss(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_id,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
