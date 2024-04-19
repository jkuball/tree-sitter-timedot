//
// I took some inspiration from the ledger parser:
// https://github.com/cbarrete/tree-sitter-ledger
//
// Also, I took some low level constructs as a 1:1 copy because they're just correct.
//
module.exports = grammar({
  name: "timedot",

  extras: $ => [], // manage whitespace manually

  rules: {
    source_file: $ => repeat(
      // a timedot file is just a bunch of:
      choice(
        // - day entries
        $.day_entry,
        // - line comments
        seq(optional($._whitespace), $.comment),
        // - empty lines
        seq(optional($._whitespace), "\n"),
      )
    ),

    day_entry: $ => prec.right(seq(
      // a day entry consists of:
      // - header line
      seq(optional($.org_heading), $.date, optional($._whitespace), "\n"),

      // - zero or more transaction lines
      repeat(seq($.transaction, "\n")),
    )),

    transaction: $ => seq(
      optional($._whitespace),
      $.account,
      optional($._spacer),
      optional($.quantity),
      optional($.comment),
    ),

    account: $ => /(\S \S|\S)*/,

    comment: $ => seq(choice("#", ";"), /[^\n]*/),

    quantity: $ => choice(
      $._quantity_character,
      $._quantity_number,
    ),

    date: $ => seq($._single_date),

    org_heading: $ => seq(repeat1("*"), $._whitespace),

    _quantity_character: $ => repeat1(/[a-z. ]/),
    _quantity_number: $ => seq(choice(/\d+/, /\d+\.\d+/), optional($._unit)),
    _unit: $ => choice("s", "m", "h", "d", "w", "mo", "y"),

    _whitespace: $ => prec.left(repeat1(choice(" ", "\t"))),
    _spacer: $ => prec(
      9001,
      seq(
        optional($._whitespace),
        choice('  ', '\t', ' \t'),
        optional($._whitespace)
      )
    ),

    _dsep: $ => /[-\.\/]/,
    _2d: $ => /\d{1,2}/,
    _4d: $ => /\d{4}/,
    _single_date: $ => choice(
      seq($._4d, $._dsep, $._2d, $._dsep, $._2d),
      seq($._2d, $._dsep, $._2d, $._dsep, $._2d),
      seq($._2d, $._dsep, $._2d),
    ),
  },
});
