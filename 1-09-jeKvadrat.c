/*
Zapisite algoritem, ki za dano naravno stevilo n preveri, ali je n
kvadrat nekega naravnega stevila.
*/

#include <stdio.h>

int main()
{
    int n = 4096;   // izberi stevilo
    int i = 1;
    int x = 0;
    while(i * i <= n)
    {
        if(i * i == n)
        {
            printf("%d je kvadrat stevila %d.", n, i);
            x++;
        }
        i++;
    }
    if(x == 0) printf("%d ni kvadrat nobenega stevila.\n", n); // ce se x v zanki ni spremenil, "n" ni kvadrat nobenega naravnega stevila
}