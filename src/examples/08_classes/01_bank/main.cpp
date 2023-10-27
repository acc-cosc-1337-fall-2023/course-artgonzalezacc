#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<time.h>//helps provide a true random number with rand() function
#include<vector>

using std::cout; using std::vector;

int main()
{

	srand(time(NULL));
	BankAccount* account = nullptr;//create a pointers; points to nothing NULL

	CheckingAccount checking_account(500);
	account = &checking_account;
	cout<<account->get_balance()<<"\n";

	SavingsAccount savings_account(500);
	account = &savings_account;
	cout<<account->get_balance()<<"\n";

	vector<BankAccount*> accounts;
	accounts.push_back(&checking_account);
	accounts.push_back(&savings_account);

	for(auto account: accounts)
	{
		cout<<"Balance: "<<account->get_balance()<<"\n";
	}

	/*
	ATM atm(account);
	run_menu(atm);

	cout<<"Balance: "<<account->get_balance()<<"\n";*/

	return 0;
}