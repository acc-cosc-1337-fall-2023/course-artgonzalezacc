#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Test get sales tax amount")
{
	auto tax = get_sales_tax_amount(10);
	REQUIRE((tax*1000) == 675);
	
	tax = get_sales_tax_amount(20);
	REQUIRE((tax*100) == 135);
}

TEST_CASE("Test get tip amount")
{
	auto result = get_tip_amount(20, .15);
	REQUIRE(result == 3);

	result = get_tip_amount(20, .20);
	REQUIRE(result == 4);
}