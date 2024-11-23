#include<stdio.h>

// Function Declaration
int addition(int num1, int num2);


// also declare and define the function at a same place
float multiply(float num1, float num2) {
	return num1 * num2;
}

int main() {
	int num1, num2;
	printf("Enter values of two numbers : ");
	
	// to take two numbers as input and assigning their respective values
	scanf("%d %d", &num1, &num2);
	
	// Calling function to get the sum
	int sum = addition(num1, num2);
	printf("The sum is : %d", sum);
	
	// calling the function to get the multiplication
	float mul = addition(num1, num2);
	printf("The multiplication is : %.2f", mul);
    return 0;
}

// Function Defination
int addition(int num1, int num2) {
    return num1+num2;
}
