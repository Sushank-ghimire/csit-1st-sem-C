// Program to find Prime Number
#include<stdio.h>

int main() {
	int n, count=0, i;
	printf("Enter a number : ");
	scanf("%d", &n);
	for(i=2; i<n; i++) {
		if(n%i == 0) {
			count++;
			break;
		}
	}
	
	if(count > 1 || count == 1) {
		printf("%d is not a prime number.", n);
	} else {
		printf("%d is a prime number.", n);
	}
}
