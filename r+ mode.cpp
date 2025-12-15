#include <stdio.h>
int main()
{
	 FILE *fp;
	 fp=fopen("C:\\Users\\anuhy\\OneDrive\\Documents\\C Language\\FILE.txt","r+");
	 fprintf(fp,"CSE-9");
	 fclose(fp);
	 return 0;
}
