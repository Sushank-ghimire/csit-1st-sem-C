
// Program to take an array input from user and print it
#include<stdio.h>

int main() {
	int i, j, num;
	printf("Enter the size of array : ");
	scanf("%d", &num);
	
	int arr[num];
	
	// To take input array from the users
	printf("Enter the elements of the array : ");
	for(i=0; i<num; i++) {
		scanf("%d", &arr[i]);
	}
	
	// To print the array 
	printf("The input elements are : \n");
	for(j=0; j<num; j++) {
		printf("\t%d", arr[j]);
	}
	
	return 0;
}
