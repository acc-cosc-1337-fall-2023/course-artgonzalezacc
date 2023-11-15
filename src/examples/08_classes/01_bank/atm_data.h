#include<fstream>
#include<string>
#include "customer.h"

#ifndef ATM_DATA_H
#define ATM_DATA_H

class ATMData
{
public:
    void save_customers(std::vector<Customer>& customers);
    std::vector<Customer>& get_customers();
private:
    std::vector<Customer> customers;
    const std::string file_name{"customer.dat"};
};

#endif