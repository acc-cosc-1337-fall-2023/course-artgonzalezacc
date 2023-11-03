//atm.cpp
#include "atm.h"

using std::cin; using std::cout;

void ATM::display_balance()
{
    Customer& customer = customers[customer_index];
    std::unique_ptr<BankAccount>& account = customer.get_account(account_index);

    cout<<"ATM balance: "<<account->get_balance()<<"\n\n";
}

void ATM::make_deposit()
{
    auto& customer = customers[customer_index];
    auto& account = customer.get_account(account_index);

    auto amount = 0;
    cout<<"Enter amount to deposit: ";
    cin>>amount;

    account->deposit(amount);
}

void ATM::make_withdrawal()
{
    auto& customer = customers[customer_index];
    auto& account = customer.get_account(account_index);
    
    auto amount = 0;
    cout<<"Enter withdrawal amount: ";
    cin>>amount;
    account->withdraw(amount);
}

void ATM::scan_card()
{
    customer_index = rand() % customers.size();

    cout<<"Enter 1 for checking 2 for savings: ";
    cin>>account_index;
}

//free functions not part of the atm class
void display_menu()
{
    cout<<"\n1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Display Balance\n";
    cout<<"4-Exit\n";
}

void run_menu(ATM& atm)
{
    auto option = 0;

    atm.scan_card();

    do
    {
        display_menu();

        cout<<"Enter menu option: ";
        cin>>option;
        handle_menu_option(option, atm);

    } while (option != 4);
    
}

void handle_menu_option(int option, ATM& atm)
{
    switch (option)
    {
    case 1:
        atm.make_deposit();
        break;
    case 2:
        atm.make_withdrawal();
        break;
    case 3:
        atm.display_balance();
        break;
    case 4:
        cout<<"Exiting...\n";
        break;
    
    default:
        cout<<"Invalid option...\n";
        break;
    }
}