#include<iostream>
#include<vector>
#include"checking_account.h"
#include "savings_account.h"

using std::cin;
using std::cout;
using std::vector;

int main()
{
	CheckingAccount checking(1500);
	cout << "Checking get_balance: " << checking.get_balance() << "\n";

	SavingsAccount savings(500);
	cout << "Savings get_balance: " << savings.get_balance() << "\n";

	BankAccount& account = savings;
	cout << "Ref to savings get_balance: " << account.get_balance() << "\n";

	return 0;
}