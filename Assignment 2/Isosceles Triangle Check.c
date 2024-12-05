/*
Write a program to take three sides of the triangle and determine 
whether the given triangle is isosceles or not.
*/

#include<stdio.h>

int main() {
	int side1, side2, side3;
	printf("Enter the three sides of the triangle : ");
	scanf("%d%d%d", &side1, &side2, &side3);
	
	if(((side1 == side2 && side1 != side3) || 
        (side2 == side3 && side2 != side1) || 
        (side1 == side3 && side1 != side2))) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is not isosceles.\n");
    }
	return 0;
}
