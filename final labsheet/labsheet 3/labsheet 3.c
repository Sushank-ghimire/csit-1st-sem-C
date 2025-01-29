/* Lab Sheet 3 (Arrays and Strings) */

#include <stdio.h>
#include <string.h>

// Function to read 10 numbers into an array and find sum, product, average, and max
void array_operations() {
    int arr[10], sum = 0, product = 1, max = -99999, i;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Sum: %d, Product: %d, Average: %.2f, Max: %d\n", sum, product, sum / 10.0, max);
}

// Function to read 10 numbers and print their addresses
void array_addresses() {
    int arr[10], i;
    printf("Enter 10 different numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("Value: %d, Address: %p\n", arr[i], &arr[i]);
    }
}

// Function to find largest and smallest among 10 numbers
void find_largest_smallest() {
    int arr[10], max = -99999, min = 99999, i;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Largest: %d, Smallest: %d\n", max, min);
}

// Function to sort numbers in ascending order
void sort_array() {
    int arr[10], temp, i, j;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted Numbers: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to check if a string is a palindrome
void is_palindrome() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(rev, str);
    strrev(rev);
    if (strcmp(str, rev) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

// Function to find length of string without using strlen
void string_length() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[length] != '\0') length++;
    printf("String length: %d\n", length);
}

// Function to convert string to uppercase
void to_uppercase() {
    char str[100];
    printf("Enter a string: ");
    int i;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    printf("Uppercase: %s\n", str);
}

// Function to convert string to lowercase
void to_lowercase() {
	int i;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    printf("Lowercase: %s\n", str);
}

// Function to read and display a 2x3 matrix
void read_matrix() {
    int matrix[2][3], i, j;
    printf("Enter elements of 2x3 matrix: ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrix_operations() {
    int m, n, i, j;
    printf("Enter matrix dimensions (m n): ");
    scanf("%d %d", &m, &n);
    int A[m][n], B[m][n], sum[m][n], diff[m][n], product[m][n];
    printf("Enter elements of first matrix: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
            product[i][j] = A[i][j] * B[i][j];
        }
    }
    printf("Sum Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("Difference Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    printf("Product Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}

// Function to display prime numbers between 1 and 100
void prime_numbers() {
	int i, j, num;
    printf("Prime numbers between 1 and 100: ");
    for (num = 2; num <= 100; num++) {
        int prime = 1;
        for (j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) printf("%d ", num);
    }
    printf("\n");
}

// Function to read marks of 10 students and print top five
void top_five_students() {
    int marks[10], i, j;
    printf("Enter marks of 10 students: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (marks[i] < marks[j]) {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    printf("Top five marks: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
}

void reverse_copy_array() {
    int arr[10], rev[10], i;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        rev[i] = arr[9 - i];
    }
    printf("Reversed array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");
}

// Function to reverse a string without using strrev()
void reverse_string_manual() {
    char str[100], rev[100];
    int len, i;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed String (manual): %s\n", rev);
}

// Function to display ASCII values of characters in a string
void string_ascii_values() {
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("ASCII values: ");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%d ", str[i]);
    }
    printf("\n");
}

// Function to compare two strings and display the larger one
void compare_strings() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strcmp(str1, str2) > 0) {
        printf("Larger string: %s\n", str1);
    } else {
        printf("Larger string: %s\n", str2);
    }
}

// Function to concatenate two strings without using strcat()
void concatenate_strings() {
    char str1[100], str2[100];
    int i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    int len = strlen(str1);
    for (i = 0; str2[i] != '\0'; i++) {
        str1[len + i] = str2[i];
    }
    str1[len + strlen(str2)] = '\0';
    printf("Concatenated string: %s\n", str1);
}

// Function to read names of 10 students and sort them in alphabetical order
void sort_student_names() {
    char names[10][100], temp[100];
    int i, j;
    printf("Enter names of 10 students: ");
    for (i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }
    for ( i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("Sorted names: \n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }
}


int main() {
//    array_operations();
//    array_addresses();
//    find_largest_smallest();
//    sort_array();
//    read_matrix();
//    matrix_operations();
//    prime_numbers();
//    top_five_students();
//    reverse_copy_array();
//    is_palindrome();
//    string_length();
//    to_uppercase();
//    to_lowercase();
//    reverse_string_manual();
//    string_ascii_values();
//    compare_strings();
//    concatenate_strings();
//    sort_student_names();
    return 0;
}

