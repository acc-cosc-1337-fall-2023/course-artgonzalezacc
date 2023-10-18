//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount: public BankAccount //inherit from Bankaccount
{
public:
    SavingsAccount(){/**EMPTY CODE BLOCK*/}
    SavingsAccount(int b) : BankAccount(b) {/**EMPTY CODE BLOCK*/}
};


#endif