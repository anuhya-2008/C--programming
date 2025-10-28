#include <stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("\nenter temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("\ntemperature in celsius:%f",celsius);
	return 0;
}
