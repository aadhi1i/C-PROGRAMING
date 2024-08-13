
#include <stdio.h>

int main()
{
    int i=1,fact=1,n;
    printf("enter the numbers :");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
   
    printf("factorial is %d:%d",n,fact);
    
    

    return 0;
}