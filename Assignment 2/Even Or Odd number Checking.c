/*
Write a program to determine whether the given number is even or odd.
*/

#include<stdio.h>

int main() {
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if(num%2 == 0) {
		printf("The given number %d is even.", num);
	} else {
		printf("The given number %d is odd.", num);
	}
	return 0;
}
