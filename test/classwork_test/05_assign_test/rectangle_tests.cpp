#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Rectangle") {
	RectangleArea r1(4, 5);
	RectangleArea r2(10, 10);
	REQUIRE(r1.get_area() == 20);
	REQUIRE(r2.get_area() == 100);
}