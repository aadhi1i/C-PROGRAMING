
#include <stdio.h>

int main()
{
    int i,j,temp;
    int x[10]={1,3,5,6,7,8,9,2,4,10};
    int y[10]={2,4,5,3,6,7,8,9,1,11};
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            temp=x[i]+y[j];
        
        printf("\n sum of %d and %d is: %d",x[i],y[j],temp);
    }
    } 
    

    return 0;
}