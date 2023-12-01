//
#include<iostream>

#ifndef MY_VECTOR
#define MY_VECTOR

class Vector
{
public:
    Vector()=default;
    Vector(int size);
    Vector(const Vector& v);//Rule 1 of 3 of legacy C++-Copy constructor
    Vector& operator=(const Vector& v);//Rule 2 of 3 of legacy C++ Copy assignment
    Vector(Vector&& v);//Rule 4 of 5 in modern C++-move constructor
    Vector& operator=(Vector&& v1);//Rule 5 of 5 in modern c++-move assignment
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    void Push_Back(int value);
    ~Vector();//Rule number 3 of 3 in Legacy C++-destructor
private:
    int size{0};
    int capacity{0};
    int *elements{nullptr};
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    void Reserve(int new_size);

};
#endif
//FREE FUNCTIONS-NOT PART OF THE CLASS
void use_vector();
Vector get_vector();