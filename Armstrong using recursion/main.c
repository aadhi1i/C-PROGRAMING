#include <stdio.h>
#include<math.h>
int countDigits(int num)
{
    if(num==0)
    return 0;
    return 1+countDigits(num/10);
}
int sumOfPowers(int num,int power)
{
     if(num==0)
     return 0;
     int digit =num%10;
     return pow(digit,power)+sumOfPowers(num/10,power);
}
int isArmstrong(int num){
    int power=countDigits(num);
    return num==sumOfPowers(num,power);
}


int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
if (isArmstrong(num) )
printf("%d is an isArmstrong number\n",num);
else
printf("%d is not an Armstrong number\n",num);
return 0;
}