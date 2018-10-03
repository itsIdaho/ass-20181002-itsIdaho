int
main ()
{
  int a;
  a = 0;
  printf ("Geben Sie die Zahl ein, von der Sie herunterzaehlen moechten:");
  scanf ("%d", &a);
  {

    if (a <= 0)
      {
	while (a++)
	  {
	    printf ("%d\n", a-1);
	  }
      }
    else
      {
	while (a--)
	  {
	    printf ("%d\n", a+1);
	  }
      }
    return 0;
  }
}
