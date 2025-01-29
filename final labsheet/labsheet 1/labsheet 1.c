/* Lab Sheet 1 (Basic Construct in C) - Additional Programs */

#include <stdio.h>
#include <math.h>

// Function to convert seconds into hours, minutes, and seconds
void convert_seconds() {
    int seconds;
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int sec = seconds % 60;
    printf("%d seconds = %d hours, %d minutes, and %d seconds\n", seconds, hours, minutes, sec);
}

// Function to convert days into years, months, and days
void convert_days() {
    int days;
    printf("Enter days: ");
    scanf("%d", &days);
    int years = days / 365;
    int months = (days % 365) / 30;
    int remaining_days = (days % 365) % 30;
    printf("%d days = %d years, %d months, and %d days\n", days, years, months, remaining_days);
}

// Function to convert mm to km, m, cm, and mm
void convert_length() {
    int mm;
    printf("Enter length in mm: ");
    scanf("%d", &mm);
    printf("%d mm = %d km, %d m, %d cm, and %d mm\n", mm, mm / 1000000, (mm % 1000000) / 1000, (mm % 1000) / 10, mm % 10);
}

// Function to reverse a three-digit number
void reverse_number() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("Reversed Number: %d\n", (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100));
}

// Function to calculate aggregate and percentage
void calculate_marks() {
    int marks[5], total = 0, i;
    printf("Enter marks for 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    printf("Total: %d, Percentage: %.2f%%\n", total, (total / 5.0));
}

// Function to convert temperature
void convert_temperature() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Celsius: %.2f, Fahrenheit: %.2f\n", celsius, (celsius * 9 / 5) + 32);
}

// Function to calculate quadratic equation roots
void quadratic_roots() {
    float a, b, c;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    float d = b * b - 4 * a * c;
    if (d >= 0) {
        printf("Roots: %.2f and %.2f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    } else {
        printf("No real roots\n");
    }
}

void remainder_by_five() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Remainder: %d\n", num % 5);
}

void sphere_volume() {
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("Volume: %.2f\n", (4.0 / 3.0) * 3.1416 * radius * radius * radius);
}

void compare_numbers() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a > b ? a + b : a - b);
}

void sum_of_digits() {
    int num, sum = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}

void triangle_area() {
    float a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    float s = (a + b + c) / 2;
    printf("Area: %.2f\n", sqrt(s * (s - a) * (s - b) * (s - c)));
}

// Function to swap two numbers
void swap_numbers() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Swapped values: %d, %d\n", a, b);
}

int main() {
//    convert_seconds();
//    convert_days();
//    convert_length();
//    reverse_number();
//    calculate_marks();
//    convert_temperature();
//    quadratic_roots();

//    triangle_area();
//    swap_numbers();
//    sum_of_digits();
//    compare_numbers();
//    convert_number();
//    sphere_volume();
    remainder_by_five();
    return 0;
}

