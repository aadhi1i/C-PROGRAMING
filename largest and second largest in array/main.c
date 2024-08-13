#include <stdio.h>

int main()
{
    int arr[100];
    int x, i, largest_num, secondlargest_num;

    printf("Enter the size of array: ");
    scanf("%d", &x);

    printf("Enter the elements of the array: ");
    for (i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    largest_num = arr[0];
    secondlargest_num = arr[0];

    for (i = 1; i < x; i++) 
    {
        if (arr[i] > largest_num) 
        {
            secondlargest_num = largest_num;
            largest_num = arr[i];
        } else if (arr[i] > secondlargest_num && arr[i] != largest_num) 
        {
            secondlargest_num = arr[i];
        }
    }

    printf("Largest number: %d\n", largest_num);
    printf("Second-largest number: %d\n", secondlargest_num);

    return 0;
}