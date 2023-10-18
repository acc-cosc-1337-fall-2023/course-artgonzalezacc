//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount//inherit from bank account
{
public:
    CheckingAccount(){/**EMPTY CODE BLOCK*/}
    CheckingAccount(int b) : BankAccount(b) {/**EMPTY CODE BLOCK*/}

private:

};

#endif