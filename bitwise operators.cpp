#include <stdio.h>
int main()
{
	int a,b;
	printf("enter a & b values:");
	scanf("%d %d",&a,&b);
	printf("****Bit wise operations****");
	printf("\n%d & %d:%d",a,b,a&b);
	printf("\n%d | %d:%d",a,b,a|b);
	printf("\n%d ^ %d:%d",a,b,a^b);
	printf("\n%d<<%d:%d",a,b,a<<b);
	printf("\n%d>>%d:%d",a,b,a>>b);
	printf("\n(~):%d",~a);
	return 0; 
}
