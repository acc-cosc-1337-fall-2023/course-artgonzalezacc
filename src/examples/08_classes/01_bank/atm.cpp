//atm.cpp
#include "atm.h"

using std::cin; using std::cout;

void ATM::display_balance()
{
    cout<<"ATM balance: "<<account.get_balance()<<"\n\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter amount to deposit: ";
    cin>>amount;

    account.deposit(amount);
}

void ATM::make_withdrawal()
{
    auto amount = 0;
    cout<<"Enter withdrawal amount: ";
    cin>>amount;
    account.withdraw(amount);
}