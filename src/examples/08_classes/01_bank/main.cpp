#include "bank_account.h"

using std::cout;

int main()
{
	say_hello();
	BankAccount account(50);//create a variable/an object
	
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}