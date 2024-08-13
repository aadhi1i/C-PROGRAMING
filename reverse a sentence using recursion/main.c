#include <stdio.h>
void rev();
int main() {
    printf("Enter a sentence: ");
    rev();
    return 0;
}

void rev() 
{
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        rev();
        printf("%c", c);
    }
}