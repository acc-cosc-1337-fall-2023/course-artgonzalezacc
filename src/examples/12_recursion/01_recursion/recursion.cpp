#include "recursion.h"

using std::cout;

//Write code for recursive display function
void say_hello(int times)
{
    if(times == 0)
    {
        cout<<"Base case\n";
        return;
    }
    
    cout<<"Hello\n";
    
    say_hello(times-1);
}

//Write code for recursive factorial
