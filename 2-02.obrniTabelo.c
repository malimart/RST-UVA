/*
Zapisite algoritem, ki bo obrnil vrstni red elementov v tabeli.
*/

#include <stdio.h>

int main()
{
    int tabela[] = {10, 2, -10, 11, 5, 8, 9, 4852, 548, 9999};  // doloci elemente tabele
    int len = sizeof(tabela) / sizeof(int), i = 0, temp;        // izracunaj dolzino tabele
    while (i <= len / 2)
    {
        temp = tabela[i];
        tabela[i] = tabela[len - 1 - i];
        tabela[len - 1 - i] = temp;
        i++;
    }
    for (i = 0; i < len; i++)       // // zanka za izpis elementov iz tabele
    {
        printf("%d  ", tabela[i]);
    }
}