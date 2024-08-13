
#include <stdio.h>

int main()
{
    int i,j,k,r;
    printf("enter the rows :");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
      printf("\n");  
    }
    for(i=0;i<=r;i++)
    {
        for(j=r;j>i-1;j--)
        {
            printf("* ");
        }
      printf("\n");  
    }

    return 0;
}
