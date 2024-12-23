
// Program to find the greatest and lowest number from an array
#include<stdio.h>

int main() {
	int n, i, greatest = 0, lowest;
	printf("Enter the number of arrays : ");
	scanf("%d", &n);
	int arr[n];
	
	printf("\nEnter %d numbers : ", n);
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
		
		if(greatest < arr[i]) {
			greatest = arr[i];
		}
	}
	lowest = arr[n-1];
	for(i=0; i<n; i++) {
		if(arr[i] < lowest) {
			lowest = arr[i];
		}
	}
	
	printf("\nThe greatest number of the array is %d and lowest is %d.", greatest, lowest);
	
	return 0;
}
