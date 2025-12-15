#include <stdio.h>
int main()
{
	 FILE *fp;
	 char ch;
	 int i=0;
	 fp=fopen("C:\\Users\\anuhy\\OneDrive\\Documents\\C Language\\cse9.txt","w");
	 printf("enter character:");
	 while(i<10)
	 {
	 	ch=getchar();
	 	fputc(ch,fp);
	 	i++;
	 }
	 fclose(fp);
	 return 0;
}
