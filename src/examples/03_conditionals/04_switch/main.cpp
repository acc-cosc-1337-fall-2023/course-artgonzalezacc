#include<iostream>
#include "switch.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	auto option = 0;
	cout<<"Enter a number: ";
	cin>>option;

	string result = menu(option);
	cout<<result<<"\n";


	return 0;
}