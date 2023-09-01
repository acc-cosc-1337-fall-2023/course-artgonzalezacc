#include "decimals.h"
#include<iostream>

using std::cout; using std::cin;


int main()
{
    double value;//create a variable

    cout<<"Enter a value: ";
    cin>>value;

    double result = add_to_double_1(value);

    cout<<"Result is: "<<result<<"\n";

    return 0;
}