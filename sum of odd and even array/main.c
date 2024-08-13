#include <stdio.h>

int main()
{
    int i,x=0,y=0;
    int arr[10]={1,2,3,5,6,7,8,9,10,4};
    for(i=0;i<10;i++)
    {
    
       if(arr[i]%2!=0)
       {
           x=x+arr[i];
       }     
        
    }
     printf("sum of odd numbers is: %d\n",x);


      for(i=0;i<10;i++)
    {
    
       if(arr[i]%2==0)
       {
           y=y+arr[i];
       }     
        
    }
     printf("sum of even numbers is: %d\n",y);

      
         return 0;

}