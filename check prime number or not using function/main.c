#include <stdio.h>

void prime();
void main()
{
    int n;
    printf("Enter the number to check whether it is prime: ");
    scanf("%d",&n);
    prime(n);
}

void prime(int n)
{
    int i,prime;
    if(n==1)
    {
        printf("%d is not a prime number",n);
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            prime=0;
            if(n%i==0)
            {
                printf("%d is not a prime number",n);
                prime=1;
                break;
            }
        }
        if(prime==0){
            printf("%d is a prime number",n);
        }
    }
    
}