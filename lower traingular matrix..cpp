#include <stdio.h>
int main()
{
	int a[100][100],i,j,n;
	printf("\nEnter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nenter value at position:a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe matrix\n");
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
			if(j>i && a[i][j]!=0 || j<=i && a[i][j]==0)
			{
				lower=0;
				break;
			}
		}
	}
	if(lower==1)
	{
		printf("\ngiven matrix is lower traingular matrix");
	}
	else
	{
		printf("\ngiven matrix is not a lower traingular matrix");
	}
	return 0;
}
