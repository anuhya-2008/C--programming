#include <stdio.h>
int main()
{
	 FILE *fp;
	fp=fopen("C:\\Users\\anuhy\\OneDrive\\Documents\\C Language\\FILE.txt","w+");
	 fprintf(fp,"file opened in w+ mode");
	 fclose(fp);
	 return 0;
}
