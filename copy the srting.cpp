#include <stdio.h>
int main()
{
	char a[100],b[100];
	int i;
	printf("Enter any string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\nCopied data:%s",b);
	return 0;
}
