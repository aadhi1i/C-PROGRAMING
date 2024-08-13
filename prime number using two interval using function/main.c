#include<stdio.h>
void main()
{
   int i, num=0, n,s, count;
   printf("Enter the range: ");
   scanf("%d%d",&s,&n);
   printf("The prime numbers in between the range  %d:",n);
   for(num=s;num<=n;num++)
   {
      count = 0;
      for(i=2;i<=num/2;i++)
      {
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}