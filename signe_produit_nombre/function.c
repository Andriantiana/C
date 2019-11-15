#include <stdio.h>
#include <stdlib.h>

char signe(double nb)
{
    if (nb < 0)
        return "negatif";
    else if (nb > 0)
        return "positif";
    else
        return "null";

}
