
#include <stdio.h>

int main()
{
    int arr[100],x,i, largest;
    printf("enter the size of array:");
    scanf("%d",&x);
    printf("enter the elements in this array:\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(i=1;i<x;i++)
    {
    if(arr[i]>largest)
    {
        
     largest= arr[i];
    }
    }
    
    printf("largest number is %d",largest);
    

    return 0;
}
