#include <stdio.h>
int sum();
void main()
 {
     int d;
    printf("\ngoing to calculate two numbers :");
    d=sum();
    printf("sum is %d",d);
}
int sum()
    {
     int a,b;
     printf("enter the number:");
     scanf("%d%d",&a,&b);
     return a+b;
    }
    


