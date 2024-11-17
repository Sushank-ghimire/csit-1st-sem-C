#include<stdio.h>

int main() {
	// Switch Statement
	int num;
	printf("Enter a number to print the week days : ");
	scanf("%d", &num);
	switch(num) {
		case 1:
			printf("The day is : Sunday");
			break;
		case 2:
			printf("The day is : Monday");
			break;
		case 3:
			printf("The day is : Tuesday");
			break;
		case 4:
			printf("The day is : Wednesday");
			break;
		case 5:
			printf("The day is : Thursday");
			break;
		case 6:
			printf("The day is : Friday");
			break;
		case 7:
			printf("The day is : Saturday");
			break;
		default:
			printf("Invalid number (fool you don't know how many days are in a week)");
			break;
	}
	return 0;
}

