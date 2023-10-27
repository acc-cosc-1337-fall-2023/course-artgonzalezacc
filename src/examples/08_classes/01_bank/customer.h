//customer.h
#include "checking_account.h"
#include "savings_account.h"
#include<vector>

#ifndef CUSTOMER_H
#define  CUSTOMER_H

class Customer
{

public:
    Customer();
    BankAccount* get_account(int index){return accounts[index];}

private:
    std::vector<BankAccount*> accounts;    
};

#endif