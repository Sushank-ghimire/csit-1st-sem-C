#include <stdio.h>

int main()
{
	int i, j, fact = 1, num;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if(num <= 0 || num == 1) {
		printf("The factorial of the number is 1.");
		exit(0);
	}
	
	for(i=1; i<=num; i++) {
		fact *= i;
	}
	printf("The factorial of the number is %d.", fact);
  	return 0;
}
