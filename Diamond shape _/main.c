#include <stdio.h>
int main()
{
    int i,j,k,r;
    printf("enter number of rows :");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        
        for(k=0;k<r-i;k++)
        {
          printf(" ");
        }
        for(j=r;j>k;j--)
        {
        printf("* ");
    }
    printf("\n");
    }
     for(i=0;i<=r;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=r;j>k;j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
