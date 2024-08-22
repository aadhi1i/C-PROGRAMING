#include <stdio.h>

struct choice {
    char n1[20];
    char n2[20];
    char md[20];
    int t;
};

int main() {
    struct choice c[10]; 
    int tyre, option, i, ex, count = 0;

    while (1) {
        printf("\n1. Register Vehicle \n2. Display Vehicles \n3. Exit ");
        printf("\nEnter your choice:");
        scanf("%d", &option);

        switch (option) {
            case 1:
                
                    printf(" Enter your name:");
                    scanf("%s", c[count].n1);
                    printf("Enter vehicle company:");
                    scanf("%s", c[count].n2);
                    printf("Enter vehicle model:");
                    scanf("%s", c[count].md);
                    printf("Number of tires: ");
                    scanf("%d", &c[count].t);
                    count++; 
                break;

            case 2:
                printf("\n1. Enter the number of tires\n2. exit");
                printf("\nenter your choice:");
                scanf("%d", &ex);
                if (ex == 2) 
                {
                    continue;
                }
                printf("Enter the number of tires: ");
                scanf("%d", &tyre);
                printf("Matching vehicles:\n");
                for (i = 0; i < count; i++) {
                    if (c[i].t == tyre) {
                        printf("Name: %s\n", c[i].n1);
                        printf("Vehicle Company: %s\n", c[i].n2);
                        printf("Vehicle Model: %s\n", c[i].md);
                        printf("Number of tires: %d\n", c[i].t);
                        printf("\n");
                    }
                }
                break;

            case 3:
                printf("Exiting.\n");
                return 0;

            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}