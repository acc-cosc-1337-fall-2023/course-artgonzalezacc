//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{
    if(amount > 0)//the class sets the rules for modifying its data
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}



//NOT PART OF THE BANK ACCOUNT CLASS
//FREE FUNCTION
void say_hello()
{
    std::cout<<"Hello World!\n";
}