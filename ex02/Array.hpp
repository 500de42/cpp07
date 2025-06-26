#ifndef ARRAY_TPP
#define ARRAY_TPP


template <typename T>
class Array
{
    private :
        T *array;
    public :
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array &operator=(const Array &src);
        ~Array();
        int size();
        class out_of_range : std::exeption
        {
            virtual const char *what() const throw();
        };
};
#include "Array.tpp"
#endif
