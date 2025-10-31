#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("\nenter a&b values:");
	scanf("%d %d",&a,&b);
	printf("\nbefore swapping:a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping:a=%d,b=%d",a,b);
	return 0;
}
