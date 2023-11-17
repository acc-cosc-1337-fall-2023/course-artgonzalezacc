//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout; using std::string; using std::setw;

void use_stack_array()
{
    const auto SIZE = 3;
    int nums[SIZE]{5, 7, 0};//stack array(list)

    for(int i=0; i < SIZE; i++)
    {
        cout<<nums[i]<<"\n";
    }
}

void use_parallel_arrays()
{
    const auto SIZE = 3;
    int month_numbers[SIZE]{1, 2, 3};
    string month_names[SIZE]{"Jan", "Feb", "Mar"};

    for(auto i=0; i < SIZE; i++)
    {
        cout<<month_numbers[i]<<" "<<month_names[i]<<"\n";
    }
}

void arrays_and_pointers()
{
    const auto SIZE = 3;

    int nums[SIZE]{5, 7, 0};//stack array(list)

    cout<<nums<<"\n";

    int* ptr = nums;
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr++;//move 4 bytes 
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr++;//move 4 bytes 
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr--;//move back 4 bytes
    cout<<ptr<<" "<<*ptr<<"\n";
}

void display_array(int* nums)
{//sentinel value -1
    for(auto i=0; nums[i] != -1; i++)
    {
        cout<<nums[i]<<"\n";
    }

    cout<<"\n";
}

void display_array(int* nums, const int SIZE)
{
    for(auto i=0; i < SIZE; i++)
    {
        cout<<nums[i]<<"\n";
    }
}

void populate_time_table(int times_table[][COLS], const int ROWS)
{
    for(auto i=0; i < ROWS; i++)
    {
        for(auto j=0; j < COLS; j++)
        {
            times_table[i][j] = (i+1) * (j+1);
        }
    }    
}

void display_times_table(int times_table[][COLS], const int ROWS)
{
    for(auto i=0; i < ROWS; i++)
    {
        for(auto j=0; j < COLS; j++)
        {
            cout<<setw(5)<<times_table[i][j];
        }

        cout<<"\n";
    }
}