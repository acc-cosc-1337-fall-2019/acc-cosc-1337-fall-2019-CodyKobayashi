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

BankAccount BankAccount::operator+(const BankAccount & b)
{
	BankAccount account;
	account.balance = balance + b.balance;

	return account.balance;
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

void display(const BankAccount& account)
{
	std::cout << "Balance: " << account.balance << "\n";

}

std::ostream & operator << (std::ostream & out, const BankAccount & b)
{
	out << "Balance: " << b.balance << "\n";

	return out;
}

std::istream & operator >> (std::istream & in, BankAccount & b)
{
	int amt;
	std::cout << "\nEnter Amount: ";
	in >> amt;

	b.deposit(amt);

	return in;
	// You'll need this in the tic tac toe game
}
