#include "atm.h"
#include "atm_data.h"
#include "customer.h"
#include<time.h>//helps provide a true random number with rand() function
#include<vector>
#include<memory>

using std::cout; using std::vector;
using std::unique_ptr; using std::make_unique;

int main()
{
	srand(time(NULL));

	run_menu();

	return 0;
}