#include <stdio.h>
#include <stdlib.h>
void choice();
void main()
 {
    
   
    choice();
    
}

void choice()
    {
        int choice;
        float  a,b,c;
   while (1) { 
     printf(" \n1 addition \n2 subbtraction \n3 mulltiplication \n4 division \n5 Exit \nenter your choice: ");
     scanf("%d",&choice);
      
     if(choice==1)
     {
         printf("\nenter the number:");
     scanf("%f%f",&a,&b);
         c=a+b;
     printf("\n addition : %f",c);
    }
    else if(choice==2)
    {
        printf("\nenter the number:");
     scanf("%f%f",&a,&b);
        c=a-b;
        printf("\n subbtraction is: %f",c);
    }
    else if(choice==3)
    {
        printf("\nenter the number:");
     scanf("%f%f",&a,&b);
        c=a*b;
        printf("\n mulltiplication is: %f",c);
    }
    
    else if (choice==4)
    {
        printf("\nenter the number:");
     scanf("%f%f",&a,&b);
     if(b==0){
     printf("\n error!!");}
     else{
        c=a/b;
        printf("\n division is: %f",c);}
    }
    else if (choice==5)
    {
        exit(0);
    }
    else
    {
        printf("\ninvalid choice!!");
    }
    }
    }
   
    