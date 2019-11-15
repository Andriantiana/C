int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);


int sommeTableau(int tableau[], int tailleTableau)
{
    int i;
    int s = 0;
    for(i = 0; i < tailleTableau; i++)
    {
        s = s + tableau[i];
    }
    return s;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    double s = sommeTableau(tableau, tailleTableau);
    double m = s/tailleTableau;
    return m;

}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int i;
    for (i = 0; i < tailleTableau; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
    }
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    int i;
    for (i = 0; i < tailleTableau; i++)
    {
        if (tableau[i] > valeurMax)
            tableau[i] = 0;
    }
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i;
    for (i = 0; i < tailleTableau-1; i++)
    {
        int j;
        int tmp;
        for (j = i+1; j < tailleTableau; j++)
        {
            if(tableau[j] < tableau[i])
            {
                tmp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = tmp;
            }

        }
    }

}
