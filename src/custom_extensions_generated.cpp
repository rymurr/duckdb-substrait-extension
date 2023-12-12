#include "custom_extensions/custom_extensions.hpp"

//! This class is auto-generated by scripts/geenrate_extension_initializer.py
//! It depends on substrait/extensions yaml files
namespace duckdb {

void SubstraitCustomFunctions::Initialize() {
	InsertCustomFunction("extract", {"", "timestamp_tz", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("extract", {"", "timestamp"}, "functions_datetime.yaml");
	InsertCustomFunction("extract", {"", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("extract", {"", "time"}, "functions_datetime.yaml");
	InsertCustomFunction("extract", {"", "", "timestamp_tz", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("extract", {"", "", "timestamp"}, "functions_datetime.yaml");
	InsertCustomFunction("extract", {"", "", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("extract_boolean", {"", "timestamp"}, "functions_datetime.yaml");
	InsertCustomFunction("extract_boolean", {"", "timestamp_tz", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("extract_boolean", {"", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("add", {"timestamp", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("add", {"timestamp_tz", "interval_year", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("add", {"date", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("add", {"timestamp", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("add", {"timestamp_tz", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("add", {"date", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("add_intervals", {"interval_day", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("add_intervals", {"interval_year", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("subtract", {"timestamp", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("subtract", {"timestamp_tz", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("subtract", {"timestamp_tz", "interval_year", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("subtract", {"date", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("subtract", {"timestamp", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("subtract", {"timestamp_tz", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("subtract", {"date", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("lte", {"timestamp", "timestamp"}, "functions_datetime.yaml");
	InsertCustomFunction("lte", {"timestamp_tz", "timestamp_tz"}, "functions_datetime.yaml");
	InsertCustomFunction("lte", {"date", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("lte", {"interval_day", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("lte", {"interval_year", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("lt", {"timestamp", "timestamp"}, "functions_datetime.yaml");
	InsertCustomFunction("lt", {"timestamp_tz", "timestamp_tz"}, "functions_datetime.yaml");
	InsertCustomFunction("lt", {"date", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("lt", {"interval_day", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("lt", {"interval_year", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("gte", {"timestamp", "timestamp"}, "functions_datetime.yaml");
	InsertCustomFunction("gte", {"timestamp_tz", "timestamp_tz"}, "functions_datetime.yaml");
	InsertCustomFunction("gte", {"date", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("gte", {"interval_day", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("gte", {"interval_year", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("gt", {"timestamp", "timestamp"}, "functions_datetime.yaml");
	InsertCustomFunction("gt", {"timestamp_tz", "timestamp_tz"}, "functions_datetime.yaml");
	InsertCustomFunction("gt", {"date", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("gt", {"interval_day", "interval_day"}, "functions_datetime.yaml");
	InsertCustomFunction("gt", {"interval_year", "interval_year"}, "functions_datetime.yaml");
	InsertCustomFunction("assume_timezone", {"timestamp", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("assume_timezone", {"date", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("local_timestamp", {"timestamp_tz", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("strptime_time", {"string", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("strptime_date", {"string", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("strptime_timestamp", {"string", "string", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("strptime_timestamp", {"string", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("strftime", {"timestamp", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("strftime", {"timestamp_tz", "string", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("strftime", {"date", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("strftime", {"time", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("round_temporal", {"timestamp", "", "", "i64", "timestamp"}, "functions_datetime.yaml");
	InsertCustomFunction("round_temporal", {"timestamp_tz", "", "", "i64", "string", "timestamp_tz"},
	                     "functions_datetime.yaml");
	InsertCustomFunction("round_temporal", {"date", "", "", "i64", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("round_temporal", {"time", "", "", "i64", "time"}, "functions_datetime.yaml");
	InsertCustomFunction("round_calendar", {"timestamp", "", "", "", "i64"}, "functions_datetime.yaml");
	InsertCustomFunction("round_calendar", {"timestamp_tz", "", "", "", "i64", "string"}, "functions_datetime.yaml");
	InsertCustomFunction("round_calendar", {"date", "", "", "", "i64", "date"}, "functions_datetime.yaml");
	InsertCustomFunction("round_calendar", {"time", "", "", "", "i64", "time"}, "functions_datetime.yaml");
	InsertCustomFunction("not_equal", {"any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("equal", {"any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("is_not_distinct_from", {"any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("lt", {"any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("gt", {"any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("lte", {"any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("gte", {"any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("between", {"any1", "any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("is_null", {"any1"}, "functions_comparison.yaml");
	InsertCustomFunction("is_not_null", {"any1"}, "functions_comparison.yaml");
	InsertCustomFunction("is_nan", {"fp32"}, "functions_comparison.yaml");
	InsertCustomFunction("is_nan", {"fp64"}, "functions_comparison.yaml");
	InsertCustomFunction("is_finite", {"fp32"}, "functions_comparison.yaml");
	InsertCustomFunction("is_finite", {"fp64"}, "functions_comparison.yaml");
	InsertCustomFunction("is_infinite", {"fp32"}, "functions_comparison.yaml");
	InsertCustomFunction("is_infinite", {"fp64"}, "functions_comparison.yaml");
	InsertCustomFunction("nullif", {"any1", "any1"}, "functions_comparison.yaml");
	InsertCustomFunction("coalesce", {"any1"}, "functions_comparison.yaml");
	InsertCustomFunction("least", {"T"}, "functions_comparison.yaml");
	InsertCustomFunction("least_skip_null", {"T"}, "functions_comparison.yaml");
	InsertCustomFunction("greatest", {"T"}, "functions_comparison.yaml");
	InsertCustomFunction("greatest_skip_null", {"T"}, "functions_comparison.yaml");
	InsertCustomFunction("point", {"fp64", "fp64"}, "functions_geometry.yaml");
	InsertCustomFunction("make_line", {"u!geometry", "u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("x_coordinate", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("y_coordinate", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("num_points", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("is_empty", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("is_closed", {"geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("is_simple", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("is_ring", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("geometry_type", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("envelope", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("dimension", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("is_valid", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("collection_extract", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("collection_extract", {"u!geometry", "i8"}, "functions_geometry.yaml");
	InsertCustomFunction("flip_coordinates", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("remove_repeated_points", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("remove_repeated_points", {"u!geometry", "fp64"}, "functions_geometry.yaml");
	InsertCustomFunction("buffer", {"u!geometry", "fp64"}, "functions_geometry.yaml");
	InsertCustomFunction("centroid", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("minimum_bounding_circle", {"u!geometry"}, "functions_geometry.yaml");
	InsertCustomFunction("ln", {"fp32"}, "functions_logarithmic.yaml");
	InsertCustomFunction("ln", {"fp64"}, "functions_logarithmic.yaml");
	InsertCustomFunction("log10", {"fp32"}, "functions_logarithmic.yaml");
	InsertCustomFunction("log10", {"fp64"}, "functions_logarithmic.yaml");
	InsertCustomFunction("log2", {"fp32"}, "functions_logarithmic.yaml");
	InsertCustomFunction("log2", {"fp64"}, "functions_logarithmic.yaml");
	InsertCustomFunction("logb", {"fp32", "fp32"}, "functions_logarithmic.yaml");
	InsertCustomFunction("logb", {"fp64", "fp64"}, "functions_logarithmic.yaml");
	InsertCustomFunction("log1p", {"fp32"}, "functions_logarithmic.yaml");
	InsertCustomFunction("log1p", {"fp64"}, "functions_logarithmic.yaml");
	InsertCustomFunction("add", {"unknown", "unknown"}, "unknown.yaml");
	InsertCustomFunction("subtract", {"unknown", "unknown"}, "unknown.yaml");
	InsertCustomFunction("multiply", {"unknown", "unknown"}, "unknown.yaml");
	InsertCustomFunction("divide", {"unknown", "unknown"}, "unknown.yaml");
	InsertCustomFunction("modulus", {"unknown", "unknown"}, "unknown.yaml");
	InsertCustomFunction("concat", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("concat", {"string"}, "functions_string.yaml");
	InsertCustomFunction("like", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("like", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("substring", {"varchar", "i32", "i32"}, "functions_string.yaml");
	InsertCustomFunction("substring", {"string", "i32", "i32"}, "functions_string.yaml");
	InsertCustomFunction("substring", {"fixedchar", "i32", "i32"}, "functions_string.yaml");
	InsertCustomFunction("substring", {"varchar", "i32"}, "functions_string.yaml");
	InsertCustomFunction("substring", {"string", "i32"}, "functions_string.yaml");
	InsertCustomFunction("substring", {"fixedchar", "i32"}, "functions_string.yaml");
	InsertCustomFunction("regexp_match_substring", {"varchar", "varchar", "i64", "i64", "i64"},
	                     "functions_string.yaml");
	InsertCustomFunction("regexp_match_substring", {"string", "string", "i64", "i64", "i64"}, "functions_string.yaml");
	InsertCustomFunction("regexp_match_substring_all", {"varchar", "varchar", "i64", "i64"}, "functions_string.yaml");
	InsertCustomFunction("regexp_match_substring_all", {"string", "string", "i64", "i64"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"varchar", "string"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"varchar", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"string", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"string", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"fixedchar", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"fixedchar", "string"}, "functions_string.yaml");
	InsertCustomFunction("starts_with", {"fixedchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"varchar", "string"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"varchar", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"string", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"string", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"fixedchar", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"fixedchar", "string"}, "functions_string.yaml");
	InsertCustomFunction("ends_with", {"fixedchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"varchar", "string"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"varchar", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"string", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"string", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"fixedchar", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"fixedchar", "string"}, "functions_string.yaml");
	InsertCustomFunction("contains", {"fixedchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("strpos", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("strpos", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("strpos", {"fixedchar", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("regexp_strpos", {"varchar", "varchar", "i64", "i64"}, "functions_string.yaml");
	InsertCustomFunction("regexp_strpos", {"string", "string", "i64", "i64"}, "functions_string.yaml");
	InsertCustomFunction("count_substring", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("count_substring", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("count_substring", {"fixedchar", "fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("regexp_count_substring", {"string", "string", "i64"}, "functions_string.yaml");
	InsertCustomFunction("regexp_count_substring", {"varchar", "varchar", "i64"}, "functions_string.yaml");
	InsertCustomFunction("regexp_count_substring", {"fixedchar", "fixedchar", "i64"}, "functions_string.yaml");
	InsertCustomFunction("replace", {"string", "string", "string"}, "functions_string.yaml");
	InsertCustomFunction("replace", {"varchar", "varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("concat_ws", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("concat_ws", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("repeat", {"string", "i64"}, "functions_string.yaml");
	InsertCustomFunction("repeat", {"varchar", "i64", "i64"}, "functions_string.yaml");
	InsertCustomFunction("reverse", {"string"}, "functions_string.yaml");
	InsertCustomFunction("reverse", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("reverse", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("replace_slice", {"string", "i64", "i64", "string"}, "functions_string.yaml");
	InsertCustomFunction("replace_slice", {"varchar", "i64", "i64", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("lower", {"string"}, "functions_string.yaml");
	InsertCustomFunction("lower", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("lower", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("upper", {"string"}, "functions_string.yaml");
	InsertCustomFunction("upper", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("upper", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("swapcase", {"string"}, "functions_string.yaml");
	InsertCustomFunction("swapcase", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("swapcase", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("capitalize", {"string"}, "functions_string.yaml");
	InsertCustomFunction("capitalize", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("capitalize", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("title", {"string"}, "functions_string.yaml");
	InsertCustomFunction("title", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("title", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("char_length", {"string"}, "functions_string.yaml");
	InsertCustomFunction("char_length", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("char_length", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("bit_length", {"string"}, "functions_string.yaml");
	InsertCustomFunction("bit_length", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("bit_length", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("octet_length", {"string"}, "functions_string.yaml");
	InsertCustomFunction("octet_length", {"varchar"}, "functions_string.yaml");
	InsertCustomFunction("octet_length", {"fixedchar"}, "functions_string.yaml");
	InsertCustomFunction("regexp_replace", {"string", "string", "string", "i64", "i64"}, "functions_string.yaml");
	InsertCustomFunction("regexp_replace", {"varchar", "varchar", "varchar", "i64", "i64"}, "functions_string.yaml");
	InsertCustomFunction("ltrim", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("ltrim", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("rtrim", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("rtrim", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("trim", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("trim", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("lpad", {"varchar", "i32", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("lpad", {"string", "i32", "string"}, "functions_string.yaml");
	InsertCustomFunction("rpad", {"varchar", "i32", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("rpad", {"string", "i32", "string"}, "functions_string.yaml");
	InsertCustomFunction("center", {"varchar", "i32", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("center", {"string", "i32", "string"}, "functions_string.yaml");
	InsertCustomFunction("left", {"varchar", "i32"}, "functions_string.yaml");
	InsertCustomFunction("left", {"string", "i32"}, "functions_string.yaml");
	InsertCustomFunction("right", {"varchar", "i32"}, "functions_string.yaml");
	InsertCustomFunction("right", {"string", "i32"}, "functions_string.yaml");
	InsertCustomFunction("string_split", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("string_split", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("regexp_string_split", {"varchar", "varchar"}, "functions_string.yaml");
	InsertCustomFunction("regexp_string_split", {"string", "string"}, "functions_string.yaml");
	InsertCustomFunction("add", {"i8", "i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("add", {"i16", "i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("add", {"i32", "i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("add", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("add", {"fp32", "fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("add", {"fp64", "fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("subtract", {"i8", "i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("subtract", {"i16", "i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("subtract", {"i32", "i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("subtract", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("subtract", {"fp32", "fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("subtract", {"fp64", "fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("multiply", {"i8", "i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("multiply", {"i16", "i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("multiply", {"i32", "i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("multiply", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("multiply", {"fp32", "fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("multiply", {"fp64", "fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("divide", {"i8", "i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("divide", {"i16", "i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("divide", {"i32", "i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("divide", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("divide", {"fp32", "fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("divide", {"fp64", "fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("negate", {"i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("negate", {"i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("negate", {"i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("negate", {"i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("negate", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("negate", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("modulus", {"i8", "i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("modulus", {"i16", "i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("modulus", {"i32", "i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("modulus", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("power", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("power", {"fp32", "fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("power", {"fp64", "fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sqrt", {"i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sqrt", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sqrt", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("exp", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("exp", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("cos", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("cos", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sin", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sin", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("tan", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("tan", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("cosh", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("cosh", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sinh", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sinh", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("tanh", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("tanh", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("acos", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("acos", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("asin", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("asin", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("atan", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("atan", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("acosh", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("acosh", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("asinh", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("asinh", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("atanh", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("atanh", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("atan2", {"fp32", "fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("atan2", {"fp64", "fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("radians", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("radians", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("degrees", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("degrees", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("abs", {"i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("abs", {"i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("abs", {"i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("abs", {"i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("abs", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("abs", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sign", {"i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sign", {"i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sign", {"i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sign", {"i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sign", {"fp32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("sign", {"fp64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("factorial", {"i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("factorial", {"i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_not", {"i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_not", {"i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_not", {"i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_not", {"i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_and", {"i8", "i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_and", {"i16", "i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_and", {"i32", "i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_and", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_or", {"i8", "i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_or", {"i16", "i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_or", {"i32", "i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_or", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_xor", {"i8", "i8"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_xor", {"i16", "i16"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_xor", {"i32", "i32"}, "functions_arithmetic.yaml");
	InsertCustomFunction("bitwise_xor", {"i64", "i64"}, "functions_arithmetic.yaml");
	InsertCustomFunction("ceil", {"fp32"}, "functions_rounding.yaml");
	InsertCustomFunction("ceil", {"fp64"}, "functions_rounding.yaml");
	InsertCustomFunction("floor", {"fp32"}, "functions_rounding.yaml");
	InsertCustomFunction("floor", {"fp64"}, "functions_rounding.yaml");
	InsertCustomFunction("round", {"i8", "i32"}, "functions_rounding.yaml");
	InsertCustomFunction("round", {"i16", "i32"}, "functions_rounding.yaml");
	InsertCustomFunction("round", {"i32", "i32"}, "functions_rounding.yaml");
	InsertCustomFunction("round", {"i64", "i32"}, "functions_rounding.yaml");
	InsertCustomFunction("round", {"fp32", "i32"}, "functions_rounding.yaml");
	InsertCustomFunction("round", {"fp64", "i32"}, "functions_rounding.yaml");
	InsertCustomFunction("or", {"boolean?"}, "functions_boolean.yaml");
	InsertCustomFunction("and", {"boolean?"}, "functions_boolean.yaml");
	InsertCustomFunction("and_not", {"boolean?", "boolean?"}, "functions_boolean.yaml");
	InsertCustomFunction("xor", {"boolean?", "boolean?"}, "functions_boolean.yaml");
	InsertCustomFunction("not", {"boolean?"}, "functions_boolean.yaml");
	InsertCustomFunction("add", {"decimal", "decimal"}, "functions_arithmetic_decimal.yaml");
	InsertCustomFunction("subtract", {"decimal", "decimal"}, "functions_arithmetic_decimal.yaml");
	InsertCustomFunction("multiply", {"decimal", "decimal"}, "functions_arithmetic_decimal.yaml");
	InsertCustomFunction("divide", {"decimal", "decimal"}, "functions_arithmetic_decimal.yaml");
	InsertCustomFunction("modulus", {"decimal", "decimal"}, "functions_arithmetic_decimal.yaml");
	InsertCustomFunction("index_in", {"T", "List"}, "functions_set.yaml");
}

} // namespace duckdb