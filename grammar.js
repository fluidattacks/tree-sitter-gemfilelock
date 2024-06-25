module.exports = grammar({
  name: "gemfile",

  rules: {
    document: ($) =>
      repeat(
        choice(
          $.section,
          $.platforms,
          $.dependencies,
          $.ruby_version,
          $.bundled_with
        )
      ),

    section: ($) => choice($.path_section, $.git_section, $.gem_section),

    path_section: ($) => seq("PATH", $.section_content),

    git_section: ($) => seq("GIT", $.section_content),

    gem_section: ($) => seq("GEM", $.section_content),

    section_content: ($) =>
      choice(repeat1($.key_value), seq(repeat($.key_value), $.specs)),

    key_value: ($) =>
      seq(field("key", $.identifier), ":", field("value", $.string)),

    specs: ($) => seq("specs:", repeat1($.gem_entry_with_dependencies)),

    platforms: ($) => seq("PLATFORMS", repeat1($.platform_name)),

    dependencies: ($) => seq("DEPENDENCIES", repeat1($.dependency)),

    // dependency_entry: ($) =>
    //   seq(
    //     field("name", $.gem_name),
    //     optional(field("version", seq("(", field("value", $.constraint), ")")))
    //   ),

    ruby_version: ($) => seq("RUBY VERSION", $.ruby_version_entry),

    bundled_with: ($) => seq("BUNDLED WITH", $.bundled_with_entry),

    ruby_version_entry: ($) => seq("ruby", $.version, optional($.ruby_patch)),

    ruby_patch: ($) => seq("p", $.number),

    bundled_with_entry: ($) => $.version,

    gem_entry_with_dependencies: ($) =>
      seq($.gem_entry, repeat($.indented_dependency)),

    gem_entry: ($) =>
      prec.right(
        1,
        seq(
          field("name", $.gem_name),
          field("version", seq("(", field("value", $.version), ")"))
        )
      ),

    indented_dependency: ($) => seq($.indent, $.dependency),

    dependency: ($) =>
      seq(
        field("name", $.gem_name),
        optional(
          field("constraint", seq("(", field("value", $.constraint), ")"))
        ),
        $._newline
      ),

    constraint: ($) =>
      repeat1(seq(choice($.tilde, $.comparison, $.exact), optional(","))),

    tilde: ($) => seq("~>", $.version),
    comparison: ($) => seq(choice(">=", "<=", ">", "<", "="), $.version),
    exact: ($) => $.version,

    version: ($) => prec.right(repeat1(seq($.number, optional(".")))),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_-]*/,
    indent: ($) => /[ \t]+/,
    gem_name: ($) => /[a-zA-Z0-9_!+-]+/,
    string: ($) => /.+/,
    number: ($) => /\d+/,
    _newline: ($) => /\r?\n/,
    platform_name: ($) => /[a-zA-Z0-9_-]+/,
  },
});
