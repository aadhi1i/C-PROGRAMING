
#include <stdio.h>
void change(int num){
    printf("brfore adding value inside function num=%d",num);
    num=num+100;
    printf("\nafter adding value inside fnction name=%d",num);
}


int main()
{
    int x=100;
    printf("brfore function call x=%d\n",x);
    change(x);
    printf("\nafter function call x=%d",x);

    return 0;
}