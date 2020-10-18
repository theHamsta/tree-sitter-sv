#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
  anon_sym_package = 1,
  anon_sym_SEMI = 2,
  anon_sym_endpackage = 3,
  anon_sym_COLON = 4,
  anon_sym_timeunit = 5,
  anon_sym_SLASH = 6,
  anon_sym_timeprecision = 7,
  anon_sym_input = 8,
  anon_sym_output = 9,
  anon_sym_inout = 10,
  anon_sym_ref = 11,
  anon_sym_localparam = 12,
  anon_sym_type = 13,
  anon_sym_parameter = 14,
  anon_sym_const = 15,
  anon_sym_var = 16,
  anon_sym_static = 17,
  anon_sym_automaitc = 18,
  anon_sym_void = 19,
  anon_sym_byte = 20,
  anon_sym_shortint = 21,
  anon_sym_int = 22,
  anon_sym_longint = 23,
  anon_sym_integer = 24,
  anon_sym_time = 25,
  anon_sym_signed = 26,
  anon_sym_unsigned = 27,
  anon_sym_COMMA = 28,
  anon_sym_EQ = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  sym_associative_dimension = 32,
  sym_queue_dimension = 33,
  anon_sym_function = 34,
  anon_sym_endfunction = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_constref = 38,
  sym_tf_port_declaration = 39,
  sym_block_item_declaration = 40,
  anon_sym_return = 41,
  anon_sym_break = 42,
  anon_sym_continue = 43,
  sym_constant_expression = 44,
  sym_constant_param_expression = 45,
  anon_sym_this = 46,
  anon_sym_DOLLAR = 47,
  anon_sym_null = 48,
  sym_time_unit = 49,
  aux_sym_decimal_number_token1 = 50,
  sym_binary_number = 51,
  sym_octal_number = 52,
  sym_hex_number = 53,
  sym_non_zero_unsigned_number = 54,
  sym_unsigned_number = 55,
  sym_unbased_unsized_literal = 56,
  anon_sym_LPAREN_STAR = 57,
  anon_sym_STAR_RPAREN = 58,
  sym_escaped_identifier = 59,
  sym_simple_identifier = 60,
  sym_source_text = 61,
  sym__description = 62,
  sym_package_declaration = 63,
  sym_timeunits_declaration = 64,
  sym_port_direction = 65,
  sym_package_item = 66,
  sym__package_or_generate_item_declaration = 67,
  sym_local_parameter_declaration = 68,
  sym_parameter_declaration = 69,
  sym_data_declaration = 70,
  sym_lifetime = 71,
  sym_data_type = 72,
  sym_data_type_or_implicit = 73,
  sym_implicit_data_type = 74,
  sym_data_type_or_void = 75,
  sym_integer_atom_type = 76,
  sym_signing = 77,
  sym_list_of_param_assignments = 78,
  sym_list_of_type_assignments = 79,
  sym_list_of_variable_decl_assignments = 80,
  sym_param_assignment = 81,
  sym_type_assignment = 82,
  sym_variable_decl_assignment = 83,
  sym_unpacked_dimension = 84,
  sym_packed_dimension = 85,
  sym_variable_dimension = 86,
  sym_unsized_dimension = 87,
  sym_function_data_type_or_implicit = 88,
  sym_function_declaration = 89,
  sym__function_body_declaration = 90,
  sym_function_body_declaration_nonansi = 91,
  sym_function_body_declaration_ansi = 92,
  sym_tf_item_declaration = 93,
  sym_tf_port_list = 94,
  sym_tf_port_item = 95,
  sym_tf_port_direction = 96,
  sym_statement = 97,
  sym__statement_item = 98,
  sym__function_statement = 99,
  sym__function_statement_or_null = 100,
  sym_jump_statement = 101,
  sym_constant_range = 102,
  sym__expression = 103,
  sym_primary = 104,
  sym__primary_literal = 105,
  sym_time_literal = 106,
  sym__number = 107,
  sym__integral_number = 108,
  sym_decimal_number = 109,
  sym_attribute_instance = 110,
  sym_attr_spec = 111,
  sym_attr_name = 112,
  sym__identifier = 113,
  aux_sym_source_text_repeat1 = 114,
  aux_sym__description_repeat1 = 115,
  aux_sym_package_declaration_repeat1 = 116,
  aux_sym_implicit_data_type_repeat1 = 117,
  aux_sym_list_of_param_assignments_repeat1 = 118,
  aux_sym_list_of_type_assignments_repeat1 = 119,
  aux_sym_list_of_variable_decl_assignments_repeat1 = 120,
  aux_sym_param_assignment_repeat1 = 121,
  aux_sym_variable_decl_assignment_repeat1 = 122,
  aux_sym_function_body_declaration_nonansi_repeat1 = 123,
  aux_sym_function_body_declaration_nonansi_repeat2 = 124,
  aux_sym_function_body_declaration_ansi_repeat1 = 125,
  aux_sym_tf_port_list_repeat1 = 126,
  aux_sym_attribute_instance_repeat1 = 127,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_endpackage] = "endpackage",
  [anon_sym_COLON] = ":",
  [anon_sym_timeunit] = "timeunit",
  [anon_sym_SLASH] = "/",
  [anon_sym_timeprecision] = "timeprecision",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_inout] = "inout",
  [anon_sym_ref] = "ref",
  [anon_sym_localparam] = "localparam",
  [anon_sym_type] = "type",
  [anon_sym_parameter] = "parameter",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_static] = "static",
  [anon_sym_automaitc] = "automaitc",
  [anon_sym_void] = "void",
  [anon_sym_byte] = "byte",
  [anon_sym_shortint] = "shortint",
  [anon_sym_int] = "int",
  [anon_sym_longint] = "longint",
  [anon_sym_integer] = "integer",
  [anon_sym_time] = "time",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_associative_dimension] = "associative_dimension",
  [sym_queue_dimension] = "queue_dimension",
  [anon_sym_function] = "function",
  [anon_sym_endfunction] = "endfunction",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_constref] = "const ref",
  [sym_tf_port_declaration] = "tf_port_declaration",
  [sym_block_item_declaration] = "block_item_declaration",
  [anon_sym_return] = "return",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [sym_constant_expression] = "constant_expression",
  [sym_constant_param_expression] = "constant_param_expression",
  [anon_sym_this] = "this",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_null] = "null",
  [sym_time_unit] = "time_unit",
  [aux_sym_decimal_number_token1] = "decimal_number_token1",
  [sym_binary_number] = "binary_number",
  [sym_octal_number] = "octal_number",
  [sym_hex_number] = "hex_number",
  [sym_non_zero_unsigned_number] = "non_zero_unsigned_number",
  [sym_unsigned_number] = "unsigned_number",
  [sym_unbased_unsized_literal] = "unbased_unsized_literal",
  [anon_sym_LPAREN_STAR] = "(*",
  [anon_sym_STAR_RPAREN] = "*)",
  [sym_escaped_identifier] = "escaped_identifier",
  [sym_simple_identifier] = "simple_identifier",
  [sym_source_text] = "source_text",
  [sym__description] = "_description",
  [sym_package_declaration] = "package_declaration",
  [sym_timeunits_declaration] = "timeunits_declaration",
  [sym_port_direction] = "port_direction",
  [sym_package_item] = "package_item",
  [sym__package_or_generate_item_declaration] = "_package_or_generate_item_declaration",
  [sym_local_parameter_declaration] = "local_parameter_declaration",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_data_declaration] = "data_declaration",
  [sym_lifetime] = "lifetime",
  [sym_data_type] = "data_type",
  [sym_data_type_or_implicit] = "data_type_or_implicit",
  [sym_implicit_data_type] = "implicit_data_type",
  [sym_data_type_or_void] = "data_type_or_void",
  [sym_integer_atom_type] = "integer_atom_type",
  [sym_signing] = "signing",
  [sym_list_of_param_assignments] = "list_of_param_assignments",
  [sym_list_of_type_assignments] = "list_of_type_assignments",
  [sym_list_of_variable_decl_assignments] = "list_of_variable_decl_assignments",
  [sym_param_assignment] = "param_assignment",
  [sym_type_assignment] = "type_assignment",
  [sym_variable_decl_assignment] = "variable_decl_assignment",
  [sym_unpacked_dimension] = "unpacked_dimension",
  [sym_packed_dimension] = "packed_dimension",
  [sym_variable_dimension] = "variable_dimension",
  [sym_unsized_dimension] = "unsized_dimension",
  [sym_function_data_type_or_implicit] = "function_data_type_or_implicit",
  [sym_function_declaration] = "function_declaration",
  [sym__function_body_declaration] = "_function_body_declaration",
  [sym_function_body_declaration_nonansi] = "function_body_declaration_nonansi",
  [sym_function_body_declaration_ansi] = "function_body_declaration_ansi",
  [sym_tf_item_declaration] = "tf_item_declaration",
  [sym_tf_port_list] = "tf_port_list",
  [sym_tf_port_item] = "tf_port_item",
  [sym_tf_port_direction] = "tf_port_direction",
  [sym_statement] = "statement",
  [sym__statement_item] = "_statement_item",
  [sym__function_statement] = "_function_statement",
  [sym__function_statement_or_null] = "_function_statement_or_null",
  [sym_jump_statement] = "jump_statement",
  [sym_constant_range] = "constant_range",
  [sym__expression] = "_expression",
  [sym_primary] = "primary",
  [sym__primary_literal] = "_primary_literal",
  [sym_time_literal] = "time_literal",
  [sym__number] = "_number",
  [sym__integral_number] = "_integral_number",
  [sym_decimal_number] = "decimal_number",
  [sym_attribute_instance] = "attribute_instance",
  [sym_attr_spec] = "attr_spec",
  [sym_attr_name] = "attr_name",
  [sym__identifier] = "_identifier",
  [aux_sym_source_text_repeat1] = "source_text_repeat1",
  [aux_sym__description_repeat1] = "_description_repeat1",
  [aux_sym_package_declaration_repeat1] = "package_declaration_repeat1",
  [aux_sym_implicit_data_type_repeat1] = "implicit_data_type_repeat1",
  [aux_sym_list_of_param_assignments_repeat1] = "list_of_param_assignments_repeat1",
  [aux_sym_list_of_type_assignments_repeat1] = "list_of_type_assignments_repeat1",
  [aux_sym_list_of_variable_decl_assignments_repeat1] = "list_of_variable_decl_assignments_repeat1",
  [aux_sym_param_assignment_repeat1] = "param_assignment_repeat1",
  [aux_sym_variable_decl_assignment_repeat1] = "variable_decl_assignment_repeat1",
  [aux_sym_function_body_declaration_nonansi_repeat1] = "function_body_declaration_nonansi_repeat1",
  [aux_sym_function_body_declaration_nonansi_repeat2] = "function_body_declaration_nonansi_repeat2",
  [aux_sym_function_body_declaration_ansi_repeat1] = "function_body_declaration_ansi_repeat1",
  [aux_sym_tf_port_list_repeat1] = "tf_port_list_repeat1",
  [aux_sym_attribute_instance_repeat1] = "attribute_instance_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_endpackage] = anon_sym_endpackage,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_timeunit] = anon_sym_timeunit,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_timeprecision] = anon_sym_timeprecision,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_localparam] = anon_sym_localparam,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_automaitc] = anon_sym_automaitc,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_shortint] = anon_sym_shortint,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_longint] = anon_sym_longint,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_associative_dimension] = sym_associative_dimension,
  [sym_queue_dimension] = sym_queue_dimension,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_endfunction] = anon_sym_endfunction,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_constref] = anon_sym_constref,
  [sym_tf_port_declaration] = sym_tf_port_declaration,
  [sym_block_item_declaration] = sym_block_item_declaration,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [sym_constant_expression] = sym_constant_expression,
  [sym_constant_param_expression] = sym_constant_param_expression,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_null] = anon_sym_null,
  [sym_time_unit] = sym_time_unit,
  [aux_sym_decimal_number_token1] = aux_sym_decimal_number_token1,
  [sym_binary_number] = sym_binary_number,
  [sym_octal_number] = sym_octal_number,
  [sym_hex_number] = sym_hex_number,
  [sym_non_zero_unsigned_number] = sym_non_zero_unsigned_number,
  [sym_unsigned_number] = sym_unsigned_number,
  [sym_unbased_unsized_literal] = sym_unbased_unsized_literal,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [sym_escaped_identifier] = sym_escaped_identifier,
  [sym_simple_identifier] = sym_simple_identifier,
  [sym_source_text] = sym_source_text,
  [sym__description] = sym__description,
  [sym_package_declaration] = sym_package_declaration,
  [sym_timeunits_declaration] = sym_timeunits_declaration,
  [sym_port_direction] = sym_port_direction,
  [sym_package_item] = sym_package_item,
  [sym__package_or_generate_item_declaration] = sym__package_or_generate_item_declaration,
  [sym_local_parameter_declaration] = sym_local_parameter_declaration,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_data_declaration] = sym_data_declaration,
  [sym_lifetime] = sym_lifetime,
  [sym_data_type] = sym_data_type,
  [sym_data_type_or_implicit] = sym_data_type_or_implicit,
  [sym_implicit_data_type] = sym_implicit_data_type,
  [sym_data_type_or_void] = sym_data_type_or_void,
  [sym_integer_atom_type] = sym_integer_atom_type,
  [sym_signing] = sym_signing,
  [sym_list_of_param_assignments] = sym_list_of_param_assignments,
  [sym_list_of_type_assignments] = sym_list_of_type_assignments,
  [sym_list_of_variable_decl_assignments] = sym_list_of_variable_decl_assignments,
  [sym_param_assignment] = sym_param_assignment,
  [sym_type_assignment] = sym_type_assignment,
  [sym_variable_decl_assignment] = sym_variable_decl_assignment,
  [sym_unpacked_dimension] = sym_unpacked_dimension,
  [sym_packed_dimension] = sym_packed_dimension,
  [sym_variable_dimension] = sym_variable_dimension,
  [sym_unsized_dimension] = sym_unsized_dimension,
  [sym_function_data_type_or_implicit] = sym_function_data_type_or_implicit,
  [sym_function_declaration] = sym_function_declaration,
  [sym__function_body_declaration] = sym__function_body_declaration,
  [sym_function_body_declaration_nonansi] = sym_function_body_declaration_nonansi,
  [sym_function_body_declaration_ansi] = sym_function_body_declaration_ansi,
  [sym_tf_item_declaration] = sym_tf_item_declaration,
  [sym_tf_port_list] = sym_tf_port_list,
  [sym_tf_port_item] = sym_tf_port_item,
  [sym_tf_port_direction] = sym_tf_port_direction,
  [sym_statement] = sym_statement,
  [sym__statement_item] = sym__statement_item,
  [sym__function_statement] = sym__function_statement,
  [sym__function_statement_or_null] = sym__function_statement_or_null,
  [sym_jump_statement] = sym_jump_statement,
  [sym_constant_range] = sym_constant_range,
  [sym__expression] = sym__expression,
  [sym_primary] = sym_primary,
  [sym__primary_literal] = sym__primary_literal,
  [sym_time_literal] = sym_time_literal,
  [sym__number] = sym__number,
  [sym__integral_number] = sym__integral_number,
  [sym_decimal_number] = sym_decimal_number,
  [sym_attribute_instance] = sym_attribute_instance,
  [sym_attr_spec] = sym_attr_spec,
  [sym_attr_name] = sym_attr_name,
  [sym__identifier] = sym__identifier,
  [aux_sym_source_text_repeat1] = aux_sym_source_text_repeat1,
  [aux_sym__description_repeat1] = aux_sym__description_repeat1,
  [aux_sym_package_declaration_repeat1] = aux_sym_package_declaration_repeat1,
  [aux_sym_implicit_data_type_repeat1] = aux_sym_implicit_data_type_repeat1,
  [aux_sym_list_of_param_assignments_repeat1] = aux_sym_list_of_param_assignments_repeat1,
  [aux_sym_list_of_type_assignments_repeat1] = aux_sym_list_of_type_assignments_repeat1,
  [aux_sym_list_of_variable_decl_assignments_repeat1] = aux_sym_list_of_variable_decl_assignments_repeat1,
  [aux_sym_param_assignment_repeat1] = aux_sym_param_assignment_repeat1,
  [aux_sym_variable_decl_assignment_repeat1] = aux_sym_variable_decl_assignment_repeat1,
  [aux_sym_function_body_declaration_nonansi_repeat1] = aux_sym_function_body_declaration_nonansi_repeat1,
  [aux_sym_function_body_declaration_nonansi_repeat2] = aux_sym_function_body_declaration_nonansi_repeat2,
  [aux_sym_function_body_declaration_ansi_repeat1] = aux_sym_function_body_declaration_ansi_repeat1,
  [aux_sym_tf_port_list_repeat1] = aux_sym_tf_port_list_repeat1,
  [aux_sym_attribute_instance_repeat1] = aux_sym_attribute_instance_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeunit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_localparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_automaitc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shortint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym_associative_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_queue_dimension] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfunction] = {
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
  [anon_sym_constref] = {
    .visible = true,
    .named = false,
  },
  [sym_tf_port_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_block_item_declaration] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [sym_constant_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_param_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym_time_unit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_decimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_binary_number] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_non_zero_unsigned_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unbased_unsized_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_escaped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_text] = {
    .visible = true,
    .named = true,
  },
  [sym__description] = {
    .visible = false,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_timeunits_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_port_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_package_item] = {
    .visible = true,
    .named = true,
  },
  [sym__package_or_generate_item_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_local_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_data_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_lifetime] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type_or_implicit] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type_or_void] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_atom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_signing] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_param_assignments] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_type_assignments] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_variable_decl_assignments] = {
    .visible = true,
    .named = true,
  },
  [sym_param_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_type_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_decl_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_unpacked_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_packed_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_unsized_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_function_data_type_or_implicit] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__function_body_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_function_body_declaration_nonansi] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body_declaration_ansi] = {
    .visible = true,
    .named = true,
  },
  [sym_tf_item_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_tf_port_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tf_port_item] = {
    .visible = true,
    .named = true,
  },
  [sym_tf_port_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_item] = {
    .visible = false,
    .named = true,
  },
  [sym__function_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__function_statement_or_null] = {
    .visible = false,
    .named = true,
  },
  [sym_jump_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_range] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_time_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__integral_number] = {
    .visible = false,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_implicit_data_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_param_assignments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_type_assignments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_variable_decl_assignments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_decl_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_declaration_nonansi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_declaration_nonansi_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_declaration_ansi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tf_port_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(315);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == '(') ADVANCE(360);
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '0') ADVANCE(387);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(353);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'q') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(353);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(477);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == 'f' ||
          lookahead == 'm' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(390);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(389);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(225);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(362);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(369);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(36);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(296);
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 300:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 301:
      if (lookahead == 'x') ADVANCE(226);
      END_STATE();
    case 302:
      if (lookahead == 'x') ADVANCE(228);
      END_STATE();
    case 303:
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 304:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(308);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(307);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 305:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(308);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(307);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 306:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(308);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(307);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == 'X' ||
          lookahead == 'Z' ||
          lookahead == 'x' ||
          lookahead == 'z') ADVANCE(388);
      END_STATE();
    case 307:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(380);
      if (lookahead == '?' ||
          lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 308:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == 'X' ||
          lookahead == 'Z' ||
          lookahead == 'x' ||
          lookahead == 'z') ADVANCE(382);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '?' ||
          lookahead == 'X' ||
          lookahead == 'Z' ||
          lookahead == 'x' ||
          lookahead == 'z') ADVANCE(383);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'X' ||
          lookahead == 'Z' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == 'x' ||
          lookahead == 'z') ADVANCE(384);
      END_STATE();
    case 311:
      if (eof) ADVANCE(315);
      if (lookahead == '$') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == '0') ADVANCE(387);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'b') ADVANCE(233);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(311)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(386);
      END_STATE();
    case 312:
      if (eof) ADVANCE(315);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'b') ADVANCE(233);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      END_STATE();
    case 313:
      if (eof) ADVANCE(315);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      END_STATE();
    case 314:
      if (eof) ADVANCE(315);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ';') ADVANCE(317);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
      END_STATE();
    case 315:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_endpackage);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_timeunit);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_timeprecision);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_localparam);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_automaitc);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_automaitc);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_shortint);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_longint);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_associative_dimension);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_queue_dimension);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_endfunction);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_constref);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_tf_port_declaration);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_tf_port_declaration);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_block_item_declaration);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_block_item_declaration);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_constant_expression);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_constant_param_expression);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_time_unit);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_time_unit);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (lookahead == '_') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_binary_number);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == 'X' ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          lookahead == 'x' ||
          lookahead == 'z') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_octal_number);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '?' ||
          lookahead == 'X' ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          lookahead == 'x' ||
          lookahead == 'z') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'X' ||
          lookahead == 'Z' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == 'x' ||
          lookahead == 'z') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_non_zero_unsigned_number);
      if (lookahead == '\'') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unsigned_number);
      if (lookahead == '\'') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unsigned_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unbased_unsized_literal);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_escaped_identifier);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_escaped_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '_') ADVANCE(474);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '_') ADVANCE(439);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '_') ADVANCE(416);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '_') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c') ADVANCE(451);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c') ADVANCE(487);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd') ADVANCE(429);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f') ADVANCE(393);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g') ADVANCE(466);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k') ADVANCE(370);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm') ADVANCE(397);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u') ADVANCE(479);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u') ADVANCE(422);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u') ADVANCE(488);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 311},
  [2] = {.lex_state = 312},
  [3] = {.lex_state = 312},
  [4] = {.lex_state = 312},
  [5] = {.lex_state = 311},
  [6] = {.lex_state = 311},
  [7] = {.lex_state = 312},
  [8] = {.lex_state = 311},
  [9] = {.lex_state = 312},
  [10] = {.lex_state = 312},
  [11] = {.lex_state = 312},
  [12] = {.lex_state = 312},
  [13] = {.lex_state = 312},
  [14] = {.lex_state = 312},
  [15] = {.lex_state = 312},
  [16] = {.lex_state = 312},
  [17] = {.lex_state = 312},
  [18] = {.lex_state = 312},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 312},
  [23] = {.lex_state = 312},
  [24] = {.lex_state = 312},
  [25] = {.lex_state = 312},
  [26] = {.lex_state = 313},
  [27] = {.lex_state = 312},
  [28] = {.lex_state = 314},
  [29] = {.lex_state = 312},
  [30] = {.lex_state = 312},
  [31] = {.lex_state = 312},
  [32] = {.lex_state = 312},
  [33] = {.lex_state = 312},
  [34] = {.lex_state = 312},
  [35] = {.lex_state = 312},
  [36] = {.lex_state = 312},
  [37] = {.lex_state = 312},
  [38] = {.lex_state = 312},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 312},
  [41] = {.lex_state = 312},
  [42] = {.lex_state = 312},
  [43] = {.lex_state = 312},
  [44] = {.lex_state = 312},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 312},
  [47] = {.lex_state = 312},
  [48] = {.lex_state = 312},
  [49] = {.lex_state = 312},
  [50] = {.lex_state = 312},
  [51] = {.lex_state = 312},
  [52] = {.lex_state = 312},
  [53] = {.lex_state = 312},
  [54] = {.lex_state = 312},
  [55] = {.lex_state = 312},
  [56] = {.lex_state = 312},
  [57] = {.lex_state = 312},
  [58] = {.lex_state = 312},
  [59] = {.lex_state = 312},
  [60] = {.lex_state = 312},
  [61] = {.lex_state = 312},
  [62] = {.lex_state = 312},
  [63] = {.lex_state = 312},
  [64] = {.lex_state = 312},
  [65] = {.lex_state = 312},
  [66] = {.lex_state = 312},
  [67] = {.lex_state = 312},
  [68] = {.lex_state = 312},
  [69] = {.lex_state = 312},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 312},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 312},
  [77] = {.lex_state = 312},
  [78] = {.lex_state = 312},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 312},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 312},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 311},
  [85] = {.lex_state = 312},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 312},
  [88] = {.lex_state = 312},
  [89] = {.lex_state = 312},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 311},
  [93] = {.lex_state = 311},
  [94] = {.lex_state = 311},
  [95] = {.lex_state = 311},
  [96] = {.lex_state = 311},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 311},
  [99] = {.lex_state = 311},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 312},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 312},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 312},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 311},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 311},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 311},
  [131] = {.lex_state = 312},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 28},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 28},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 311},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 311},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 311},
  [212] = {.lex_state = 311},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 311},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 311},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_endpackage] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_timeunit] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_timeprecision] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_localparam] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_automaitc] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_shortint] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_longint] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_associative_dimension] = ACTIONS(1),
    [sym_queue_dimension] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_endfunction] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_tf_port_declaration] = ACTIONS(1),
    [sym_block_item_declaration] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [sym_time_unit] = ACTIONS(1),
    [aux_sym_decimal_number_token1] = ACTIONS(1),
    [sym_binary_number] = ACTIONS(1),
    [sym_octal_number] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_non_zero_unsigned_number] = ACTIONS(1),
    [sym_unsigned_number] = ACTIONS(1),
    [sym_unbased_unsized_literal] = ACTIONS(1),
    [anon_sym_LPAREN_STAR] = ACTIONS(1),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [sym_escaped_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_text] = STATE(258),
    [sym__description] = STATE(4),
    [sym_package_declaration] = STATE(4),
    [sym_timeunits_declaration] = STATE(2),
    [sym_package_item] = STATE(4),
    [sym__package_or_generate_item_declaration] = STATE(46),
    [sym_local_parameter_declaration] = STATE(257),
    [sym_parameter_declaration] = STATE(257),
    [sym_data_declaration] = STATE(46),
    [sym_lifetime] = STATE(82),
    [sym_data_type] = STATE(170),
    [sym_data_type_or_implicit] = STATE(152),
    [sym_implicit_data_type] = STATE(170),
    [sym_integer_atom_type] = STATE(134),
    [sym_signing] = STATE(123),
    [sym_packed_dimension] = STATE(125),
    [sym_unsized_dimension] = STATE(159),
    [sym_function_declaration] = STATE(46),
    [sym_attribute_instance] = STATE(17),
    [aux_sym_source_text_repeat1] = STATE(4),
    [aux_sym__description_repeat1] = STATE(17),
    [aux_sym_implicit_data_type_repeat1] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_timeunit] = ACTIONS(9),
    [anon_sym_timeprecision] = ACTIONS(11),
    [anon_sym_localparam] = ACTIONS(13),
    [anon_sym_parameter] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(17),
    [anon_sym_var] = ACTIONS(19),
    [anon_sym_static] = ACTIONS(21),
    [anon_sym_automaitc] = ACTIONS(21),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_shortint] = ACTIONS(23),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_longint] = ACTIONS(23),
    [anon_sym_integer] = ACTIONS(23),
    [anon_sym_time] = ACTIONS(25),
    [anon_sym_signed] = ACTIONS(27),
    [anon_sym_unsigned] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_LPAREN_STAR] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(17), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    STATE(7), 4,
      sym__description,
      sym_package_declaration,
      sym_package_item,
      aux_sym_source_text_repeat1,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [91] = 25,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_package,
    ACTIONS(42), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_localparam,
    ACTIONS(48), 1,
      anon_sym_parameter,
    ACTIONS(51), 1,
      anon_sym_const,
    ACTIONS(54), 1,
      anon_sym_var,
    ACTIONS(63), 1,
      anon_sym_int,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_LPAREN_STAR,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(57), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(66), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(17), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    STATE(3), 4,
      sym__description,
      sym_package_declaration,
      sym_package_item,
      aux_sym_source_text_repeat1,
    ACTIONS(60), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [182] = 25,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(17), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    STATE(3), 4,
      sym__description,
      sym_package_declaration,
      sym_package_item,
      aux_sym_source_text_repeat1,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [273] = 27,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_timeunit,
    ACTIONS(11), 1,
      anon_sym_timeprecision,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(78), 1,
      anon_sym_endpackage,
    STATE(14), 1,
      sym_timeunits_declaration,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(25), 2,
      anon_sym_int,
      anon_sym_time,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(13), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 4,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
  [368] = 27,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_timeunit,
    ACTIONS(11), 1,
      anon_sym_timeprecision,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(80), 1,
      anon_sym_endpackage,
    STATE(15), 1,
      sym_timeunits_declaration,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(25), 2,
      anon_sym_int,
      anon_sym_time,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(11), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 4,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
  [463] = 25,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(17), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    STATE(3), 4,
      sym__description,
      sym_package_declaration,
      sym_package_item,
      aux_sym_source_text_repeat1,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [554] = 27,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_timeunit,
    ACTIONS(11), 1,
      anon_sym_timeprecision,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(84), 1,
      anon_sym_endpackage,
    STATE(10), 1,
      sym_timeunits_declaration,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(25), 2,
      anon_sym_int,
      anon_sym_time,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(12), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 4,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
  [649] = 24,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_endpackage,
    ACTIONS(91), 1,
      anon_sym_localparam,
    ACTIONS(94), 1,
      anon_sym_parameter,
    ACTIONS(97), 1,
      anon_sym_const,
    ACTIONS(100), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_int,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_function,
    ACTIONS(121), 1,
      anon_sym_LPAREN_STAR,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(103), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(112), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(9), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(106), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [735] = 24,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(124), 1,
      anon_sym_endpackage,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(16), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [821] = 24,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(78), 1,
      anon_sym_endpackage,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(9), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [907] = 24,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(124), 1,
      anon_sym_endpackage,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(9), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [993] = 24,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(84), 1,
      anon_sym_endpackage,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(9), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1079] = 24,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(84), 1,
      anon_sym_endpackage,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(12), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1165] = 24,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(78), 1,
      anon_sym_endpackage,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(13), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1251] = 24,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(126), 1,
      anon_sym_endpackage,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(9), 2,
      sym_package_item,
      aux_sym_package_declaration_repeat1,
    STATE(18), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1337] = 24,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(128), 1,
      anon_sym_package,
    STATE(65), 1,
      sym_package_item,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(23), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1422] = 23,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_localparam,
    ACTIONS(15), 1,
      anon_sym_parameter,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    STATE(69), 1,
      sym_package_item,
    STATE(82), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(152), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(23), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    STATE(257), 2,
      sym_local_parameter_declaration,
      sym_parameter_declaration,
    STATE(46), 3,
      sym__package_or_generate_item_declaration,
      sym_data_declaration,
      sym_function_declaration,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1504] = 20,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_var,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      anon_sym_constref,
    ACTIONS(138), 1,
      anon_sym_LPAREN_STAR,
    STATE(77), 1,
      sym_tf_port_direction,
    STATE(110), 1,
      sym_port_direction,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(159), 1,
      sym_unsized_dimension,
    STATE(161), 1,
      sym_data_type_or_implicit,
    STATE(177), 1,
      sym_tf_port_item,
    STATE(264), 1,
      sym_tf_port_list,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(21), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(130), 4,
      anon_sym_input,
      anon_sym_output,
      anon_sym_inout,
      anon_sym_ref,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1576] = 18,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_var,
    ACTIONS(136), 1,
      anon_sym_constref,
    ACTIONS(138), 1,
      anon_sym_LPAREN_STAR,
    STATE(77), 1,
      sym_tf_port_direction,
    STATE(110), 1,
      sym_port_direction,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(159), 1,
      sym_unsized_dimension,
    STATE(161), 1,
      sym_data_type_or_implicit,
    STATE(214), 1,
      sym_tf_port_item,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(21), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(130), 4,
      anon_sym_input,
      anon_sym_output,
      anon_sym_inout,
      anon_sym_ref,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1642] = 17,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_constref,
    ACTIONS(138), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(140), 1,
      anon_sym_var,
    STATE(74), 1,
      sym_tf_port_direction,
    STATE(110), 1,
      sym_port_direction,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(159), 1,
      sym_unsized_dimension,
    STATE(162), 1,
      sym_data_type_or_implicit,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(75), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(130), 4,
      anon_sym_input,
      anon_sym_output,
      anon_sym_inout,
      anon_sym_ref,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1705] = 15,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_void,
    STATE(30), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(159), 1,
      sym_unsized_dimension,
    STATE(195), 1,
      sym_function_data_type_or_implicit,
    STATE(232), 1,
      sym_data_type,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(231), 2,
      sym_implicit_data_type,
      sym_data_type_or_void,
    STATE(60), 3,
      sym__function_body_declaration,
      sym_function_body_declaration_nonansi,
      sym_function_body_declaration_ansi,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [1761] = 4,
    ACTIONS(146), 1,
      anon_sym_int,
    ACTIONS(148), 1,
      anon_sym_LPAREN_STAR,
    STATE(23), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    ACTIONS(144), 20,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [1794] = 3,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(155), 1,
      anon_sym_int,
    ACTIONS(151), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [1823] = 3,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(161), 1,
      anon_sym_int,
    ACTIONS(157), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [1852] = 3,
    ACTIONS(165), 1,
      anon_sym_timeprecision,
    ACTIONS(167), 2,
      anon_sym_int,
      anon_sym_time,
    ACTIONS(163), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [1881] = 3,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_int,
    ACTIONS(169), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [1910] = 3,
    ACTIONS(165), 1,
      anon_sym_timeunit,
    ACTIONS(167), 2,
      anon_sym_int,
      anon_sym_time,
    ACTIONS(163), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [1939] = 2,
    ACTIONS(177), 1,
      anon_sym_int,
    ACTIONS(175), 21,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LPAREN_STAR,
  [1966] = 13,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_void,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(159), 1,
      sym_unsized_dimension,
    STATE(195), 1,
      sym_function_data_type_or_implicit,
    STATE(232), 1,
      sym_data_type,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(231), 2,
      sym_implicit_data_type,
      sym_data_type_or_void,
    STATE(54), 3,
      sym__function_body_declaration,
      sym_function_body_declaration_nonansi,
      sym_function_body_declaration_ansi,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [2015] = 3,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_int,
    ACTIONS(179), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2044] = 3,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(189), 1,
      anon_sym_int,
    ACTIONS(185), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2073] = 3,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_int,
    ACTIONS(191), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2102] = 2,
    ACTIONS(199), 1,
      anon_sym_int,
    ACTIONS(197), 21,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LPAREN_STAR,
  [2129] = 3,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(205), 1,
      anon_sym_int,
    ACTIONS(201), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2158] = 2,
    ACTIONS(189), 1,
      anon_sym_int,
    ACTIONS(185), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2184] = 2,
    ACTIONS(209), 1,
      anon_sym_int,
    ACTIONS(207), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2210] = 2,
    ACTIONS(213), 1,
      anon_sym_int,
    ACTIONS(211), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2236] = 12,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      anon_sym_endfunction,
    ACTIONS(221), 1,
      anon_sym_return,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(219), 2,
      sym_tf_port_declaration,
      sym_block_item_declaration,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(45), 2,
      sym_tf_item_declaration,
      aux_sym_function_body_declaration_nonansi_repeat1,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(86), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [2282] = 2,
    ACTIONS(229), 1,
      anon_sym_int,
    ACTIONS(227), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2308] = 2,
    ACTIONS(233), 1,
      anon_sym_int,
    ACTIONS(231), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2334] = 2,
    ACTIONS(237), 1,
      anon_sym_int,
    ACTIONS(235), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2360] = 2,
    ACTIONS(241), 1,
      anon_sym_int,
    ACTIONS(239), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2386] = 3,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_int,
    ACTIONS(243), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2414] = 12,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_endfunction,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(219), 2,
      sym_tf_port_declaration,
      sym_block_item_declaration,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(101), 2,
      sym_tf_item_declaration,
      aux_sym_function_body_declaration_nonansi_repeat1,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(91), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [2460] = 2,
    ACTIONS(255), 1,
      anon_sym_int,
    ACTIONS(253), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2486] = 2,
    ACTIONS(195), 1,
      anon_sym_int,
    ACTIONS(191), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2512] = 3,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_int,
    ACTIONS(257), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2540] = 3,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_int,
    ACTIONS(263), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2568] = 2,
    ACTIONS(271), 1,
      anon_sym_int,
    ACTIONS(269), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2594] = 2,
    ACTIONS(275), 1,
      anon_sym_int,
    ACTIONS(273), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2620] = 2,
    ACTIONS(279), 1,
      anon_sym_int,
    ACTIONS(277), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2646] = 2,
    ACTIONS(183), 1,
      anon_sym_int,
    ACTIONS(179), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2672] = 2,
    ACTIONS(283), 1,
      anon_sym_int,
    ACTIONS(281), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2698] = 2,
    ACTIONS(287), 1,
      anon_sym_int,
    ACTIONS(285), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2724] = 3,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(293), 1,
      anon_sym_int,
    ACTIONS(289), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2752] = 3,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_int,
    ACTIONS(295), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2780] = 13,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_var,
    STATE(80), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(154), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [2828] = 2,
    ACTIONS(305), 1,
      anon_sym_int,
    ACTIONS(303), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2854] = 2,
    ACTIONS(309), 1,
      anon_sym_int,
    ACTIONS(307), 20,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2880] = 2,
    ACTIONS(267), 1,
      anon_sym_int,
    ACTIONS(263), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2905] = 2,
    ACTIONS(313), 1,
      anon_sym_int,
    ACTIONS(311), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [2930] = 12,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(153), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [2975] = 2,
    ACTIONS(299), 1,
      anon_sym_int,
    ACTIONS(295), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [3000] = 2,
    ACTIONS(317), 1,
      anon_sym_int,
    ACTIONS(315), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [3025] = 12,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_lifetime,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(154), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(21), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3070] = 2,
    ACTIONS(321), 1,
      anon_sym_int,
    ACTIONS(319), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [3095] = 2,
    ACTIONS(293), 1,
      anon_sym_int,
    ACTIONS(289), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [3120] = 2,
    ACTIONS(323), 1,
      anon_sym_int,
    ACTIONS(89), 18,
      anon_sym_SEMI,
      anon_sym_endpackage,
      anon_sym_localparam,
      anon_sym_parameter,
      anon_sym_const,
      anon_sym_var,
      anon_sym_static,
      anon_sym_automaitc,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_function,
      anon_sym_LPAREN_STAR,
  [3144] = 12,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      anon_sym_endfunction,
    ACTIONS(329), 1,
      sym_block_item_declaration,
    STATE(73), 1,
      aux_sym_function_body_declaration_ansi_repeat1,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(81), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3188] = 12,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      anon_sym_endfunction,
    ACTIONS(335), 1,
      sym_block_item_declaration,
    STATE(72), 1,
      aux_sym_function_body_declaration_ansi_repeat1,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(83), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3232] = 12,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      anon_sym_endfunction,
    ACTIONS(337), 1,
      sym_block_item_declaration,
    STATE(109), 1,
      aux_sym_function_body_declaration_ansi_repeat1,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(81), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3276] = 12,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(337), 1,
      sym_block_item_declaration,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_endfunction,
    STATE(109), 1,
      aux_sym_function_body_declaration_ansi_repeat1,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(90), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3320] = 11,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(343), 1,
      anon_sym_var,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(144), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3361] = 4,
    ACTIONS(146), 1,
      anon_sym_int,
    ACTIONS(345), 1,
      anon_sym_LPAREN_STAR,
    STATE(75), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    ACTIONS(144), 14,
      anon_sym_input,
      anon_sym_output,
      anon_sym_inout,
      anon_sym_ref,
      anon_sym_var,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_constref,
  [3388] = 11,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_type,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(145), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3429] = 11,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      anon_sym_var,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(159), 1,
      sym_unsized_dimension,
    STATE(162), 1,
      sym_data_type_or_implicit,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3470] = 11,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_type,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(156), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3511] = 10,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      anon_sym_endfunction,
    ACTIONS(357), 1,
      anon_sym_return,
    ACTIONS(363), 1,
      anon_sym_LPAREN_STAR,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(360), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(366), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(79), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3549] = 10,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(153), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3587] = 10,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(341), 1,
      anon_sym_endfunction,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(79), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3625] = 10,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(154), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3663] = 10,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(327), 1,
      anon_sym_endfunction,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(79), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3701] = 6,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(375), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(377), 1,
      sym_unsigned_number,
    STATE(251), 2,
      sym__expression,
      sym_primary,
    STATE(180), 5,
      sym__primary_literal,
      sym_time_literal,
      sym__number,
      sym__integral_number,
      sym_decimal_number,
    ACTIONS(373), 7,
      anon_sym_this,
      anon_sym_DOLLAR,
      anon_sym_null,
      sym_binary_number,
      sym_octal_number,
      sym_hex_number,
      sym_unbased_unsized_literal,
  [3731] = 10,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(149), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3769] = 10,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(251), 1,
      anon_sym_endfunction,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(79), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3807] = 10,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(146), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3845] = 10,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(159), 1,
      sym_unsized_dimension,
    STATE(162), 1,
      sym_data_type_or_implicit,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3883] = 10,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_signing,
    STATE(134), 1,
      sym_integer_atom_type,
    STATE(144), 1,
      sym_data_type_or_implicit,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    STATE(125), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
    STATE(170), 2,
      sym_data_type,
      sym_implicit_data_type,
    ACTIONS(23), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [3921] = 10,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    ACTIONS(379), 1,
      anon_sym_endfunction,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(79), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3959] = 10,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    ACTIONS(381), 1,
      anon_sym_endfunction,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(223), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(225), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(118), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(119), 2,
      sym__statement_item,
      sym_jump_statement,
    STATE(79), 4,
      sym_statement,
      sym__function_statement,
      sym__function_statement_or_null,
      aux_sym_function_body_declaration_nonansi_repeat2,
  [3997] = 5,
    ACTIONS(375), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(377), 1,
      sym_unsigned_number,
    STATE(226), 2,
      sym__expression,
      sym_primary,
    STATE(180), 5,
      sym__primary_literal,
      sym_time_literal,
      sym__number,
      sym__integral_number,
      sym_decimal_number,
    ACTIONS(373), 7,
      anon_sym_this,
      anon_sym_DOLLAR,
      anon_sym_null,
      sym_binary_number,
      sym_octal_number,
      sym_hex_number,
      sym_unbased_unsized_literal,
  [4024] = 5,
    ACTIONS(375), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(377), 1,
      sym_unsigned_number,
    STATE(235), 2,
      sym__expression,
      sym_primary,
    STATE(180), 5,
      sym__primary_literal,
      sym_time_literal,
      sym__number,
      sym__integral_number,
      sym_decimal_number,
    ACTIONS(373), 7,
      anon_sym_this,
      anon_sym_DOLLAR,
      anon_sym_null,
      sym_binary_number,
      sym_octal_number,
      sym_hex_number,
      sym_unbased_unsized_literal,
  [4051] = 5,
    ACTIONS(375), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(377), 1,
      sym_unsigned_number,
    STATE(233), 2,
      sym__expression,
      sym_primary,
    STATE(180), 5,
      sym__primary_literal,
      sym_time_literal,
      sym__number,
      sym__integral_number,
      sym_decimal_number,
    ACTIONS(373), 7,
      anon_sym_this,
      anon_sym_DOLLAR,
      anon_sym_null,
      sym_binary_number,
      sym_octal_number,
      sym_hex_number,
      sym_unbased_unsized_literal,
  [4078] = 5,
    ACTIONS(375), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(377), 1,
      sym_unsigned_number,
    STATE(227), 2,
      sym__expression,
      sym_primary,
    STATE(180), 5,
      sym__primary_literal,
      sym_time_literal,
      sym__number,
      sym__integral_number,
      sym_decimal_number,
    ACTIONS(373), 7,
      anon_sym_this,
      anon_sym_DOLLAR,
      anon_sym_null,
      sym_binary_number,
      sym_octal_number,
      sym_hex_number,
      sym_unbased_unsized_literal,
  [4105] = 5,
    ACTIONS(375), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(377), 1,
      sym_unsigned_number,
    STATE(216), 2,
      sym__expression,
      sym_primary,
    STATE(180), 5,
      sym__primary_literal,
      sym_time_literal,
      sym__number,
      sym__integral_number,
      sym_decimal_number,
    ACTIONS(373), 7,
      anon_sym_this,
      anon_sym_DOLLAR,
      anon_sym_null,
      sym_binary_number,
      sym_octal_number,
      sym_hex_number,
      sym_unbased_unsized_literal,
  [4132] = 2,
    ACTIONS(177), 1,
      anon_sym_int,
    ACTIONS(175), 15,
      anon_sym_input,
      anon_sym_output,
      anon_sym_inout,
      anon_sym_ref,
      anon_sym_var,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_constref,
      anon_sym_LPAREN_STAR,
  [4153] = 5,
    ACTIONS(375), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(377), 1,
      sym_unsigned_number,
    STATE(224), 2,
      sym__expression,
      sym_primary,
    STATE(180), 5,
      sym__primary_literal,
      sym_time_literal,
      sym__number,
      sym__integral_number,
      sym_decimal_number,
    ACTIONS(373), 7,
      anon_sym_this,
      anon_sym_DOLLAR,
      anon_sym_null,
      sym_binary_number,
      sym_octal_number,
      sym_hex_number,
      sym_unbased_unsized_literal,
  [4180] = 5,
    ACTIONS(375), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(377), 1,
      sym_unsigned_number,
    STATE(234), 2,
      sym__expression,
      sym_primary,
    STATE(180), 5,
      sym__primary_literal,
      sym_time_literal,
      sym__number,
      sym__integral_number,
      sym_decimal_number,
    ACTIONS(373), 7,
      anon_sym_this,
      anon_sym_DOLLAR,
      anon_sym_null,
      sym_binary_number,
      sym_octal_number,
      sym_hex_number,
      sym_unbased_unsized_literal,
  [4207] = 2,
    ACTIONS(199), 1,
      anon_sym_int,
    ACTIONS(197), 15,
      anon_sym_input,
      anon_sym_output,
      anon_sym_inout,
      anon_sym_ref,
      anon_sym_var,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
      anon_sym_constref,
      anon_sym_LPAREN_STAR,
  [4228] = 4,
    ACTIONS(383), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(387), 2,
      sym_tf_port_declaration,
      sym_block_item_declaration,
    STATE(101), 2,
      sym_tf_item_declaration,
      aux_sym_function_body_declaration_nonansi_repeat1,
    ACTIONS(385), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4249] = 5,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    STATE(102), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
    ACTIONS(390), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [4271] = 6,
    ACTIONS(400), 1,
      anon_sym_EQ,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    STATE(102), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4294] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4317] = 2,
    ACTIONS(412), 1,
      anon_sym_int,
    ACTIONS(410), 9,
      anon_sym_var,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
  [4332] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(115), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4355] = 2,
    ACTIONS(420), 1,
      anon_sym_int,
    ACTIONS(418), 9,
      anon_sym_void,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
  [4370] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(114), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4393] = 4,
    ACTIONS(426), 1,
      sym_block_item_declaration,
    STATE(109), 1,
      aux_sym_function_body_declaration_ansi_repeat1,
    ACTIONS(422), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(424), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4412] = 2,
    ACTIONS(431), 1,
      anon_sym_int,
    ACTIONS(429), 9,
      anon_sym_var,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_LBRACK,
  [4427] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4450] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(439), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(437), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    STATE(103), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4473] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4496] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4519] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4542] = 2,
    ACTIONS(445), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(447), 8,
      anon_sym_endfunction,
      sym_tf_port_declaration,
      sym_block_item_declaration,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4557] = 6,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_EQ,
    ACTIONS(404), 2,
      sym_associative_dimension,
      sym_queue_dimension,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(104), 2,
      sym_variable_dimension,
      aux_sym_variable_decl_assignment_repeat1,
    STATE(135), 2,
      sym_unpacked_dimension,
      sym_unsized_dimension,
  [4580] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(453), 1,
      anon_sym_SEMI,
    ACTIONS(455), 1,
      anon_sym_return,
    ACTIONS(457), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(23), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(121), 2,
      sym__statement_item,
      sym_jump_statement,
  [4602] = 2,
    ACTIONS(459), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(461), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4615] = 2,
    ACTIONS(463), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(465), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4628] = 2,
    ACTIONS(467), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(469), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4641] = 2,
    ACTIONS(471), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(473), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4654] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(475), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(477), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(128), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
  [4673] = 5,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(455), 1,
      anon_sym_return,
    ACTIONS(457), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(130), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(132), 2,
      sym__statement_item,
      sym_jump_statement,
  [4692] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(475), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(477), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(126), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
  [4711] = 5,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(484), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(126), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
  [4730] = 2,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(488), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4743] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_unsized_dimension,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(492), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    STATE(126), 2,
      sym_packed_dimension,
      aux_sym_implicit_data_type_repeat1,
  [4762] = 2,
    ACTIONS(494), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(496), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4775] = 5,
    ACTIONS(33), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(455), 1,
      anon_sym_return,
    ACTIONS(457), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(23), 2,
      sym_attribute_instance,
      aux_sym__description_repeat1,
    STATE(127), 2,
      sym__statement_item,
      sym_jump_statement,
  [4794] = 4,
    ACTIONS(500), 1,
      anon_sym_int,
    STATE(160), 1,
      sym_integer_atom_type,
    STATE(218), 1,
      sym_data_type,
    ACTIONS(498), 5,
      anon_sym_byte,
      anon_sym_shortint,
      anon_sym_longint,
      anon_sym_integer,
      anon_sym_time,
  [4811] = 2,
    ACTIONS(502), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN_STAR,
    ACTIONS(504), 6,
      anon_sym_endfunction,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4824] = 1,
    ACTIONS(506), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
      sym_associative_dimension,
      sym_queue_dimension,
      anon_sym_RPAREN,
  [4834] = 4,
    STATE(148), 1,
      sym_signing,
    ACTIONS(508), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(512), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4850] = 1,
    ACTIONS(514), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
      sym_associative_dimension,
      sym_queue_dimension,
      anon_sym_RPAREN,
  [4860] = 1,
    ACTIONS(516), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACK,
      sym_associative_dimension,
      sym_queue_dimension,
      anon_sym_RPAREN,
  [4870] = 2,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(518), 4,
      anon_sym_signed,
      anon_sym_unsigned,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4881] = 4,
    STATE(182), 1,
      sym_lifetime,
    STATE(253), 1,
      sym__identifier,
    ACTIONS(522), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(524), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4896] = 4,
    ACTIONS(528), 1,
      anon_sym_EQ,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    STATE(142), 2,
      sym_unpacked_dimension,
      aux_sym_param_assignment_repeat1,
  [4911] = 3,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    STATE(140), 2,
      sym_unpacked_dimension,
      aux_sym_param_assignment_repeat1,
    ACTIONS(532), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4924] = 2,
    ACTIONS(539), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    ACTIONS(537), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [4935] = 4,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(541), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    STATE(140), 2,
      sym_unpacked_dimension,
      aux_sym_param_assignment_repeat1,
  [4950] = 4,
    STATE(183), 1,
      sym_lifetime,
    STATE(262), 1,
      sym__identifier,
    ACTIONS(522), 2,
      anon_sym_static,
      anon_sym_automaitc,
    ACTIONS(545), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4965] = 3,
    STATE(106), 1,
      sym__identifier,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(547), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4977] = 4,
    STATE(139), 1,
      sym__identifier,
    STATE(205), 1,
      sym_param_assignment,
    STATE(243), 1,
      sym_list_of_param_assignments,
    ACTIONS(549), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [4991] = 4,
    STATE(112), 1,
      sym__identifier,
    STATE(201), 1,
      sym_variable_decl_assignment,
    STATE(260), 1,
      sym_list_of_variable_decl_assignments,
    ACTIONS(551), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5005] = 4,
    STATE(197), 1,
      sym_attr_spec,
    STATE(198), 1,
      sym_attr_name,
    STATE(199), 1,
      sym__identifier,
    ACTIONS(553), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5019] = 2,
    ACTIONS(557), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    ACTIONS(555), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5029] = 3,
    STATE(113), 1,
      sym__identifier,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(559), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5041] = 4,
    STATE(198), 1,
      sym_attr_name,
    STATE(199), 1,
      sym__identifier,
    STATE(213), 1,
      sym_attr_spec,
    ACTIONS(553), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5055] = 2,
    ACTIONS(561), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    ACTIONS(506), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [5065] = 4,
    STATE(112), 1,
      sym__identifier,
    STATE(201), 1,
      sym_variable_decl_assignment,
    STATE(256), 1,
      sym_list_of_variable_decl_assignments,
    ACTIONS(551), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5079] = 4,
    STATE(112), 1,
      sym__identifier,
    STATE(201), 1,
      sym_variable_decl_assignment,
    STATE(242), 1,
      sym_list_of_variable_decl_assignments,
    ACTIONS(551), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5093] = 4,
    STATE(112), 1,
      sym__identifier,
    STATE(201), 1,
      sym_variable_decl_assignment,
    STATE(238), 1,
      sym_list_of_variable_decl_assignments,
    ACTIONS(551), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5107] = 2,
    ACTIONS(565), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    ACTIONS(563), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [5117] = 4,
    STATE(139), 1,
      sym__identifier,
    STATE(205), 1,
      sym_param_assignment,
    STATE(259), 1,
      sym_list_of_param_assignments,
    ACTIONS(549), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5131] = 4,
    STATE(176), 1,
      sym_attr_spec,
    STATE(198), 1,
      sym_attr_name,
    STATE(199), 1,
      sym__identifier,
    ACTIONS(553), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5145] = 4,
    STATE(206), 1,
      sym__identifier,
    STATE(207), 1,
      sym_type_assignment,
    STATE(259), 1,
      sym_list_of_type_assignments,
    ACTIONS(567), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5159] = 2,
    ACTIONS(571), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
    ACTIONS(569), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [5169] = 3,
    STATE(148), 1,
      sym_signing,
    ACTIONS(27), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(510), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5181] = 3,
    STATE(117), 1,
      sym__identifier,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(575), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5193] = 3,
    STATE(108), 1,
      sym__identifier,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(577), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5205] = 4,
    STATE(206), 1,
      sym__identifier,
    STATE(207), 1,
      sym_type_assignment,
    STATE(243), 1,
      sym_list_of_type_assignments,
    ACTIONS(567), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5219] = 3,
    STATE(206), 1,
      sym__identifier,
    STATE(221), 1,
      sym_type_assignment,
    ACTIONS(567), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5230] = 1,
    ACTIONS(579), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5237] = 1,
    ACTIONS(520), 4,
      anon_sym_SEMI,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_COMMA,
  [5244] = 2,
    ACTIONS(583), 1,
      sym_time_unit,
    ACTIONS(581), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5253] = 3,
    STATE(112), 1,
      sym__identifier,
    STATE(220), 1,
      sym_variable_decl_assignment,
    ACTIONS(551), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5264] = 3,
    STATE(139), 1,
      sym__identifier,
    STATE(217), 1,
      sym_param_assignment,
    ACTIONS(549), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5275] = 2,
    ACTIONS(585), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(587), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5284] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_tf_port_list_repeat1,
  [5294] = 3,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_list_of_param_assignments_repeat1,
  [5304] = 3,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_list_of_param_assignments_repeat1,
  [5314] = 3,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_STAR_RPAREN,
    STATE(178), 1,
      aux_sym_attribute_instance_repeat1,
  [5324] = 3,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_list_of_type_assignments_repeat1,
  [5334] = 3,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_STAR_RPAREN,
    STATE(174), 1,
      aux_sym_attribute_instance_repeat1,
  [5344] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_tf_port_list_repeat1,
  [5354] = 3,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_STAR_RPAREN,
    STATE(178), 1,
      aux_sym_attribute_instance_repeat1,
  [5364] = 3,
    ACTIONS(619), 1,
      anon_sym_SEMI,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_list_of_variable_decl_assignments_repeat1,
  [5374] = 1,
    ACTIONS(624), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5380] = 2,
    STATE(68), 1,
      sym__identifier,
    ACTIONS(626), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5388] = 2,
    STATE(262), 1,
      sym__identifier,
    ACTIONS(545), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5396] = 2,
    STATE(239), 1,
      sym__identifier,
    ACTIONS(628), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5404] = 2,
    STATE(41), 1,
      sym__identifier,
    ACTIONS(630), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5412] = 3,
    ACTIONS(632), 1,
      anon_sym_RBRACK,
    ACTIONS(634), 1,
      sym_constant_expression,
    STATE(240), 1,
      sym_constant_range,
  [5422] = 2,
    STATE(36), 1,
      sym__identifier,
    ACTIONS(636), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5430] = 1,
    ACTIONS(581), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5436] = 3,
    ACTIONS(638), 1,
      anon_sym_RBRACK,
    ACTIONS(640), 1,
      sym_constant_expression,
    STATE(246), 1,
      sym_constant_range,
  [5446] = 3,
    ACTIONS(642), 1,
      anon_sym_SEMI,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_list_of_variable_decl_assignments_repeat1,
  [5456] = 2,
    STATE(43), 1,
      sym__identifier,
    ACTIONS(646), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5464] = 3,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_STAR_RPAREN,
    STATE(178), 1,
      aux_sym_attribute_instance_repeat1,
  [5474] = 2,
    STATE(62), 1,
      sym__identifier,
    ACTIONS(650), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5482] = 2,
    STATE(47), 1,
      sym__identifier,
    ACTIONS(652), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5490] = 2,
    STATE(61), 1,
      sym__identifier,
    ACTIONS(654), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5498] = 2,
    STATE(236), 1,
      sym__identifier,
    ACTIONS(656), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5506] = 2,
    STATE(64), 1,
      sym__identifier,
    ACTIONS(658), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5514] = 3,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_STAR_RPAREN,
    STATE(191), 1,
      aux_sym_attribute_instance_repeat1,
  [5524] = 2,
    ACTIONS(664), 1,
      anon_sym_EQ,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_STAR_RPAREN,
  [5532] = 1,
    ACTIONS(666), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR_RPAREN,
  [5538] = 2,
    STATE(53), 1,
      sym__identifier,
    ACTIONS(668), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5546] = 3,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      aux_sym_list_of_variable_decl_assignments_repeat1,
  [5556] = 2,
    STATE(37), 1,
      sym__identifier,
    ACTIONS(672), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5564] = 2,
    STATE(55), 1,
      sym__identifier,
    ACTIONS(674), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5572] = 3,
    ACTIONS(676), 1,
      anon_sym_SEMI,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_list_of_type_assignments_repeat1,
  [5582] = 3,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      aux_sym_list_of_param_assignments_repeat1,
  [5592] = 2,
    ACTIONS(685), 1,
      anon_sym_EQ,
    ACTIONS(683), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5600] = 3,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      aux_sym_list_of_type_assignments_repeat1,
  [5610] = 2,
    STATE(67), 1,
      sym__identifier,
    ACTIONS(689), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5618] = 3,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_tf_port_list_repeat1,
  [5628] = 2,
    ACTIONS(696), 1,
      anon_sym_COLON,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
  [5635] = 2,
    ACTIONS(700), 1,
      sym_unsigned_number,
    STATE(248), 1,
      sym_time_literal,
  [5642] = 2,
    ACTIONS(700), 1,
      sym_unsigned_number,
    STATE(263), 1,
      sym_time_literal,
  [5649] = 1,
    ACTIONS(617), 2,
      anon_sym_COMMA,
      anon_sym_STAR_RPAREN,
  [5654] = 1,
    ACTIONS(694), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5659] = 1,
    ACTIONS(702), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5664] = 1,
    ACTIONS(704), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5669] = 1,
    ACTIONS(593), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5674] = 1,
    ACTIONS(706), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5679] = 1,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_STAR_RPAREN,
  [5684] = 1,
    ACTIONS(619), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5689] = 1,
    ACTIONS(676), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5694] = 2,
    ACTIONS(700), 1,
      sym_unsigned_number,
    STATE(249), 1,
      sym_time_literal,
  [5701] = 1,
    ACTIONS(420), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5706] = 1,
    ACTIONS(710), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5711] = 1,
    ACTIONS(712), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5716] = 1,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5721] = 1,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5726] = 2,
    ACTIONS(634), 1,
      sym_constant_expression,
    STATE(240), 1,
      sym_constant_range,
  [5733] = 2,
    ACTIONS(716), 1,
      anon_sym_SEMI,
    ACTIONS(718), 1,
      anon_sym_SLASH,
  [5740] = 2,
    ACTIONS(700), 1,
      sym_unsigned_number,
    STATE(229), 1,
      sym_time_literal,
  [5747] = 1,
    ACTIONS(720), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5752] = 1,
    ACTIONS(722), 2,
      sym_escaped_identifier,
      sym_simple_identifier,
  [5757] = 1,
    ACTIONS(724), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5762] = 1,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5767] = 1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5772] = 2,
    ACTIONS(726), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
  [5779] = 1,
    ACTIONS(730), 1,
      sym_constant_expression,
  [5783] = 1,
    ACTIONS(732), 1,
      anon_sym_SEMI,
  [5787] = 1,
    ACTIONS(734), 1,
      anon_sym_SEMI,
  [5791] = 1,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
  [5795] = 1,
    ACTIONS(736), 1,
      sym_constant_param_expression,
  [5799] = 1,
    ACTIONS(738), 1,
      anon_sym_SEMI,
  [5803] = 1,
    ACTIONS(740), 1,
      anon_sym_SEMI,
  [5807] = 1,
    ACTIONS(696), 1,
      anon_sym_COLON,
  [5811] = 1,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [5815] = 1,
    ACTIONS(744), 1,
      anon_sym_RBRACK,
  [5819] = 1,
    ACTIONS(746), 1,
      sym_constant_expression,
  [5823] = 1,
    ACTIONS(748), 1,
      anon_sym_SEMI,
  [5827] = 1,
    ACTIONS(750), 1,
      anon_sym_SEMI,
  [5831] = 1,
    ACTIONS(583), 1,
      sym_time_unit,
  [5835] = 1,
    ACTIONS(752), 1,
      anon_sym_SEMI,
  [5839] = 1,
    ACTIONS(754), 1,
      sym_constant_param_expression,
  [5843] = 1,
    ACTIONS(756), 1,
      anon_sym_SEMI,
  [5847] = 1,
    ACTIONS(758), 1,
      anon_sym_COLON,
  [5851] = 1,
    ACTIONS(371), 1,
      anon_sym_SEMI,
  [5855] = 1,
    ACTIONS(760), 1,
      anon_sym_SEMI,
  [5859] = 1,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [5863] = 1,
    ACTIONS(764), 1,
      ts_builtin_sym_end,
  [5867] = 1,
    ACTIONS(766), 1,
      anon_sym_SEMI,
  [5871] = 1,
    ACTIONS(768), 1,
      anon_sym_SEMI,
  [5875] = 1,
    ACTIONS(770), 1,
      anon_sym_SEMI,
  [5879] = 1,
    ACTIONS(772), 1,
      anon_sym_SEMI,
  [5883] = 1,
    ACTIONS(774), 1,
      anon_sym_SEMI,
  [5887] = 1,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [5891] = 1,
    ACTIONS(778), 1,
      anon_sym_RBRACK,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 368,
  [SMALL_STATE(7)] = 463,
  [SMALL_STATE(8)] = 554,
  [SMALL_STATE(9)] = 649,
  [SMALL_STATE(10)] = 735,
  [SMALL_STATE(11)] = 821,
  [SMALL_STATE(12)] = 907,
  [SMALL_STATE(13)] = 993,
  [SMALL_STATE(14)] = 1079,
  [SMALL_STATE(15)] = 1165,
  [SMALL_STATE(16)] = 1251,
  [SMALL_STATE(17)] = 1337,
  [SMALL_STATE(18)] = 1422,
  [SMALL_STATE(19)] = 1504,
  [SMALL_STATE(20)] = 1576,
  [SMALL_STATE(21)] = 1642,
  [SMALL_STATE(22)] = 1705,
  [SMALL_STATE(23)] = 1761,
  [SMALL_STATE(24)] = 1794,
  [SMALL_STATE(25)] = 1823,
  [SMALL_STATE(26)] = 1852,
  [SMALL_STATE(27)] = 1881,
  [SMALL_STATE(28)] = 1910,
  [SMALL_STATE(29)] = 1939,
  [SMALL_STATE(30)] = 1966,
  [SMALL_STATE(31)] = 2015,
  [SMALL_STATE(32)] = 2044,
  [SMALL_STATE(33)] = 2073,
  [SMALL_STATE(34)] = 2102,
  [SMALL_STATE(35)] = 2129,
  [SMALL_STATE(36)] = 2158,
  [SMALL_STATE(37)] = 2184,
  [SMALL_STATE(38)] = 2210,
  [SMALL_STATE(39)] = 2236,
  [SMALL_STATE(40)] = 2282,
  [SMALL_STATE(41)] = 2308,
  [SMALL_STATE(42)] = 2334,
  [SMALL_STATE(43)] = 2360,
  [SMALL_STATE(44)] = 2386,
  [SMALL_STATE(45)] = 2414,
  [SMALL_STATE(46)] = 2460,
  [SMALL_STATE(47)] = 2486,
  [SMALL_STATE(48)] = 2512,
  [SMALL_STATE(49)] = 2540,
  [SMALL_STATE(50)] = 2568,
  [SMALL_STATE(51)] = 2594,
  [SMALL_STATE(52)] = 2620,
  [SMALL_STATE(53)] = 2646,
  [SMALL_STATE(54)] = 2672,
  [SMALL_STATE(55)] = 2698,
  [SMALL_STATE(56)] = 2724,
  [SMALL_STATE(57)] = 2752,
  [SMALL_STATE(58)] = 2780,
  [SMALL_STATE(59)] = 2828,
  [SMALL_STATE(60)] = 2854,
  [SMALL_STATE(61)] = 2880,
  [SMALL_STATE(62)] = 2905,
  [SMALL_STATE(63)] = 2930,
  [SMALL_STATE(64)] = 2975,
  [SMALL_STATE(65)] = 3000,
  [SMALL_STATE(66)] = 3025,
  [SMALL_STATE(67)] = 3070,
  [SMALL_STATE(68)] = 3095,
  [SMALL_STATE(69)] = 3120,
  [SMALL_STATE(70)] = 3144,
  [SMALL_STATE(71)] = 3188,
  [SMALL_STATE(72)] = 3232,
  [SMALL_STATE(73)] = 3276,
  [SMALL_STATE(74)] = 3320,
  [SMALL_STATE(75)] = 3361,
  [SMALL_STATE(76)] = 3388,
  [SMALL_STATE(77)] = 3429,
  [SMALL_STATE(78)] = 3470,
  [SMALL_STATE(79)] = 3511,
  [SMALL_STATE(80)] = 3549,
  [SMALL_STATE(81)] = 3587,
  [SMALL_STATE(82)] = 3625,
  [SMALL_STATE(83)] = 3663,
  [SMALL_STATE(84)] = 3701,
  [SMALL_STATE(85)] = 3731,
  [SMALL_STATE(86)] = 3769,
  [SMALL_STATE(87)] = 3807,
  [SMALL_STATE(88)] = 3845,
  [SMALL_STATE(89)] = 3883,
  [SMALL_STATE(90)] = 3921,
  [SMALL_STATE(91)] = 3959,
  [SMALL_STATE(92)] = 3997,
  [SMALL_STATE(93)] = 4024,
  [SMALL_STATE(94)] = 4051,
  [SMALL_STATE(95)] = 4078,
  [SMALL_STATE(96)] = 4105,
  [SMALL_STATE(97)] = 4132,
  [SMALL_STATE(98)] = 4153,
  [SMALL_STATE(99)] = 4180,
  [SMALL_STATE(100)] = 4207,
  [SMALL_STATE(101)] = 4228,
  [SMALL_STATE(102)] = 4249,
  [SMALL_STATE(103)] = 4271,
  [SMALL_STATE(104)] = 4294,
  [SMALL_STATE(105)] = 4317,
  [SMALL_STATE(106)] = 4332,
  [SMALL_STATE(107)] = 4355,
  [SMALL_STATE(108)] = 4370,
  [SMALL_STATE(109)] = 4393,
  [SMALL_STATE(110)] = 4412,
  [SMALL_STATE(111)] = 4427,
  [SMALL_STATE(112)] = 4450,
  [SMALL_STATE(113)] = 4473,
  [SMALL_STATE(114)] = 4496,
  [SMALL_STATE(115)] = 4519,
  [SMALL_STATE(116)] = 4542,
  [SMALL_STATE(117)] = 4557,
  [SMALL_STATE(118)] = 4580,
  [SMALL_STATE(119)] = 4602,
  [SMALL_STATE(120)] = 4615,
  [SMALL_STATE(121)] = 4628,
  [SMALL_STATE(122)] = 4641,
  [SMALL_STATE(123)] = 4654,
  [SMALL_STATE(124)] = 4673,
  [SMALL_STATE(125)] = 4692,
  [SMALL_STATE(126)] = 4711,
  [SMALL_STATE(127)] = 4730,
  [SMALL_STATE(128)] = 4743,
  [SMALL_STATE(129)] = 4762,
  [SMALL_STATE(130)] = 4775,
  [SMALL_STATE(131)] = 4794,
  [SMALL_STATE(132)] = 4811,
  [SMALL_STATE(133)] = 4824,
  [SMALL_STATE(134)] = 4834,
  [SMALL_STATE(135)] = 4850,
  [SMALL_STATE(136)] = 4860,
  [SMALL_STATE(137)] = 4870,
  [SMALL_STATE(138)] = 4881,
  [SMALL_STATE(139)] = 4896,
  [SMALL_STATE(140)] = 4911,
  [SMALL_STATE(141)] = 4924,
  [SMALL_STATE(142)] = 4935,
  [SMALL_STATE(143)] = 4950,
  [SMALL_STATE(144)] = 4965,
  [SMALL_STATE(145)] = 4977,
  [SMALL_STATE(146)] = 4991,
  [SMALL_STATE(147)] = 5005,
  [SMALL_STATE(148)] = 5019,
  [SMALL_STATE(149)] = 5029,
  [SMALL_STATE(150)] = 5041,
  [SMALL_STATE(151)] = 5055,
  [SMALL_STATE(152)] = 5065,
  [SMALL_STATE(153)] = 5079,
  [SMALL_STATE(154)] = 5093,
  [SMALL_STATE(155)] = 5107,
  [SMALL_STATE(156)] = 5117,
  [SMALL_STATE(157)] = 5131,
  [SMALL_STATE(158)] = 5145,
  [SMALL_STATE(159)] = 5159,
  [SMALL_STATE(160)] = 5169,
  [SMALL_STATE(161)] = 5181,
  [SMALL_STATE(162)] = 5193,
  [SMALL_STATE(163)] = 5205,
  [SMALL_STATE(164)] = 5219,
  [SMALL_STATE(165)] = 5230,
  [SMALL_STATE(166)] = 5237,
  [SMALL_STATE(167)] = 5244,
  [SMALL_STATE(168)] = 5253,
  [SMALL_STATE(169)] = 5264,
  [SMALL_STATE(170)] = 5275,
  [SMALL_STATE(171)] = 5284,
  [SMALL_STATE(172)] = 5294,
  [SMALL_STATE(173)] = 5304,
  [SMALL_STATE(174)] = 5314,
  [SMALL_STATE(175)] = 5324,
  [SMALL_STATE(176)] = 5334,
  [SMALL_STATE(177)] = 5344,
  [SMALL_STATE(178)] = 5354,
  [SMALL_STATE(179)] = 5364,
  [SMALL_STATE(180)] = 5374,
  [SMALL_STATE(181)] = 5380,
  [SMALL_STATE(182)] = 5388,
  [SMALL_STATE(183)] = 5396,
  [SMALL_STATE(184)] = 5404,
  [SMALL_STATE(185)] = 5412,
  [SMALL_STATE(186)] = 5422,
  [SMALL_STATE(187)] = 5430,
  [SMALL_STATE(188)] = 5436,
  [SMALL_STATE(189)] = 5446,
  [SMALL_STATE(190)] = 5456,
  [SMALL_STATE(191)] = 5464,
  [SMALL_STATE(192)] = 5474,
  [SMALL_STATE(193)] = 5482,
  [SMALL_STATE(194)] = 5490,
  [SMALL_STATE(195)] = 5498,
  [SMALL_STATE(196)] = 5506,
  [SMALL_STATE(197)] = 5514,
  [SMALL_STATE(198)] = 5524,
  [SMALL_STATE(199)] = 5532,
  [SMALL_STATE(200)] = 5538,
  [SMALL_STATE(201)] = 5546,
  [SMALL_STATE(202)] = 5556,
  [SMALL_STATE(203)] = 5564,
  [SMALL_STATE(204)] = 5572,
  [SMALL_STATE(205)] = 5582,
  [SMALL_STATE(206)] = 5592,
  [SMALL_STATE(207)] = 5600,
  [SMALL_STATE(208)] = 5610,
  [SMALL_STATE(209)] = 5618,
  [SMALL_STATE(210)] = 5628,
  [SMALL_STATE(211)] = 5635,
  [SMALL_STATE(212)] = 5642,
  [SMALL_STATE(213)] = 5649,
  [SMALL_STATE(214)] = 5654,
  [SMALL_STATE(215)] = 5659,
  [SMALL_STATE(216)] = 5664,
  [SMALL_STATE(217)] = 5669,
  [SMALL_STATE(218)] = 5674,
  [SMALL_STATE(219)] = 5679,
  [SMALL_STATE(220)] = 5684,
  [SMALL_STATE(221)] = 5689,
  [SMALL_STATE(222)] = 5694,
  [SMALL_STATE(223)] = 5701,
  [SMALL_STATE(224)] = 5706,
  [SMALL_STATE(225)] = 5711,
  [SMALL_STATE(226)] = 5716,
  [SMALL_STATE(227)] = 5721,
  [SMALL_STATE(228)] = 5726,
  [SMALL_STATE(229)] = 5733,
  [SMALL_STATE(230)] = 5740,
  [SMALL_STATE(231)] = 5747,
  [SMALL_STATE(232)] = 5752,
  [SMALL_STATE(233)] = 5757,
  [SMALL_STATE(234)] = 5762,
  [SMALL_STATE(235)] = 5767,
  [SMALL_STATE(236)] = 5772,
  [SMALL_STATE(237)] = 5779,
  [SMALL_STATE(238)] = 5783,
  [SMALL_STATE(239)] = 5787,
  [SMALL_STATE(240)] = 5791,
  [SMALL_STATE(241)] = 5795,
  [SMALL_STATE(242)] = 5799,
  [SMALL_STATE(243)] = 5803,
  [SMALL_STATE(244)] = 5807,
  [SMALL_STATE(245)] = 5811,
  [SMALL_STATE(246)] = 5815,
  [SMALL_STATE(247)] = 5819,
  [SMALL_STATE(248)] = 5823,
  [SMALL_STATE(249)] = 5827,
  [SMALL_STATE(250)] = 5831,
  [SMALL_STATE(251)] = 5835,
  [SMALL_STATE(252)] = 5839,
  [SMALL_STATE(253)] = 5843,
  [SMALL_STATE(254)] = 5847,
  [SMALL_STATE(255)] = 5851,
  [SMALL_STATE(256)] = 5855,
  [SMALL_STATE(257)] = 5859,
  [SMALL_STATE(258)] = 5863,
  [SMALL_STATE(259)] = 5867,
  [SMALL_STATE(260)] = 5871,
  [SMALL_STATE(261)] = 5875,
  [SMALL_STATE(262)] = 5879,
  [SMALL_STATE(263)] = 5883,
  [SMALL_STATE(264)] = 5887,
  [SMALL_STATE(265)] = 5891,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_text, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_text, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(138),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(46),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(76),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(78),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(58),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(66),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(107),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(137),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(137),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(141),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(188),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(22),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_text_repeat1, 2), SHIFT_REPEAT(147),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_text, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(46),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(78),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(58),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(66),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(107),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(137),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(137),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(141),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(188),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(22),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_declaration_repeat1, 2), SHIFT_REPEAT(147),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_repeat1, 2), SHIFT_REPEAT(147),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_ansi, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_ansi, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_ansi, 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_ansi, 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeunits_declaration, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeunits_declaration, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_nonansi, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_nonansi, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_instance, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_instance, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_ansi, 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_ansi, 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_nonansi, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_nonansi, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_ansi, 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_ansi, 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_instance, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_instance, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_nonansi, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_nonansi, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_nonansi, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_nonansi, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeunits_declaration, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeunits_declaration, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_ansi, 11),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_ansi, 11),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_ansi, 10),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_ansi, 10),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_item, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_item, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 6),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeunits_declaration, 6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeunits_declaration, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 6),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 6),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_declaration_nonansi, 8),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_declaration_nonansi, 8),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 7),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 7),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 8),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_or_generate_item_declaration, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_or_generate_item_declaration, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 10),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 10),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__description, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 9),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 9),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_package_declaration_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_repeat1, 2), SHIFT_REPEAT(157),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat2, 2), SHIFT_REPEAT(79),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat2, 2),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat2, 2), SHIFT_REPEAT(84),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat2, 2), SHIFT_REPEAT(255),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat2, 2), SHIFT_REPEAT(147),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat2, 2), SHIFT_REPEAT(254),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat1, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_declaration_nonansi_repeat1, 2), SHIFT_REPEAT(116),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_decl_assignment_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_decl_assignment_repeat1, 2), SHIFT_REPEAT(185),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_decl_assignment_repeat1, 2), SHIFT_REPEAT(135),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_decl_assignment, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_item, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_direction, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port_direction, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_item, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lifetime, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lifetime, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_declaration_ansi_repeat1, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_body_declaration_ansi_repeat1, 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_declaration_ansi_repeat1, 2), SHIFT_REPEAT(109),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_direction, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tf_port_direction, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_item, 6),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_decl_assignment, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_item, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_item_declaration, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tf_item_declaration, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_item, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_statement, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_statement, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_statement_or_null, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_statement_or_null, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_data_type, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_data_type, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_data_type_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_data_type_repeat1, 2), SHIFT_REPEAT(188),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_data_type_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_data_type, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_data_type, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_statement, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_statement, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsized_dimension, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_dimension, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unpacked_dimension, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_atom_type, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_atom_type, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_assignment, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_assignment_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_assignment_repeat1, 2), SHIFT_REPEAT(228),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signing, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signing, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_assignment, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsized_dimension, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_dimension, 3),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_dimension, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packed_dimension, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packed_dimension, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_item, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_literal, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_or_implicit, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type_or_implicit, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_list, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_param_assignments_repeat1, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_param_assignments_repeat1, 2), SHIFT_REPEAT(169),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_param_assignments, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_type_assignments, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_list, 1),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_instance_repeat1, 2), SHIFT_REPEAT(150),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_instance_repeat1, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_variable_decl_assignments_repeat1, 2),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_variable_decl_assignments_repeat1, 2), SHIFT_REPEAT(168),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_variable_decl_assignments, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_variable_decl_assignments, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_type_assignments_repeat1, 2),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_type_assignments_repeat1, 2), SHIFT_REPEAT(164),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_param_assignments, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_assignment, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_type_assignments, 1),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tf_port_list_repeat1, 2), SHIFT_REPEAT(20),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tf_port_list_repeat1, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_assignment, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_decl_assignment, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_assignment, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_item, 8),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_assignment, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tf_port_item, 7),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_data_type_or_implicit, 1),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_type_or_void, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_decl_assignment, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_parameter_declaration, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [764] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_range, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sv(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
