#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "casting.h"
#include "data_type_size.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test convert int to double", "double takes precedence over int") 
{
	REQUIRE(convert_to_double(10, .5) == 5.0);
}

TEST_CASE("Test convert double to int", "truncate the decimal portion") 
{
	REQUIRE(convert_double_to_int(10.5) == 10);
	REQUIRE(convert_double_to_int(10.559589898) == 10);
}

TEST_CASE("Test int is 4 bytes w sizeof")
{
	REQUIRE(get_int_data_size(4) == 4);
	REQUIRE(get_int_data_size(10) == 4);
	REQUIRE(get_int_data_size(10000000) == 4);
}

TEST_CASE("Test double is 8 bytes w size of")
{
	REQUIRE(get_double_data_size(120.59859999) == 8);
	REQUIRE(get_double_data_size(5.9) == 8);
}

TEST_CASE("Test char is 1 byte w size of")
{
	REQUIRE(get_char_size('A') == 1);
	REQUIRE(get_char_size('9') == 1);
	REQUIRE(get_char_size('#') == 1);
}