#include <stdio.h>

void main()
{
 char s[] ="javapoint";
 int i=0,count=0;
 while(s[i]!='\0')
 {
     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='o')
 
     {
         count++;
     }
     
     i++;
 }
  printf("the number of vowles:%d",count);

}