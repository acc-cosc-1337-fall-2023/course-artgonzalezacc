#include "my_vector.h"
#include<string>
//
using std::cout; 


int main()
{   
    Vector<int> nums(3);
    nums.Push_Back(65);
    cout<<nums[0]<<"\n";

    nums.Push_Back(16);
    cout<<nums[1]<<"\n";
    nums.Push_Back(1);
    nums.Push_Back(10);//Vector will call Reserve to add more heap memory and copy the values to the new memory

    Vector<double> nums1(3);
    nums1.Push_Back(5.5);
    cout<<nums1[0]<<"\n";

    Vector<float> floats(3);
    floats.Push_Back(6.6);
    cout<<floats[0]<<"\n";


    return 0;
}