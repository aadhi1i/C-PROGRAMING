#include <stdio.h>
#include <math.h> 

int main() {
    int a, i, originalNum, rem, sum = 0, n = 0; 

    printf("Input a number: ");
    scanf("%d", &a);

    originalNum = a;
    for (i = a; i != 0; n++) {
        i /= 10;
    }
    for (i = a; i != 0; i /= 10) {
        rem = i % 10;
        sum += pow(rem, n);
    }
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    return 0;
}