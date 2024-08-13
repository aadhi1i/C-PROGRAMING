
#include <stdio.h>

int main()
{
    int a=0,i;
    int arr[5]={3,4,5,6,7};
    for(i=0;i<5;i++)
    {
       a=a+arr[i];
    }
    
    printf("sum of %d",a);

    return 0;
}