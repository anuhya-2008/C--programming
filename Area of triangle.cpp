#include <stdio.h>
int main()
{
	float breadth,height,area;
	printf("enter b & h values:");
	scanf("%f %f",&breadth,&height);
	area=(breadth*height)/2;
	printf("Area of triangle:%.2f",area);
	return 0;
}
