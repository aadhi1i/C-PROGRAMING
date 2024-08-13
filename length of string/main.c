#include<stdio.h>   
#include <string.h>     
 int main()
 { 
     int x;
     
   char ch[20]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
   x=strlen(ch);
  printf("Length of string is: %d",x);     
  return 0;     
}     