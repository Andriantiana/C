#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int sortie = 1;
    do{
    int nombreMystere = 0, nombreEntre = 0;
    //Demander au joueur le niveau
    int niveau = 1;
    printf("Tapez 1: entre 1 et 100\n" );
    printf("Tapez 2: entre 1 et 1000\n");
    printf("Tapez 3: entre 1 et 10000\n");
    //Si le joueur n'entre pas un nombre valide, redemander
    int MAX = 0;
    do
    {
       printf("Quel niveau?\n");
       scanf("%d", &niveau);
       switch(niveau)
       {
           case 1:
               MAX = 100;
               break;
           case 2:
               MAX = 1000;
               break;
           case 3:
               MAX = 10000;
               break;
           default:
               MAX = 0;
               printf("Veuillez entrez un nombre valide(1 ou 2 ou 3)");
               break;
       }

    } while (niveau != 1 && niveau != 2 && niveau != 3);


    const int MIN = 1;

    // Génération du nombre aléatoire

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
    int compteur = 0;

    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        //On incrémente le compteur
        compteur++;
        // On compare le nombre entré avec le nombre mystère

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere en %d coups!!!\n\n", compteur);

    } while (nombreEntre != nombreMystere);
    printf("Voulez-vous faire une autre partie?Tapez 1 si oui, 0 sinon\n\n");
    scanf("%d", &sortie);
  } while (sortie);
    return 0;
}

