#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test my vector size")
{
	Vector<int> v(3);
	REQUIRE(v.Size() == 0);
}

TEST_CASE("Test my vector capacity")
{
	Vector<int> v(3);
	REQUIRE(v.Capacity() == 3 );
}

TEST_CASE("Test my vector class copy")
{
	Vector<int> v1(3);
	Vector<int> v2 = v1;
	v1[0] = 5;
	v2[0] = 10;

	REQUIRE(v1.Size() == v2.Size());
	REQUIRE(v1.Capacity() == v2.Capacity());

	REQUIRE(v1[0] != v2[0]);
}

TEST_CASE("Test my vector overwrite existing v2 with v1")
{
	Vector<int> v1(3);
	Vector<int> v2(3);
	v2 = v1;

}

TEST_CASE("Test moving v1 into v2")
{
	Vector<int> v1(3);
	Vector<int> v2 = std::move(v1);
}

TEST_CASE("Overwrite existing vector v1 with a value return function")
{
	Vector<int> v1(3);
	v1 = get_vector();
}

TEST_CASE("Test vector push back with empty vector")
{
	Vector<int> v;

	REQUIRE(v.Capacity() == 0);
	REQUIRE(v.Size() == 0);

	v.Push_Back(5);

	REQUIRE(v.Capacity() == 8);
	REQUIRE(v.Size() == 1);
	REQUIRE(v[0] == 5);
}

TEST_CASE("Test vector push back with vector capacity 3")
{
	Vector<int> v(3);

	REQUIRE(v.Capacity() == 3);
	REQUIRE(v.Size() == 0);

	v.Push_Back(5);

	REQUIRE(v.Capacity() == 3);
	REQUIRE(v.Size() == 1);
	REQUIRE(v[0] == 5);

	v.Push_Back(7);
	v.Push_Back(10);
	v.Push_Back(1);

	REQUIRE(v.Capacity() == 6);
	REQUIRE(v.Size() == 4);
	REQUIRE(v[0] == 5);
	REQUIRE(v[1] == 7);
}