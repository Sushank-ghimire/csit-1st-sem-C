#include<stdio.h>

int main() {
	// Arrays in c programming
	
	int arrayLength, i;
	printf("Enter the length of the array : ");
	scanf("%d", &arrayLength);
	// Single Dimentional Array
	int arrays[arrayLength];
	
	// Getting arrays input from the user
	printf("Enter the values for the array : ");
	for(i=0; i<arrayLength; i++) {
		scanf("%d", &arrays[i]);
	}
	
	// Printing arrays arrays input from the user
	printf("\nThe values of the array are : ");
	for(i=0; i<arrayLength; i++) {
		printf("\t%d", arrays[i]);
	}
	return 0;
}
