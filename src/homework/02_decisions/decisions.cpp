#include "decisions.h"
#include <string>
//write include statement for decisions header

using std::string;
//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	if (credit_hours == 0)
	{
		return -1;
	}
	else
	{
		return credit_points / credit_hours;
	}
}

string get_letter_grade_using_if(int number_grade)
{
	if (number_grade >= 90) {
		return "A";
	}
	else if (number_grade >= 80 && number_grade < 90) {
		return "B";
	}
	else if (number_grade >= 70 && number_grade < 80) {
		return "C";
	}
	else if (number_grade >= 60 && number_grade < 70) {
		return "D";
	}
	else {
		return "F";
	}
}

string get_letter_grade_using_switch(int number_grade)
{
	int case_number = 0;
	case_number = (number_grade / 10);
	switch (case_number)
	{
	case 10:
		return "A";
	case 9:
		return "A";
	case 8:
		return "B";
	case 7:
		return "C";
	case 6:
		return "D";
	default:
		return "F";
	}
}
