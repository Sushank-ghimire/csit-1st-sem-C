#include <stdio.h>
#include<conio.h>

int main(){
	int binary[32], i = 0, j;
	int num;
	printf("Enter a Decimal number to convert into binary : ");
	scanf("%d", &num);
	
	// Converting to the binary and storing
	while(num != 0) {
		int rem = num % 2;
		binary[i] = rem;
		num /= 2;
		i++;
	}
	
	// Printing the binary converted number
	printf("The binary converted number is : ");
	for(j = i-1; j>=0; j--) {
		printf("%d", binary[j]);
	}
  	return 0;
}
