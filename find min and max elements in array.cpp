#include <stdio.h>
int main()
{
	int arr[100],n,i,min,max;
	printf("enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value at position arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max);
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n max value:%d",max);
	printf("\n min value:%d",min);
	return 0;
}
