#include<iostream>
#include<vector>
#include"checking_account.h"

using std::cin;
using std::cout;
using std::vector;

int main()
{
	CheckingAccount a(1500);
	cout << a.get_balance();

	return 0;
}