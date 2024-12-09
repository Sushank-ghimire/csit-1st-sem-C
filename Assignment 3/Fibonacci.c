
// Program to find the Fibonacci series
#include<stdio.h>

int main() {
	int num, f1 = 0, f2 = 1, f3, i;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	// Invalid input gives 0 as output
	if(num < 0 || num == 0) {
		printf("0");
	}

	// Special case for 0 and 1
	if (num >= 1) {
		printf("%d \t", f1);  // Print the first Fibonacci number
	}
	if (num >= 2) {
		printf("%d \t", f2);  // Print the second Fibonacci number
	}
	
	// Generate Fibonacci sequence
	for(i = 3; i <= num; i++) {
		f3 = f1 + f2;
		printf("%d \t", f3);
		f1 = f2;
		f2 = f3;
	}
	
	return 0;
}

