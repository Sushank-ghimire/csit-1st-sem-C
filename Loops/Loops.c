#include<stdio.h>
#define NUMBERS 10

int main() {
	// Loops in C programming
	
	
	// For Loop
	/*
	Structure of For Loop
	for(variable initialization; condition; increment/decrement){
		Operation Performed
	}
	*/
	
	int i;
	printf("Printing upto 10 numbers using for loop : ");
	for(i=0; i<NUMBERS; i++) {
		printf("\t %d", i);
	}
	
	
	// While Loop
	/*
	Structure of While Loop
	while(condition) {
		Perform Task
	}
	*/
	int num = 0;
	printf("\n");
	while(num < NUMBERS) {
		printf("I am inside while loop.\n");
		num++;
	}
	
	// Do While Loop
	/*
	Structure of Do While Loop
	do{
		operations
	} while(condiition);
	*/
	
	// It runs once becaule in while loop the value of num is already increased to 10
	printf("\n");
	do {
		printf("Do While loop always runs once while the conditions meets or not.");
		num++;
	} while(num < NUMBERS);
	
	return 0;
}
