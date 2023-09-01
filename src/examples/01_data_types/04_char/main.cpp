#include<iostream>
#include "char.h"

using std::cout;

int main()
{
    char letter = 'A';

    double ascii_value = get_char_ascii_value(letter);

    cout<<"The ascii value for "<<letter<<" is "<<ascii_value<<"\n";

    return 0;
}