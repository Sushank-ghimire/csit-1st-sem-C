#include <stdio.h>

// Task 1: Addition, Subtraction, Multiplication, Division
void add(int a, int b) {
    printf("Addition: %d\n", a + b);
}

void sub(int a, int b) {
    printf("Subtraction: %d\n", a - b);
}

void mul(int a, int b) {
    printf("Multiplication: %d\n", a * b);
}

void div(int a, int b) {
    if (b != 0)
        printf("Division: %.2f\n", (float)a / b);
    else
        printf("Cannot divide by zero\n");
}


// Task 2: Largest of three numbers
void largest() {
    int a, b, c;
    printf("Enter three numbers to find the largest: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Largest: %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest: %d\n", b);
    else
        printf("Largest: %d\n", c);
}

// Task 3: Product of float and int
void product() {
    float a;
    int b;
    printf("Enter a float and an int for product: ");
    scanf("%f %d", &a, &b);
    printf("Product: %.2f\n", a * b);
}

// Task 4: Check if number is prime
void is_prime() {
    int n, i;
    printf("Enter a number to check prime: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not prime\n", n);
        return;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d is not prime\n", n);
            return;
        }
    }
    printf("%d is prime\n", n);
}

// Task 5: Factorial of a number (iterative)
void factorial() {
    int n, i;
    long int fact = 1;
    printf("Enter a number for factorial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial: %ld\n", fact);
}

// Task 6: Power of a number (a^b)
void power() {
    int a, b, result = 1, i;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= b; i++) {
        result *= a;
    }
    printf("Power: %d\n", result);
}

// Task 7: Factorial using recursion
long int factorial_recursive(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

void factorial_recursive_call() {
    int n;
    printf("Enter a number for factorial (recursive): ");
    scanf("%d", &n);
    printf("Factorial (recursive): %ld\n", factorial_recursive(n));
}

// Task 8: Sum of series 1 + 2 + 3 + ... + n (recursive)
int sum_series(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum_series(n - 1);
}

void sum_series_call() {
    int n;
    printf("Enter a number for sum of series: ");
    scanf("%d", &n);
    printf("Sum of series: %d\n", sum_series(n));
}

// Task 9: Fibonacci series (recursive)
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibonacci_series_call() {
    int n, i;
    printf("Enter a number for Fibonacci: ");
    scanf("%d", &n);
    printf("Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

// Task 10: a raised to the power b (recursive)
int power_recursive(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * power_recursive(a, b - 1);
}

void power_recursive_call() {
    int a, b;
    printf("Enter base and exponent (recursive): ");
    scanf("%d %d", &a, &b);
    printf("Power (recursive): %d\n", power_recursive(a, b));
}

// Task 11: Sum of first 20 natural numbers
void sum_first_20() {
    printf("Sum of first 20 natural numbers: %d\n", (20 * (20 + 1)) / 2);
}

// Task 12: Generate Fibonacci series up to n
void fibonacci_series_up_to_n() {
    int n, i;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
//	int a, b, n;
//
//    // Task 1: Accept two numbers
//    printf("Enter two numbers for operations: ");
//    scanf("%d %d", &a, &b);
//    add(a, b);
//    sub(a, b);
//    mul(a, b);
//    div(a, b);


//    largest();
//    product();
//    is_prime();
//    factorial();
//    power();
//    factorial_recursive_call();
//    sum_series_call();
//    fibonacci_series_call();
//    power_recursive_call();
//    sum_first_20();

    return 0;
}

