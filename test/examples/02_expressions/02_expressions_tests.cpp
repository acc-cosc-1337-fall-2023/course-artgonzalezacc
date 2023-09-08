#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "casting.h"

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
