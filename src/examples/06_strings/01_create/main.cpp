#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    string lang = "C++";
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    lang.append(" is cool");
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    lang.append("yeah");
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    lang.append(" ");
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    return 0;
}