/* Lab Sheet 2 (Decision Control and Looping) */

#include <stdio.h>
#include <math.h>

// Function to generate Fibonacci series
void fibonacci_series() {
    int n, t1 = 0, t2 = 1, nextTerm, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

// Function to print Armstrong numbers between 1 and 500
void armstrong_numbers() {
    printf("Armstrong numbers between 1 and 500:\n");
    int num;
    for (num = 1; num <= 500; num++) {
        int sum = 0, temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num) printf("%d\n", num);
    }
}

// Function to print numbers from 1 to 10 using while loop
void print_numbers_1_to_10() {
    int i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

// Function to print numbers from 9 to 0 using while loop
void print_numbers_9_to_0() {
    int i = 9;
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }
    printf("\n");
}

// Function to print numbers from 10 to 1 and their sum
void print_numbers_and_sum() {
    int i = 10, sum = 0;
    while (i >= 1) {
        printf("%d ", i);
        sum += i;
        i--;
    }
    printf("\nSum: %d\n", sum);
}

// Function to calculate factorial
void factorial() {
    int n, fact = 1, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial: %d\n", fact);
}

// Function to count positive, negative, and zero numbers
void count_numbers() {
    int num, pos = 0, neg = 0, zero = 0;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0) pos++;
        else if (num < 0) neg++;
        else zero++;
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Positive: %d, Negative: %d, Zeros: %d\n", pos, neg, zero);
}

// Function to print pattern
void print_pattern() {
	int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to display multiplication table from 1 to 10
void multiplication_table() {
	int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf(" %d x %d = %d ",i, j, i * j);
        }
    }
}

// Function to display square if odd, cube if even
void square_or_cube() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Result: %d\n", num % 2 == 0 ? num * num * num : num * num);
}

// Function to calculate power
void power_of_number() {
    int base, exp, result = 1, i;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    for (i = 1; i <= exp; i++) {
        result *= base;
    }
    printf("Result: %d\n", result);
}

// Function to find product of digits of a number
void product_of_digits() {
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    printf("Product of digits: %d\n", product);
}

// Function to find sum of digits of a number
void sum_of_digits() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}

int main() {
//    fibonacci_series();
//    armstrong_numbers();
//    print_numbers_1_to_10();
//    print_numbers_9_to_0();
//    print_numbers_and_sum();
//    factorial();
//    count_numbers();
//    print_pattern();
//    multiplication_table();
//    square_or_cube();
//    power_of_number();
//    product_of_digits();
//    sum_of_digits();
    return 0;
}

