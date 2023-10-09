//add include statements
#include "func.h"

using std::string; using std::cout; using std::cin;

//add function code here
double get_gc_content(const string& dna)
{
    double content;
    double count = 0;

    for(std::size_t i=0; i < dna.size(); i++)
    {
        if(dna[i] == 'C' || dna[i] == 'G') 
        {
            count++;
        }
    }

    content = count / dna.size();
    return content;
}

std::string get_reverse_string(string dna)
{
    string reverse;
    int index = dna.size() - 1;

    while(index >= 0)
    {
        reverse.push_back(dna[index]);
        index--;
    }

    return reverse;
}

std::string get_dna_complement(string dna)
{
    string complement = get_reverse_string(dna);

    for(std::size_t i=0; i < complement.size(); i++)
    {
        switch(complement[i])
        {
        case 'A':
            complement[i] = 'T';
            break;
        case 'T':
            complement[i] = 'A';
            break;
        case 'C':
            complement[i] = 'G';
            break;
        case 'G':
            complement[i] = 'C';
            break;
        }
    }

    return complement;
}

void display_menu()
{
    cout<<"\n\n1-Get GC Content\n";
    cout<<"2-Get DNA Complement\n";
    cout<<"3-Exit\n\n";
}

void run_menu()
{
    auto option = 0;

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;
        handle_menu_option(option);
        
    } while (option != 3);
    
}

void handle_menu_option(int option)
{
    string dna;

    if(option == 1)
    {
        cout<<"Enter dna: ";
        cin>>dna;
        cout<<get_dna_complement(dna);
    }
    else if(option == 2)
    {
        cout<<"Enter dna: ";
        cin>>dna;
        cout<<get_gc_content(dna);
    }
    else
    {
        cout<<"\nExiting...\n";
    }
}
