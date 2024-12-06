/**
 * @file Parser for kanshi config files
 * @author Marcel Arie <googlillo@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "kanshi",

  extras: ($) => [/\s/, $.comment], // Allow whitespace and comments anywhere

  rules: {
    source_file: ($) => repeat($.profile),

    profile: ($) =>
      seq(
        "profile",
        $.identifier,
        "{",
        repeat(choice($.output, $.comment)),
        "}",
      ),

    output: ($) =>
      seq(
        "output",
        field("name", $.string),
        choice(
          seq(
            optional(field("mode", $.mode)),
            optional(field("position", $.position)),
            optional(field("scale", $.scale)),
          ),
          "disable",
        ),
      ),

    comment: ($) => token(seq("#", /[^\n]*/)),

    mode: ($) => seq("mode", /\d+x\d+@\d+(\.\d+)?(Hz)?/),

    position: ($) => seq("position", /\d+,\d+/),

    scale: ($) => seq("scale", /[0-9]+(\.[0-9]+)?/),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: ($) => seq('"', /[^"]*/, '"'),
  },
});
