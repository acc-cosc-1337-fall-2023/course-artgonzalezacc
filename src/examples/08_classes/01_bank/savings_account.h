//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount: public BankAccount //inherit from Bankaccount
{
public:
    SavingsAccount(){/**EMPTY CODE BLOCK*/}
    SavingsAccount(int b) : BankAccount(b) {/**EMPTY CODE BLOCK*/}
    int get_balance() const {return BankAccount::get_balance() + 5;}
};


#endif