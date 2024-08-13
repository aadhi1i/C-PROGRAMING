#include <stdio.h>
int main()
{
    int i,j,k,r;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    printf("\n");
     k= 2 * r - 2;
    for( i = 1; i <= r;i++)
    {
      for( j = 0;j < i;j++)
      {
        printf("*");
      }
      for( j=0;j<k;j++)
      {
        printf(" ");
      }
      for(int j =0;j<i;j++)
      {
        printf("*");
      }
      printf("\n");
      k-=2;
    }
    k = 0;
    for( i = r; i > 0;i--)
    {
      for( j = 0;j < i;j++)
      {
        printf("*");
      }
      for(j=0;j<k;j++)
      {
        printf(" ");
      }
      for(j =0;j<i;j++)
      {
        printf("*");
      }
      printf("\n");
      k+=2;
    }
    return 0;
    
}