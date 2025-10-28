#include <stdio.h>
int main()
{
	int length,breadth,area;
	printf("enter length & breadth values:");
	scanf("%d %d",&length,&breadth);
	area=length*breadth;
	printf("Area of rectangle:%d",area);
	return 0;
}
