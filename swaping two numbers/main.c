
#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swaping: %d ",a);
    printf("\nafter swaping: %d ",b);

    return 0;
}
