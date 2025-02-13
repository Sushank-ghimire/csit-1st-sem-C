#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr, i;
    printf("Enter the number of elements to allocate memory: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("\tAddress : %d and Value : %d ", &ptr[i], ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}
