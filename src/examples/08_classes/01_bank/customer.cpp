//customer.cpp
#include "customer.h"

Customer::Customer()
{
    CheckingAccount checking_account;
    accounts.push_back(&checking_account);

    SavingsAccount savings_account;
    accounts.push_back(&savings_account);
}