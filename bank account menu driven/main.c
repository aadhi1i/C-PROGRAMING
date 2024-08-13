#include <stdio.h>

struct choice{
    char n1[50], n2[50];
    float x;
    int a, d;
};

int main()
{
    struct choice c;
    int option,code;
    float withdraw,deposit;
    
                    printf("Create a Account\n");
                    printf("Enter your name:");
                    scanf("%s", c.n1);
                    printf("Enter your place:");
                    scanf("%s", c.n2);
                    printf("Enter your phone number:");
                    scanf("%d", &c.a);
                    printf("Enter initial amount:");
                    scanf("%f", &c.x);
                    printf("Enter your four-digit code:");
                    scanf("%d", &c.d);

        while(1){
        printf("\n1. Display Account Info\n2. Deposit\n3. Withdraw\n4. Exit");
        printf("\nEnter your choice:");
        scanf("%d", &option);

        if(option > 0 && option <= 5){
            switch(option){
                case 1:
                   
                    printf("Enter your four-digit code:");
                    
                    scanf("%d", &code);
                    if(code == c.d){
                        printf("Your name: %s\n", c.n1);
                        printf("Your place: %s\n", c.n2);
                        printf("Your phone number: %d\n", c.a);
                        printf("Your balance: %.2f\n", c.x);
                    } 
                    else {
                        printf("Invalid code!\n");
                    }
                    break;

                case 2:
                    printf("Enter amount to deposit:");
                    scanf("%f", &deposit);
                    c.x += deposit;
                    printf("Deposit successful! New balance: %.2f\n", c.x);
                    break;

                case 3:
                    printf("Enter amount to withdraw:");
                    scanf("%f", &withdraw);
                    
                        c.x -= withdraw;
                        printf("Withdrawal successful! New balance: %.2f\n", c.x);
                     break;

                case 4:
                    printf("Exiting...\n");
                    return 0;
            }
        } 
        else{ 
            printf("Invalid option!!\n");
        }
    }

    return 0;
}