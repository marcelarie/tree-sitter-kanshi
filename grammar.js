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
        optional($.identifier),
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
          "enable",
          "disable",
        ),
      ),

    comment: ($) => token(seq("#", /[^\n]*/)),

    mode: ($) =>
      seq(
        field("keyword", "mode"),
        field("value", alias(/\d+x\d+@\d+(\.\d+)?(Hz)?/, $.string)),
      ),

    position: ($) =>
      seq(
        field("keyword", "position"),
        field("value", alias(/\d+,\d+/, $.string)),
      ),

    scale: ($) =>
      seq(
        field("keyword", "scale"),
        field("value", alias(/\d+(\.\d+)?/, $.string)),
      ),

    enable: ($) => "enable",
    disable: ($) => "disable",

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: ($) =>
      choice(
        seq('"', /[^"]*/, '"'), // Double-quoted string
        seq("'", /[^']*/, "'"), // Single-quoted string
      ),
  },
});
