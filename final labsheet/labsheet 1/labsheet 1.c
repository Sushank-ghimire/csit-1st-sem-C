/* Lab Sheet 1 (Basic Construct in C) */

#include <stdio.h>

// Program to perform addition, subtraction, multiplication, and division of two numbers
void arithmetic_operations()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %.2f\n", (float)a / b);
}

// Program to calculate the surface area of a cube
void surface_area_of_cube()
{
    float l;
    printf("Enter the length of cube: ");
    scanf("%f", &l);
    printf("Surface Area: %.2f\n", 6 * l * l);
}

// Program to calculate the area and circumference of a circle
void area_circumference_circle()
{
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    printf("Area: %.2f\n", 3.1416 * r * r);
    printf("Circumference: %.2f\n", 2 * 3.1416 * r);
}

// Program to calculate the area and perimeter of a rectangle
void area_perimeter_rectangle()
{
    float length, breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Area: %.2f\n", length * breadth);
    printf("Perimeter: %.2f\n", 2 * (length + breadth));
}

// Program to divide one integer by another and find quotient and remainder
void quotient_remainder()
{
    int dividend, divisor;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);
    printf("Quotient: %d\n", dividend / divisor);
    printf("Remainder: %d\n", dividend % divisor);
}

int main()
{
//    arithmetic_operations();
//    surface_area_of_cube();
//    area_circumference_circle();
//    area_perimeter_rectangle();
//    quotient_remainder();
    return 0;
}
