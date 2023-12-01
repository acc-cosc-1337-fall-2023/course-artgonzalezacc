//
#include<iostream>

class Vector
{
public:
    Vector(int size);
    Vector(const Vector& v);//Rule 1 of 3 of legacy C++-Copy constructor
    Vector& operator=(const Vector& v);//Rule 2 of 3 of legacy C++ Copy assignment
    Vector(Vector&& v);//Rule 4 of 5 in modern C++-move constructor
    ~Vector();//Rule number 3 of 3 in Legacy C++-destructor
private:
    int size;
    int capacity;
    int *elements;

};

//FREE FUNCTIONS-NOT PART OF THE CLASS
void use_vector();