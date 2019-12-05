#include "arrays_dyn_ch.h"
#include <iostream>

void dynamic_char_array()
{

	const int SIZE = 10;
	char* name = new char[SIZE];

	std::cout << "Enter name: ";
	std::cin.getline(name, SIZE);
		
	std::cout << name << "\n";

	delete[] name;
	name = nullptr;

	char* name1 = new char[SIZE];
	name1[0] = 'j';
	name1[1] = 'o';
	name1[2] = 'e';
	name1[3] = '\0'; // Keyword to terminate the char array
					// Tells the end of the character array when looping
	std::cout << name1 << "\n";

	delete[] name1;
	name1 = nullptr;

	char* name2 = new char[SIZE]();
	name2[0] = 'j';
	name2[1] = 'o';
	name2[2] = 'h';
	name2[3] = 'n'; 
	
	delete[] name2;
	name2 = nullptr;

}
