#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.cpp"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is_even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(20000000000000003) == false);
}

TEST_CASE("Get generation")
{
	REQUIRE(get_generation(2000) == "Centenial");
	REQUIRE(get_generation(2043653400) == "Invalid");
	REQUIRE(get_generation(1975) == "Generation X");
	REQUIRE(get_generation(1960) == "Baby boomer");
	REQUIRE(get_generation(1940) == "Silent Generation");
	REQUIRE(get_generation(1932) == "Silent Generation");
}

TEST_CASE("test menu function")
{
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(3321) == "Invalid");
}