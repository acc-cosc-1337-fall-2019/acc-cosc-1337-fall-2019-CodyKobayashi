#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test vector class copy w stack variables")
{
	Vector<int> v(5);
	Vector<int> v2 = v;

	REQUIRE(v.Size() == v2.Size());
}

TEST_CASE("Vector class copy with heap(dynamic) variables")
{
	Vector<int> v(5);
	Vector<int> v2 = v;
	v[1] = 5;

	REQUIRE(v[1] != v2[1]);
}

TEST_CASE("Vector class copy 2 instances of vector")
{
	Vector<int> v(3);
	Vector<int> v2(2);
	v2 = v;
	v[1] = 1;

	REQUIRE(v[1] != v2[1]);
}

Vector get_vector()
{
	Vector<int> v(3);

	return v;
}

TEST_CASE("Test return vector by value")
{
	Vector<int> v(1);
	v = get_vector();

	REQUIRE(v.Size() == 3);
}