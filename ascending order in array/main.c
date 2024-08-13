#include <stdio.h>

int main()
{
    int i,j,temp;
    int a[10]={2,7,5,9,8,3,1,4,6,10};
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[j]>a[i])
            {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           
            }
        }    
        
    }
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    

    return 0;
}