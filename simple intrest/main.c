
#include <stdio.h>

int main()
{
    int simple_in,p_amt,rate_in,t;
    printf("enter the principle amount:");
    scanf("%d",&p_amt);
    
    printf("enter the anual rate of intrest(in percentage):");
    scanf("%d",&rate_in);
    
    printf("enter the time period(in year):");
    scanf("%d",&t);
    
    simple_in=(p_amt * rate_in * t) / 100;
    printf("simple intrest is: %d",simple_in);

    return 0;
}
