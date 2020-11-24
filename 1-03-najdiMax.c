/*
Dana je mnozica stevil
{17, 3, 29, 14, 81, 2, 9, 63, 7}
Opisite postopek za dolocitev najvecjega elementa v mnozici.
*/

#include <stdio.h>

int main()
{
    int tabela[] = {17, 3, 29, 14, 81, 2, 9, 63, 7};    // doloci elemente tabele
    int len = sizeof(tabela) / sizeof(int);             // izracunaj dolzino tabele
    int max = tabela[0];
    int i = 1;
    while(i < len)
    {
        if(tabela[i] > max)
        {
            max = tabela[i];
        }
        i++;
    }
    printf("max = %d", max);
}