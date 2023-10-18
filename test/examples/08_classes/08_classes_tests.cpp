#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"
#include "savings_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance")
{
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test bank deposit w 0 balance")
{
	CheckingAccount account(0);
	REQUIRE(account.get_balance() == 0);

	account.deposit(150);
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test account deposit function")
{
	CheckingAccount account1(500);
	BankAccount account2(1000);
	
	REQUIRE(account1.get_balance() == 500);
	REQUIRE(account2.get_balance() == 1000);

	account1.deposit(50);
	REQUIRE(account1.get_balance() == 550);

	account2.deposit(100);
	REQUIRE(account2.get_balance() == 1100);
}

TEST_CASE("Test account withdraw w 0 balance")
{
	SavingsAccount account(0);
	REQUIRE(account.get_balance() == 0);

	account.withdraw(100);
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test account withdraw")
{
	SavingsAccount account(1000);
	REQUIRE(account.get_balance() == 1000);

	account.withdraw(100);
	REQUIRE(account.get_balance() == 900);
}

TEST_CASE("Test account deposit and withdraw")
{
	SavingsAccount account(1000);
	REQUIRE(account.get_balance() == 1000);

	account.deposit(100);
	REQUIRE(account.get_balance() == 1100);
	
	account.withdraw(100);
	REQUIRE(account.get_balance() == 1000);
}