#include<stdio.h>

int main() {
	// MultiDimentional Arrays
	int i, j;
	
	// 3x3 matrix array containing 9 elements
	/*i.e arrays = [{1,2,3},{4,5,6},{7,8,9}]*/
	int arrays[3][3];
	
	// Getting arrays input from the user
	printf("Enter 9 values for the array : ");
	
	// Getting input the integer values to the respective indexes
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", &arrays[i][j]);
		}
	}
	
	// Printing the arrays
	printf("\nElements of the array or matrix : \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("\t%d", arrays[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
