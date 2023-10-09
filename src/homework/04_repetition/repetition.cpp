//add include statements
#include "repetition.h"

using std::cin; using std::cout;

//add function(s) code here
int factorial(int num)
{
    auto result = 1;
    
    while(num > 0)
    {
        result *= num;
        num--;
    }

    return result;
}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if(num1 < num2)
        {
            auto n = num1;
            num1 = num2;
            num2 = n;
        }
        if(num1 > num2)
        {
            num1 = num1 - num2;
        }
    }

    return num1;
}

void display_menu()
{
    cout<<"\n\n1-Factorial\n";
    cout<<"2-Greatest Common Divisor\n";
    cout<<"3-Exit\n";
}

void run_menu()
{
    auto option = 0;
    auto choice = 'n';

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;
        
        handle_menu_option(option);

        if(option == 3)
        {
            cout<<"Exit y or n?";
            cin>>choice;
            if(choice == 'n' || choice == 'N')
            {
                option = 0;
            }
        }

    } while (option != 3);
   
}

void handle_menu_option(int option)
{
    auto num = 0, num1 = 0;
    
    if(option == 1)
    {
        cout<<"Enter a number: ";
        cin>>num;
    
        cout<<"Factorial: "<<factorial(num);
    }
    else if(option == 2)
    {
        cout<<"Enter a number 1: ";
        cin>>num;
    
        cout<<"Enter a number 2: ";
        cin>>num1;
        cout<<"GCD: "<<gcd(num, num1);
    }
    else if(option == 3)
    {
        cout<<"Chose exit\n";
    }
    else
    {
        cout<<"Invalid option\n";
    }
}