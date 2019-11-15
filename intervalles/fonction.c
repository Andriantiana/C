#include <stdio.h>
#include <stdlib.h>

double min(double a, double b)
{
    if (a <= b)
        return a;
    else
        return b;
}

double max(double a, double b)
{
    if (a <= b)
        return b;
    else
        return a;
}

void appartient(double a, double b, double nb)
{
    if (min(a, b) <= nb && max(a, b) >= nb)
        printf("%lf appartient à [%lf, %lf]", nb, min(a, b), max(a, b));
    else
        printf("%lf n'appartient pas à [%lf, %lf]", nb, min(a, b), max(a, b));
}
