#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_id = 1,
  anon_sym_package = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COLON_COLON = 5,
  anon_sym_SEMI = 6,
  anon_sym_import = 7,
  anon_sym_as = 8,
  anon_sym_extend = 9,
  anon_sym_action = 10,
  anon_sym_component = 11,
  anon_sym_enum = 12,
  anon_sym_COMMA = 13,
  anon_sym_abstract = 14,
  anon_sym_COLON = 15,
  aux_sym_flow_ref_field_declaration_token1 = 16,
  aux_sym_resource_ref_field_declaration_token1 = 17,
  anon_sym_constraint = 18,
  aux_sym_activity_scheduling_constraint_token1 = 19,
  anon_sym_pure = 20,
  anon_sym_pool = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_bind = 24,
  anon_sym_DOT = 25,
  anon_sym_STAR = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_type = 29,
  anon_sym_EQ = 30,
  sym_chandle_type = 31,
  anon_sym_0 = 32,
  anon_sym_in = 33,
  anon_sym_int = 34,
  anon_sym_bit = 35,
  anon_sym_DOT_DOT = 36,
  anon_sym_string = 37,
  sym_bool_type = 38,
  anon_sym_float32 = 39,
  anon_sym_float64 = 40,
  anon_sym_array = 41,
  anon_sym_list = 42,
  anon_sym_map = 43,
  anon_sym_set = 44,
  anon_sym_ref = 45,
  anon_sym_typedef = 46,
  anon_sym_DASH = 47,
  anon_sym_TILDE = 48,
  anon_sym_AMP = 49,
  anon_sym_PIPE = 50,
  anon_sym_CARET = 51,
  anon_sym_SLASH = 52,
  anon_sym_PERCENT = 53,
  anon_sym_PLUS = 54,
  anon_sym_LT_LT = 55,
  anon_sym_GT_GT = 56,
  anon_sym_EQ_EQ = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_LT_EQ = 59,
  anon_sym_GT_EQ = 60,
  anon_sym_PIPE_PIPE = 61,
  anon_sym_AMP_AMP = 62,
  anon_sym_STAR_STAR = 63,
  anon_sym_PLUS_EQ = 64,
  anon_sym_DASH_EQ = 65,
  anon_sym_LT_LT_EQ = 66,
  anon_sym_GT_GT_EQ = 67,
  anon_sym_PIPE_EQ = 68,
  anon_sym_AMP_EQ = 69,
  anon_sym_QMARK = 70,
  anon_sym_LPAREN = 71,
  anon_sym_RPAREN = 72,
  anon_sym_super = 73,
  sym_integer_number = 74,
  sym_floating_point_number = 75,
  sym_bool_literal = 76,
  sym_null_ref = 77,
  sym_comment = 78,
  anon_sym_DQUOTE = 79,
  aux_sym_QUOTED_STRING_token1 = 80,
  aux_sym_QUOTED_STRING_token2 = 81,
  sym_source_file = 82,
  sym_portable_stimulus_description = 83,
  sym_package_declaration = 84,
  sym_package_id_path = 85,
  sym_package_body_item = 86,
  sym_action_declaration = 87,
  sym_abstract_action_declaration = 88,
  sym_action_super_spec = 89,
  sym_action_body_item = 90,
  sym_component_declaration = 91,
  sym_component_body_item = 92,
  sym_component_pool_declaration = 93,
  sym_object_bind_stmt = 94,
  sym_object_bind_item_or_list = 95,
  sym_object_bind_item_path = 96,
  sym_object_bind_item = 97,
  sym_template_param_decl_list = 98,
  sym_template_param_decl = 99,
  sym_type_param_decl = 100,
  sym_generic_type_param_decl = 101,
  sym_template_param_value_list = 102,
  sym_template_param_value = 103,
  sym_data_type = 104,
  sym_reference_type = 105,
  sym_expression = 106,
  sym_unary_operator = 107,
  sym_binary_operator = 108,
  sym_conditional_expression = 109,
  sym_primary = 110,
  sym_paren_expr = 111,
  sym_function_parameter_list = 112,
  sym_hierarchical_id = 113,
  sym_member_path_elem = 114,
  sym_type_identifier = 115,
  sym_type_identifier_elem = 116,
  sym_number = 117,
  sym_aggregate_literal = 118,
  sym_empty_aggregate_literal = 119,
  sym_value_list_literal = 120,
  sym_map_literal = 121,
  sym_map_literal_item = 122,
  sym_struct_literal = 123,
  sym_struct_literal_item = 124,
  sym_string_literal = 125,
  sym_QUOTED_STRING = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_package_declaration_repeat1 = 128,
  aux_sym_extend_stmt_repeat1 = 129,
  aux_sym_extend_stmt_repeat2 = 130,
  aux_sym_object_bind_item_or_list_repeat1 = 131,
  aux_sym_template_param_decl_list_repeat1 = 132,
  aux_sym_template_param_value_list_repeat1 = 133,
  aux_sym_function_parameter_list_repeat1 = 134,
  aux_sym_hierarchical_id_repeat1 = 135,
  aux_sym_member_path_elem_repeat1 = 136,
  aux_sym_type_identifier_repeat1 = 137,
  aux_sym_map_literal_repeat1 = 138,
  aux_sym_struct_literal_repeat1 = 139,
  aux_sym_QUOTED_STRING_repeat1 = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [anon_sym_package] = "package",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_SEMI] = ";",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_extend] = "extend",
  [anon_sym_action] = "action",
  [anon_sym_component] = "component",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_abstract] = "abstract",
  [anon_sym_COLON] = ":",
  [aux_sym_flow_ref_field_declaration_token1] = "flow_ref_field_declaration_token1",
  [aux_sym_resource_ref_field_declaration_token1] = "resource_ref_field_declaration_token1",
  [anon_sym_constraint] = "constraint",
  [aux_sym_activity_scheduling_constraint_token1] = "activity_scheduling_constraint_token1",
  [anon_sym_pure] = "pure",
  [anon_sym_pool] = "pool",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_bind] = "bind",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [sym_chandle_type] = "chandle_type",
  [anon_sym_0] = "0",
  [anon_sym_in] = "in",
  [anon_sym_int] = "int",
  [anon_sym_bit] = "bit",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_string] = "string",
  [sym_bool_type] = "bool_type",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_array] = "array",
  [anon_sym_list] = "list",
  [anon_sym_map] = "map",
  [anon_sym_set] = "set",
  [anon_sym_ref] = "ref",
  [anon_sym_typedef] = "typedef",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_super] = "super",
  [sym_integer_number] = "integer_number",
  [sym_floating_point_number] = "floating_point_number",
  [sym_bool_literal] = "bool_literal",
  [sym_null_ref] = "null_ref",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_QUOTED_STRING_token1] = "QUOTED_STRING_token1",
  [aux_sym_QUOTED_STRING_token2] = "QUOTED_STRING_token2",
  [sym_source_file] = "source_file",
  [sym_portable_stimulus_description] = "portable_stimulus_description",
  [sym_package_declaration] = "package_declaration",
  [sym_package_id_path] = "package_id_path",
  [sym_package_body_item] = "package_body_item",
  [sym_action_declaration] = "action_declaration",
  [sym_abstract_action_declaration] = "abstract_action_declaration",
  [sym_action_super_spec] = "action_super_spec",
  [sym_action_body_item] = "action_body_item",
  [sym_component_declaration] = "component_declaration",
  [sym_component_body_item] = "component_body_item",
  [sym_component_pool_declaration] = "component_pool_declaration",
  [sym_object_bind_stmt] = "object_bind_stmt",
  [sym_object_bind_item_or_list] = "object_bind_item_or_list",
  [sym_object_bind_item_path] = "object_bind_item_path",
  [sym_object_bind_item] = "object_bind_item",
  [sym_template_param_decl_list] = "template_param_decl_list",
  [sym_template_param_decl] = "template_param_decl",
  [sym_type_param_decl] = "type_param_decl",
  [sym_generic_type_param_decl] = "generic_type_param_decl",
  [sym_template_param_value_list] = "template_param_value_list",
  [sym_template_param_value] = "template_param_value",
  [sym_data_type] = "data_type",
  [sym_reference_type] = "reference_type",
  [sym_expression] = "expression",
  [sym_unary_operator] = "unary_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_conditional_expression] = "conditional_expression",
  [sym_primary] = "primary",
  [sym_paren_expr] = "paren_expr",
  [sym_function_parameter_list] = "function_parameter_list",
  [sym_hierarchical_id] = "hierarchical_id",
  [sym_member_path_elem] = "member_path_elem",
  [sym_type_identifier] = "type_identifier",
  [sym_type_identifier_elem] = "type_identifier_elem",
  [sym_number] = "number",
  [sym_aggregate_literal] = "aggregate_literal",
  [sym_empty_aggregate_literal] = "empty_aggregate_literal",
  [sym_value_list_literal] = "value_list_literal",
  [sym_map_literal] = "map_literal",
  [sym_map_literal_item] = "map_literal_item",
  [sym_struct_literal] = "struct_literal",
  [sym_struct_literal_item] = "struct_literal_item",
  [sym_string_literal] = "string_literal",
  [sym_QUOTED_STRING] = "QUOTED_STRING",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_package_declaration_repeat1] = "package_declaration_repeat1",
  [aux_sym_extend_stmt_repeat1] = "extend_stmt_repeat1",
  [aux_sym_extend_stmt_repeat2] = "extend_stmt_repeat2",
  [aux_sym_object_bind_item_or_list_repeat1] = "object_bind_item_or_list_repeat1",
  [aux_sym_template_param_decl_list_repeat1] = "template_param_decl_list_repeat1",
  [aux_sym_template_param_value_list_repeat1] = "template_param_value_list_repeat1",
  [aux_sym_function_parameter_list_repeat1] = "function_parameter_list_repeat1",
  [aux_sym_hierarchical_id_repeat1] = "hierarchical_id_repeat1",
  [aux_sym_member_path_elem_repeat1] = "member_path_elem_repeat1",
  [aux_sym_type_identifier_repeat1] = "type_identifier_repeat1",
  [aux_sym_map_literal_repeat1] = "map_literal_repeat1",
  [aux_sym_struct_literal_repeat1] = "struct_literal_repeat1",
  [aux_sym_QUOTED_STRING_repeat1] = "QUOTED_STRING_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_flow_ref_field_declaration_token1] = aux_sym_flow_ref_field_declaration_token1,
  [aux_sym_resource_ref_field_declaration_token1] = aux_sym_resource_ref_field_declaration_token1,
  [anon_sym_constraint] = anon_sym_constraint,
  [aux_sym_activity_scheduling_constraint_token1] = aux_sym_activity_scheduling_constraint_token1,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_pool] = anon_sym_pool,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_chandle_type] = sym_chandle_type,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_string] = anon_sym_string,
  [sym_bool_type] = sym_bool_type,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_super] = anon_sym_super,
  [sym_integer_number] = sym_integer_number,
  [sym_floating_point_number] = sym_floating_point_number,
  [sym_bool_literal] = sym_bool_literal,
  [sym_null_ref] = sym_null_ref,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_QUOTED_STRING_token1] = aux_sym_QUOTED_STRING_token1,
  [aux_sym_QUOTED_STRING_token2] = aux_sym_QUOTED_STRING_token2,
  [sym_source_file] = sym_source_file,
  [sym_portable_stimulus_description] = sym_portable_stimulus_description,
  [sym_package_declaration] = sym_package_declaration,
  [sym_package_id_path] = sym_package_id_path,
  [sym_package_body_item] = sym_package_body_item,
  [sym_action_declaration] = sym_action_declaration,
  [sym_abstract_action_declaration] = sym_abstract_action_declaration,
  [sym_action_super_spec] = sym_action_super_spec,
  [sym_action_body_item] = sym_action_body_item,
  [sym_component_declaration] = sym_component_declaration,
  [sym_component_body_item] = sym_component_body_item,
  [sym_component_pool_declaration] = sym_component_pool_declaration,
  [sym_object_bind_stmt] = sym_object_bind_stmt,
  [sym_object_bind_item_or_list] = sym_object_bind_item_or_list,
  [sym_object_bind_item_path] = sym_object_bind_item_path,
  [sym_object_bind_item] = sym_object_bind_item,
  [sym_template_param_decl_list] = sym_template_param_decl_list,
  [sym_template_param_decl] = sym_template_param_decl,
  [sym_type_param_decl] = sym_type_param_decl,
  [sym_generic_type_param_decl] = sym_generic_type_param_decl,
  [sym_template_param_value_list] = sym_template_param_value_list,
  [sym_template_param_value] = sym_template_param_value,
  [sym_data_type] = sym_data_type,
  [sym_reference_type] = sym_reference_type,
  [sym_expression] = sym_expression,
  [sym_unary_operator] = sym_unary_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_primary] = sym_primary,
  [sym_paren_expr] = sym_paren_expr,
  [sym_function_parameter_list] = sym_function_parameter_list,
  [sym_hierarchical_id] = sym_hierarchical_id,
  [sym_member_path_elem] = sym_member_path_elem,
  [sym_type_identifier] = sym_type_identifier,
  [sym_type_identifier_elem] = sym_type_identifier_elem,
  [sym_number] = sym_number,
  [sym_aggregate_literal] = sym_aggregate_literal,
  [sym_empty_aggregate_literal] = sym_empty_aggregate_literal,
  [sym_value_list_literal] = sym_value_list_literal,
  [sym_map_literal] = sym_map_literal,
  [sym_map_literal_item] = sym_map_literal_item,
  [sym_struct_literal] = sym_struct_literal,
  [sym_struct_literal_item] = sym_struct_literal_item,
  [sym_string_literal] = sym_string_literal,
  [sym_QUOTED_STRING] = sym_QUOTED_STRING,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_package_declaration_repeat1] = aux_sym_package_declaration_repeat1,
  [aux_sym_extend_stmt_repeat1] = aux_sym_extend_stmt_repeat1,
  [aux_sym_extend_stmt_repeat2] = aux_sym_extend_stmt_repeat2,
  [aux_sym_object_bind_item_or_list_repeat1] = aux_sym_object_bind_item_or_list_repeat1,
  [aux_sym_template_param_decl_list_repeat1] = aux_sym_template_param_decl_list_repeat1,
  [aux_sym_template_param_value_list_repeat1] = aux_sym_template_param_value_list_repeat1,
  [aux_sym_function_parameter_list_repeat1] = aux_sym_function_parameter_list_repeat1,
  [aux_sym_hierarchical_id_repeat1] = aux_sym_hierarchical_id_repeat1,
  [aux_sym_member_path_elem_repeat1] = aux_sym_member_path_elem_repeat1,
  [aux_sym_type_identifier_repeat1] = aux_sym_type_identifier_repeat1,
  [aux_sym_map_literal_repeat1] = aux_sym_map_literal_repeat1,
  [aux_sym_struct_literal_repeat1] = aux_sym_struct_literal_repeat1,
  [aux_sym_QUOTED_STRING_repeat1] = aux_sym_QUOTED_STRING_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_ref_field_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_ref_field_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_activity_scheduling_constraint_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_chandle_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [sym_bool_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_number] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_QUOTED_STRING_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_QUOTED_STRING_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_portable_stimulus_description] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_package_id_path] = {
    .visible = true,
    .named = true,
  },
  [sym_package_body_item] = {
    .visible = true,
    .named = true,
  },
  [sym_action_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_abstract_action_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_action_super_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_action_body_item] = {
    .visible = true,
    .named = true,
  },
  [sym_component_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body_item] = {
    .visible = true,
    .named = true,
  },
  [sym_component_pool_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_object_bind_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_object_bind_item_or_list] = {
    .visible = true,
    .named = true,
  },
  [sym_object_bind_item_path] = {
    .visible = true,
    .named = true,
  },
  [sym_object_bind_item] = {
    .visible = true,
    .named = true,
  },
  [sym_template_param_decl_list] = {
    .visible = true,
    .named = true,
  },
  [sym_template_param_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_param_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type_param_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_template_param_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_template_param_value] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_hierarchical_id] = {
    .visible = true,
    .named = true,
  },
  [sym_member_path_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_aggregate_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_value_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_map_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_map_literal_item] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_literal_item] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_QUOTED_STRING] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extend_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extend_stmt_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_bind_item_or_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_param_decl_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_param_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hierarchical_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_member_path_elem_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_QUOTED_STRING_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '!', 17,
        '"', 122,
        '%', 74,
        '&', 68,
        '\'', 29,
        '(', 95,
        ')', 96,
        '*', 52,
        '+', 76,
        ',', 45,
        '-', 64,
        '.', 50,
        '/', 73,
        '0', 61,
        ':', 46,
        ';', 44,
        '<', 54,
        '=', 60,
        '>', 57,
        '?', 94,
        'B', 106,
        'D', 106,
        'H', 106,
        'O', 106,
        '[', 47,
      );
      if (lookahead == '\\') SKIP(36);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '^') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '~') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(11);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '\r') ADVANCE(129);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 122,
        '&', 66,
        '\'', 29,
        '(', 95,
        ')', 96,
        ',', 45,
        '-', 63,
        '.', 49,
        '/', 12,
        '0', 111,
        ':', 16,
        '=', 59,
        '>', 56,
        'B', 30,
        'D', 30,
        'H', 30,
        'O', 30,
      );
      if (lookahead == '\\') SKIP(2);
      if (lookahead == '^') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '~') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == '{') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      END_STATE();
    case 31:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 35:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 36:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(35);
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(39);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(39);
      if (lookahead == '\r') SKIP(37);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '!', 17,
        '%', 74,
        '&', 67,
        ')', 96,
        '*', 52,
        '+', 75,
        ',', 45,
        '-', 63,
        '.', 49,
        '/', 73,
        ':', 46,
        ';', 44,
        '<', 55,
        '=', 18,
        '>', 58,
        '?', 94,
      );
      if (lookahead == '\\') SKIP(38);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '^') ADVANCE(72);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(87);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '.', 32,
        'B', 30,
        'b', 30,
        'E', 28,
        'e', 28,
        'X', 34,
        'x', 34,
        '8', 15,
        '9', 15,
      );
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(86);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(107);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_integer_number);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_integer_number);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_integer_number);
      ADVANCE_MAP(
        '.', 32,
        'B', 30,
        'b', 30,
        'E', 28,
        'e', 28,
        'X', 34,
        'x', 34,
        '8', 15,
        '9', 15,
      );
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer_number);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer_number);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_integer_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_floating_point_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_floating_point_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_null_ref);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_null_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_QUOTED_STRING_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(121);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_QUOTED_STRING_token1);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_QUOTED_STRING_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_QUOTED_STRING_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_QUOTED_STRING_token1);
      if (lookahead == '/') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_QUOTED_STRING_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_QUOTED_STRING_token2);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(15);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'q') ADVANCE(66);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_bool_type);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_resource_ref_field_declaration_token1);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_pool);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == '3') ADVANCE(120);
      if (lookahead == '6') ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_flow_ref_field_declaration_token1);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 120:
      if (lookahead == '2') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == '4') ADVANCE(133);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_chandle_type);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_activity_scheduling_constraint_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 39},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 39},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 39},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 39},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 39},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 39},
  [124] = {.lex_state = 39},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 39},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 39},
  [130] = {.lex_state = 39},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 39},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 39},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 39},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 39},
  [149] = {.lex_state = 39},
  [150] = {.lex_state = 39},
  [151] = {.lex_state = 39},
  [152] = {.lex_state = 39},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 39},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 39},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 39},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 39},
  [164] = {.lex_state = 39},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 39},
  [168] = {.lex_state = 39},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 39},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 39},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 39},
  [181] = {.lex_state = 39},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 39},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 39},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 39},
  [192] = {.lex_state = 39},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_flow_ref_field_declaration_token1] = ACTIONS(1),
    [aux_sym_resource_ref_field_declaration_token1] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [aux_sym_activity_scheduling_constraint_token1] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_pool] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_chandle_type] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [sym_bool_type] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [sym_integer_number] = ACTIONS(1),
    [sym_floating_point_number] = ACTIONS(1),
    [sym_bool_literal] = ACTIONS(1),
    [sym_null_ref] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(171),
    [sym_portable_stimulus_description] = STATE(47),
    [sym_package_declaration] = STATE(66),
    [sym_package_body_item] = STATE(81),
    [sym_abstract_action_declaration] = STATE(66),
    [sym_component_declaration] = STATE(66),
    [aux_sym_source_file_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_component] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(16), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    STATE(138), 1,
      sym_struct_literal_item,
    STATE(139), 1,
      sym_map_literal_item,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [67] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(42), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    STATE(169), 1,
      sym_map_literal_item,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [125] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(34), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(39), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(37), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(43), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(41), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [255] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(40), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [310] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(39), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(45), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(49), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(53), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(57), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(61), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(65), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(69), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [596] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      sym_binary_operator,
    STATE(141), 1,
      aux_sym_function_parameter_list_repeat1,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [641] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(36), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(85), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [729] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(43), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [784] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_expression,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [839] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(38), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [894] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_expression,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(89), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(93), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [1015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(97), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [1048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(101), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [1081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(105), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [1114] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(37), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1169] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(35), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(109), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [1257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(113), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [1290] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(41), 1,
      sym_expression,
    STATE(44), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(14), 2,
      sym_conditional_expression,
      sym_primary,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
    ACTIONS(23), 5,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(117), 19,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_RPAREN,
  [1378] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_binary_operator,
    STATE(128), 1,
      aux_sym_function_parameter_list_repeat1,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(123), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(125), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1495] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1532] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    ACTIONS(131), 1,
      anon_sym_COLON,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1604] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1640] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym_binary_operator,
    ACTIONS(79), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(81), 13,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_STAR_STAR,
  [1748] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_integer_number,
    ACTIONS(29), 1,
      sym_floating_point_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_QUOTED_STRING,
    STATE(33), 1,
      sym_primary,
    ACTIONS(31), 2,
      sym_bool_literal,
      sym_null_ref,
    STATE(12), 4,
      sym_empty_aggregate_literal,
      sym_value_list_literal,
      sym_map_literal,
      sym_struct_literal,
    STATE(26), 4,
      sym_paren_expr,
      sym_number,
      sym_aggregate_literal,
      sym_string_literal,
  [1789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_integer_number,
    ACTIONS(139), 11,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_floating_point_number,
      sym_bool_literal,
      sym_null_ref,
      anon_sym_DQUOTE,
  [1809] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_package,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(151), 1,
      anon_sym_component,
    ACTIONS(154), 1,
      anon_sym_abstract,
    ACTIONS(157), 1,
      anon_sym_pure,
    STATE(81), 1,
      sym_package_body_item,
    STATE(46), 2,
      sym_portable_stimulus_description,
      aux_sym_source_file_repeat1,
    STATE(66), 3,
      sym_package_declaration,
      sym_abstract_action_declaration,
      sym_component_declaration,
  [1843] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(15), 1,
      anon_sym_pure,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_package_body_item,
    STATE(46), 2,
      sym_portable_stimulus_description,
      aux_sym_source_file_repeat1,
    STATE(66), 3,
      sym_package_declaration,
      sym_abstract_action_declaration,
      sym_component_declaration,
  [1877] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(15), 1,
      anon_sym_pure,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(56), 2,
      sym_package_body_item,
      aux_sym_package_declaration_repeat1,
    STATE(66), 3,
      sym_package_declaration,
      sym_abstract_action_declaration,
      sym_component_declaration,
  [1908] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_action,
    ACTIONS(168), 1,
      anon_sym_pool,
    ACTIONS(170), 1,
      anon_sym_bind,
    STATE(50), 2,
      sym_component_body_item,
      aux_sym_extend_stmt_repeat2,
    STATE(97), 4,
      sym_action_declaration,
      sym_abstract_action_declaration,
      sym_component_pool_declaration,
      sym_object_bind_stmt,
  [1937] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(166), 1,
      anon_sym_action,
    ACTIONS(168), 1,
      anon_sym_pool,
    ACTIONS(170), 1,
      anon_sym_bind,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(52), 2,
      sym_component_body_item,
      aux_sym_extend_stmt_repeat2,
    STATE(97), 4,
      sym_action_declaration,
      sym_abstract_action_declaration,
      sym_component_pool_declaration,
      sym_object_bind_stmt,
  [1966] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_package,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      anon_sym_component,
    ACTIONS(185), 1,
      anon_sym_abstract,
    ACTIONS(188), 1,
      anon_sym_pure,
    STATE(51), 2,
      sym_package_body_item,
      aux_sym_package_declaration_repeat1,
    STATE(66), 3,
      sym_package_declaration,
      sym_abstract_action_declaration,
      sym_component_declaration,
  [1997] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      anon_sym_action,
    ACTIONS(196), 1,
      anon_sym_abstract,
    ACTIONS(199), 1,
      anon_sym_pool,
    ACTIONS(202), 1,
      anon_sym_bind,
    STATE(52), 2,
      sym_component_body_item,
      aux_sym_extend_stmt_repeat2,
    STATE(97), 4,
      sym_action_declaration,
      sym_abstract_action_declaration,
      sym_component_pool_declaration,
      sym_object_bind_stmt,
  [2026] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(166), 1,
      anon_sym_action,
    ACTIONS(168), 1,
      anon_sym_pool,
    ACTIONS(170), 1,
      anon_sym_bind,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_component_body_item,
      aux_sym_extend_stmt_repeat2,
    STATE(97), 4,
      sym_action_declaration,
      sym_abstract_action_declaration,
      sym_component_pool_declaration,
      sym_object_bind_stmt,
  [2055] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(166), 1,
      anon_sym_action,
    ACTIONS(168), 1,
      anon_sym_pool,
    ACTIONS(170), 1,
      anon_sym_bind,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(52), 2,
      sym_component_body_item,
      aux_sym_extend_stmt_repeat2,
    STATE(97), 4,
      sym_action_declaration,
      sym_abstract_action_declaration,
      sym_component_pool_declaration,
      sym_object_bind_stmt,
  [2084] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_action,
    ACTIONS(168), 1,
      anon_sym_pool,
    ACTIONS(170), 1,
      anon_sym_bind,
    STATE(52), 2,
      sym_component_body_item,
      aux_sym_extend_stmt_repeat2,
    STATE(97), 4,
      sym_action_declaration,
      sym_abstract_action_declaration,
      sym_component_pool_declaration,
      sym_object_bind_stmt,
  [2113] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(15), 1,
      anon_sym_pure,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_package_body_item,
      aux_sym_package_declaration_repeat1,
    STATE(66), 3,
      sym_package_declaration,
      sym_abstract_action_declaration,
      sym_component_declaration,
  [2144] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_abstract,
    ACTIONS(166), 1,
      anon_sym_action,
    ACTIONS(168), 1,
      anon_sym_pool,
    ACTIONS(170), 1,
      anon_sym_bind,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(54), 2,
      sym_component_body_item,
      aux_sym_extend_stmt_repeat2,
    STATE(97), 4,
      sym_action_declaration,
      sym_abstract_action_declaration,
      sym_component_pool_declaration,
      sym_object_bind_stmt,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_action,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
      anon_sym_pool,
      anon_sym_bind,
  [2189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_action,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
      anon_sym_pool,
      anon_sym_bind,
  [2205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_action,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
      anon_sym_pool,
      anon_sym_bind,
  [2221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_action,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
      anon_sym_pool,
      anon_sym_bind,
  [2237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_action,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
      anon_sym_pool,
      anon_sym_bind,
  [2253] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_id,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    ACTIONS(227), 1,
      anon_sym_STAR,
    STATE(94), 1,
      sym_type_identifier_elem,
    STATE(131), 1,
      sym_object_bind_item,
    STATE(184), 1,
      sym_type_identifier,
    STATE(190), 1,
      sym_object_bind_item_path,
    STATE(193), 1,
      sym_object_bind_item_or_list,
  [2284] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_function_parameter_list,
    STATE(73), 1,
      aux_sym_member_path_elem_repeat1,
    ACTIONS(229), 5,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    STATE(75), 1,
      aux_sym_member_path_elem_repeat1,
    ACTIONS(235), 5,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
  [2350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_id,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    ACTIONS(227), 1,
      anon_sym_STAR,
    STATE(94), 1,
      sym_type_identifier_elem,
    STATE(131), 1,
      sym_object_bind_item,
    STATE(153), 1,
      sym_object_bind_item_path,
    STATE(184), 1,
      sym_type_identifier,
  [2375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
  [2388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
  [2414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      aux_sym_member_path_elem_repeat1,
    ACTIONS(247), 5,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      aux_sym_member_path_elem_repeat1,
    ACTIONS(235), 5,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2448] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_id,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    ACTIONS(227), 1,
      anon_sym_STAR,
    STATE(94), 1,
      sym_type_identifier_elem,
    STATE(131), 1,
      sym_object_bind_item,
    STATE(132), 1,
      sym_object_bind_item_path,
    STATE(184), 1,
      sym_type_identifier,
  [2473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      aux_sym_member_path_elem_repeat1,
    ACTIONS(252), 5,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
  [2503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
  [2516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_integer_number,
    ACTIONS(258), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_floating_point_number,
      sym_bool_literal,
      sym_null_ref,
      anon_sym_DQUOTE,
  [2531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 6,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_component,
      anon_sym_abstract,
      anon_sym_pure,
  [2567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(87), 1,
      aux_sym_hierarchical_id_repeat1,
    ACTIONS(268), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_STAR,
      sym_id,
  [2583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 6,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LT,
    STATE(112), 1,
      sym_template_param_value_list,
    ACTIONS(276), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      sym_id,
  [2623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_hierarchical_id_repeat1,
    ACTIONS(280), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_STAR,
      sym_id,
  [2639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DOT,
    STATE(87), 1,
      aux_sym_hierarchical_id_repeat1,
    ACTIONS(282), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_STAR,
      sym_id,
  [2655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_RBRACE,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_pool,
      anon_sym_bind,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 5,
      anon_sym_RBRACE,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_pool,
      anon_sym_bind,
  [2677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COLON_COLON,
    STATE(96), 1,
      aux_sym_type_identifier_repeat1,
    ACTIONS(291), 3,
      anon_sym_LBRACE,
      anon_sym_DOT,
      sym_id,
  [2692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_LT,
    STATE(137), 1,
      sym_template_param_decl_list,
    STATE(173), 1,
      sym_action_super_spec,
  [2711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 5,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_id,
  [2722] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_GT,
    ACTIONS(303), 1,
      anon_sym_ref,
    STATE(124), 1,
      sym_template_param_value,
    STATE(167), 1,
      sym_reference_type,
    STATE(168), 1,
      sym_data_type,
  [2741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COLON_COLON,
    STATE(90), 1,
      aux_sym_type_identifier_repeat1,
    ACTIONS(305), 3,
      anon_sym_LBRACE,
      anon_sym_DOT,
      sym_id,
  [2756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COLON_COLON,
    STATE(100), 1,
      aux_sym_type_identifier_repeat1,
    ACTIONS(291), 3,
      anon_sym_LBRACE,
      anon_sym_DOT,
      sym_id,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COLON_COLON,
    STATE(96), 1,
      aux_sym_type_identifier_repeat1,
    ACTIONS(307), 3,
      anon_sym_LBRACE,
      anon_sym_DOT,
      sym_id,
  [2786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 5,
      anon_sym_RBRACE,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_pool,
      anon_sym_bind,
  [2797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_RBRACE,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_pool,
      anon_sym_bind,
  [2808] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_id,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym_type_identifier_elem,
    STATE(180), 1,
      sym_type_identifier,
  [2827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COLON_COLON,
    STATE(96), 1,
      aux_sym_type_identifier_repeat1,
    ACTIONS(318), 3,
      anon_sym_LBRACE,
      anon_sym_DOT,
      sym_id,
  [2842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_id,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    STATE(94), 1,
      sym_type_identifier_elem,
    STATE(187), 1,
      sym_type_identifier,
  [2858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_type,
    STATE(155), 1,
      sym_template_param_decl,
    STATE(164), 1,
      sym_type_param_decl,
    STATE(166), 1,
      sym_generic_type_param_decl,
  [2874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    STATE(106), 2,
      sym_action_body_item,
      aux_sym_extend_stmt_repeat1,
  [2888] = 5,
    ACTIONS(326), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      aux_sym_QUOTED_STRING_token1,
    ACTIONS(333), 1,
      aux_sym_QUOTED_STRING_token2,
    STATE(104), 1,
      aux_sym_QUOTED_STRING_repeat1,
  [2904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(105), 2,
      sym_action_body_item,
      aux_sym_extend_stmt_repeat1,
  [2918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(105), 2,
      sym_action_body_item,
      aux_sym_extend_stmt_repeat1,
  [2932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(116), 2,
      sym_action_body_item,
      aux_sym_extend_stmt_repeat1,
  [2946] = 5,
    ACTIONS(326), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_QUOTED_STRING_token1,
    ACTIONS(347), 1,
      aux_sym_QUOTED_STRING_token2,
    STATE(114), 1,
      aux_sym_QUOTED_STRING_repeat1,
  [2962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_function_parameter_list_repeat1,
    ACTIONS(123), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [2976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    STATE(105), 2,
      sym_action_body_item,
      aux_sym_extend_stmt_repeat1,
  [2990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      sym_id,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      sym_id,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      sym_id,
  [3020] = 5,
    ACTIONS(326), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      aux_sym_QUOTED_STRING_token1,
    ACTIONS(362), 1,
      aux_sym_QUOTED_STRING_token2,
    STATE(104), 1,
      aux_sym_QUOTED_STRING_repeat1,
  [3036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_ref,
    STATE(160), 1,
      sym_template_param_value,
    STATE(167), 1,
      sym_reference_type,
    STATE(168), 1,
      sym_data_type,
  [3052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(105), 2,
      sym_action_body_item,
      aux_sym_extend_stmt_repeat1,
  [3066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_type,
    STATE(130), 1,
      sym_template_param_decl,
    STATE(164), 1,
      sym_type_param_decl,
    STATE(166), 1,
      sym_generic_type_param_decl,
  [3082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_id,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    STATE(94), 1,
      sym_type_identifier_elem,
    STATE(185), 1,
      sym_type_identifier,
  [3098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(110), 2,
      sym_action_body_item,
      aux_sym_extend_stmt_repeat1,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      sym_id,
  [3122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 4,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      sym_id,
  [3144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_template_param_decl_list,
  [3157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_GT,
    STATE(134), 1,
      aux_sym_template_param_value_list_repeat1,
  [3170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_struct_literal_repeat1,
  [3192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_ref,
    STATE(163), 1,
      sym_data_type,
    STATE(167), 1,
      sym_reference_type,
  [3205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_parameter_list_repeat1,
  [3218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_GT,
    STATE(129), 1,
      aux_sym_template_param_value_list_repeat1,
  [3231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_GT,
    STATE(143), 1,
      aux_sym_template_param_decl_list_repeat1,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_object_bind_item_or_list_repeat1,
  [3266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_object_bind_item_or_list_repeat1,
  [3279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_GT,
    STATE(129), 1,
      aux_sym_template_param_value_list_repeat1,
  [3292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_object_bind_item_or_list_repeat1,
  [3314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_action_super_spec,
  [3327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_struct_literal_repeat1,
  [3340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_map_literal_repeat1,
  [3353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_id,
    STATE(63), 1,
      sym_hierarchical_id,
    STATE(86), 1,
      sym_member_path_elem,
  [3366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_function_parameter_list_repeat1,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_GT,
    STATE(148), 1,
      aux_sym_template_param_decl_list_repeat1,
  [3403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_map_literal_repeat1,
  [3416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_struct_literal_repeat1,
  [3429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_template_param_decl_list,
  [3442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_map_literal_repeat1,
  [3455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_GT,
    STATE(148), 1,
      aux_sym_template_param_decl_list_repeat1,
  [3468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_id,
    STATE(95), 1,
      sym_type_identifier_elem,
  [3478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym_struct_literal_item,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_id,
    STATE(122), 1,
      sym_type_identifier_elem,
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_action,
    STATE(59), 1,
      sym_action_declaration,
  [3508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_id,
    STATE(92), 1,
      sym_member_path_elem,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [3550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_id,
    STATE(175), 1,
      sym_package_id_path,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_COLON_COLON,
  [3618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_id,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_id,
  [3671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
  [3685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_EQ,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_id,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_id,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_SEMI,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_id,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_DOT,
  [3755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_id,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SEMI,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SEMI,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_component,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_id,
  [3811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_SEMI,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_id,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 125,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 219,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 365,
  [SMALL_STATE(10)] = 398,
  [SMALL_STATE(11)] = 431,
  [SMALL_STATE(12)] = 464,
  [SMALL_STATE(13)] = 497,
  [SMALL_STATE(14)] = 530,
  [SMALL_STATE(15)] = 563,
  [SMALL_STATE(16)] = 596,
  [SMALL_STATE(17)] = 641,
  [SMALL_STATE(18)] = 696,
  [SMALL_STATE(19)] = 729,
  [SMALL_STATE(20)] = 784,
  [SMALL_STATE(21)] = 839,
  [SMALL_STATE(22)] = 894,
  [SMALL_STATE(23)] = 949,
  [SMALL_STATE(24)] = 982,
  [SMALL_STATE(25)] = 1015,
  [SMALL_STATE(26)] = 1048,
  [SMALL_STATE(27)] = 1081,
  [SMALL_STATE(28)] = 1114,
  [SMALL_STATE(29)] = 1169,
  [SMALL_STATE(30)] = 1224,
  [SMALL_STATE(31)] = 1257,
  [SMALL_STATE(32)] = 1290,
  [SMALL_STATE(33)] = 1345,
  [SMALL_STATE(34)] = 1378,
  [SMALL_STATE(35)] = 1420,
  [SMALL_STATE(36)] = 1458,
  [SMALL_STATE(37)] = 1495,
  [SMALL_STATE(38)] = 1532,
  [SMALL_STATE(39)] = 1568,
  [SMALL_STATE(40)] = 1604,
  [SMALL_STATE(41)] = 1640,
  [SMALL_STATE(42)] = 1676,
  [SMALL_STATE(43)] = 1712,
  [SMALL_STATE(44)] = 1748,
  [SMALL_STATE(45)] = 1789,
  [SMALL_STATE(46)] = 1809,
  [SMALL_STATE(47)] = 1843,
  [SMALL_STATE(48)] = 1877,
  [SMALL_STATE(49)] = 1908,
  [SMALL_STATE(50)] = 1937,
  [SMALL_STATE(51)] = 1966,
  [SMALL_STATE(52)] = 1997,
  [SMALL_STATE(53)] = 2026,
  [SMALL_STATE(54)] = 2055,
  [SMALL_STATE(55)] = 2084,
  [SMALL_STATE(56)] = 2113,
  [SMALL_STATE(57)] = 2144,
  [SMALL_STATE(58)] = 2173,
  [SMALL_STATE(59)] = 2189,
  [SMALL_STATE(60)] = 2205,
  [SMALL_STATE(61)] = 2221,
  [SMALL_STATE(62)] = 2237,
  [SMALL_STATE(63)] = 2253,
  [SMALL_STATE(64)] = 2284,
  [SMALL_STATE(65)] = 2307,
  [SMALL_STATE(66)] = 2324,
  [SMALL_STATE(67)] = 2337,
  [SMALL_STATE(68)] = 2350,
  [SMALL_STATE(69)] = 2375,
  [SMALL_STATE(70)] = 2388,
  [SMALL_STATE(71)] = 2401,
  [SMALL_STATE(72)] = 2414,
  [SMALL_STATE(73)] = 2431,
  [SMALL_STATE(74)] = 2448,
  [SMALL_STATE(75)] = 2473,
  [SMALL_STATE(76)] = 2490,
  [SMALL_STATE(77)] = 2503,
  [SMALL_STATE(78)] = 2516,
  [SMALL_STATE(79)] = 2531,
  [SMALL_STATE(80)] = 2543,
  [SMALL_STATE(81)] = 2555,
  [SMALL_STATE(82)] = 2567,
  [SMALL_STATE(83)] = 2583,
  [SMALL_STATE(84)] = 2595,
  [SMALL_STATE(85)] = 2607,
  [SMALL_STATE(86)] = 2623,
  [SMALL_STATE(87)] = 2639,
  [SMALL_STATE(88)] = 2655,
  [SMALL_STATE(89)] = 2666,
  [SMALL_STATE(90)] = 2677,
  [SMALL_STATE(91)] = 2692,
  [SMALL_STATE(92)] = 2711,
  [SMALL_STATE(93)] = 2722,
  [SMALL_STATE(94)] = 2741,
  [SMALL_STATE(95)] = 2756,
  [SMALL_STATE(96)] = 2771,
  [SMALL_STATE(97)] = 2786,
  [SMALL_STATE(98)] = 2797,
  [SMALL_STATE(99)] = 2808,
  [SMALL_STATE(100)] = 2827,
  [SMALL_STATE(101)] = 2842,
  [SMALL_STATE(102)] = 2858,
  [SMALL_STATE(103)] = 2874,
  [SMALL_STATE(104)] = 2888,
  [SMALL_STATE(105)] = 2904,
  [SMALL_STATE(106)] = 2918,
  [SMALL_STATE(107)] = 2932,
  [SMALL_STATE(108)] = 2946,
  [SMALL_STATE(109)] = 2962,
  [SMALL_STATE(110)] = 2976,
  [SMALL_STATE(111)] = 2990,
  [SMALL_STATE(112)] = 3000,
  [SMALL_STATE(113)] = 3010,
  [SMALL_STATE(114)] = 3020,
  [SMALL_STATE(115)] = 3036,
  [SMALL_STATE(116)] = 3052,
  [SMALL_STATE(117)] = 3066,
  [SMALL_STATE(118)] = 3082,
  [SMALL_STATE(119)] = 3098,
  [SMALL_STATE(120)] = 3112,
  [SMALL_STATE(121)] = 3122,
  [SMALL_STATE(122)] = 3134,
  [SMALL_STATE(123)] = 3144,
  [SMALL_STATE(124)] = 3157,
  [SMALL_STATE(125)] = 3170,
  [SMALL_STATE(126)] = 3179,
  [SMALL_STATE(127)] = 3192,
  [SMALL_STATE(128)] = 3205,
  [SMALL_STATE(129)] = 3218,
  [SMALL_STATE(130)] = 3231,
  [SMALL_STATE(131)] = 3244,
  [SMALL_STATE(132)] = 3253,
  [SMALL_STATE(133)] = 3266,
  [SMALL_STATE(134)] = 3279,
  [SMALL_STATE(135)] = 3292,
  [SMALL_STATE(136)] = 3301,
  [SMALL_STATE(137)] = 3314,
  [SMALL_STATE(138)] = 3327,
  [SMALL_STATE(139)] = 3340,
  [SMALL_STATE(140)] = 3353,
  [SMALL_STATE(141)] = 3366,
  [SMALL_STATE(142)] = 3379,
  [SMALL_STATE(143)] = 3390,
  [SMALL_STATE(144)] = 3403,
  [SMALL_STATE(145)] = 3416,
  [SMALL_STATE(146)] = 3429,
  [SMALL_STATE(147)] = 3442,
  [SMALL_STATE(148)] = 3455,
  [SMALL_STATE(149)] = 3468,
  [SMALL_STATE(150)] = 3478,
  [SMALL_STATE(151)] = 3488,
  [SMALL_STATE(152)] = 3498,
  [SMALL_STATE(153)] = 3508,
  [SMALL_STATE(154)] = 3516,
  [SMALL_STATE(155)] = 3526,
  [SMALL_STATE(156)] = 3534,
  [SMALL_STATE(157)] = 3542,
  [SMALL_STATE(158)] = 3550,
  [SMALL_STATE(159)] = 3558,
  [SMALL_STATE(160)] = 3566,
  [SMALL_STATE(161)] = 3574,
  [SMALL_STATE(162)] = 3584,
  [SMALL_STATE(163)] = 3592,
  [SMALL_STATE(164)] = 3600,
  [SMALL_STATE(165)] = 3608,
  [SMALL_STATE(166)] = 3618,
  [SMALL_STATE(167)] = 3626,
  [SMALL_STATE(168)] = 3634,
  [SMALL_STATE(169)] = 3642,
  [SMALL_STATE(170)] = 3650,
  [SMALL_STATE(171)] = 3657,
  [SMALL_STATE(172)] = 3664,
  [SMALL_STATE(173)] = 3671,
  [SMALL_STATE(174)] = 3678,
  [SMALL_STATE(175)] = 3685,
  [SMALL_STATE(176)] = 3692,
  [SMALL_STATE(177)] = 3699,
  [SMALL_STATE(178)] = 3706,
  [SMALL_STATE(179)] = 3713,
  [SMALL_STATE(180)] = 3720,
  [SMALL_STATE(181)] = 3727,
  [SMALL_STATE(182)] = 3734,
  [SMALL_STATE(183)] = 3741,
  [SMALL_STATE(184)] = 3748,
  [SMALL_STATE(185)] = 3755,
  [SMALL_STATE(186)] = 3762,
  [SMALL_STATE(187)] = 3769,
  [SMALL_STATE(188)] = 3776,
  [SMALL_STATE(189)] = 3783,
  [SMALL_STATE(190)] = 3790,
  [SMALL_STATE(191)] = 3797,
  [SMALL_STATE(192)] = 3804,
  [SMALL_STATE(193)] = 3811,
  [SMALL_STATE(194)] = 3818,
  [SMALL_STATE(195)] = 3825,
  [SMALL_STATE(196)] = 3832,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_literal, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_literal, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_literal, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list_literal, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list_literal, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_aggregate_literal, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_aggregate_literal, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_QUOTED_STRING, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_QUOTED_STRING, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_QUOTED_STRING, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_QUOTED_STRING, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_literal, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_list_literal, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_list_literal, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameter_list_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal_item, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_item, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extend_stmt_repeat2, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend_stmt_repeat2, 2, 0, 0), SHIFT_REPEAT(170),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend_stmt_repeat2, 2, 0, 0), SHIFT_REPEAT(152),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend_stmt_repeat2, 2, 0, 0), SHIFT_REPEAT(99),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend_stmt_repeat2, 2, 0, 0), SHIFT_REPEAT(140),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_declaration, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_action_declaration, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_declaration, 6, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_declaration, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_declaration, 7, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_path_elem, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_path_elem, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_body_item, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 7, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_path_elem_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_member_path_elem_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_path_elem, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 5, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 6, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_path_elem_repeat1, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portable_stimulus_description, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchical_id, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 4, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier_elem, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hierarchical_id, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hierarchical_id_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hierarchical_id_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_bind_stmt, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_pool_declaration, 7, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_identifier_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body_item, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_pool_declaration, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_QUOTED_STRING_repeat1, 2, 0, 0),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_QUOTED_STRING_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_QUOTED_STRING_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extend_stmt_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend_stmt_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_param_value_list, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier_elem, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_param_value_list, 4, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_param_value_list, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_bind_item, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_bind_item, 6, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_literal_repeat1, 2, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_param_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_param_value_list_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_bind_item_path, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_bind_item_or_list_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_bind_item_or_list_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_bind_item, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type_param_decl, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_literal_repeat1, 2, 0, 0),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_param_decl_list_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_param_decl_list_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_body_item, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_param_decl_list, 4, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_param_decl_list, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type_param_decl, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_param_decl, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_id_path, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_decl, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_param_value, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [477] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_bind_item_or_list, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_super_spec, 2, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_bind_item_or_list, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_bind_item_or_list, 1, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_id_path, 3, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pss(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_id,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
