#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test string value parameter")
{
	string str = "Python";
	string_val_param(str);

	REQUIRE(str == "Python");
}

TEST_CASE("Test string reference parameter")
{
	string str = "Python";
	string_ref_param(str);

	REQUIRE(str == "C++");
}

