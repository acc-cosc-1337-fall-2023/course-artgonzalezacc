//
#include<iostream>

class Vector
{
public:
    Vector(int size);
    ~Vector();//Rule number 3 of 3 in Legacy C++
private:
    int size;
    int capacity;
    int *elements;

};

//FREE FUNCTIONS-NOT PART OF THE CLASS
void use_vector();