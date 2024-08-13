
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter three number :");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
    printf("largest number is : %d",a);
    }
    else if (b>a && b>c){
    printf("largest number is : %d",b);
    }
    else if (c>a && c>b){
    printf("largset number is : %d",c);
    }
    

    return 0;
}
