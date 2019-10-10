//Write include statement
#include "rectangle.h"

/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

int acc::Rectangle::get_area() const // Returns area as a constant
{
	return area;
}


void acc::Rectangle::calculate_area() // Calculates the area duh
{
	area = width * height;
}

std::ostream & acc::operator<<(std::ostream & out, const Rectangle & b)
{

	out << "Rectangle area (using ostream): " << b.area << "\n";

	return out;
}
