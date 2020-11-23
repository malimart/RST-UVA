/*
Naloga 13: Napisite algoritem, ki bo izpisal vsa prastevila manjsa od danega
naravnega stevila n. Prestejte tudi stevilo operacij, ki jih uporabi.
*/

#include <stdio.h>

int prastevilof(int n)              // funkcija preveri ali je dani "n" prastevilo in vrne "1" če je ter "0" ce ni
{
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    int n = 1000;                   // izberi poljubno naravno stevilo
    int i = 2;
	while (i < n)
    {
        if (prastevilof(i) == 1)
        {
            printf("%d\n", i);      // ce funkcija "prastevilof" za dani "i" vrne "1" je to prastevilo in se izpise
        }
        i++;
    }
}