#include "bank_account.h"
#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main()
{
	//BankAccount account;
	//account.deposit(5);
	//cout << account.get_balance();

	vector<BankAccount> accounts;
	BankAccount b1;
	accounts.push_back(b1);
	accounts.push_back(BankAccount(750));
	accounts.push_back(BankAccount(850));
	accounts.push_back(BankAccount(1750));
	
	for (auto account : accounts)
	{
		cout << "Balance: " << account.get_balance() << "\n";
	}

	return 0;
}