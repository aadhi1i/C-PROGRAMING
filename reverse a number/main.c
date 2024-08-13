#include <stdio.h>
int main()
{
   int a,c,reverse=0;
    printf("enter the numbers :");
    scanf("%d",&a);
    
    while(a !=0)
    {
        c = a % 10;
        reverse=reverse*10+c;
        a=a/10;
       
        
    }
     printf(" reverse of number is %d",reverse);
    
    
}