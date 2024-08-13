
#include <stdio.h>

int main()
{
    float l,b,area,peri;
    printf("enter length and breadth :");
    scanf("%f%f",&l,&b);
    area=l*b;
    peri=2*(l+b);
    printf("\n area=%f \n peri=%f ",area,peri);

    return 0;
}
