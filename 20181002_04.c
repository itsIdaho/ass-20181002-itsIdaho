/**************
x=Basis
y=Hochzahl
*************/

#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int power;
    int i;
    
    printf ("Basis angeben\n");
    scanf ("%d", &x);
    
    printf ("Nun die Hochzahl\n");
    scanf ("%d", &y);
    
    power = 1;
    i = 1;
    
    while (i <= y)
    
    {
        power = power * x;
        i++;
        
    }
    
    printf ("%d^%d ist %d\n", x, y, power);
    
    return 0;
    

}
