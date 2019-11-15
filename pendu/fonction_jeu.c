#define MAXSIZE 50
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "character.h"


void repl_char(char tableau[MAXSIZE], char car, char autre_tableau[MAXSIZE])
{
   int i;
   for(i = 0; i <= strlen(tableau); i++)
   {
       if(tableau[i] == car)
       {
           autre_tableau[i] = car;
       }
   }
}

int find_char(char tableau[MAXSIZE], char car)
{
    int i = strlen(tableau);
    int resultat = 0;
    while(i >= 0)
    {
        if(tableau[i] == car)
        {
            resultat = 1;
            i = 0;
        }
        i--;
    }
    return resultat;
}
