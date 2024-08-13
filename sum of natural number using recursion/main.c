#include <stdio.h>
int sum(int n) {
    if(n==0)
    {
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}

int main()
{
    int number;
    printf("enter the postive intiger :");
    scanf("%d",&number);
    
    
        printf("sum of %d is : %d\n",number,sum(number));
    
  
    return 0;
}