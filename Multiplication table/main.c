
#include <stdio.h>

int main()
{
    int a,i=1;
    printf("enter a number :");
    scanf("%d",&a);
    printf("\n multiplication table of %d :",a);
    while(i<=10)
    {
        printf(" \n %d*%d=%d ",a,i,a*i);
        i++;
    }

    return 0;
}