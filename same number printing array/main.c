
#include <stdio.h>

int main()
{
    int i,x,found;
    printf("enter a number:");
    scanf("%d",&x);
    int arr[10]={1,2,3,5,6,7,8,9,10,2};
    for(i=0;i<10;i++)
    {
      if(x==arr[i]){
       printf("\nenterd number in the array: %d ",x);
       found=1;
       break;
           
      }
 }      
        if(!found)
       {
          printf("\n invalid number not in array");
          
      }
    return 0;
}