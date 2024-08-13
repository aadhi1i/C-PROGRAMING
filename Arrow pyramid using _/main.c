#include <stdio.h>
int main()
{
    int i,j,k,r;
    printf("enter the rows :");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        for(k=0;k<r-i;k++)
        {
          printf(" ");
        }
        for(j=r;j>k;j--)
        {
        printf("* ");
    }
    printf("\n");
    }
    for(i=0;i<=r;i++)
    {
        for(k=0;k<r-i;k++)
        {
          printf(" ");
        }
        for(j=r;j>k;j--)
        {
        printf("* ");
    }
    printf("\n");
    }
    for(i=0;i<=5;i++)
    {
        for(k=0;k<=r;k++)
        {
          if(k==0 ||k==1|| k==r)
          {
              printf(" ");
          }
          else
          {
              printf("* ");
          }
         
          
        }
         printf("\n");
    }
        return 0;
    }
        