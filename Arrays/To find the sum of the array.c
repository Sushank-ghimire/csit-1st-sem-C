
// Program to find the sum of the user input arrays
#include<stdio.h>

int main() {
	int i, n, sum = 0;
	
	printf("Enter the size of array : ");
	scanf("%d", &n);
	
	int arr[n];
	
	// Taking user numbers input
	printf("Enter %d numbers : ", n);
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	// To find the sum
	for(i=0; i<n; i++) {
		sum += arr[i];
	}
	
	printf("The sum of the array is %d.", sum);
	return 0;
}
