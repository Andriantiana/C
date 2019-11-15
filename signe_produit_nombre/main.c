#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

int main()
{
    double a, b;
    printf("Veuillez entrez un nombre\n");
    scanf("%lf", &a);
    printf("Veuillez entrez un autre nombre\n");
    scanf("%lf", &b);
    if (strcmp(signe(a), "null") == 0 && strcmp(signe(b),"null") == 0)
        if (signe(a) == signe(b))
            printf("Positif");
        else
            printf("negatif");
    else
        printf("null");

    return 0;
}
