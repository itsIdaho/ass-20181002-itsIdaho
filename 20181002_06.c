#include <stdio.h>
intmain ()
{
  int n, i, erg = 1;
  
  printf ("FakultC$t angeben: ");
  scanf ("%d", &n);
  
  for (i = 1; i <= n; i++)
    erg = erg * i;
    
  printf ("%d\n", erg);
}
