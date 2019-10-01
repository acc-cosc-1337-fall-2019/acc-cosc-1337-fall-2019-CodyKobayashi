//write include statements
#include <iostream>
#include"dna.h"

//write using statements
using std::string;
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string dna = "";
	char contin = 'y';
	double gc_content = 0.0;
	string dna_complement = "";
	int user_choice = 0;

	do
	{

		cout << "Please enter 1 to get GC Content or enter 2 to get DNA Complement: ";
		cin >> user_choice;

		switch (user_choice)
		{
			
		case 1:
			cout << "Enter the DNA sequence you want to get the GC content of: ";
			cin >> dna;

			gc_content = get_gc_content(dna);
			cout << "The GC content is: " << gc_content * 100 << "%\n";
			break;

		case 2:
			cout << "Enter the DNA sequence you want to get the DNA complement: ";
			cin >> dna;

			dna_complement = get_dna_complement(dna);
			cout << "DNA complement is: " << dna_complement << "\n";
			break;

		default:
			cout << "Invalid choice\n";
			break;
		}



		cout << "Do you wish to continue? Y/N:";
		cin >> contin;
	} while (contin == 'y' || contin == 'Y');

	return 0;
}