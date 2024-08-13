#include <stdio.h>

int main() 
{
    int s, n, num, i, count;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &s, &n);

    printf("The prime numbers in between the range %d and %d are: ", s, n);

    for (num = s; num <= n; num++) {
        count = 0;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}