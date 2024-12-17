
// Program to print the squares of numbers upto nth term
#include<stdio.h>

int main() {
	int n, i;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	printf("The squares of number upto %d are : \n", n);
	for(i=1; i<=n; i++) {
		printf("\t%d", i*i);
	}
	return 0;
}
