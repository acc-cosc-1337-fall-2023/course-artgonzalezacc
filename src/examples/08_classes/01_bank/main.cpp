#include "atm.h"
#include "customer.h"
#include<time.h>//helps provide a true random number with rand() function
#include<vector>
#include<memory>

using std::cout; using std::vector;
using std::unique_ptr; using std::make_unique;

int main()
{

	srand(time(NULL));
	
	vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Doe"));
	customers.push_back(Customer(3, "John Hancock"));
	customers.push_back(Customer(4, "Mary Hancock"));
	customers.push_back(Customer(5, "Bjarne Stroustrup"));

	ATM atm(customers);
	run_menu(atm);


	return 0;
}