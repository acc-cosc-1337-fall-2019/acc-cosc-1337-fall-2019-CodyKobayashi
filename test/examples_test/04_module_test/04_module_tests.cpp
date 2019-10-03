#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Begin balance amount") {
	BankAccount account;
	REQUIRE(account.get_balance() == 500);

}

TEST_CASE("Bank account post deposit") {
	BankAccount account;
	account.deposit(100);
	REQUIRE(account.get_balance() == 600);
}

TEST_CASE("Bank account withdraw") {
	BankAccount account;
	account.withdraw(100);

	REQUIRE(account.get_balance() == 400);
}

TEST_CASE("Running deposit test") {
	BankAccount account;
	account.deposit(100);
	account.withdraw(50);

	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("BankAccount begin balance constructor initializer") {
	BankAccount account(1000);

	REQUIRE(account.get_balance() == 1000);
}