
#include <stdio.h>
int rev (int);
void main()
{
    int a,temp;
    printf("enter the numbers :");
    scanf("%d",&a);
    temp = rev(a);
    printf("%d",temp);
}
int rev(int a)
{
    int c,reverse=0;
    while(a !=0)
    {
        c = a % 10;
        reverse=reverse*10+c;
        a=a/10;
        
        
    }
    return reverse;
    
}