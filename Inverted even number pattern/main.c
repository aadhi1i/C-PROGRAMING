#include <stdio.h>

int main()
{
    int i,j,r,k=30;
    printf("enter the rows:");
    scanf("%d",&r);
    for(i=0;i<=r;i++){
        for(j=r;j>i;j--){
            printf("%d ",k);
            k=k-2;
        }
        printf("\n");
    }

    return 0;
}