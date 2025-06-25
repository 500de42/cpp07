#include "Iter.hpp"

int main( void )
{
    char *s = "salut les gars";

    iter(s, 15, print);
    return 0;
}
