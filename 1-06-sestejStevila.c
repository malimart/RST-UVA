/*
Prestejte koliko operacij mora izvesti algoritem za sestevanje vseh
stevil od 1 do n.
*/

#include <stdio.h>

int main ()
{
    int n = 10;             // izberi koliko stevil sesteti
    int i = 1;
    int vsota = 0;
    while (i <= n)
    {
        vsota = vsota + i;
        i++;
    }
    printf("Vsota prvih %d stevil je %d.", n, vsota);
}