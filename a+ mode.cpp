#include <stdio.h>
int main()
{
	 FILE *fp;
	fp=fopen("C:\\Users\\anuhy\\OneDrive\\Documents\\C Language\\FILE.txt","a+");
	 fprintf(fp,"file opened in a+ mode");
	 fclose(fp);
	 return 0;
}
