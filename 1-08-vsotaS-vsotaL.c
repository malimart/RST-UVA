/*
Zapisite algoritem, ki za dano naravno stevilo n sesteje vsa soda
naravna stevila manjsa od n in od dobljene vsote odsteje vsoto
vseh lihih naravnih stevil manjsih od n.
*/

#include <stdio.h>

int main()
{
    int n = 10; // izberi stevilo
    int i = 1;
    int soda = 0;
    int liha = 0;
    while (i < n)
    {
        if (i % 2 == 0 )
        {
            soda = soda + i;
        }
        else if (i % 2 != 0)
        {
            liha = liha + i;
        }
        i++;
    }
    printf("%d", soda - liha);
}