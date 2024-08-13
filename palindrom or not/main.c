#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, r;
    printf("Enter an integer: ");
    scanf("%d", &n);
    r = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (r == reversed)
    {
        printf("%d is a palindrome.", r);
    }
    else{
        printf("%d is not a palindrome.", r);
}
    return 0;
}