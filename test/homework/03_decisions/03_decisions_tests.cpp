#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test letter grade with if")
{
	REQUIRE(get_letter_grade_using_if(101) == "Invalid Grade");
	REQUIRE(get_letter_grade_using_if(100) == "A");
	REQUIRE(get_letter_grade_using_if(85) == "B");
	REQUIRE(get_letter_grade_using_if(79) == "C");
	REQUIRE(get_letter_grade_using_if(60) == "D");
	REQUIRE(get_letter_grade_using_if(59) == "F");
	REQUIRE(get_letter_grade_using_if(0) == "F");
	REQUIRE(get_letter_grade_using_if(-1) == "Invalid Grade");
}

TEST_CASE("Test letter grade with switch")
{
	REQUIRE(get_letter_grade_using_switch(101) == "Invalid Grade");
	REQUIRE(get_letter_grade_using_switch(100) == "A");
	REQUIRE(get_letter_grade_using_switch(85) == "B");
	REQUIRE(get_letter_grade_using_switch(79) == "C");
	REQUIRE(get_letter_grade_using_switch(60) == "D");
	REQUIRE(get_letter_grade_using_switch(59) == "F");
	REQUIRE(get_letter_grade_using_switch(0) == "F");
	REQUIRE(get_letter_grade_using_switch(-1) == "Invalid Grade");

}

