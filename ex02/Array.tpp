#include "Array.hpp"

template <typename T, typename F>
void iter(T *a, unsigned int length, F fonction)
{
    for (unsigned int i = 0; i < length; i++)
    {
        fonction(a[i]);
    }
}

template<typename T>
Array<T>::Array()
{
    this->array = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    this->array = new T[n];
    for (unsigned int i = 0; i < n; i++)
    {
        this->array[i] = 0;
    }
}

template<typename T>
Array<T>::~Array()
{
    if (this->array)
        delete []array;
}

template<typename T>
unsigned int Array<T>::size() const
{
    unsigned int i = 0;
    while(this->array[i])
        i++;
    return i;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
    if (this->array)
        delete[] array;
    if (src.size())
    {
        this->array = new T[src.size()];
        for(unsigned int i = 0; i < src.size(); i++)
        {
            this->array[i] = src.array[i];
        }
    }
    else
        this->array = NULL;
    return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
    if(!this->array || index - 1 > this->size())
        throw(Array<T>::out_of_range());  
    return this->array[index];
}

template<typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if(index - 1 > this->size())
        throw(Array<T>::out_of_range());  
    return this->array[index];
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
    if (this->array)
        delete[] array;
    if (copy.size())
    {
        this->array = new T[copy.size()];
        for(unsigned int i = 0; i < copy.size(); i++)
        {
            this->array[i] = copy.array[i];
        }
    }
    else
        array = NULL;
}

template<typename T>
const char *Array<T>::out_of_range::what() const throw()
{
    return "Out of range\n";
}
