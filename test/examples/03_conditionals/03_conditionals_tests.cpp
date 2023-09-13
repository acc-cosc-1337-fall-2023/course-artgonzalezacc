#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else_if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is overtime function", "verification") 
{
	REQUIRE(is_overtime(40) == false);
	REQUIRE(is_overtime(41) == true);
}

TEST_CASE("Test get generation function", "verification") 
{
	REQUIRE(get_generation(2024) == "Invalid Year");
	REQUIRE(get_generation(1997) == "Centenial");
	REQUIRE(get_generation(1980) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1945) == "Silent Generation");
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1925) == "Silent Generation");
	REQUIRE(get_generation(1924) == "Invalid Year");
}