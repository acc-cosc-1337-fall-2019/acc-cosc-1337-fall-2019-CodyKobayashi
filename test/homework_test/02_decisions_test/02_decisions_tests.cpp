#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/02_decisions/decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify and test GPA") {
	REQUIRE(calculate_gpa(12, 45) == 3.75);
	REQUIRE(calculate_gpa(120, 390) == 3.25);
	REQUIRE(calculate_gpa(90, 180) == 2.00);
	REQUIRE(calculate_gpa(90, 180) == 2.00);
}

TEST_CASE("Verify and test grade letter")
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);
	REQUIRE(get_grade_points("A") != 0);
}

TEST_CASE("Verify get grade letter using if")
{
	REQUIRE(get_letter_grade_using_if(20) == "F");
	REQUIRE(get_letter_grade_using_if(90) == "A");
	REQUIRE(get_letter_grade_using_if(73) == "C");
}

TEST_CASE("Verify Get letter grade using switch")
{
	REQUIRE(get_letter_grade_using_switch(95) == "A");
	REQUIRE(get_letter_grade_using_switch(28) == "F");
	REQUIRE(get_letter_grade_using_switch(89) == "B");
	REQUIRE(get_letter_grade_using_switch(70) == "C");
	REQUIRE(get_letter_grade_using_switch(69) == "D");
}
