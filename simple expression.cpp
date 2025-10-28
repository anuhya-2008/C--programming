#include <stdio.h>
int main()
{
	int i=5,j;
	j=(i++)+(++i);
	printf("The value of j:%d",j);
	return 0;
}
