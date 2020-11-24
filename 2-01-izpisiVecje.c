/*
Zapisite algoritem za izpis vseh stevil v dani tabeli, ki so vecja od 10.
*/

#include <stdio.h>

int main()
{
    int tabela[] = {10, 2, -10, 11, 5, 8, 9, 4852, 548, 9999};  // doloci elemente tabele
    int len = sizeof(tabela) / sizeof(int);                     // izracunaj dolzino tabele
    int i = 0;
    while(i < len)
    {
        if(tabela[i] > 10)  // ce je element iz tabele z indeksom "i" vecji od 10, ga izpisi
        {
            printf("%d\n", tabela[i]);
        }
        i++;
    }
}