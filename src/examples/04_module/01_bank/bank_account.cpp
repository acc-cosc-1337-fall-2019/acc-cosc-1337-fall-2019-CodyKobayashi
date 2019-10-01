
#include "bank_account.h"
//bank_account.cpp

// Constructor
BankAccount::BankAccount()
{
	// Basically the default value
	balance = 500;
}

int BankAccount::get_balance()
{
	return balance;
}


void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance = balance + amount;
		// or balance += amount;
	}
}
