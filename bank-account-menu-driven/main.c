#include <stdio.h>

struct choice {
    char name[50];
    char place[50];
    char ph[11]; 
    int c_d;
    float x;
};

int main() {
    struct choice c;
    int option, i, code;
    float withdraw, deposit;
    
    int count=0, found=0;
    struct choice users[5]; 

    while (1) {
        printf("\n1. Create a Account \n2. Display Account Info\n3. Deposit\n4. Withdraw\n5. Exit");
        printf("\nEnter your choice:");
        scanf("%d", &option);

        if (option > 0 && option <= 5) {
            switch (option) {
                case 1:
                    printf("Enter your name:");
                    scanf("%s", c.name);
                    printf("Enter your place:");
                    scanf("%s", c.place);
                    printf("Enter your phone number:");
                    scanf("%s", c.ph);
                    printf("Enter initial amount:");
                    scanf("%f", &c.x);
                    printf("Enter your four-digit code:");
                    scanf("%d", &c.c_d);
                    
                    found = 0;
                    for (i = 0; i < count; i++) {
                        if (c.c_d == users[i].c_d) {
                            printf("Code already registered! Please try again.\n");
                            found = 1;
                            break;
                        }
                    }
                    
                    if (!found) {
                        users[count] = c;
                        count++;
                    }
                    break;

                case 2:
                    printf("Enter your four-digit code:");
                    scanf("%d", &code);
                    if (code == c.c_d) {
                        printf(" name: %s\n", c.name);
                        printf(" place: %s\n", c.place);
                        printf(" phone number: %s\n", c.ph); 
                        printf(" balance: %.2f\n", c.x);
                    } else {
                        printf("Invalid code!\n");
                    }
                    break;

                case 3:
                    printf("Enter amount to deposit:");
                    scanf("%f", &deposit);
                    c.x += deposit;
                    printf("Deposit successful! New balance: %.2f\n", c.x);
                    break;

                case 4:
                    printf("Enter amount to withdraw:");
                    scanf("%f", &withdraw);
                    if (withdraw > c.x) {
                        printf("Insufficient balance!\n");
                    } else {
                        c.x -= withdraw;
                        printf("Withdrawal successful! New balance: %.2f\n", c.x);
                    }
                    break;

                case 5:
                    printf("Exiting...\n");
                    return 0;
            }
        } else {
            printf("Invalid option!!\n");
        }
    }

    return 0;
}