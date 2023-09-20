#include "void.h"
#include<iostream>

using std::cout;

int main()
{
    auto num = 10;

    value_param(num);

    cout<<"Num is: "<<num<<"\n";

    return 0;
}