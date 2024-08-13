
#include <stdio.h>

int main()
{
    int i,j,r;
    
    printf("enter the rows :");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        char b ='A';
        for(j=0;j<i;j++)
        {
        printf("%c ",b);
        b++;
        }
        printf("\n");
    }

    return 0;
}