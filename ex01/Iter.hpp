#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>
#include <iomanip>

template <typename T, typename F>
void iter(T *a, unsigned int length, F fonction)
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

void makeUpper(char& c)
{
    c = std::toupper(c);
}

#endif
