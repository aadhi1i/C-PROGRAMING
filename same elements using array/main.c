#include <stdio.h>

int main()
{
    int a,i,j;
    int arr[10]={3,4,6,3,4,3,8,5,6,7};
    for(i=0;i<10;i++)
     {     
         for(j = i+1; j<10; j++)     
       {     
        if(arr[i]==arr[j])
       {
          a=arr[i];
          printf("\n same elements are: %d",a);
          break;
        }
  }
  }

    return 0;
}
