#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_PATH = 1,
  anon_sym_GIT = 2,
  anon_sym_GEM = 3,
  anon_sym_COLON = 4,
  anon_sym_specs_COLON = 5,
  anon_sym_PLATFORMS = 6,
  anon_sym_DEPENDENCIES = 7,
  anon_sym_RUBYVERSION = 8,
  anon_sym_BUNDLEDWITH = 9,
  anon_sym_ruby = 10,
  anon_sym_p = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_TILDE_GT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_LT = 19,
  anon_sym_EQ = 20,
  anon_sym_DOT = 21,
  sym_identifier = 22,
  sym_indent = 23,
  sym_gem_name = 24,
  sym_string = 25,
  sym_number = 26,
  sym__newline = 27,
  sym_platform_name = 28,
  sym_document = 29,
  sym_path_section = 30,
  sym_git_section = 31,
  sym_gem_section = 32,
  sym_section_content = 33,
  sym_key_value = 34,
  sym_specs = 35,
  sym_platforms = 36,
  sym_dependencies = 37,
  sym_ruby_version = 38,
  sym_bundled_with = 39,
  sym_ruby_version_entry = 40,
  sym_ruby_patch = 41,
  sym_bundled_with_entry = 42,
  sym_gem_entry_with_dependencies = 43,
  sym_gem_entry = 44,
  sym_sub_dependency = 45,
  sym_dependency = 46,
  sym_constraint = 47,
  sym_tilde = 48,
  sym_comparison = 49,
  sym_exact = 50,
  sym_version = 51,
  aux_sym_document_repeat1 = 52,
  aux_sym_section_content_repeat1 = 53,
  aux_sym_specs_repeat1 = 54,
  aux_sym_platforms_repeat1 = 55,
  aux_sym_dependencies_repeat1 = 56,
  aux_sym_gem_entry_with_dependencies_repeat1 = 57,
  aux_sym_constraint_repeat1 = 58,
  aux_sym_version_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PATH] = "PATH",
  [anon_sym_GIT] = "GIT",
  [anon_sym_GEM] = "GEM",
  [anon_sym_COLON] = ":",
  [anon_sym_specs_COLON] = "specs:",
  [anon_sym_PLATFORMS] = "PLATFORMS",
  [anon_sym_DEPENDENCIES] = "DEPENDENCIES",
  [anon_sym_RUBYVERSION] = "RUBY VERSION",
  [anon_sym_BUNDLEDWITH] = "BUNDLED WITH",
  [anon_sym_ruby] = "ruby",
  [anon_sym_p] = "p",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_TILDE_GT] = "~>",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_indent] = "indent",
  [sym_gem_name] = "gem_name",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym__newline] = "_newline",
  [sym_platform_name] = "platform_name",
  [sym_document] = "document",
  [sym_path_section] = "path_section",
  [sym_git_section] = "git_section",
  [sym_gem_section] = "gem_section",
  [sym_section_content] = "section_content",
  [sym_key_value] = "key_value",
  [sym_specs] = "specs",
  [sym_platforms] = "platforms",
  [sym_dependencies] = "dependencies",
  [sym_ruby_version] = "ruby_version",
  [sym_bundled_with] = "bundled_with",
  [sym_ruby_version_entry] = "ruby_version_entry",
  [sym_ruby_patch] = "ruby_patch",
  [sym_bundled_with_entry] = "bundled_with_entry",
  [sym_gem_entry_with_dependencies] = "gem_entry_with_dependencies",
  [sym_gem_entry] = "gem_entry",
  [sym_sub_dependency] = "sub_dependency",
  [sym_dependency] = "dependency",
  [sym_constraint] = "constraint",
  [sym_tilde] = "tilde",
  [sym_comparison] = "comparison",
  [sym_exact] = "exact",
  [sym_version] = "version",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_section_content_repeat1] = "section_content_repeat1",
  [aux_sym_specs_repeat1] = "specs_repeat1",
  [aux_sym_platforms_repeat1] = "platforms_repeat1",
  [aux_sym_dependencies_repeat1] = "dependencies_repeat1",
  [aux_sym_gem_entry_with_dependencies_repeat1] = "gem_entry_with_dependencies_repeat1",
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [aux_sym_version_repeat1] = "version_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PATH] = anon_sym_PATH,
  [anon_sym_GIT] = anon_sym_GIT,
  [anon_sym_GEM] = anon_sym_GEM,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_specs_COLON] = anon_sym_specs_COLON,
  [anon_sym_PLATFORMS] = anon_sym_PLATFORMS,
  [anon_sym_DEPENDENCIES] = anon_sym_DEPENDENCIES,
  [anon_sym_RUBYVERSION] = anon_sym_RUBYVERSION,
  [anon_sym_BUNDLEDWITH] = anon_sym_BUNDLEDWITH,
  [anon_sym_ruby] = anon_sym_ruby,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_TILDE_GT] = anon_sym_TILDE_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_indent] = sym_indent,
  [sym_gem_name] = sym_gem_name,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym__newline] = sym__newline,
  [sym_platform_name] = sym_platform_name,
  [sym_document] = sym_document,
  [sym_path_section] = sym_path_section,
  [sym_git_section] = sym_git_section,
  [sym_gem_section] = sym_gem_section,
  [sym_section_content] = sym_section_content,
  [sym_key_value] = sym_key_value,
  [sym_specs] = sym_specs,
  [sym_platforms] = sym_platforms,
  [sym_dependencies] = sym_dependencies,
  [sym_ruby_version] = sym_ruby_version,
  [sym_bundled_with] = sym_bundled_with,
  [sym_ruby_version_entry] = sym_ruby_version_entry,
  [sym_ruby_patch] = sym_ruby_patch,
  [sym_bundled_with_entry] = sym_bundled_with_entry,
  [sym_gem_entry_with_dependencies] = sym_gem_entry_with_dependencies,
  [sym_gem_entry] = sym_gem_entry,
  [sym_sub_dependency] = sym_sub_dependency,
  [sym_dependency] = sym_dependency,
  [sym_constraint] = sym_constraint,
  [sym_tilde] = sym_tilde,
  [sym_comparison] = sym_comparison,
  [sym_exact] = sym_exact,
  [sym_version] = sym_version,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_section_content_repeat1] = aux_sym_section_content_repeat1,
  [aux_sym_specs_repeat1] = aux_sym_specs_repeat1,
  [aux_sym_platforms_repeat1] = aux_sym_platforms_repeat1,
  [aux_sym_dependencies_repeat1] = aux_sym_dependencies_repeat1,
  [aux_sym_gem_entry_with_dependencies_repeat1] = aux_sym_gem_entry_with_dependencies_repeat1,
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
  [aux_sym_version_repeat1] = aux_sym_version_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PATH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_specs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLATFORMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEPENDENCIES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RUBYVERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BUNDLEDWITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_gem_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_platform_name] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_path_section] = {
    .visible = true,
    .named = true,
  },
  [sym_git_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gem_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_content] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_specs] = {
    .visible = true,
    .named = true,
  },
  [sym_platforms] = {
    .visible = true,
    .named = true,
  },
  [sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_version] = {
    .visible = true,
    .named = true,
  },
  [sym_bundled_with] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_version_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_bundled_with_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_gem_entry_with_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_gem_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_tilde] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_exact] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_specs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_platforms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependencies_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gem_entry_with_dependencies_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_constraint = 1,
  field_key = 2,
  field_name = 3,
  field_value = 4,
  field_version = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_constraint] = "constraint",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_key, 0},
    {field_value, 2},
  [3] =
    {field_name, 0},
    {field_value, 2},
    {field_version, 1},
    {field_version, 3},
  [7] =
    {field_constraint, 1},
    {field_constraint, 3},
    {field_name, 0},
    {field_value, 2},
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
  [9] = 8,
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
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 22,
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
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 66,
  [70] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == 'B') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(14);
      if (lookahead == 'G') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == '~') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(89);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 48:
      if (lookahead == 'V') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'W') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'Y') ADVANCE(3);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 61:
      if (eof) ADVANCE(65);
      if (lookahead == 'B') ADVANCE(135);
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == 'G') ADVANCE(113);
      if (lookahead == 'P') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(136);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(62)
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == 'B') ADVANCE(216);
      if (lookahead == 'D') ADVANCE(193);
      if (lookahead == 'G') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PATH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PATH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PATH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PATH);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GEM);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GEM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GEM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GEM);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_specs_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLATFORMS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLATFORMS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PLATFORMS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PLATFORMS);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DEPENDENCIES);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DEPENDENCIES);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DEPENDENCIES);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DEPENDENCIES);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RUBYVERSION);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BUNDLEDWITH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ruby);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_TILDE_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'L') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_indent);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'B') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'C') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == 'I') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'F') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'H') ADVANCE(69);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'I') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'R') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'Y') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'A') ADVANCE(213);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'B') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'D') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'D') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'D') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'F') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'H') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'I') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'M') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'N') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'O') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'P') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'U') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'U') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'Y') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
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
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 63},
  [20] = {.lex_state = 63},
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 64},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 62},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 63},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 56},
  [49] = {.lex_state = 56},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 59},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 59},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 60},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PATH] = ACTIONS(1),
    [anon_sym_GIT] = ACTIONS(1),
    [anon_sym_GEM] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_specs_COLON] = ACTIONS(1),
    [anon_sym_PLATFORMS] = ACTIONS(1),
    [anon_sym_DEPENDENCIES] = ACTIONS(1),
    [anon_sym_RUBYVERSION] = ACTIONS(1),
    [anon_sym_BUNDLEDWITH] = ACTIONS(1),
    [anon_sym_ruby] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_TILDE_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(64),
    [sym_path_section] = STATE(7),
    [sym_git_section] = STATE(7),
    [sym_gem_section] = STATE(7),
    [sym_platforms] = STATE(7),
    [sym_dependencies] = STATE(7),
    [sym_ruby_version] = STATE(7),
    [sym_bundled_with] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PATH] = ACTIONS(5),
    [anon_sym_GIT] = ACTIONS(7),
    [anon_sym_GEM] = ACTIONS(9),
    [anon_sym_PLATFORMS] = ACTIONS(11),
    [anon_sym_DEPENDENCIES] = ACTIONS(13),
    [anon_sym_RUBYVERSION] = ACTIONS(15),
    [anon_sym_BUNDLEDWITH] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(23), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 15,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [28] = 3,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(27), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 16,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      sym_number,
  [54] = 4,
    ACTIONS(35), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(33), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 15,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
  [82] = 2,
    ACTIONS(33), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 16,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      sym_number,
  [105] = 9,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_PATH,
    ACTIONS(43), 1,
      anon_sym_GIT,
    ACTIONS(46), 1,
      anon_sym_GEM,
    ACTIONS(49), 1,
      anon_sym_PLATFORMS,
    ACTIONS(52), 1,
      anon_sym_DEPENDENCIES,
    ACTIONS(55), 1,
      anon_sym_RUBYVERSION,
    ACTIONS(58), 1,
      anon_sym_BUNDLEDWITH,
    STATE(6), 8,
      sym_path_section,
      sym_git_section,
      sym_gem_section,
      sym_platforms,
      sym_dependencies,
      sym_ruby_version,
      sym_bundled_with,
      aux_sym_document_repeat1,
  [140] = 9,
    ACTIONS(5), 1,
      anon_sym_PATH,
    ACTIONS(7), 1,
      anon_sym_GIT,
    ACTIONS(9), 1,
      anon_sym_GEM,
    ACTIONS(11), 1,
      anon_sym_PLATFORMS,
    ACTIONS(13), 1,
      anon_sym_DEPENDENCIES,
    ACTIONS(15), 1,
      anon_sym_RUBYVERSION,
    ACTIONS(17), 1,
      anon_sym_BUNDLEDWITH,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(6), 8,
      sym_path_section,
      sym_git_section,
      sym_gem_section,
      sym_platforms,
      sym_dependencies,
      sym_ruby_version,
      sym_bundled_with,
      aux_sym_document_repeat1,
  [175] = 9,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_TILDE_GT,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(11), 1,
      aux_sym_constraint_repeat1,
    STATE(30), 1,
      sym_version,
    STATE(69), 1,
      sym_constraint,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    STATE(32), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
  [208] = 9,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_TILDE_GT,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(11), 1,
      aux_sym_constraint_repeat1,
    STATE(30), 1,
      sym_version,
    STATE(66), 1,
      sym_constraint,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    STATE(32), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
  [241] = 9,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      anon_sym_TILDE_GT,
    ACTIONS(80), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(10), 1,
      aux_sym_constraint_repeat1,
    STATE(30), 1,
      sym_version,
    ACTIONS(77), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(74), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    STATE(32), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
  [274] = 9,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_TILDE_GT,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(10), 1,
      aux_sym_constraint_repeat1,
    STATE(30), 1,
      sym_version,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    STATE(32), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
  [307] = 6,
    ACTIONS(89), 1,
      anon_sym_specs_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(37), 1,
      sym_specs,
    STATE(17), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(87), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [333] = 5,
    ACTIONS(97), 1,
      sym_gem_name,
    STATE(18), 1,
      sym_gem_entry,
    STATE(13), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(95), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [356] = 5,
    ACTIONS(104), 1,
      sym_gem_name,
    STATE(18), 1,
      sym_gem_entry,
    STATE(13), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(102), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [379] = 4,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym_indent,
    STATE(16), 2,
      sym_sub_dependency,
      aux_sym_gem_entry_with_dependencies_repeat1,
    ACTIONS(108), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [400] = 4,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_indent,
    STATE(16), 2,
      sym_sub_dependency,
      aux_sym_gem_entry_with_dependencies_repeat1,
    ACTIONS(114), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [421] = 4,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(17), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_specs_COLON,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(121), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [442] = 4,
    ACTIONS(110), 1,
      sym_indent,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_sub_dependency,
      aux_sym_gem_entry_with_dependencies_repeat1,
    ACTIONS(128), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [463] = 4,
    ACTIONS(134), 1,
      sym_gem_name,
    STATE(20), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(132), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [483] = 4,
    ACTIONS(140), 1,
      sym_gem_name,
    STATE(20), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(138), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [503] = 4,
    ACTIONS(134), 1,
      sym_gem_name,
    STATE(19), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(145), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [523] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(149), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [538] = 2,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_specs_COLON,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(153), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_identifier,
  [553] = 4,
    ACTIONS(159), 1,
      sym_platform_name,
    STATE(27), 1,
      aux_sym_platforms_repeat1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(157), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [572] = 2,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(163), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [587] = 3,
    ACTIONS(167), 1,
      anon_sym_p,
    STATE(40), 1,
      sym_ruby_patch,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [604] = 4,
    ACTIONS(173), 1,
      sym_platform_name,
    STATE(27), 1,
      aux_sym_platforms_repeat1,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(171), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [623] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(178), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [638] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(182), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [653] = 2,
    ACTIONS(186), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(184), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      sym_number,
  [667] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(182), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [681] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(188), 6,
      anon_sym_RPAREN,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      sym_number,
  [697] = 2,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      sym_number,
  [711] = 2,
    ACTIONS(200), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      sym_number,
  [725] = 2,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(149), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [739] = 1,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [750] = 1,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [761] = 1,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [772] = 1,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [783] = 1,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [794] = 1,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [805] = 1,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [816] = 1,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [827] = 2,
    ACTIONS(216), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 6,
      anon_sym_RPAREN,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      sym_number,
  [840] = 1,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [851] = 1,
    ACTIONS(220), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [862] = 5,
    ACTIONS(89), 1,
      anon_sym_specs_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(43), 1,
      sym_specs,
    STATE(46), 1,
      sym_section_content,
    STATE(12), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [879] = 5,
    ACTIONS(89), 1,
      anon_sym_specs_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(41), 1,
      sym_section_content,
    STATE(43), 1,
      sym_specs,
    STATE(12), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [896] = 5,
    ACTIONS(89), 1,
      anon_sym_specs_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(42), 1,
      sym_section_content,
    STATE(43), 1,
      sym_specs,
    STATE(12), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [913] = 4,
    ACTIONS(23), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(36), 1,
      sym_bundled_with_entry,
    STATE(45), 1,
      sym_version,
  [926] = 3,
    ACTIONS(222), 1,
      sym_gem_name,
    STATE(18), 1,
      sym_gem_entry,
    STATE(14), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
  [937] = 3,
    ACTIONS(23), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(62), 1,
      sym_version,
  [947] = 3,
    ACTIONS(23), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(34), 1,
      sym_version,
  [957] = 3,
    ACTIONS(23), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(33), 1,
      sym_version,
  [967] = 3,
    ACTIONS(23), 1,
      sym_number,
    STATE(2), 1,
      aux_sym_version_repeat1,
    STATE(26), 1,
      sym_version,
  [977] = 2,
    ACTIONS(224), 1,
      sym_gem_name,
    STATE(25), 1,
      sym_dependency,
  [984] = 2,
    ACTIONS(226), 1,
      anon_sym_ruby,
    STATE(38), 1,
      sym_ruby_version_entry,
  [991] = 2,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      sym__newline,
  [998] = 2,
    ACTIONS(232), 1,
      sym_platform_name,
    STATE(24), 1,
      aux_sym_platforms_repeat1,
  [1005] = 2,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym__newline,
  [1012] = 1,
    ACTIONS(238), 1,
      sym_number,
  [1016] = 1,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
  [1020] = 1,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
  [1024] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [1028] = 1,
    ACTIONS(246), 1,
      anon_sym_COLON,
  [1032] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [1036] = 1,
    ACTIONS(250), 1,
      sym__newline,
  [1040] = 1,
    ACTIONS(252), 1,
      sym__newline,
  [1044] = 1,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
  [1048] = 1,
    ACTIONS(256), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 274,
  [SMALL_STATE(12)] = 307,
  [SMALL_STATE(13)] = 333,
  [SMALL_STATE(14)] = 356,
  [SMALL_STATE(15)] = 379,
  [SMALL_STATE(16)] = 400,
  [SMALL_STATE(17)] = 421,
  [SMALL_STATE(18)] = 442,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 483,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 523,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 572,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 604,
  [SMALL_STATE(28)] = 623,
  [SMALL_STATE(29)] = 638,
  [SMALL_STATE(30)] = 653,
  [SMALL_STATE(31)] = 667,
  [SMALL_STATE(32)] = 681,
  [SMALL_STATE(33)] = 697,
  [SMALL_STATE(34)] = 711,
  [SMALL_STATE(35)] = 725,
  [SMALL_STATE(36)] = 739,
  [SMALL_STATE(37)] = 750,
  [SMALL_STATE(38)] = 761,
  [SMALL_STATE(39)] = 772,
  [SMALL_STATE(40)] = 783,
  [SMALL_STATE(41)] = 794,
  [SMALL_STATE(42)] = 805,
  [SMALL_STATE(43)] = 816,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 840,
  [SMALL_STATE(46)] = 851,
  [SMALL_STATE(47)] = 862,
  [SMALL_STATE(48)] = 879,
  [SMALL_STATE(49)] = 896,
  [SMALL_STATE(50)] = 913,
  [SMALL_STATE(51)] = 926,
  [SMALL_STATE(52)] = 937,
  [SMALL_STATE(53)] = 947,
  [SMALL_STATE(54)] = 957,
  [SMALL_STATE(55)] = 967,
  [SMALL_STATE(56)] = 977,
  [SMALL_STATE(57)] = 984,
  [SMALL_STATE(58)] = 991,
  [SMALL_STATE(59)] = 998,
  [SMALL_STATE(60)] = 1005,
  [SMALL_STATE(61)] = 1012,
  [SMALL_STATE(62)] = 1016,
  [SMALL_STATE(63)] = 1020,
  [SMALL_STATE(64)] = 1024,
  [SMALL_STATE(65)] = 1028,
  [SMALL_STATE(66)] = 1032,
  [SMALL_STATE(67)] = 1036,
  [SMALL_STATE(68)] = 1040,
  [SMALL_STATE(69)] = 1044,
  [SMALL_STATE(70)] = 1048,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(53),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(53),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_content, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_content, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specs_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specs_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specs_repeat1, 2), SHIFT_REPEAT(63),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specs, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_specs, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry_with_dependencies, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry_with_dependencies, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gem_entry_with_dependencies_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gem_entry_with_dependencies_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gem_entry_with_dependencies_repeat1, 2), SHIFT_REPEAT(56),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_content_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_content_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_content_repeat1, 2), SHIFT_REPEAT(65),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry_with_dependencies, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry_with_dependencies, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(58),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 5, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 5, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platforms, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platforms, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_dependency, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_dependency, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version_entry, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_platforms_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_platforms_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_platforms_repeat1, 2), SHIFT_REPEAT(27),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry, 4, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry, 4, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 2, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 2, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tilde, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tilde, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundled_with, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_content, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_patch, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version_entry, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_section, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_section, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundled_with_entry, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_section, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gemfilelock(void) {
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
