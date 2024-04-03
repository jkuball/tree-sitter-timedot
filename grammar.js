//
// I took some inspiration from the ledger parser:
// https://github.com/cbarrete/tree-sitter-ledger
//
// (Also, the date definition is just straight up the same.)
//
module.exports = grammar({
    name: "timedot",

    extras: $ => [], // manage whitespace manually

    // NOTE: These conflicts are an easy band-aid, but I presume they slow things down.
    //       Maybe in the future I do understand on how to
    //       structure the rules so this is not needed.
    conflicts: $ => [
        [$.quantity, $.transaction],
        [$.quantity],
        [$.day_entry],
    ],

    rules: {
        source_file: $ => repeat(choice($.day_entry, seq($.comment, "\n"), "\n")),

        day_entry: $ => seq(
            optional($.org_heading),
            $.date,
            "\n",
            repeat($.transaction)
        ),

        transaction: $ => seq(
            optional($._whitespace),
            optional($.org_heading),
            $.account,
            optional(/\s\s+/),
            optional($.quantity),
            optional($._whitespace),
            optional($.comment),
            "\n",
        ),

        // NOTE: This does not allow account names starting with:
        //       - a digit, to not clash with dates
        //       - pound or semicolon, to not clash with comments
        //       - stars, to not clash with org headlines
        //       - newlines, or else it would think '\n2024-01' is an account
        //       Is this correct like that? Maybe I could do some better thing with precedences?
        account: $ => /[^ \n\d;#*](\S \S|\S)*/,

        comment: $ => seq(choice("#", ";"), /.*/),

        quantity: $ => choice(
            $._quantity_dot,
            $._quantity_number,
        ),

        date: $ => seq($._single_date),

        org_heading: $ => seq(repeat1("*"), $._whitespace),

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
