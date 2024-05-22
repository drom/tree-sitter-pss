'use strict';

function optseq() {
  return optional(prec.left(seq.apply(null, arguments)));
}

function repseq() {
  return repeat(prec.left(seq.apply(null, arguments)));
}

function sep1(separator, rule) {
  return prec.left(seq(
    rule,
    repeat(prec.left(seq(separator, rule)))
  ));
}

const rules = {

  // PSS 2.1
  // Annex B

  source_file: $ => repeat($.portable_stimulus_description),

  portable_stimulus_description: $ => choice(
    $.package_body_item,
    // $.package_declaration,
    // $.component_declaration
  ),

  // B.1 Package declarations

  package_declaration: $ => seq(
    'package', $.package_id_path,
    '{', repeat($.package_body_item), '}'
  ),

  package_id_path: $ => seq(
    // $.package_identifier, optseq('::', $.package_identifier)
    $.id, optseq('::', $.id)
  ),

  package_body_item: $ => choice(
    // $.abstract_action_declaration,
    // $.struct_declaration,
    // $.enum_declaration,
    // $.covergroup_declaration,
    // $.function_decl,
    // $.import_class_decl,
    // $.procedural_function,
    // $.import_function,
    // $.target_template_function,
    // $.export_action,
    // $.typedef_declaration,
    // $.import_stmt,
    // $.extend_stmt,
    // $.const_field_declaration,
    // $.component_declaration,
    $.package_declaration,
    // $.compile_assert_stmt,
    // $.package_body_compile_if,
    // $.stmt_terminator
  ),

  id: $ => /[a-zA-Z_]\w*/,

  comment: $ => token(choice(
    seq('//', /.*/),
    seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )
  )),

};

module.exports = grammar({
  name: 'pss',
  word: $ => $.id,
  rules: rules,
  extras: $ => [
    /\s|\\\r?\n/,
    $.comment
    // $.template
  ]
});

/* eslint camelcase: 0 */
/* eslint no-undef: 0 */
/* eslint no-unused-vars: 0 */
