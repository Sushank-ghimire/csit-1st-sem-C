#include<stdio.h>

int main() {
	int num = 10, i, j;
	
	// Triangle of opposite Order order
	for(i=0; i<=num; i++) {
		for(j=num; j>=i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
