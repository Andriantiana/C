#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int main(int argc, char *argv[])
{
    int tableau[4] = {42, 21, 54, 28};
    int somme = sommeTableau(tableau, 4);
    double moyenne = moyenneTableau(tableau, 4);
    printf("Somme :%d\nMoyenne: %f\n", somme, moyenne);
    int copie_tableau[4] = {0};
    copie(tableau, copie_tableau, 4);
    maximumTableau(copie_tableau, 4, 30);
    ordonnerTableau(tableau, 4);
    int i;
    for(i = 0; i < 4; i++)
    {
        printf("i: %d  %d\n", i, copie_tableau[i]);
    }
    for(i = 0; i < 4; i++)
    {
        printf("%d\n", tableau[i]);
    }


    return 0;
}


