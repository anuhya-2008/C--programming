#include <stdio.h>
int main()
{
	int n,count=0;
	printf("enter n value:");
	scanf("%d",&n);
	for(int a=1;a<=n;a++)
	{
		if(n%a==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\nprime number");
	}
	else 
	{
		printf("\nnot a prime number");
	}
	return 0;
}
