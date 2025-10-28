#include <stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total,roll_no;
	float avg;
	char name[100];
	printf("\nenter student name:");
	scanf("%[^\n]",&name);
	printf("\nenter roll.no:");
	scanf("%d",&roll_no);
	printf("\nenter s1,s2,s3,s4,&s5 marks:");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	avg=total/5.0;
	printf("\nTotal marks:%d",total);
	printf("\nAverage:%.2f",avg);
	return 0;
}
