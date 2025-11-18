#include <stdio.h>
int main()
{
	char a[100],b[100];
	int i,len=0;
	printf("Enter any string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("The length of string:%d",len);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[len-1];
		len--;
	}
	printf("\nReverse string:%s",b);
	return 0;
}
