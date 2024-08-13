#include <stdio.h>

int main() {
    int arr[100], n, i, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    max = arr[0];
    min = arr[0];

    
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
        if (arr[i] < min) 
        {
            min = arr[i];
        }
    }

    
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}