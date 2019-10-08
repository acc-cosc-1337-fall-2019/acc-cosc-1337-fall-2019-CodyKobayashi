#include<iostream>
#include<vector>
#include "atm.h"
#include "bank_account.h"

using std::cout;
using std::vector;

int main()
{
	//Real world: scan card enter pin
	//Get customer record from database into a vector
	vector<BankAccount> accounts{ BankAccount(500), BankAccount(600),
	BankAccount(1000) };

	ATM atm(accounts[0]);
	ATM atm2(accounts[1]);
	atm.deposit(100);
	atm.withdraw(50);

	atm.display_balance();
	atm2.display_balance();

	
	return 0;
}