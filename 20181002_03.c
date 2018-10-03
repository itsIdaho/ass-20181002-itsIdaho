int main (void)
{
int a;
a = 0;
printf ("Geben Sie die Zahl ein, von der Sie herunterzaehlen möchten: ");
scanf ("%d", &a);
{
    unsigned int b= a+1;
    while(b--) {
    printf("%d\n" ,b);    }}
}
