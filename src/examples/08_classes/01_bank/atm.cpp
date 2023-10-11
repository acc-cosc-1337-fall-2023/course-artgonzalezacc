//atm.cpp
#include "atm.h"

using std::cout;

void ATM::display_balance()
{
    cout<<"ATM balance: "<<account.get_balance()<<"\n\n";
}