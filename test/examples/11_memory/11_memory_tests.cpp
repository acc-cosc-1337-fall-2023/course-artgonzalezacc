#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
TEST_CASE("Test reference and pointer parameters")
{
	int num1 = 5, num2 = 10;

	ref_pointer(num1, &num2);

	REQUIRE(num1 == 20);
	REQUIRE(num2 == 30);
}
TEST_CASE("Test my vector creation form existing Vector")
{
	Vector v1(3);
	Vector v2 = v1;

}

TEST_CASE("Test my vector creation overwrite an existing Vector variable")
{
	Vector v1(3);
	Vector v2(3);
	v2 = v1;

}

TEST_CASE("Test my vector with std::move function")
{
	Vector v1(3);
	Vector v2 = std::move(v1);
}*/

TEST_CASE("Test my vector overwrite v1 with a return vector from a function")
{
	Vector v1(3);
	v1 = get_vector();
}

