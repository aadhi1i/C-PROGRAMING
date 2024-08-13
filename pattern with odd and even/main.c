#include <stdio.h>
int main()
{
    int i,j,b,r,k;
    printf("enter the rows :");
    scanf("%d",&r);
    b=1;
    k=30;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d ",b);
         b+=2;
        }
       printf("\n"); 
    }
    for(i=0;i<=r;i++)
    {
        for(j=r;j>i;j--)
        {
            printf("%d ",k);
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}