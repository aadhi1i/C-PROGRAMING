
#include <stdio.h>

int main()
{
    int i,n,a=0,b=1,c=0;
    printf("how many series you want print:");
    scanf("%d",&n);
    printf("Fibonacci series is :%d %d ",a,b);
    
    for(i=0;i<n;i++)
    {
        c = a+b;
        a=b;
        b=c;
        if(c>=0 && c<=n-1)
        printf("%d ",c);
    }
    

    return 0;
}