#include <stdio.h>
int main()
{
	char operators;
	double a,b;
	printf("****Arthematic operations****");
	printf("\n +,-,*,/");
	printf("\nenter operator(+,-,*,/):");
	scanf(" %c",&operators);
    printf("\nenter two operands:");
	scanf("%lf %lf",&a,&b);
	switch(operators)
	{
		case '+':
			printf("%lf+%lf=%lf",a,b,a+b);
			break;
		case '-':
			printf("%lf-%lf=%lf",a,b,a-b);
			break;
		case '*':
			printf("%lf*%lf=%lf",a,b,a*b);
			break;
	    case '/':
			printf("%lf/%lf=%lf",a,b,a/b);
			break;
	}
	return 0;
}
	
