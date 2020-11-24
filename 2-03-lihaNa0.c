/*
Zapisite algoritem, ki bo v dani tabeli stevil vsem lihim stevilom
zamenjal vrednost na 0.
*/

#include <stdio.h>

int main()
{
    int tabela[] = {11, 21, -10, 11, 51, 8, 9, 4852, 548, 9999};    // doloci elemente tabele
    int len = sizeof(tabela) / sizeof(int);                         // izracunaj dolzino tabele
    int i = 0;
    while(i < len)
    {
        if(tabela[i] % 2 != 0)  // ce element na "i"-tem mestu v tabeli ni deljiv z 2 (torej lih), ga zamenjaj z 0
        {
            tabela[i] = 0;
        }
        i++;
    }
    for(i = 0; i < len; i++)   // zanka za izpis elementov iz tabele
    {
        printf("%d, ", tabela[i]);
    }
}