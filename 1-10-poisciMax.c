/*
Najmanj koliko operacij moramo izvesti, ce zelimo v mnozici z n
celimi stevili najti najvecje stevilo? Najprej zapisite algoritem v
psevdokodi.
*/

#include <stdio.h>

int main()
{
    int tabela[] = {10, 2, -10, 7, 5, 8, 9, 4852, 548, 9999};   // doloci elemente tabele
    int len = sizeof(tabela) / sizeof(int);                     // izracunaj dolzino tabele
    int max = tabela[0];                                        // na zacetku je "max" kar enak prvemu elementu tabele
    for(int i = 1; i < len; i++)                                // za spremembno uporabim zanko for
    {
         if(tabela[i] > max)
        {
            max = tabela[i];
        }
    }
    printf("max = %d", max);
}