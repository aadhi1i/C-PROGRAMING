#include <stdio.h>

int main()
{
    int r,i,j,k;
    printf("enter the rows :");
    scanf("%d",&r);
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