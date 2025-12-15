#include <stdio.h>
int main()
{
	 FILE *fp;
	 char ch;
	 int i=0;
	 fp=fopen("C:\\Users\\anuhy\\OneDrive\\Documents\\C Language\\FILE.txt","a");
	 fprintf(fp," WORLD");
	 fclose(fp);
	 return 0;
}
