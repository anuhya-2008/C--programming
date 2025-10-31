#include <stdio.h>
int main()
{
	int arr[100],i,n,found=0,search;
	printf("enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value at position arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("enter searching value");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
		printf("\nsearching element found at:%d",i);
		found=1;
		break;
    	}
    }
      if(found==0)
      {
	  printf("\nsearching element not found"); 
      }
      return 0;
  }

