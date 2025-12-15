#include <stdio.h>
int main()
{
	 FILE *fp;
	 fopen("C:\\Users\\anuhy\\OneDrive\\Documents\\C Language\\FILE.txt","f+");
	 fseek(fp, 0, SEEK_END);
	 fprintf(fp,"CSE-9");
	 fclose(fp);
	 return 0;
}
