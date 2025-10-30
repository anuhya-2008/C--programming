#include <stdio.h>
int main()
{
	int arr[100],n,i,diff;
	printf("enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value at position arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	diff=arr[0];
	for(i=1;i<n;i++)
	{
		diff=diff-arr[i];
	}
	printf("%d",diff);
	return 0;
}
