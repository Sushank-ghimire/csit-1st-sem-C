#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    int i;
    if (ptr == NULL)
    {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    // Initialize the first five elements
    for (i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }

    // Resize the memory block to hold 10 integers
    int *temp = (int *)realloc(ptr, 10 * sizeof(int));
    if (temp == NULL)
    {
        printf("Reallocation failed.\n");
        free(ptr);
        return 1;
    }
    ptr = temp;

    // The new elements (indexes 5 to 9) are not initialized
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}
