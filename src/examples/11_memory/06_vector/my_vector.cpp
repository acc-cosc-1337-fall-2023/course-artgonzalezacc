#include "my_vector.h"

using std::cout;

//
Vector::Vector(int size)
: size{0}, capacity{size}, elements{new int[size]}
{
    cout<<"Constructor-New memory created at "<<elements<<"\n";
}
/**
 Copy Constructor
 1-Copy size from v1 to v2
 2-Copy capacity from v1 to v2
 3-Create new memory for v2 
 4-Copy the values from v1 to v2
*/
Vector::Vector(const Vector& v1)
: size{v1.size}, capacity{v1.capacity}, elements{new int[v1.size]}
{
    cout<<"Copy constructor-created memory at "<<elements<<"\n";
    for(auto i=0; i < v1.size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

/*
1-Create temporary memory for v2
2-Copy values from v1 into v2 temporary memory
3-Delete v2 elements memory
4-Point v2 elements to temporary memory
5-Set v2 size to v1.size
6-Return a reference to vector using (this)
*/
Vector& Vector::operator=(const Vector& v1)
{
    int* temp = new int[v1.size];

    for(auto i=0; i < v1.size; i++)
    {
        temp[i] = v1.elements[i];
    }

    cout<<"Copy Assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    temp = nullptr;

    cout<<"Copy Assignment create memory at "<<elements<<"\n";
    size = v1.size;
    return *this;
}

Vector::~Vector()
{
    cout<<"Delete memory at "<<elements<<"\n";
    delete[] elements;
}

//FREE FUNCTIONS-NOT PART OF THE CLASS

void use_vector()
{   //NOT recommended; use a stack variable instead -- Vector v(3);
    Vector* v = new Vector(3);
    cout<<"Exiting use_vector free function...\n";
    delete v;
}

