

#include "bank_account.h"
//bank_account.cpp


BankAccount::BankAccount() //Object constructor
{
	// Basically the default value
	balance = 500;
}

int BankAccount::get_balance() const
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

void BankAccount::withdraw(int amount)
{
	if (balance > amount)
	{
		balance -= amount;
	}
}
