#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers.
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize the original array with values 1, 2, 3, ..., n.
    for (i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }

    // Print the original array.
    printf("Original array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Calculate the new size (doubling the current size).
    int newSize = 2 * n;

    // Reallocate memory to hold newSize integers.
    int *temp = (int *)realloc(array, newSize * sizeof(int));
    if (temp == NULL)
    {
        printf("Reallocation failed.\n");
        free(array); // Free the old block if realloc fails.
        return 1;
    }
    array = temp; // Update the pointer to the newly allocated memory.

    // Initialize the new elements of the array.
    // For example, assign values like 60, 70, ... based on position.
    for (i = n; i < newSize; i++)
    {
        array[i] = (i + 1) * 10; // When n is 5, this sets:
                                 // array[5]=(6*10)=60, array[6]=(7*10)=70, etc.
    }

    // Print the resized array.
    printf("Resized array:\n");
    for (i = 0; i < newSize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the allocated memory.
    free(array);
    return 0;
}
