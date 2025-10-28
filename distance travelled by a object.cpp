#include <stdio.h>
int main()
{
	float u,a,s;
	int t;
	printf("enter acceleration value:");
	scanf("%f",&a);
	printf("enter intial velocity:");
	scanf("%f",&u);
	printf("enter time:");
	scanf("%d",&t);
	s=(u*t)+(a*t*t)/2;
	printf("distance:%f",s);
	return 0;
}
