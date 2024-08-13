#include <stdio.h>
void swap(int *,int *);
int main()
{
    int a =10;
    int b=20;
    printf("before swaping the value in main a = %d,b=%d\n",a,b);
    swap(&a,&b);
    printf("after swaping value in main a = %d,b=%d\n",a,b);
}

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swaping values in function a = %d,b=%d\n",*a,*b);

}