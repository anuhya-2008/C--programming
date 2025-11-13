#include <stdio.h>
int main()
{
	int a[100][100],i,j,n;
	printf("\nenter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter value at position a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	int lower=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>i&&a[i][j]!=0||j<=i&&a[i][j]==0)
			{
				lower=0;
				break;
			}
		}
	}
	if(lower==1)
	{
		printf("\nGiven matrix is a lower triangular matrix");
	}
	else
	{
		printf("\nGiven matrix is not a lower triangular matrix");
	}
	return 0;
}
