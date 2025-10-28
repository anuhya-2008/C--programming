#include <stdio.h>
int main()
{
	int units;
	float charge,amount,total_amount;
	printf("enter units:");
	scanf("%d",&units);
	if(units<=50)
	{
		amount=units*2.5;
		charge=25;
	}
	else if(units<=100)
	{
		amount=units*3;
		charge=50;
	}
	else if(units<=200)
	{
		amount=units*3.5;
		charge=75;
	}
	else if(units<=300)
	{
		amount=units*4;
		charge=100;
	}
	else
	{
		amount=units*5;
		charge=200;
	}
	total_amount=amount+charge;
	printf("Electricity bill:%.3f",total_amount);
	return 0;	
}
