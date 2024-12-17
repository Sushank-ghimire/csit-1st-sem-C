
// Program to find the sum of all natural numbers upto nth term

#include<stdio.h>

int main() {
	int n, sum = 0, i;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	if(n <= 0) {
		printf("Invalid number in choice.");
		return 0;
	}
	
	for(i=1; i<=n; i++) {
		sum += i;
	}
	
	printf("\nThe sum of the numbers upto %d is %d.", n, sum);
	return 0;
}
