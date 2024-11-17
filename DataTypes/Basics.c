#include<stdio.h>
#include<string.h>
#define ARRAY_LENGTH 5

int main(){
	// Data types in c Programming
	
	// Integer
	int roll = 15;
	
	// Float
	float rollNum = 16.5;
	
	// Character
	char character = 'C';
	
	// String
	char string[] = "Hello world";
	
	// Arrays
	int arr1[ARRAY_LENGTH] = {1, 2, 3, 4, 5};
	
	// printing all the data types
	printf("The value of roll is : %d\n", roll);
	printf("The value of rollNum is : %f\n", rollNum);
	printf("The value of character is : %c\n", character);
	printf("The value of string is : %s\n", string);
	
	// Using for loop to print the arrays elements
	printf("Printing arrays elements using for loop : \n");
	int i;
	for(i=0; i<ARRAY_LENGTH; i++) {
		printf("\t%d", arr1[i]);
	}
	return 0;
}
