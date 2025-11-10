#include <stdio.h>
int main()
{
	int a[100][100],i,j,n;
	printf("enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nenter value at position a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe lower traingular matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				printf("\t0 ");
			}
			else
			{
				printf("\t%d",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

