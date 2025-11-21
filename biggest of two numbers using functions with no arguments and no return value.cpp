#include <stdio.h>
void big();
void big (){
    int a,b;
    printf("\nenter a and b values:");
    scanf("%d %d",&a,&b);
    if(a>b){
    printf("a is big");
    }
    else
    {
        printf("b is big");
    }
    
}
int main()
{
    big();
    return 0;
}
