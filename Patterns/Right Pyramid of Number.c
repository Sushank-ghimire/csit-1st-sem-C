
#include <stdio.h>

int main()
{
	int i, j, num, space;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for(i=num; i>=1; i--) {
		// to print the spaces
		for(space=1; space<=i-1; space++) {
			printf(" ");
		}
		
		// To print the numbers
		for(j=1; j<=i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
    return 0;
}
