
// Program to find Factorial
#include <stdio.h>

int main() {
	int fact=1, n, i, j;
	printf("Enter the number to find the factorial : ");
	scanf("%d", &n);
	
	if(n <= 1) {
		printf("The factorial is 1.");
	}
	
	for(i=1; i<=n; i++) {
		fact*=i;
	}
	printf("The factorial is : %d.", fact);
    return 0;
}
