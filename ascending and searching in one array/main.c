#include <stdio.h>

int main() {
    int arr[100];
    int size, i, x, y, j, temp,a,found;
    printf("Enter the size of array (max 100): ");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the start index: ");
    scanf("%d", &x);
    printf("Enter the end index: ");
    scanf("%d", &y);

    if (x >= 0 && x < size && y >= 0 && y < size && x <= y) 
    {
        printf("Ascending order between two index is: ");
        for (i = x; i <= y; i++) 
        {
            for (j = i + 1; j <= y; j++) 
            {
                if (arr[i] > arr[j]) 
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (i = x; i <= y; i++) 
        {
            printf("%d ", arr[i]);
        }
        
        printf("\nEnter a number you want to search: ");
        scanf("%d", &a);
        found = 0;
        for (i = x; i <= y; i++) {
            if (a == arr[i]) {
                printf("\nEntered number is in the array: %d\n", a);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("\nInvalid number not in array\n");
        }
    } else {
        printf("Invalid index range!");
    }

    return 0;
}
       