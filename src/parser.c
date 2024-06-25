#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
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
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_RUBYVERSION = 10,
  anon_sym_BUNDLEDWITH = 11,
  anon_sym_ruby = 12,
  anon_sym_p = 13,
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
  sym_section = 30,
  sym_path_section = 31,
  sym_git_section = 32,
  sym_gem_section = 33,
  sym_section_content = 34,
  sym_key_value = 35,
  sym_specs = 36,
  sym_platforms = 37,
  sym_dependencies = 38,
  sym_dependency_entry = 39,
  sym_ruby_version = 40,
  sym_bundled_with = 41,
  sym_ruby_version_entry = 42,
  sym_ruby_patch = 43,
  sym_bundled_with_entry = 44,
  sym_gem_entry_with_dependencies = 45,
  sym_gem_entry = 46,
  sym_indented_dependency = 47,
  sym_dependency = 48,
  sym_constraint = 49,
  sym_tilde = 50,
  sym_comparison = 51,
  sym_exact = 52,
  sym_version = 53,
  aux_sym_document_repeat1 = 54,
  aux_sym_section_content_repeat1 = 55,
  aux_sym_specs_repeat1 = 56,
  aux_sym_platforms_repeat1 = 57,
  aux_sym_dependencies_repeat1 = 58,
  aux_sym_gem_entry_with_dependencies_repeat1 = 59,
  aux_sym_version_repeat1 = 60,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RUBYVERSION] = "RUBY VERSION",
  [anon_sym_BUNDLEDWITH] = "BUNDLED WITH",
  [anon_sym_ruby] = "ruby",
  [anon_sym_p] = "p",
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
  [sym_section] = "section",
  [sym_path_section] = "path_section",
  [sym_git_section] = "git_section",
  [sym_gem_section] = "gem_section",
  [sym_section_content] = "section_content",
  [sym_key_value] = "key_value",
  [sym_specs] = "specs",
  [sym_platforms] = "platforms",
  [sym_dependencies] = "dependencies",
  [sym_dependency_entry] = "dependency_entry",
  [sym_ruby_version] = "ruby_version",
  [sym_bundled_with] = "bundled_with",
  [sym_ruby_version_entry] = "ruby_version_entry",
  [sym_ruby_patch] = "ruby_patch",
  [sym_bundled_with_entry] = "bundled_with_entry",
  [sym_gem_entry_with_dependencies] = "gem_entry_with_dependencies",
  [sym_gem_entry] = "gem_entry",
  [sym_indented_dependency] = "indented_dependency",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RUBYVERSION] = anon_sym_RUBYVERSION,
  [anon_sym_BUNDLEDWITH] = anon_sym_BUNDLEDWITH,
  [anon_sym_ruby] = anon_sym_ruby,
  [anon_sym_p] = anon_sym_p,
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
  [sym_section] = sym_section,
  [sym_path_section] = sym_path_section,
  [sym_git_section] = sym_git_section,
  [sym_gem_section] = sym_gem_section,
  [sym_section_content] = sym_section_content,
  [sym_key_value] = sym_key_value,
  [sym_specs] = sym_specs,
  [sym_platforms] = sym_platforms,
  [sym_dependencies] = sym_dependencies,
  [sym_dependency_entry] = sym_dependency_entry,
  [sym_ruby_version] = sym_ruby_version,
  [sym_bundled_with] = sym_bundled_with,
  [sym_ruby_version_entry] = sym_ruby_version_entry,
  [sym_ruby_patch] = sym_ruby_patch,
  [sym_bundled_with_entry] = sym_bundled_with_entry,
  [sym_gem_entry_with_dependencies] = sym_gem_entry_with_dependencies,
  [sym_gem_entry] = sym_gem_entry,
  [sym_indented_dependency] = sym_indented_dependency,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_section] = {
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
  [sym_dependency_entry] = {
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
  [sym_indented_dependency] = {
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
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
      if (lookahead == 'p') ADVANCE(93);
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
      if (lookahead == '(') ADVANCE(88);
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
      if (lookahead == 'H') ADVANCE(91);
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
      if (lookahead == 'N') ADVANCE(90);
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
      if (lookahead == 'y') ADVANCE(92);
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
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 62:
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
          lookahead == ' ') SKIP(62)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(63)
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RUBYVERSION);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BUNDLEDWITH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ruby);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_p);
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
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 63},
  [12] = {.lex_state = 62},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 63},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 63},
  [29] = {.lex_state = 61},
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
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 56},
  [43] = {.lex_state = 56},
  [44] = {.lex_state = 59},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 59},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 60},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 2},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RUBYVERSION] = ACTIONS(1),
    [anon_sym_BUNDLEDWITH] = ACTIONS(1),
    [anon_sym_ruby] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
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
    [sym_document] = STATE(61),
    [sym_section] = STATE(3),
    [sym_path_section] = STATE(31),
    [sym_git_section] = STATE(31),
    [sym_gem_section] = STATE(31),
    [sym_platforms] = STATE(3),
    [sym_dependencies] = STATE(3),
    [sym_ruby_version] = STATE(3),
    [sym_bundled_with] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
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
  [0] = 10,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_PATH,
    ACTIONS(24), 1,
      anon_sym_GIT,
    ACTIONS(27), 1,
      anon_sym_GEM,
    ACTIONS(30), 1,
      anon_sym_PLATFORMS,
    ACTIONS(33), 1,
      anon_sym_DEPENDENCIES,
    ACTIONS(36), 1,
      anon_sym_RUBYVERSION,
    ACTIONS(39), 1,
      anon_sym_BUNDLEDWITH,
    STATE(31), 3,
      sym_path_section,
      sym_git_section,
      sym_gem_section,
    STATE(2), 6,
      sym_section,
      sym_platforms,
      sym_dependencies,
      sym_ruby_version,
      sym_bundled_with,
      aux_sym_document_repeat1,
  [38] = 10,
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
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(31), 3,
      sym_path_section,
      sym_git_section,
      sym_gem_section,
    STATE(2), 6,
      sym_section,
      sym_platforms,
      sym_dependencies,
      sym_ruby_version,
      sym_bundled_with,
      aux_sym_document_repeat1,
  [76] = 8,
    ACTIONS(44), 1,
      anon_sym_TILDE_GT,
    ACTIONS(50), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_version_repeat1,
    STATE(52), 1,
      sym_version,
    STATE(66), 1,
      sym_constraint,
    ACTIONS(48), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(46), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    STATE(51), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
  [106] = 3,
    ACTIONS(50), 1,
      sym_number,
    STATE(9), 1,
      aux_sym_version_repeat1,
    ACTIONS(52), 11,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RPAREN,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_COMMA,
  [126] = 8,
    ACTIONS(44), 1,
      anon_sym_TILDE_GT,
    ACTIONS(50), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_version_repeat1,
    STATE(52), 1,
      sym_version,
    STATE(65), 1,
      sym_constraint,
    ACTIONS(48), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(46), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    STATE(51), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
  [156] = 2,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(54), 12,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RPAREN,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_COMMA,
      sym_number,
  [174] = 8,
    ACTIONS(44), 1,
      anon_sym_TILDE_GT,
    ACTIONS(50), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_version_repeat1,
    STATE(52), 1,
      sym_version,
    STATE(63), 1,
      sym_constraint,
    ACTIONS(48), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(46), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    STATE(51), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
  [204] = 3,
    ACTIONS(60), 1,
      sym_number,
    STATE(9), 1,
      aux_sym_version_repeat1,
    ACTIONS(58), 11,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RPAREN,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_COMMA,
  [224] = 6,
    ACTIONS(67), 1,
      anon_sym_specs_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(32), 1,
      sym_specs,
    STATE(12), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(65), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [250] = 4,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_indent,
    STATE(16), 2,
      sym_indented_dependency,
      aux_sym_gem_entry_with_dependencies_repeat1,
    ACTIONS(73), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [271] = 4,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(12), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_specs_COLON,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(79), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [292] = 5,
    ACTIONS(88), 1,
      sym_gem_name,
    STATE(11), 1,
      sym_gem_entry,
    STATE(15), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(86), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [315] = 4,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym_indent,
    STATE(14), 2,
      sym_indented_dependency,
      aux_sym_gem_entry_with_dependencies_repeat1,
    ACTIONS(92), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [336] = 5,
    ACTIONS(101), 1,
      sym_gem_name,
    STATE(11), 1,
      sym_gem_entry,
    STATE(15), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(99), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [359] = 4,
    ACTIONS(75), 1,
      sym_indent,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_indented_dependency,
      aux_sym_gem_entry_with_dependencies_repeat1,
    ACTIONS(106), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [380] = 1,
    ACTIONS(58), 12,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RPAREN,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_COMMA,
      sym_number,
  [395] = 4,
    ACTIONS(112), 1,
      sym_gem_name,
    STATE(19), 2,
      sym_dependency_entry,
      aux_sym_dependencies_repeat1,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(110), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [415] = 4,
    ACTIONS(118), 1,
      sym_gem_name,
    STATE(19), 2,
      sym_dependency_entry,
      aux_sym_dependencies_repeat1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(116), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [435] = 4,
    ACTIONS(125), 1,
      sym_platform_name,
    STATE(25), 1,
      aux_sym_platforms_repeat1,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(123), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [454] = 3,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(129), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [471] = 3,
    ACTIONS(135), 1,
      anon_sym_p,
    STATE(40), 1,
      sym_ruby_patch,
    ACTIONS(133), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [488] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(139), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [503] = 2,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      anon_sym_specs_COLON,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(143), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_identifier,
  [518] = 4,
    ACTIONS(149), 1,
      sym_platform_name,
    STATE(25), 1,
      aux_sym_platforms_repeat1,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(147), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [537] = 2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(154), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [552] = 2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(158), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [567] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(162), 8,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      sym_gem_name,
  [582] = 2,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(166), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [596] = 1,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [607] = 1,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [618] = 1,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [629] = 1,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [640] = 1,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [651] = 1,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [662] = 1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [673] = 1,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [684] = 1,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [695] = 1,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [706] = 1,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [717] = 5,
    ACTIONS(67), 1,
      anon_sym_specs_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(30), 1,
      sym_section_content,
    STATE(36), 1,
      sym_specs,
    STATE(10), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [734] = 5,
    ACTIONS(67), 1,
      anon_sym_specs_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(35), 1,
      sym_section_content,
    STATE(36), 1,
      sym_specs,
    STATE(10), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [751] = 5,
    ACTIONS(67), 1,
      anon_sym_specs_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(36), 1,
      sym_specs,
    STATE(37), 1,
      sym_section_content,
    STATE(10), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [768] = 3,
    ACTIONS(188), 1,
      sym_gem_name,
    STATE(11), 1,
      sym_gem_entry,
    STATE(13), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
  [779] = 4,
    ACTIONS(50), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_version_repeat1,
    STATE(33), 1,
      sym_bundled_with_entry,
    STATE(39), 1,
      sym_version,
  [792] = 3,
    ACTIONS(50), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_version_repeat1,
    STATE(22), 1,
      sym_version,
  [802] = 3,
    ACTIONS(50), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_version_repeat1,
    STATE(59), 1,
      sym_version,
  [812] = 2,
    ACTIONS(190), 1,
      sym_gem_name,
    STATE(18), 2,
      sym_dependency_entry,
      aux_sym_dependencies_repeat1,
  [820] = 3,
    ACTIONS(50), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_version_repeat1,
    STATE(54), 1,
      sym_version,
  [830] = 3,
    ACTIONS(50), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_version_repeat1,
    STATE(55), 1,
      sym_version,
  [840] = 2,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      anon_sym_COMMA,
  [847] = 1,
    ACTIONS(196), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [852] = 2,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      sym__newline,
  [859] = 1,
    ACTIONS(202), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [864] = 1,
    ACTIONS(204), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [869] = 2,
    ACTIONS(206), 1,
      anon_sym_ruby,
    STATE(34), 1,
      sym_ruby_version_entry,
  [876] = 2,
    ACTIONS(208), 1,
      sym_platform_name,
    STATE(20), 1,
      aux_sym_platforms_repeat1,
  [883] = 2,
    ACTIONS(210), 1,
      sym_gem_name,
    STATE(26), 1,
      sym_dependency,
  [890] = 1,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [894] = 1,
    ACTIONS(214), 1,
      sym_number,
  [898] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [902] = 1,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
  [906] = 1,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [910] = 1,
    ACTIONS(222), 1,
      anon_sym_COLON,
  [914] = 1,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [918] = 1,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
  [922] = 1,
    ACTIONS(228), 1,
      sym__newline,
  [926] = 1,
    ACTIONS(230), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 204,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 271,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 315,
  [SMALL_STATE(15)] = 336,
  [SMALL_STATE(16)] = 359,
  [SMALL_STATE(17)] = 380,
  [SMALL_STATE(18)] = 395,
  [SMALL_STATE(19)] = 415,
  [SMALL_STATE(20)] = 435,
  [SMALL_STATE(21)] = 454,
  [SMALL_STATE(22)] = 471,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 503,
  [SMALL_STATE(25)] = 518,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 552,
  [SMALL_STATE(28)] = 567,
  [SMALL_STATE(29)] = 582,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 607,
  [SMALL_STATE(32)] = 618,
  [SMALL_STATE(33)] = 629,
  [SMALL_STATE(34)] = 640,
  [SMALL_STATE(35)] = 651,
  [SMALL_STATE(36)] = 662,
  [SMALL_STATE(37)] = 673,
  [SMALL_STATE(38)] = 684,
  [SMALL_STATE(39)] = 695,
  [SMALL_STATE(40)] = 706,
  [SMALL_STATE(41)] = 717,
  [SMALL_STATE(42)] = 734,
  [SMALL_STATE(43)] = 751,
  [SMALL_STATE(44)] = 768,
  [SMALL_STATE(45)] = 779,
  [SMALL_STATE(46)] = 792,
  [SMALL_STATE(47)] = 802,
  [SMALL_STATE(48)] = 812,
  [SMALL_STATE(49)] = 820,
  [SMALL_STATE(50)] = 830,
  [SMALL_STATE(51)] = 840,
  [SMALL_STATE(52)] = 847,
  [SMALL_STATE(53)] = 852,
  [SMALL_STATE(54)] = 859,
  [SMALL_STATE(55)] = 864,
  [SMALL_STATE(56)] = 869,
  [SMALL_STATE(57)] = 876,
  [SMALL_STATE(58)] = 883,
  [SMALL_STATE(59)] = 890,
  [SMALL_STATE(60)] = 894,
  [SMALL_STATE(61)] = 898,
  [SMALL_STATE(62)] = 902,
  [SMALL_STATE(63)] = 906,
  [SMALL_STATE(64)] = 910,
  [SMALL_STATE(65)] = 914,
  [SMALL_STATE(66)] = 918,
  [SMALL_STATE(67)] = 922,
  [SMALL_STATE(68)] = 926,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_content, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_content, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry_with_dependencies, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry_with_dependencies, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_content_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_content_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_content_repeat1, 2), SHIFT_REPEAT(64),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specs, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_specs, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gem_entry_with_dependencies_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gem_entry_with_dependencies_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gem_entry_with_dependencies_repeat1, 2), SHIFT_REPEAT(58),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specs_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specs_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specs_repeat1, 2), SHIFT_REPEAT(62),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry_with_dependencies, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry_with_dependencies, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platforms, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platforms, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 1, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 1, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version_entry, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 5, .production_id = 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 5, .production_id = 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_platforms_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_platforms_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_platforms_repeat1, 2), SHIFT_REPEAT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_dependency, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_dependency, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry, 4, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry, 4, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 2, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 2, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 4, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 4, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_section, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_content, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundled_with, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_section, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_section, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_patch, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundled_with_entry, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version_entry, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tilde, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gemfile(void) {
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
