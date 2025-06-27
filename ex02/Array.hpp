#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>

template <typename T>
class Array
{
    private :
        T *array;
    public :
        Array();
        Array(unsigned int n);
        Array(const Array<T> &copy);
        Array<T> &operator=(const Array<T> &src);
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        ~Array();
        unsigned int size() const;
        class out_of_range : std::exception
        {
            virtual const char *what() const throw();
        };
};

void makeUpper(char& c);
void print(char s);

#include "Array.tpp"
#endif

