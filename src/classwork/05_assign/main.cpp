//write include statemetns
#include "rectangle.h"
#include <vector>
#include <iostream>

using std::cout;
using std::vector;

/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	vector<acc::Rectangle> Rectangless;
	Rectangless.push_back(acc::Rectangle(4, 5));
	Rectangless.push_back(acc::Rectangle(10, 10));
	Rectangless.push_back(acc::Rectangle(100, 10));

	/*
	for (auto rec : Rectangless)
	{
		cout << "Rectangle Area: " << rec.get_area() << "\n";
	}
	*/

	for (auto rec : Rectangless)
	{
		cout << rec;
	}

	return 0;
}