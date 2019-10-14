#include "customer.h"

//customer.cpp

void Customer::add_account(BankAccount act)
{
	accounts.push_back(act);
	total_balance = total_balance + act.get_balance();
}

ostream & operator<<(ostream & out, const Customer & c)
{
	out << "Customer accounts: \n";

	for (auto act : c.accounts)
	{
		out << act;
	}

	out << "\nTotal balance: " << c.total_balance;
	return out;
}
