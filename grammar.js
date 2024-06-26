module.exports = grammar({
  name: "gemfilelock",

  externals: $ => [
    $._indent,
    $._dedent
  ],

  rules: {
    document: ($) =>
      repeat(
        choice(
          $.path_section,
          $.git_section,
          $.gem_section,
          $.platforms,
          $.dependencies,
          $.ruby_version,
          $.bundled_with,
        )
      ),

    path_section: ($) => seq("PATH", $.section_content),

    git_section: ($) => seq("GIT", $.section_content),

    gem_section: ($) => seq("GEM", $.section_content),

    section_content: ($) =>
      choice(repeat1($.key_value), seq(repeat($.key_value), $.specs)),

    key_value: ($) =>
      seq(field("key", $.identifier), ":", field("value", $.string)),

    specs: ($) => seq("specs:", repeat1($.gem_entry_with_dependencies)),

    platforms: ($) => seq("PLATFORMS", repeat1($.platform_name)),

    dependencies: ($) => seq("DEPENDENCIES", repeat($.dependency)),

    ruby_version: ($) => seq("RUBY VERSION", $.ruby_version_entry),

    bundled_with: ($) => seq("BUNDLED WITH", $.bundled_with_entry),

    ruby_version_entry: ($) => seq("ruby", $.version, optional($.ruby_patch)),

    ruby_patch: ($) => seq("p", $.number),

    bundled_with_entry: ($) => $.version,

    gem_entry_with_dependencies: ($) =>
      seq(
        $.gem_entry,
        optional(seq(
          $._indent,
          repeat1($.dependency),
          $._dedent
        ))
      ),

    gem_entry: ($) =>
      prec.right(
        1,
        seq(
          field("name", $.gem_name),
          field("version", seq("(", field("value", $.version), ")"))
        )
      ),

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
    gem_name: ($) => /[a-zA-Z0-9_!+-]+/,
    string: ($) => /.+/,
    number: ($) => /\d+/,
    _newline: ($) => /\r?\n/,
    platform_name: ($) => /[a-zA-Z0-9_-]+/,
  },
});
