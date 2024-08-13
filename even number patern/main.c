
#include <stdio.h>
int main()
{
    int i,j,b,n;
    printf("enter the rows :");
    scanf("%d",&b);
    n=2;
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d ",n);
        n+=2;
         
        }
       printf("\n"); 
    }
    
    return 0;
}