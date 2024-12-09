
// To print Table Upto Nth term
#include<stdio.h>

int main() {
	int n, i, j;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	if(n < 2) {
		printf("Invalid number to calculate.");
	}
	
	for(i=2; i<=n; i++) {
		for(j=1; j<=10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n\n");
	}
    return 0;
}
