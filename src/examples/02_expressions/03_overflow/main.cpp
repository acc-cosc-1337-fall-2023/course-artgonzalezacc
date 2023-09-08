#include<iostream>
#include<climits>


using std::cout;

int main()
{
    auto max_int = INT_MAX;
    cout<<"Max int: "<<max_int<<"\n";
    
    max_int = max_int + 1;
    cout<<"Max int: "<<max_int<<"\n\n";

    auto min_int = INT_MIN;
    cout<<"Min int: "<<min_int<<"\n";
    
    min_int = min_int -1;
    cout<<"Min int: "<<min_int<<"\n";

    return 0;
}