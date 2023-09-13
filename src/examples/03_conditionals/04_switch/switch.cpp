//write include statement for switch header
#include "switch.h"

using std::string;

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise
std::string menu(int num)
{
    string result;

    switch(num)
    {
    case 1:
        result = "Option 1";
        break;
    case 2:
        result = "Option 2";
        break;
    case 3:
        result = "Option 3";
        break;
    case 4:
        result = "Option 4";
        break;
    default:
        result = "Invalid Option";
        break;
    }

    return result;
}

