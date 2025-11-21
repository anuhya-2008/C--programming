#include <stdio.h>
void addition ();
void addition ()
{
    int a,b,c;
    printf("\nenter a and b values:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
}
int main()
{
    addition();
    return 0;
}
