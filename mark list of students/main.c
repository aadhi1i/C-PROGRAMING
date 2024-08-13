
#include <stdio.h>

int main()
{
    int mark;
    printf("enter the score");
    scanf("%d",&mark);
    if(mark>=90 && mark<=100){
        printf("you got A  grade");
    }
    else if (mark>100){
        printf("not valuble");
    }
     else if (mark<=90 && mark>=80){
     
     printf ("you got B GRADE");
     }
     else if (mark<=80 && mark>=70){
         printf("you got C grade");
     }
     else if (mark<70){
         printf("you are failed");
     }

    return 0;
}