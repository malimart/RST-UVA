/*
Naloga 12: Zapisite algoritem za dolocanje, ce je dano stevilo prastevilo.
*/

#include <stdio.h>

int main()
{
    int n = 311;          // izberi stevilo
    int i = 2;          // v zanki zacnemo preverjati delitelje od 2 naprej
    int t = 0;          // kontrolna spremenljivka. Ce se spremeni smo nasli en delitelj
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            t++;
            break;      // ce najdemo delitelja, lahko predcasno prekinemo zanko
        }
        i++;
    }
    if (n == 1) printf("1 ni prastavilo.\n");
    else if (t == 0) printf("%d je prastevilo.\n", n);
    else if (t != 0) printf("%d ni prastevilo.\n", n);
}