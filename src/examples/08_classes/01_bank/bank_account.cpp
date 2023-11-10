//bank_account.cpp
#include "bank_account.h"

using std::cout;

int BankAccount::get_balance() const 
{
    return balance;
}

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

void BankAccount::get_balance_from_db()
{
    balance = rand() % 10000 + 1;
}

//friend class 
void show_balance(const BankAccount& account)
{
    cout<<"Friend show balance: "<<account.balance<<"\n";
}


//NOT PART OF THE BANK ACCOUNT CLASS
//FREE FUNCTION
void say_hello()
{
    std::cout<<"Hello World!\n";
}