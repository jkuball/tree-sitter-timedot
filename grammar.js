//
// I took some inspiration from the ledger parser:
// https://github.com/cbarrete/tree-sitter-ledger
//
// (Also, the date definition is just straight up the same.)
//
module.exports = grammar({
    name: "timedot",

    extras: $ => [], // manage whitespace manually

    // NOTE: I need these conflicts because of the spacing in the dot quantity,
    //       maybe in the future I do understand on how
    //       to structure the rules so this is not needed.
    conflicts: $ => [
        [$.quantity, $.transaction],
        [$.quantity]
    ],

    rules: {
        source_file: $ => repeat(choice($.day_entry, seq($.comment, "\n"), "\n")),

        day_entry: $ => seq($.date, "\n", repeat($.transaction)),

        transaction: $ => seq(
            optional($._whitespace),
            $.account,
            optional(/\s\s+/),
            optional($.quantity),
            optional($._whitespace),
            optional($.comment),
            "\n",
        ),

        // NOTE: This does not allow account names starting with a digit,
        //       so it doesn't clash with dates. Is this correct?
        account: $ => /[^ \d;#](\S \S|\S)*/,

        comment: $ => seq(choice("#", ";"), /.*/),

        quantity: $ => choice(
            $._quantity_dot,
            $._quantity_number,
        ),

        date: $ => seq($._single_date),

        _quantity_dot: $ => repeat1(choice(".", " ")),
        _quantity_number: $ => seq(choice(/\d+/, /\d+\.\d+/), optional($._unit)),
        _unit: $ => choice("s", "m", "h", "d", "w", "mo", "y"),

        _whitespace: $ => repeat1(choice(" ", "\t")),

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
