
// Program to operate addition, difference, division and product with floating values

#include<stdio.h>

int main() {
	float a, b;
	printf("Enter two numbers to perform operations : ");
	scanf("%d%d", &a, &b);
	
	printf("\nThe addition is : %.2f", a+b);
	printf("\nThe difference is : %.2f",a-b);
	printf("\nThe product is : %.2f", a*b);
	printf("\nThe division is : %.2f", a/b);
	
	return 0;
}
