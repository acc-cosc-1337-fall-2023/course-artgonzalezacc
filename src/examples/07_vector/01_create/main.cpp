#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{7, 4, 20};
    vector<int> nums1;
    vector<int> nums2(5, 10);

    for(auto num2: nums2)
    {
        cout<<num2<<"\n";
    }
    cout<<"\n";
    vector<int> nums3 = nums;

    for(auto num3: nums3)
    {
        cout<<num3<<"\n";
    }

    vector<double> doubles {5.5, 3.9, 8.99};
    cout<<"\n";
    for(auto dub: doubles)
    {
        cout<<dub<<"\n";
    }


    return 0;
}