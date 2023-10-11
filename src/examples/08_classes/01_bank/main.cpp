#include "bank_account.h"
#include<time.h>//helps provide a true random number with rand() function

using std::cout;

int main()
{
	srand(time(NULL));
	say_hello();
	BankAccount account;//create a variable/an object ---customer 1
	account.deposit(250);
	
	cout<<"Balance: "<<account.get_balance()<<"\n";

	BankAccount account2;//customer 2
	cout<<"Balance: "<<account2.get_balance()<<"\n";


	return 0;
}