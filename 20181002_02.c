int
main (void)
{
int a;
int b;
a = 0;
b = 0;
printf ("Geben Sie die erste Zahl ein: ");
scanf ("%d", &a);
printf ("Geben Sie die zweite Zahl ein:");
scanf ("%d", &b);
if (a < b)
    {      
printf ("%d < %d\n", a, b);    
}  
if (a > b)
    {
printf ("%d > %d\n", a, b);   
}
if (a == b)
    {
printf ("%d == %d\n", a, b);   
}
}
