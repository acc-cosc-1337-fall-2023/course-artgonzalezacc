#include "arrays_mem.h"

int main() 
{
	//use_stack_array();
	//use_parallel_arrays();
	//arrays_and_pointers();
	//const auto SIZE = 4;

    //int nums[SIZE]{5, 7, 0, -1};//stack array(list)

	//display_array(nums);
	//display_array(nums, SIZE);
	int times_table[ROWS][COLS];//create an empty list
	populate_time_table(times_table, ROWS);
	display_times_table(times_table, ROWS);

	return 0;

}