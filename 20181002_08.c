/*Nicht sicher ob wir Zahl reinschreiben (printf; scanf) sollen oder eine im Code vorgeben sollen
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
    int pruef; 
    int zahl;
    int a = 0;
    
    printf ("Geben Sie eine Zahl an\n");
    scanf ("%d", &a);
    
    zahl = &a;
    
    for(zahl=3; zahl<20; zahl++) 
    {
    for(pruef=2; pruef<zahl; pruef++) 
    {
    if(zahl % pruef == 0) 
    {
    printf("Primzahl: %d\n", zahl);
    }
        
    }}
    
    return 0;
}
