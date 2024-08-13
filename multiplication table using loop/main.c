
#include <stdio.h>

int main()
{
    int i=1,num=0,b;
    printf("enter the number :");
    scanf("%d",&num);
    printf("how much number do you want print :");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
    printf(" %d \n",(num*i));
    }

    return 0;
}
