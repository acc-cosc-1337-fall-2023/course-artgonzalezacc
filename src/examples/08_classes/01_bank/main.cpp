#include "atm.h"
#include "bank_account.h"
#include<time.h>//helps provide a true random number with rand() function

using std::cout;

int main()
{
	srand(time(NULL));
	
	BankAccount account;//create a variable/an object ---customer 1

	ATM atm(account);

	atm.display_balance();
	atm.make_deposit();
	atm.display_balance();

	cout<<"Balance: "<<account.get_balance()<<"\n";

	atm.make_withdrawal();

	atm.display_balance();
	cout<<"Balance: "<<account.get_balance()<<"\n";


	return 0;
}