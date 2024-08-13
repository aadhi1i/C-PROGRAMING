#include <stdio.h>
int main()
{
    int i,j,b,n;
    printf("enter the rows :");
    scanf("%d",&b);
    n=1;
    for(i=0;i<=b;i++)
    {
        for(j=0;j<=i;j++)
        {
        printf("%d ",n);
        n++;
         
        }
       printf("\n"); 
    }
    
    return 0;
}