#include "do_while.h"

using std::cin; using std::cout;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'n';
    
    do
    {
        cout<<"Enter y to continue: ";
        cin>>choice;
    } 
    while (choice == 'y' || choice == 'Y');
    
}



