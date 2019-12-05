#include "bank_account.h"
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
class Report
{
public:
	Report();
	void display()const;
	~Report(); // Destructor, releases pointer for us

private:
	BankAccount* accounts;
	const int SIZE{ 5 };
};

Report::Report()
{
	// Creates dynamic memory (heap)
	accounts = new BankAccount[SIZE]; // Calls default constructor
}

void Report::display() const
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << accounts[i].get_balance() << "\n";
	}
}

Report::~Report() // Destructor, releases pointer for us
{
	delete[] accounts;

}
