#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>
#include <iomanip>

template <typename T>
void iter(char * a, unsigned int length, T fonction)
{
    for (unsigned int i = 0; i < length; i++)
    {
        fonction(a[i]);
    }
}

void print(char s)
{
   std::cout << s;
}

#endif
