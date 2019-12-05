#include "bank_account.h"
//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify

class MyReport
{
public:
	MyReport();
	void display()const;
	~MyReport(); // Destructor, releases pointer for us

private:
	BankAccount** accounts;
	const int SIZE{ 5 };
};

MyReport::MyReport()
	: accounts{ new BankAccount*[SIZE] } // Save 5 mem adresses for me
{
	// Creates dynamic memory (heap) for each of the 5 adresses
	for (int i = 0; i < SIZE; i++)
	{
		accounts[i] = new BankAccount(i * 10);
	}
}

void MyReport::display() const
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}

MyReport::~MyReport() // Destructor, releases pointer for us
{
	for (int i = 0; i < SIZE; i++)
	{
		delete[] accounts[i];
	}
	delete accounts;

}
