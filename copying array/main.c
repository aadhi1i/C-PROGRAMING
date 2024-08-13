#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    int i;

    
    for(i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    printf("Elements of arr2 are: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}