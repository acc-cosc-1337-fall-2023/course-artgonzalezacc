#include "text_output.h"

using std::cout; using std::string;
using std::ofstream; using std::ifstream;
using std::getline;

void output_data_to_file()
{
    //1-open file
    cout<<"Create file object...\n";
    ofstream my_file;
    cout<<"Open the file\n";
    my_file.open("example.dat");

    //2-output to file
    cout<<"Write to file\n";
    my_file<<"Write to file\n";
    my_file<<"Write to file again\n";
    my_file<<"Write to file again\n";

    //3-close file
    my_file.close();

}

void input_data_from_file()
{
    string line;

    cout<<"\nCreate file object/variable\n";
    ifstream my_file;
    cout<<"Open file\n";
    my_file.open("example.dat");

    if(my_file.is_open())
    {
        cout<<"Read from the file\n";
        while(getline(my_file, line))
        {
            cout<<line<<"\n";
        }
    }
    else
    {
        cout<<"Cannot open the file\n";
    }

    my_file.close();
}