#include <stdio.h>

int main()
{
    int i,j,r;
    printf("enter the rows:");
    scanf("%d",&r);
    for(i=0;i<=r;i++){
        for(j=r;j>i;j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}