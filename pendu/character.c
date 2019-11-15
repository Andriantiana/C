#define MAXSIZE 50
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà

    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caractère qu'on a lu
}

//Fonction qui permet de compter le nombre de mots (lignes non vides) dans un fichier
int count_words(char file[MAXSIZE])
{
    int nb_words = 0;
    char chaine[MAXSIZE] = "";
    FILE* fichier = NULL;
    fichier = fopen(file, "r");
    if(fichier != NULL)
    {
        while(fgets(chaine, MAXSIZE, fichier) != NULL && chaine[0] != 10)//10 est le nombre corresspondant à Line Feed
        {
            nb_words += 1;
        }
        fclose(fichier);
    }
    return nb_words;
}


