#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate and initialize memory for n integers to 0
    int *ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    // To take the elements input
    printf("Enter %d elements : ", n);
    for(i=0; i<n; i++) {
    	scanf("%d", &ptr[i]);
	}

    // Display initialized elements (should all be 0)
    for (i = 0; i < n; i++)
    {
        printf("Element %d: %d, Address : %d\n", i, ptr[i], &ptr[i]);
    }

    free(ptr);
    return 0;
}
