#include "arrays_mem.h"
#include <iostream>

//write code for for stack_array and display each element to screen
void stack_array()
{
	int const SIZE = 5;
	int hours[5] = { 5,10,30,20,7 };
	hours[0] = 50; //access and modify

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << hours[i] << "\n";
	}

	std::cout << "\n";

	for (auto & hour : hours)
	{

		std::cout << hour << "\n";
	}

	// pointer to first hours array element
	int* first_element = hours;
	std::cout << "First element: " << *first_element << "\n";
	std::cout << "Second element: " << *(first_element +  1)<< "\n";

	*first_element++;
	*first_element++;
	std::cout << "Third element: " << *first_element++ << "\n";

	*first_element--;
	std::cout << "Third element: " << *first_element-- << "\n"; // Go back one

//Iterate array with pointer forward
	int* hours_ptr = hours;
	std::cout << "\n" << "point hours forward \n";
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << *hours_ptr << "\n";
		hours_ptr++;
	}


//Iterate array with pointer Backward
	std::cout << "\n" << "point hours backward \n";
	for (int i = 0; i < SIZE; i++)
	{
		hours_ptr--;
		std::cout << *hours_ptr << "\n";
	}

}
