/*
Naloga 13: Napisite algoritem, ki bo izpisal vsa prastevila manjsa od danega
naravnega stevila n. Prestejte tudi stevilo operacij, ki jih uporabi.
*/

#include <stdio.h>

int main()
{
    int n = 1000;                       // izberi stevilo n
    int flag = 0;
    for(int i = 2; i < n; i++)          // s prvo zanko se sprehodimo po vseh stevilih < n
    {
        for(int j = 2; j <= i / 2; j++) // z drugo zanko za vsako trenutno stevilo "i" preverimo koliko ima deliteljev
        {
            if(i % j == 0)
            {
                flag = 1;               // ce za dani "i" najdemo delitelja, spremenimo kontrolno spremenljivko iz 0 v 1 in predcasno prekinemo zanko
                break;
            }
        }
        if(flag == 0)                   // ce je kontrolna spremenljivka ostala nespremenjena, je stevilo prastevilo in ga izpisemo
        {
            printf("%d\n", i);
        }
        flag = 0;                       // resetiramo kontrolno spremenljivko za preverjanje naslednjega stevila "i"
    }
}