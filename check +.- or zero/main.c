
#include <stdio.h>

int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    
    if(x>0)
    {
        printf("%d is a positive number",x);
    }  
        else if(x==0)
        {
            printf("%d is zero",x);
        }
        else if(x<0)
        {
            printf("%d is neqative number",x);
        }
    

    return 0;
}