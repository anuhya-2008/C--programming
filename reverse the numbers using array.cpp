#include <stdio.h>
int main()
{
	int arr[100],n,i;
	printf("enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value at position arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
}

