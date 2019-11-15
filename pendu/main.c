#define MAXSIZE 50
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "character.h"
#include "fonction_jeu.h"


int main(int argc, char* argv[])
{
    //Compter les nombre de mots dans le fichier
    int nb_words = count_words("mots.txt");

    //Choisir un mot au hasard dans le dictionnaire
    int nb_mots = 0;
    char chaine[MAXSIZE] = "";
    srand(time(NULL));
    int num_word = (rand() % (nb_words - 1)) + 1;
    FILE* fichier = NULL;
    fichier = fopen("mots.txt", "r");
    if(fichier != NULL)
    {
        while(fgets(chaine, MAXSIZE, fichier) != NULL && chaine[0] != 10 && num_word != nb_mots)//10 est le nombre corresspondant à Line Feed
        {
            nb_mots += 1;
        }

        fclose(fichier);
    }

    //Creer un tableau qui contient seulement des "*" avec le même nombre de caractères que le mot choisi
    int len_word = strlen(chaine) - 1;
    chaine[len_word] = '\0';
    char *secret_word = NULL;
    secret_word = malloc(sizeof(char)* (len_word));
    int num_char;
    for(num_char = 0; num_char <= len_word; num_char++)
    {
        if(num_char < len_word)
        {
            secret_word[num_char] = '*';
        }
        else
        {
            secret_word[num_char] = '\0';
        }
    }
    //Deroulement de la partie
    int nb_coup = 10;
    char lettre = NULL;
    while(nb_coup != 0)
        {
            if(strcmp(chaine, secret_word) != 0)
            {
                printf("Il vous reste %d coups a jouer\nQuel est le mot secret ? %s\nProposez une lettre:\n", nb_coup, secret_word);
                lettre = lireCaractere();
                if(find_char(chaine, lettre) == 1)
                {
                    repl_char(chaine, lettre, secret_word);
                }
                else
                {
                    nb_coup --;
                }

            }
            else
            {
                printf("Gagne, le mot secret etait bien: %s", secret_word);
                nb_coup = 0;
            }
        }
    free(secret_word);

    return 0;
}
