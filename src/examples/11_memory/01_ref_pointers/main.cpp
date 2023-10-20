#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num1 = 5;
	int* num_ptr = &num1;//point to the address of num1

	cout<<"Num1 address is: "<<&num1<<"\n";
	cout<<"Address that num_ptr point to: "<<num_ptr<<"\n";
	cout<<"Value of num1: "<<num1<<"\n";
	cout<<"Value that num_ptr address holds: "<<*num_ptr<<"\n";//go to the address that you point to and get the value
	cout<<"Get the address where num_ptr is on the stack: "<<&num_ptr<<"\n";

	*num_ptr = 10;
	cout<<"Value of num1: "<<num1<<"\n";

	int num2 = 20;

	num_ptr = &num2;//point to num2 and not num1

	cout<<"Address that num_ptr point to(num2): "<<num_ptr<<"\n";
	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Value that num_ptr address holds: "<<*num_ptr<<"\n";//go to the address that you point to and get the value

	return 0;
}