//atm.h
#include<iostream>
#include "bank_account.h"
#include "customer.h"
#include<memory>
#include<vector>
#include<stdlib.h>//random function

class ATM
{
public:
    ATM(BankAccount* a) : account(a){}
    void display_balance();
    void make_deposit();
    void make_withdrawal();
    
private:
    BankAccount* account;
    int account_index;
};

//FREE FUNCTIONS-NOT PART OF THE ATM CLASS
int scan_card(int max_value);
void display_menu();
void run_menu();
void handle_menu_option(int option, ATM& atm);