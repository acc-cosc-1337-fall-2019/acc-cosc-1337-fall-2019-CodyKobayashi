#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is_even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(20000000000000003) == false);
}
