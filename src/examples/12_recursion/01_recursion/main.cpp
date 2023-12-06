#include "recursion.h"

using std::cout;

int main() 
{
	cout<<"Load to stack f(5)\n";
	auto result = recursive_factorial(5);
	cout<<"Unload from stack \n\n";
	cout<<"Result: "<<result<<"\n";

	return 0;
}