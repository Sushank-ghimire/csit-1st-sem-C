/*
Write a program to find out the difference between the greatest and smallest
number from the given three numbers.
*/

#include<stdio.h>

int main() {
	int num1, num2, num3;
	
	int smallest, greatest;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	/*
	Using Ternary Operator
	greatest = (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));
    smallest = (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3));
	*/
	
	greatest = num1;
    if (num2 > greatest) {
        greatest = num2;
    }
    if (num3 > greatest) {
        greatest = num3;
    }
	smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    
    printf("The difference between the greatest %d and the smallest %d is %d.", greatest, smallest, greatest-smallest);
    
	
	return 0;
}
