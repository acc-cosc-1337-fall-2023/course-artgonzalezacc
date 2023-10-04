//bank_account.h
#include<iostream>

class BankAccount
{
public:
    //constructor
    BankAccount(int b) : balance(b){/*empty class function code */}
    int get_balance(){return balance;}

private:
    int balance{0};//initialize to zero; happens first
};

void say_hello();