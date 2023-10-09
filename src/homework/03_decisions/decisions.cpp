//write include statement for decisions header
#include "decisions.h"

using std::string; using std::cout; using std::cin;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string letter_grade;

    if(grade >= 90 && grade <= 100)
    {
        letter_grade = "A";
    }
    else if(grade >= 80 && grade < 90)
    {
        letter_grade = "B";
    }
    else if(grade >= 70 && grade < 80)
    {
        letter_grade = "C";
    }
    else if(grade >= 60 && grade < 70)
    {
        letter_grade = "D";
    }
    else if(grade >= 0 && grade < 60)
    {
        letter_grade = "F";
    }
    else
    {
        letter_grade = "Invalid Grade";
    }

    return letter_grade;
}

string get_letter_grade_using_switch(int grade)
{
    string letter_grade;
    //or use switch with ranges 
    switch (grade)
    {
    case 90 ... 100:
        letter_grade = "A";
        break;
    case 80 ... 89:
        letter_grade = "B";
        break;        
    case 70 ... 79:
        letter_grade = "C";
        break;        
    case 60 ... 69:
        letter_grade = "D";
        break;        
    case 0 ... 59:
        letter_grade = "F";
        break;        
    default:
        letter_grade = "Invalid Grade";
        break;
    }

    return letter_grade;
}

void display_menu()
{
    cout<<"1-Letter grade using if\n";
    cout<<"2-Letter grade using switch\n";
    cout<<"3-Exit\n";
}

void run_menu()
{
    auto choice = 0;
    string letter_grade;
    display_menu();
    cout<<"Enter choice: ";
    cin>>choice;

    if(choice > 2)
    {
        cout<<"Invalid option\n";
        return;
    }

    handle_menu_option(choice);
}

void handle_menu_option(int choice)
{
    auto grade = 0;
    string letter_grade;

    cout<<"Enter grade: ";
    cin>>grade;

    if(choice == 1)
    {
        letter_grade = get_letter_grade_using_if(grade);
    }
    else if(choice == 2)
    {
        letter_grade = get_letter_grade_using_switch(grade);
    }

    cout<<letter_grade<<"\n";

}