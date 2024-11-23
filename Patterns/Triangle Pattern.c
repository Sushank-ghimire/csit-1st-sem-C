#include<stdio.h>

int main() {
	int num = 10, i, j;
	
	// Triangle of increasing order
	for(i=0; i<num; i++) {
		for(j=0; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
