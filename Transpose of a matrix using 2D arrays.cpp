#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],r,c,i,j;
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
	printf("\nThe matrix is\n");
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
        b[i][j]=a[j][i];
    }
}
printf("\nThe transpose matrix is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t %d",b[i][j]);
}
printf("\n");
}
return 0;
}
