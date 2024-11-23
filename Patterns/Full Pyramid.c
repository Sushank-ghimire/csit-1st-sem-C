#include<stdio.h>

int main() {
	// Full Pyramid Pattern Using C Programming
	int num = 5;
	
	int i, j, k;
	
	// first loop to print all rows
	for(i=0; i<num; i++) {
		
		// 1st inner loop to print white spaces
		for(j=0; j<2 * (num-i)-1; j++) {
			printf(" ");
		}
		
		// 2nd inner loop to print pattern
		for(k=0; k < 2 * i + 1; k++) {
			printf("* ");
		}
		
		// To change the line
		printf("\n");
	}
	return 0;
}
