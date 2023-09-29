#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{7, 4, 20};
    
    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";

    for(auto i=0; i < nums.size(); i++)
    {
        cout<<nums[i]<<"\n";
    }
    cout<<"\n";
    nums.push_back(3);
    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";

    for(auto num: nums)
    {
        cout<<num<<"\n";
    }
    cout<<"\n";
    nums.push_back(15);
    nums.push_back(25);

    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";

    nums.push_back(0);

    cout<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";

    return 0;
}