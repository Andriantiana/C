#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

int main()
{
    Personne Joueur[2];
    int i;
    for(i = 0; i < 2; i++)
    {
       printf("Quel est votre nom?\n");
       scanf("%s", Joueur[i].nom);
       printf("Quel est votre prenom?\n");
       scanf("%s", Joueur[i].prenom);
       printf("Quel est votre adresse?\n");
       scanf("%s", Joueur[i].adresse);
       printf("Quel est votre age?\n");
       scanf("%d", &Joueur[i].age);
       printf("Quel est votre genre?\n");
       scanf("%d", &Joueur[i].genre);
    }
    for(i = 0; i < 2; i++)
    {
       printf("Nom du joueur %d: %s\n", i, Joueur[i].nom);
       printf("Prenom du joueur %d: %s\n", i, Joueur[i].prenom);
       printf("Adresse du joueur %d: %s\n", i, Joueur[i].adresse);
       printf("Age du joueur %d: %d\n", i, Joueur[i].age);
       printf("Genre du joueur %d: %d\n", i, Joueur[i].genre);
    }

    return 0;
}
