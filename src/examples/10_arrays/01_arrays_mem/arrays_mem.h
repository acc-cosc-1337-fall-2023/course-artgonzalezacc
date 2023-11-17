//arrays_mem.h - stack array example
#include<iomanip>
#include<iostream>
#include<string>

const int COLS = 10;
const int ROWS = 10;

//function prototype for stack_array
void use_stack_array();
void use_parallel_arrays();
void arrays_and_pointers();
void display_array(int* nums);
void display_array(int* nums, const int SIZE);
void populate_time_table(int times_table[][COLS], const int ROWS);
void display_times_table(int times_table[][COLS], const int ROWS);