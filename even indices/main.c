#include <stdio.h>

int main()
{
    int arr[100];
    int i,x;
    printf("enter a array size:");
    scanf("%d",&x);
    printf("enter the elements:\n");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]); 
    }
    printf("even indices are:");
    
    
    for(i=0;i<x;i++)
    {
        if(i%2==0)
        {
            printf(" %d",arr[i]);
        }
    }
    
    return 0;
}