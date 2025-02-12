// Lab Sheet 6 - Pointers Solutions

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function Prototypes
void question1()
{
	int i;
    // Question 1: Memory address of different types
    char c = 'A';
    i = 100;
    float f = 10.5;

    printf("\nMemory Address of char: %p ", (void *)&c);
    printf("\nMemory Address of int: %p ", (void *)&i);
    printf("\nMemory Address of float: %p ", (void *)&f);
}

void question2()
{
    // Question 2: Sum of all elements in an array using pointer
    int arr[5], sum = 0, i;
    int *ptr;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr; // Pointing to first element
    for (i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of all elements: %d ", sum);
}

void question3()
{
    // Question 3: Display top five marks using pointer
    int marks[10], *ptr, i, j;

    printf("Enter marks of 10 students: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }

    // Sorting marks in descending order
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (marks[i] < marks[j])
            {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    ptr = marks; // Pointing to first element
    printf("Top Five Marks: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptr + i));
    }
}

void question4()
{
    // Question 4: Size of pointers for different types
    int *intPtr;
    float *floatPtr;
    char *charPtr;

    printf("Size of int pointer: %zu bytes ", sizeof(intPtr));
    printf("Size of float pointer: %zu bytes ", sizeof(floatPtr));
    printf("Size of char pointer: %zu bytes ", sizeof(charPtr));
}

void question5()
{
    // Question 5: Exchange values using pointer (Call by address)
    int a, b, *ptr1, *ptr2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    // Swapping values
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After Swapping: A = %d, B = %d ", a, b);
}

void question6()
{
    // Question 6: Add two matrices using pointers (m x n size)
    int m, n;
    int i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], sum[m][n];
    int *ptrA = &a[0][0];
    int *ptrB = &b[0][0];
    int *ptrSum = &sum[0][0];

    printf("Enter elements of first matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (ptrA + i * n + j));
        }
    }

    printf("Enter elements of second matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (ptrB + i * n + j));
        }
    }

    // Adding matrices
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(ptrSum + i * n + j) = *(ptrA + i * n + j) + *(ptrB + i * n + j);
        }
    }

    printf("Sum of Matrices: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", *(ptrSum + i * n + j));
        }
        printf(" ");
    }
}

void question7()
{
    // Question 7: Sort array elements in ascending order using dynamic memory allocation
    int n, *arr;
    int i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed. ");
        return;
    }

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    // Sorting in ascending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("Sorted Array in Ascending Order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("  ");

    free(arr); // Free allocated memory
}

void question8()
{
    // Question 8: Count employees above 80 years using malloc()
    int n, count = 0, *ages;
    int i, j;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    ages = (int *)malloc(n * sizeof(int));
    if (ages == NULL)
    {
        printf("Memory allocation failed. ");
        return;
    }

    printf("Enter ages of %d employees: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ages + i));
        if (*(ages + i) > 80)
        {
            count++;
        }
    }

    printf("Number of employees above 80 years: %d", count);
    free(ages); // Free allocated memory
}

void question9()
{
    // Question 9: Transpose of a matrix using pointers
    int m, n;
    int i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n], transpose[n][m];
    int *ptrMatrix = &matrix[0][0];
    int *ptrTranspose = &transpose[0][0];

    printf("Enter elements of matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (ptrMatrix + i * n + j));
        }
    }

    // Transposing the matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(ptrTranspose + j * m + i) = *(ptrMatrix + i * n + j);
        }
    }

    printf("Transpose of Matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", *(ptrTranspose + i * m + j));
        }
        printf("    ");
    }
}


int main()
{
    // Call all functions sequentially
//    question1();
//     question2();
//     question3();
//     question4();
//     question5();
//     question6();
//     question7();
//     question8();
     question9();

    return 0;
}
