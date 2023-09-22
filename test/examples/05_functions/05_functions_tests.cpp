#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "void.h"
#include "val_ref.h"
#include "static.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function value param")
{
	int num = 10;

	value_param(num);

	REQUIRE(num == 10);
}

TEST_CASE("Test function reference parameter")
{
	int num = 10;
	
	ref_param(num);

	REQUIRE(num == 20);
}

TEST_CASE("Test non static function", "value of num will not persist across function calls")
{
	REQUIRE(non_static_var() == 6);
	REQUIRE(non_static_var() == 6);
	REQUIRE(non_static_var() == 6);
}

TEST_CASE("Test static function", "value of num persists across function calls")
{
	REQUIRE(static_var() == 6);
	REQUIRE(static_var() == 7);
	REQUIRE(static_var() == 8);
}

TEST_CASE("Test static_2 function", "????")
{
	REQUIRE(static_var_2() == 6);
	REQUIRE(static_var_2() == 7);
	REQUIRE(static_var_2() == 8);
}

TEST_CASE("Test function overloads")
{
	REQUIRE(get_weekly_pay(52000) == 1000);
	REQUIRE(get_weekly_pay(40, 25) == 1000);
}

TEST_CASE("Test function default params")
{
	REQUIRE(get_total(50) == 50);
	REQUIRE(get_total(50, 2) == 100);
}