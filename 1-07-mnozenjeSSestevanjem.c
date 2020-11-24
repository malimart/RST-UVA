/*
Zapisite algoritem za mnozenje s sestevanjem. (To je algoritem, ki
zapise produkt dveh stevil brez uporabe mnozenja.)
*/

#include <stdio.h>

int main ()
{
    int a = 3;  // izberi prvo stevilo
    int b = 4;  // izberi drugo stevilo
    int i = 1;  
    int p = 0;
    while(i <= a)
    {
        p = p + b;
        i++;
    }
    printf("%d x %d = %d", a, b, p);
}