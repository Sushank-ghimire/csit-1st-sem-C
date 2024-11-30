
// Program to calculate perimeter and area of rectangle 
#include<stdio.h>

int main() {
	int bredth, length;
	printf("Enter the length and bredth of the rectangle : ");
	scanf("%d%d", &length, &bredth);
	printf("The area is : %d", length * bredth);
	printf("\nThe perimeter is : %d", 2*(length + bredth));
	return 0;
}
