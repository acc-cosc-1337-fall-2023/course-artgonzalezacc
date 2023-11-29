#include "my_vector.h"

using std::cout;

//
Vector::Vector(int size)
: size{0}, capacity{size}, elements{new int[size]}
{
    cout<<"Constructor-New memory created at "<<elements<<"\n";
}

Vector::~Vector()
{
    cout<<"Delete memory at "<<elements<<"\n";
    delete[] elements;
}

//FREE FUNCTIONS-NOT PART OF THE CLASS

void use_vector()
{
    Vector v(3);
    cout<<"Exiting use_vector free function...\n";
}

