#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"
#include "savings_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance")
{
	BankAccount* account;
	CheckingAccount checking_account(500);
	account = & checking_account;

	REQUIRE(account->get_balance() == 500);
}

TEST_CASE("Test bank deposit w 0 balance")
{
	BankAccount* account;
	CheckingAccount checking_account(0);
	account = &checking_account;

	REQUIRE(account->get_balance() == 0);

	account->deposit(150);
	REQUIRE(account->get_balance() == 150);
}

TEST_CASE("Test account deposit function")
{
	BankAccount* account;
	CheckingAccount checking_account(500);
	account = &checking_account;
	
	REQUIRE(account->get_balance() == 500);

	account->deposit(50);
	REQUIRE(account->get_balance() == 550);

}

TEST_CASE("Test account withdraw w 0 balance")
{
	BankAccount* account;
	SavingsAccount savings_account(0);
	account = &savings_account;

	REQUIRE(account->get_balance() == 5);

	account->withdraw(100);
	REQUIRE(account->get_balance() == 5);
}

TEST_CASE("Test account withdraw")
{
	BankAccount* account;
	SavingsAccount savings_account(1000);
	account = &savings_account;

	REQUIRE(account->get_balance() == 1005);

	account->withdraw(100);
	REQUIRE(account->get_balance() == 905);
}

TEST_CASE("Test account deposit and withdraw")
{
	BankAccount* account;
	SavingsAccount savings_account(1000);
	account = &savings_account;

	REQUIRE(account->get_balance() == 1005);

	account->deposit(100);
	REQUIRE(account->get_balance() == 1105);
	
	account->withdraw(100);
	REQUIRE(account->get_balance() == 1005);
}