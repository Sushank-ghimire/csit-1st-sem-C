#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input elements for the first matrix
    int matrix1[r1][c1];
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if the matrices can be multiplied
    if (c1 != r2) {
        printf("Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    // Input elements for the second matrix
    int matrix2[r2][c2];
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply the matrices
    int result[r1][c2];
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("The product of the two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
