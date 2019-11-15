#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int main()
{
    double a, b, nb;
    printf("Ajouter une borne de l'intervalle:\n");
    scanf("%lf", &a);
    printf("Ajouter l'autre borne de l'intervalle:\n");
    scanf("%lf", &b);
    printf("Entrez la valeur:\n");
    scanf("%lf", &nb);
    appartient(a, b, nb);

    return 0;
}
