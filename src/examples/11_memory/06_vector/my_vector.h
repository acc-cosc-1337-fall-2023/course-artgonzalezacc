#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

template<typename T>
class Vector
{
public:
    Vector() = default;
    Vector(int size);//constructor
    Vector(const Vector<T>& v1);//Rule 1 of 3 in Legacy C++: Copy constructor
    Vector& operator=(const Vector<T>& v);//Rule 2 of 3 in Legacy C++: copy assignment
    Vector(Vector<T>&& v);//Rule 4 of 5 modern C++ move constructor
    Vector& operator=(Vector<T>&& v);//Rule 5 of 5 modern C++ move assignment
    int Size(){return size;}
    int Capacity(){return capacity; }
    void Push_Back(T value);
    T& operator[](int index){return elements[index];}
    T& operator[](int index)const{return elements[index];}
    ~Vector();//destructor
    
private:
    int size{0}; //current size of list and current index
    int capacity{0}; //total elements the list can hold
    T* elements{0};//pointer to a list on the heap/free store
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    void Reserve(int new_size);
    
};

#endif

Vector<int> get_vector();