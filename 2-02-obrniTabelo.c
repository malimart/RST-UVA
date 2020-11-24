/*
Zapisite algoritem, ki bo obrnil vrstni red elementov v tabeli.
*/

#include <stdio.h>

int main()
{
    int tabela[] = {1, 2, 3, 4};                // doloci elemente tabele
    int len = sizeof(tabela) / sizeof(int);     // izracunaj dolzino tabele
    int i = 0;
    int temp;
    while(i < len / 2)          // potreben je strogi neenacaj
    {
        temp = tabela[i];
        tabela[i] = tabela[len - 1 - i];
        tabela[len - 1 - i] = temp;
        i++;
    }
    for(i = 0; i < len; i++)    // zanka za izpis elementov iz tabele
    {
        printf("%d  ", tabela[i]);
    }
}
