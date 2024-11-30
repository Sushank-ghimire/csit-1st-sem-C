
// program to find leap year from any year
#include<stdio.h>

int main() {
	int year;
	printf("Enter the year : ");
	scanf("%d", &year);
	if(year % 4 == 0 && year%400 == 0) {
		printf("The year %d is leap year.", year);
	} else {
		printf("The year is not leap year.");
	}
	return 0;	
};n
