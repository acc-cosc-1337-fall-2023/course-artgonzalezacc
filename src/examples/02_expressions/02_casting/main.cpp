#include<iostream>
#include "casting.h"

using std::cout;

int main()
{
    auto result = convert_to_double(10, .08);
    cout<<result<<"\n";

    return 0;
}