#include "functions.h"

// Swap two doubles using references
void swap1(double &a, double &b)
{
    double temp = b;
    b = a;
    a = temp;
}

// Swap two doubles using pointers
void swap2(double *a, double *b)
{
    double temp = *b;
    *b = *a;
    *a = temp;
}
