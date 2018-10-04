#include <stdio.h>
  
int
exp (int x, int y)
{
  
int z = x;
  
 
for (int i = 1; i < y; i++)
    {
      
z = z * y;
    
} 
 
return z;

}


 
int
main ()
{
  
int x = 0;
  
int y = 0;
  
 
printf ("Geben Sie die zu berechnende Zahl ein.\n");
  
scanf ("%d", &x);
  
printf ("Nun die Hochzahl\n");
  
scanf ("%d", &y);
  
 
if (y > 1)
    {
      
printf ("%d^%d ist %d", x, y, exp (x, y));
    
}
  
  else if (y < -1)
    {
      
y = -y;
      
 
float result = exp (x, y);
      
float endResult = 1 / result;
      
 
y = -y;
      
printf ("%d^%d ist %f", x, y, endResult);
    
}
  
  else if (y == 1)
    {
      
printf ("%d^%d ist %d", x, y, x);
    
}
  
  else
    {
      
printf ("%d^%d ist 1", x, y);
    
}
  
 
 
return 0;

}
