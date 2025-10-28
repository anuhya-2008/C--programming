#include <stdio.h>
int main()
{
	char a;
	char word[20];
	char sen[200];
	printf("enter letter:");
	scanf("%c",&a);
	printf("enter word:");
	scanf("%s",&word);
	printf("enter sentence:");
	scanf(" %[^\n]",&sen);
	return 0;
}
