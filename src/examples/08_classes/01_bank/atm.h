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

//FREE FUNCTIONS-NOT PART OF THE ATM CLASS
void display_menu();
void run_menu(ATM& atm);
void handle_menu_option(int option, ATM& atm);