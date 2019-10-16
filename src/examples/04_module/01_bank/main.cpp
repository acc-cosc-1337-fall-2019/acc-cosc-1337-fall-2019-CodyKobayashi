#include<iostream>
#include<vector>
#include"checking_account.h"
#include "savings_account.h"

using std::cin;
using std::cout;
using std::vector;

int main()
{
	CheckingAccount a(1500);
	cout << a;

	SavingsAccount savings(500);
	cout << "Calls ostream overload in bank_account.cpp " << savings;
	cout << "Savings in balance " << savings.get_balance() << "\n";
	savings.add_interest();
	cout << savings;

	BankAccount c = a + savings;

	cout << c;

	return 0;
}