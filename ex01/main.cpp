#include "Iter.hpp"

int main( void )
{
    char s[] = "salut les gars";

    iter(s, 15, print);
    std::cout << "\n";
    iter(s, 15, makeUpper);
    std::cout << "\n";
    iter(s, 15, print);
    return 0;
}
