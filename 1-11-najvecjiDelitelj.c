/*
Zapisite algoritem za dolocanje najvecjega skupnega delitelja dveh
stevil. Prestejte stevilo potrebnih operacij.
*/

#include <stdio.h>

int main()
{
    int a = 144;                // izberi 1. stevilo
    int b = 108;                // izberi 2. stevilo
    int t = (a < b) ? a : b;    // v "t" zapisi manjse od obeh
    int i = 2;                  // delitelje zacnem iskati pri stevilu 2
    int max = 1;                // najvecjega shranim v max (na zacetku je 1)
    while(i <= t)
    {
        if(a % i == 0 && b % i == 0)
        {
            max = i;
        }
        i++;
    }
    printf("Najvecji skupni delitelj stevil %d in %d je %d.\n", a, b, max);
}