#include <stdio.h>
int main()
{
   int a,c=0,armstrong=0,temp=0,d=0;
    printf("enter three digit numbers :");
    scanf("%d",&a);
    temp=a;
    while(a !=0)
    {
        c= a % 10;
        d = d+(c*c*c);
        a = a/10;
        
    }
    if(temp==d){
      printf("%d is a armstrong number",d);
    }
        else
        {
        printf("%d is not a armstrong number",d);
    
    }

    return 0;
}
    
