#include <stdio.h>
#include <math.h>
int main()
{
	float principle,rate,si,ci,time;
	printf("enter principle value:");
	scanf("%f",&principle);
	printf("enter rate value:");
	scanf("%f",&rate);
	printf("enter time:");
	scanf("%f",&time);
	si=(principle*rate*time)/100;
    ci=principle*pow(1+rate/100,time)-principle;
	printf("\nsimple intrest:%f",si);
	printf("\ncompound intrest:%f",ci);
	return 0;	
}
