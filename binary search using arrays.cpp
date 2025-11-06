#include <stdio.h>
int main()
{
	int n,a[100],i,j,found=0,search,low,high,mid;
	printf("\nenter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter value at position a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\nenter searching element:");
	scanf("%d",&search);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(search==a[mid])
		{
			printf("\nsearching element found at location a[%d]location",i);
			found=1;
			break;
		}
		else if(search>a[mid])
		{
		low=mid+1;
		}
		else if(search<a[mid])
		{
			high=mid-1;
		}
	}
	if(found==0)
	{
		printf("\nsearching element not found");
	}
	return 0;
}
