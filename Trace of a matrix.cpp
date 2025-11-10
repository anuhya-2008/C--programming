#include <stdio.h>
int main()
{
	int a[100][100],i,j,n,sum=0;
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
	for(i=0;i<n;i++)
	{
		sum=sum+a[i][i];
	}
	printf("\nThe trace of a matrix is:%d",sum);
	return 0;
}
