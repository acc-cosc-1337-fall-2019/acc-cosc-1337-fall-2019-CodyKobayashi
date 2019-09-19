#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify and test if factorial works")
{
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(4) == 24);
	REQUIRE(factorial(3) == 6);
}