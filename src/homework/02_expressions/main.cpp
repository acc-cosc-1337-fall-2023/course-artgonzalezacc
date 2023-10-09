//write include statements
#include<iostream>
#include<iomanip>
#include<cmath>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cin; using std::cout; using std::setw; using std::setprecision;
using std::right; using std::left;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	auto meal_amount = .1, tip_amount = .1, tax_amount = .1, total = .1, tip_rate = .1;

	cout<<"Enter meal amount: ";
	cin>>meal_amount;

	cout<<"Enter tip amount: ";
	cin>>tip_rate;

	tax_amount = round(get_sales_tax_amount(meal_amount) * 100) / 100;
	tip_amount = round(get_tip_amount(meal_amount, tip_rate)*100) / 100;

	total = meal_amount + tax_amount + tip_amount;
	
	cout<<"\n"<<setprecision(2)<<std::fixed;
	cout<<setw(15)<<left<<"Meal amount: "<<setw(7)<<right<<meal_amount<<"\n";
	cout<<setw(15)<<left<<"Sales Tax: "<<setw(7)<<right<<tax_amount<<"\n";
	cout<<setw(15)<<left<<"Tip Amount: "<<setw(7)<<right<<tip_amount<<"\n";
	cout<<setw(15)<<left<<"Total: "<<setw(7)<<right<<total<<"\n";

	return 0;
}
