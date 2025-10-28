#include <stdio.h>
int main()
{
	int age;
	float weight;
	char gender;
	char name[100];
	printf("\nenter name:");
	scanf("%[^\n]",&name);
	printf("\nenter gender:");
	scanf(" %c",&gender);
	printf("\nenter age:");
	scanf("%d",&age);
	printf("\nenter weight:");
	scanf("%f",&weight);
	return 0;
}
