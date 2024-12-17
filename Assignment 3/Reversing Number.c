
// Program to reverse a number using for loop
#include<stdio.h>

int main() {
	int n, rem, reverse = 0, temp;
	
	printf("Enter a number to reverse : ");
	scanf("%d", &n);
	
	temp = n;
	
	while(n != 0) {
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n = n/10;
	}
	
	printf("The reverse of %d is %d.", temp, reverse);
	
	return 0;
}
