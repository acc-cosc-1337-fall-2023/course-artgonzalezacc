#include "my_vector.h"

using std::cout;

/*
CONSTRUCTOR
1. initialize the size
2. initialize the capacity with size value
3. create dynamic memory of size value in elements
*/
template<typename T>
Vector<T>::Vector(int size) :
    elements{new T[size]}
{
    cout<<"Constructor-Created memory at address: "<<elements<<"\n";
    capacity = size;
}

/*
COPY CONSTRUCTOR
1. Copy v1.size and v1.capacity to v2.size to v2.capacity
2. Create new memory for v2
3. Copy element values from v1 to v2
*/
template<typename T>
Vector<T>::Vector(const Vector<T>& v1) :
    size{v1.size}, capacity{v1.capacity}, elements{new T[v1.capacity]}
{
    cout<<"Copy constructor-Created memory at:  "<<elements<<"\n";

    for(auto i=0; i < v1.size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

/*
COPY ASSIGNMENT
1. Create temp memory for v2
2. Copy values from v1 to v2 temp memory
3. Delete v2.elements
4. Point v2 elements to temp memory
5. Set v2.size to v1.size
6-return a self reference

*/
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v1)
{
    T* temp = new T[v1.size];

    for(auto i=0; i < v1.size; i++)
    {
        temp[i] = v1.elements[i];
    }

    cout<<"Copy Assignment-Deleting memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    cout<<"Copy Assignment- Created memory at "<<elements<<"\n";
    temp = nullptr;

    size = v1.size;

    return *this;
}

/*
1-Get v1.elements memory(switch/steal the data and make v1 empty)
2-Get size from v1
3-point v1.elements to nothing(nullptr)
4-set v1 size to 0
*/
template<typename T>
Vector<T>::Vector(Vector<T>&& v1) :
 size {v1.size}, elements{v1.elements}//switching v2 to pointer to v1 elements
{
    cout<<"Move constructor-Memory pointer switched "<<elements<<"\n";
    v1.elements = nullptr;
    v1.size = 0;
}

/*
1-Clear/delete original memory from v1
2-Point v2 elements to v1 elements
3-Get size from v1
4-Point v2.elements to nullptr
5-Set v2 size to 0
6-return a self reference
*/
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v2)
{
    cout<<"Move Assignment-Delete memory "<<elements<<"\n";
    delete[] elements;

    elements = v2.elements;
    cout<<"Move Assignment-Memory pointer switched "<<elements<<"\n";

    size = v2.size;
    v2.elements = nullptr;
    v2.size = 0;

    return *this;
}

/*
1-make sure that the new size is greater than capacity
2-Create temp memory of new_size allocation
3-copy values from old memory to new memory
4-delete the old memory
5-set elements to temp memory
6-set capacity to new_size
*/
template<typename T>
void Vector<T>::Reserve(int new_size)
{
    if(new_size <= capacity)
    {
        return;
    }

    T* temp = new T[new_size];
    cout<<"Reserve-Memory created "<<temp<<"\n";

    for(auto i=0; i < size; i++)
    {
        temp[i] = elements[i];
    }

    cout<<"Reserve-Delete old memory "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    capacity = new_size;
}

/*
PUSH BACK
1-if capacity is 0 call Reserve w RESERVE_DEFAULT_SIZE as function argument
2-else if size equal capacity call Reserve w capacity * RESERVE_DEFAULT_MULTIPLIER
3-add value to current elements[SIZE]
4-increment the size
*/
template<typename T>
void Vector<T>::Push_Back(T value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] =  value;
    size++;
}

template<typename T>
Vector<T>::~Vector()
{
    cout<<"Destructor-Deleting memory at address: "<<elements<<"\n";
    delete []elements;
}

//configure template class to support int, double, float
template class Vector<int>;
template class Vector<double>;
template class Vector<float>;

//FREE FUNCTION not part of the class
Vector<int> get_vector() 
{
    Vector<int> v2(3);
    return v2;
}