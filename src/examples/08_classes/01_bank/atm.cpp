//atm.cpp
#include "atm.h"
#include "atm_data.h"

using std::cin; using std::cout; using std::vector;
using std::unique_ptr;

void ATM::display_balance()
{
    cout<<"ATM balance: "<<account->get_balance()<<"\n\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter amount to deposit: ";
    cin>>amount;

    account->deposit(amount);
}

void ATM::make_withdrawal()
{
    auto amount = 0;
    cout<<"Enter withdrawal amount: ";
    cin>>amount;
    account->withdraw(amount);
}

//free functions not part of the atm class
vector<Customer> get_customers()
{
	vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Doe"));
	customers.push_back(Customer(3, "John Hancock"));
	customers.push_back(Customer(4, "Mary Hancock"));
	customers.push_back(Customer(5, "Bjarne Stroustrup"));

    return customers;
}

int scan_card(int max_value)
{
    return rand() % max_value;
}


void display_menu()
{
    cout<<"\n1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Display Balance\n";
    cout<<"4-Exit\n";
}

void run_menu()
{
    ATMData data;
    vector<Customer>& customers = data.get_customers();
    data.save_customers(customers);

    auto option = 0;
    auto input = 'c';
    
    do
    {
        cout<<"Enter to scan card: ";
        cin>>input;
        
        //vector<Customer> customers = get_customers();
        auto customer_index = scan_card(customers.size());
        Customer& customer = customers[customer_index];

        auto account_index = 0;
        cout<<"Enter 1 for Checking 2 for Savings: ";
        cin>>account_index;
        unique_ptr<BankAccount>& account = customer.get_account(account_index);

        ATM atm(account.get());

        do
        {
            display_menu();

            cout<<"Enter menu option: ";
            cin>>option;
            handle_menu_option(option, atm);

            if(option == 4)
            {
                data.save_customers(customers);
            }

        } while (option != 4);
    } while(true);
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