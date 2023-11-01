#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<time.h>//helps provide a true random number with rand() function
#include<vector>
#include<memory>

using std::cout; using std::vector;
using std::unique_ptr; using std::make_unique;

int main()
{

	srand(time(NULL));
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(500);
	cout<<account->get_balance()<<"\n";
	
/*
	SavingsAccount savings_account;
	account = &savings_account;
	cout<<account->get_balance()<<"\n";

	vector<BankAccount*> accounts;
	accounts.push_back(&checking_account);
	accounts.push_back(&savings_account);

	
	ATM atm(accounts);
	run_menu(atm);

	cout<<"Balance: "<<account->get_balance()<<"\n";
	*/

	return 0;
}