//customer.cpp
#include "customer.h"

using std::make_unique;

Customer::Customer(int id, std::string n)
    : customer_id(id), name(n)
{
    accounts.push_back(make_unique<CheckingAccount>());
    accounts.push_back(make_unique<SavingsAccount>());
}

Customer::Customer(int checking_balance, int savings_balance)
{
    accounts.push_back(make_unique<CheckingAccount>(checking_balance));
    accounts.push_back(make_unique<SavingsAccount>(savings_balance));
}