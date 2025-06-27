#include "Array.hpp"

void print(char s)
{
   std::cout << s;
}

void makeUpper(char& c)
{
    c = std::toupper(c);
}

int main ()
{
    Array<int> a;
    Array<int> b(15);
    Array<int> d(b);
    Array<int> c;

    c = b;
    try
    {
        // c[25] = 17;
        c[0] = 3663;
    }
    catch (std::exception const &e)
    {
        std::cout << e.what();
    }
    std::cout << c[0] << "\n";
}

