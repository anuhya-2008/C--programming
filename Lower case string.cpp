#include <stdio.h>
int main()
{
	char a[100]="ANUHYA";
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	printf("\nLower case string:%s",a);
	return 0;
}
