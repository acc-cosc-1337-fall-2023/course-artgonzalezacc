//atm.h
#include<iostream>
#include "bank_account.h"

class ATM
{
public:
    ATM(BankAccount& a) : account(a){}
    void display_balance();

private:
    BankAccount& account;
};