#include <stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("\nenter temperature in celsius:");
	scanf("%f",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("\ntemperature in fahrenheit:%f",fahrenheit);
	return 0;
}
