#include <stdio.h>

int main()
{
    int choice;
    float a,b,c;
    printf("1 addition \n2 subtraction \n3 mulltiplication \n4 division \n enter your choice:");
    scanf("%d",&choice);
    if(choice<=0 && choice>0){
    printf("enter two numbers : ");
    scanf("%f%f",&a,&b);
    }
    switch(choice)
    {
        case 1:
        c=a+b;
        printf("\n addition : %f",c);
        break;
        case 2:
        c=a-b;
        printf("\n subtraction: %f",c);
        break;
        case 3:
        c=a*b;
        printf("\n mulltiplication: %f",c);
        break;
        case 4:
        c=a/b;
        printf("\n division %f",c);
        break;
        default:
        printf("\n invalid choice");
        break;
        
        
    }

    return 0;
}
