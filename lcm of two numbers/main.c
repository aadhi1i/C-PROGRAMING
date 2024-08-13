#include <stdio.h>

int main() 
{
	int x,i,y,lcm,gcd;

	printf("Enter two positive integers:");
	scanf("%d %d", &x,&y);
	for(i=1; i<=x &&  i<=y; i++)
	{
	    if (x % i == 0 && y % i == 0)
	    {
			gcd = i;
	    }	
	}
	lcm = (x * y) / gcd;
	printf("The LCM of %d and %d is %d", x, y, lcm);

	return 0;
}