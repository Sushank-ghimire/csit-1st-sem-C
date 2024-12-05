
/*
Write a program to input the three sides of the triangle and calculate the area of the triangle 
if the sides are valid. To check the validity, the rule is that the sum of any two sides must be 
greater than the third side.*/

#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c, semiPerimeter;
	float result;
	
	printf("Enter the three sides of triangle : ");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a+b> c) {
		semiPerimeter = (float) (a+b+c)/2;
		result = sqrt(semiPerimeter*(semiPerimeter-a)*(semiPerimeter-b)*(semiPerimeter-c));
	} else {
		printf("Invalid input founded.");
		return 0;
	}
	printf("The Area of the triangle is %.2f", result);
	return 0;
}
