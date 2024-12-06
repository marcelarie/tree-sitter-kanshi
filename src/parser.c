#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_profile = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_output = 4,
  anon_sym_disable = 5,
  sym_comment = 6,
  anon_sym_mode = 7,
  aux_sym_mode_token1 = 8,
  anon_sym_position = 9,
  aux_sym_position_token1 = 10,
  anon_sym_scale = 11,
  aux_sym_scale_token1 = 12,
  sym_identifier = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token1 = 15,
  sym_source_file = 16,
  sym_profile = 17,
  sym_output = 18,
  sym_mode = 19,
  sym_position = 20,
  sym_scale = 21,
  sym_string = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_profile_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_profile] = "profile",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_output] = "output",
  [anon_sym_disable] = "disable",
  [sym_comment] = "comment",
  [anon_sym_mode] = "mode",
  [aux_sym_mode_token1] = "mode_token1",
  [anon_sym_position] = "position",
  [aux_sym_position_token1] = "position_token1",
  [anon_sym_scale] = "scale",
  [aux_sym_scale_token1] = "scale_token1",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym_profile] = "profile",
  [sym_output] = "output",
  [sym_mode] = "mode",
  [sym_position] = "position",
  [sym_scale] = "scale",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_profile_repeat1] = "profile_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_profile] = anon_sym_profile,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_disable] = anon_sym_disable,
  [sym_comment] = sym_comment,
  [anon_sym_mode] = anon_sym_mode,
  [aux_sym_mode_token1] = aux_sym_mode_token1,
  [anon_sym_position] = anon_sym_position,
  [aux_sym_position_token1] = aux_sym_position_token1,
  [anon_sym_scale] = anon_sym_scale,
  [aux_sym_scale_token1] = aux_sym_scale_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym_profile] = sym_profile,
  [sym_output] = sym_output,
  [sym_mode] = sym_mode,
  [sym_position] = sym_position,
  [sym_scale] = sym_scale,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_profile_repeat1] = aux_sym_profile_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_profile] = {
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
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_position_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_scale] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scale_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_profile] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_position] = {
    .visible = true,
    .named = true,
  },
  [sym_scale] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_profile_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_mode = 1,
  field_name = 2,
  field_position = 3,
  field_scale = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_mode] = "mode",
  [field_name] = "name",
  [field_position] = "position",
  [field_scale] = "scale",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_mode, 2},
    {field_name, 1},
  [3] =
    {field_name, 1},
    {field_position, 2},
  [5] =
    {field_name, 1},
    {field_scale, 2},
  [7] =
    {field_mode, 2},
    {field_name, 1},
    {field_position, 3},
  [10] =
    {field_mode, 2},
    {field_name, 1},
    {field_scale, 3},
  [13] =
    {field_name, 1},
    {field_position, 2},
    {field_scale, 3},
  [16] =
    {field_mode, 2},
    {field_name, 1},
    {field_position, 3},
    {field_scale, 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '"', 60,
        '#', 48,
        'd', 15,
        'm', 23,
        'o', 33,
        'p', 26,
        's', 8,
        '{', 43,
        '}', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '@') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'z') ADVANCE(50);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'H') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'H') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_position_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_scale_token1);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_scale_token1);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(62);
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_profile] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_mode] = ACTIONS(1),
    [aux_sym_mode_token1] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [aux_sym_position_token1] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [aux_sym_scale_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_profile] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_profile] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_disable,
    ACTIONS(13), 1,
      anon_sym_mode,
    ACTIONS(15), 1,
      anon_sym_position,
    ACTIONS(17), 1,
      anon_sym_scale,
    STATE(3), 1,
      sym_mode,
    STATE(11), 1,
      sym_position,
    STATE(17), 1,
      sym_scale,
    ACTIONS(9), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [27] = 5,
    ACTIONS(15), 1,
      anon_sym_position,
    ACTIONS(17), 1,
      anon_sym_scale,
    STATE(12), 1,
      sym_position,
    STATE(20), 1,
      sym_scale,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [45] = 1,
    ACTIONS(21), 7,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_disable,
      sym_comment,
      anon_sym_mode,
      anon_sym_position,
      anon_sym_scale,
  [55] = 4,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_output,
    ACTIONS(27), 1,
      sym_comment,
    STATE(7), 2,
      sym_output,
      aux_sym_profile_repeat1,
  [69] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_profile,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_profile,
      aux_sym_source_file_repeat1,
  [83] = 4,
    ACTIONS(25), 1,
      anon_sym_output,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(9), 2,
      sym_output,
      aux_sym_profile_repeat1,
  [97] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_profile,
    STATE(8), 2,
      sym_profile,
      aux_sym_source_file_repeat1,
  [111] = 4,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      anon_sym_output,
    ACTIONS(45), 1,
      sym_comment,
    STATE(9), 2,
      sym_output,
      aux_sym_profile_repeat1,
  [125] = 1,
    ACTIONS(48), 5,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
      anon_sym_position,
      anon_sym_scale,
  [133] = 3,
    ACTIONS(17), 1,
      anon_sym_scale,
    STATE(21), 1,
      sym_scale,
    ACTIONS(50), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [145] = 3,
    ACTIONS(17), 1,
      anon_sym_scale,
    STATE(22), 1,
      sym_scale,
    ACTIONS(52), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [157] = 1,
    ACTIONS(54), 4,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
      anon_sym_scale,
  [164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_string,
  [182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [190] = 1,
    ACTIONS(62), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [196] = 1,
    ACTIONS(64), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [202] = 1,
    ACTIONS(66), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [208] = 1,
    ACTIONS(68), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [214] = 1,
    ACTIONS(70), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [220] = 1,
    ACTIONS(72), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
  [233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
  [240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [247] = 2,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_string_token1,
  [254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_position_token1,
  [261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_mode_token1,
  [268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_scale_token1,
  [275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 69,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 172,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 196,
  [SMALL_STATE(19)] = 202,
  [SMALL_STATE(20)] = 208,
  [SMALL_STATE(21)] = 214,
  [SMALL_STATE(22)] = 220,
  [SMALL_STATE(23)] = 226,
  [SMALL_STATE(24)] = 233,
  [SMALL_STATE(25)] = 240,
  [SMALL_STATE(26)] = 247,
  [SMALL_STATE(27)] = 254,
  [SMALL_STATE(28)] = 261,
  [SMALL_STATE(29)] = 268,
  [SMALL_STATE(30)] = 275,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 4, 0, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 4, 0, 6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 4, 0, 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 5, 0, 8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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

TS_PUBLIC const TSLanguage *tree_sitter_kanshi(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
