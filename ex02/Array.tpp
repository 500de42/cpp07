#include "Array.hpp"


template<typename T>
Array<T>::Array()
{
    this->array = "";
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    new this->array[n];
}

template<typename T>
Array<T>::~Array()
{
    if (this->array)
        delete []array;
}

template<typename T>
int Array<T>::size()
{

}

template<typename T>
Array<T> &Array<T>::operator=(const Array &src)
{

}

template<typename T>
Array<T>::Array(const Array &copy)
{
    
}

template<typename T>
const char *Array<T>::out_of_range::what() const throw()
{
    this->array = "";
}
