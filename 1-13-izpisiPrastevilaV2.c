/*
Naloga 13: Napisite algoritem, ki bo izpisal vsa prastevila manjsa od danega
naravnega stevila n. Prestejte tudi stevilo operacij, ki jih uporabi.
*/

#include <stdio.h>

int prastevilof(int n)      // funkcija preveri ali je dani "n" prastevilo in vrne "1" če je ter "0" ce ni
{
    int i = 2;
    while(i <= n / 2)
    {
        if(n % i == 0)
        {
            return 0;       // ce smo nasli se kaksnega delitelja, funkcija vrne 0
        }
        i++;
    }
    return 1;               // ce v zanki nismo nasli nobenega delitelja, funkcija vrne 1
}

int main()
{
    int n = 1000;           // izberi poljubno naravno stevilo
    int i = 2;
	while (i < n)
    {
        if(prastevilof(i) == 1) // ce funkcija "prastevilof" za dani "i" vrne "1" je ta prastevilo in se izpise
        {
            printf("%d\n", i);
        }
        i++;
    }
}