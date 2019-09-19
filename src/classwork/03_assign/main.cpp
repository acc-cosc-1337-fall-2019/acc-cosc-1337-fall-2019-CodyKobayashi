//write includes statements
#include<iostream>
#include"loops.h"
//write using statements for cin and cout
using std::cin;
using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	auto user_continue = 'y';
	auto user_num = 0;
	auto result = 0;
	do
	{
		cout << "Enter number: ";
		cin >> user_num;

		result = factorial(user_num);
		cout << "Result: " << result;
		cout << "\n";
		
		cout << "continue?: ";
		cin >> user_continue;
	} while (user_continue == 'y' || user_continue == 'Y');

	return 0;

}