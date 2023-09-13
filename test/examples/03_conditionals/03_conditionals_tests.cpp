#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is overtime function", "verification") 
{
	REQUIRE(is_overtime(40) == false);
	REQUIRE(is_overtime(41) == true);
}
