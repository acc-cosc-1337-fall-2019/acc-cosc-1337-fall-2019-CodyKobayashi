#include "arr_functions.h"
#include <iostream>

int main() 
{
	const int SIZE = 5;
	// hours is a pointer to the first array element/address
	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	int* hours_ptr = hours;

	iterate_array(hours_ptr, SIZE);

	std::cout << "\n";
	// So in this case making a pointer was completely unneeded
	iterate_array(hours, SIZE);

	int* numbers = new int[SIZE];//allocate memory, 5 spaces in heap
	for (int i = 0; i < SIZE; ++i)//initialize data
	{
		numbers[i] = i;
	}

	std::cout << "\n";

	for (int i = 0; i < SIZE; ++i)//process
	{
		std::cout << numbers[i] << "\n";

	}
	delete[] numbers;
	numbers = nullptr;

	return 0;
}