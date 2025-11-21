#include <stdio.h>
int biggest(int a,int b,int c,int d);
int main() 
{
    int a,b,c,d,result;
    printf("\nenter a,b,c &d values:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    result=biggest(a,b,c,d);
    printf("%d is the biggest number", result);
    return 0;
}
int biggest(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    return a;
    else if(b>c && b>d)
    return b;
    else if(c>d)
    return c;
    else
    return d;
}
