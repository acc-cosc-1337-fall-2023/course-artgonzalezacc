#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	auto hours = 0;
	cout<<"Enter hours: ";
	cin>>hours;

	auto result = is_overtime(hours);
	
	if(result)
	{
		cout<<hours<<" is overtime\n";
	}
	else
	{
		cout<<hours<<" is not overtime\n";
	}
	

	return 0;
}
