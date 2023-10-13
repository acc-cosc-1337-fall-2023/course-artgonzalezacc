//atm.h
#include<iostream>
#include "bank_account.h"

class ATM
{
public:
    ATM(BankAccount& a) : account(a){}
    void display_balance();
    void make_deposit();
    void make_withdrawal();

private:
    BankAccount& account;
};