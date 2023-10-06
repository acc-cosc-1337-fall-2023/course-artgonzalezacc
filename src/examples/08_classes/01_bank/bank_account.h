//bank_account.h
#include<iostream>

class BankAccount
{
public://access specifier-other code can access these functions
    //constructor
    BankAccount(){}//no parameters=default constructor
    BankAccount(int b) : balance(b){/*empty class function code */}
    void deposit(int amount);
    void withdraw(int amount);
    int get_balance() const {return balance;}

private://access specifier-only this class can access function or variables that are private
    int balance{0};//initialize to zero; happens first
};

void say_hello();