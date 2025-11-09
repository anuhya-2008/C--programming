#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],sum[100][100],r,c,i,j;
	printf("\n enter row and column values:");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("\nenter values at a[%d][%d] position:",i,j);
		scanf("%d",&a[i][j]);
	}
}
	printf("\nThe matrix of a is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("\t%d",a[i][j]);
	}
	printf("\n");
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("\nenter values at position b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
	}
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
}
printf("\nThe matrix of b is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("\t%d",a[i][j]);
	}
	printf("\n");
}

printf("\nThe addition of matrix is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t %d",sum[i][j]);
}
printf("\n");
}
return 0;
}
