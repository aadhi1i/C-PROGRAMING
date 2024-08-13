
#include <stdio.h>

int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("%d you are eligible ",age);
    }
    else 
    {
        printf("not eligible");
    }
   

    return 0;
}