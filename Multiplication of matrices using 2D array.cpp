#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],mul[100][100],i,j,k,r1,c1,r2,c2;
	printf("\nEnter rows and column values:");
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nenter value at position:a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\nenter value at position:b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe matrix A is\n");
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe matrix B is\n");
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	printf("\nThe matrix multiplication is\n");
	if(c1!=r2)
	{
		printf("Matrix multiplication not possible");
	}
	else 
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				mul[i][j]=0;
				for(k=0;k<c1;k++)
				{
					mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
				}
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
