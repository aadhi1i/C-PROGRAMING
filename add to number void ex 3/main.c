#include <stdio.h>
void sum(int,int);
void main()
 {
     int a,b;
    printf("\ngoing to calculate two numbers :");
    printf("enter the number:");
     scanf("%d%d",&a,&b);
     sum(a,b);
 } 
void sum(int a, int b)
{

        
      printf("sum is %d",a+b);
     
    }