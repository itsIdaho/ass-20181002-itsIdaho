int main (void)
{
int a;
a = 0;
printf ("Geben Sie die Zahl ein, von der Sie herunterzaehlen möchten: ");
scanf ("%d", &a);
{
    unsigned int counter= a;
    while(counter--) {
    printf("%d\n" ,counter);    }}
}
