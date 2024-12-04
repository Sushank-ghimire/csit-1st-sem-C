#include<stdio.h>

// In this program the integer *n holds the address of num and **n1 holds the address and value of *n and can be modified.

int main() {
	// Pointers in c programming
	// Pointer holds the address and value of another variable and can change their values
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	// Pointer holding the value and address of num
	int *n;
	n = &num;
	
	// Pointer to hold the address and value of another pointer
	int **n1;
	n1 = &n;
	
	// Print the address and value of the num integer
	printf("\nAddress of num : %d and value : %d", &num, num);
	
	// Print the address holded and value
	printf("\nHolded Address of pointer n : %d and value is : %d", n, *n);
	// Change in the pointer value effects the original value also
	*n = 10;
	
	// Print the address holded and value changed by pointer
	printf("\nHolded Address of pointer n1 : %d and value is : %d", n1, **n1);
	
	return 0;
}
