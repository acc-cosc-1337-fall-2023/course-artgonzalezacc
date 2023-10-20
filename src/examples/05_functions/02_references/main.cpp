#include<iostream>

using std::cout;

int main()
{
    int num = 5, num1=10;
    int& num_ref = num;//take the address where num is stored
    num_ref = num1;
    cout<<"Num1: "<<num1<<"\n";
    num1 = 100;
    cout<<"Display the address where num is stored: "<<&num_ref<<"\n";
    cout<<"Num address via num: "<<&num<<"\n";
    cout<<"Num value via num: "<<num<<"\n";
    cout<<"Num value via num_ref: "<<num_ref<<"\n";

    num_ref = 10;
    cout<<"Num value via num: "<<num<<"\n";
    cout<<"Num value via num_ref: "<<num_ref<<"\n";

    num = 20;
    cout<<"Num value via num: "<<num<<"\n";
    cout<<"Num value via num_ref: "<<num_ref<<"\n";

    return 0;
}