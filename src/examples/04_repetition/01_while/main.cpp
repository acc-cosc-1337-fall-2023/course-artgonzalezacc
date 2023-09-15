#include "while.h"

using std::cout;
using std::string;

int main() 
{
	string str = "Hello";
	
	display_string(str);

	auto num = 5;
	auto result = sum_of_squares(num);
	cout<<"Result is: "<<result<<"\n";

	return 0;
}