#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    //create strings
    string s0 = "C++";
    cout<<s0<<"\n";

    string s1 = "initial string";
    cout<<s1<<"\n";

    string s2(s1, 8, 3);
    cout<<s2<<"\n";

    string s3("another character sequence", 12);
    cout<<s3<<"\n";

    string s4(10, 'x');
    cout<<s4<<"\n";

    string s5(10, 42);//10 *
    cout<<s5<<"\n";

    string s7("123456abac**(**)");
    cout<<s7<<"\n";


    return 0;
}