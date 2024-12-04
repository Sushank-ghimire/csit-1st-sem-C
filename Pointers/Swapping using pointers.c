
// Simple program to swap two numbers using pointers

void swap(int *n1, int *n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main() {
	int num1, num2;
	
	printf("Enter two numbers (num1 and num2) : ");
	scanf("%d%d", &num1, &num2);
	
	swap(&num1, &num2);
	
	printf("The swapped values are num1: %d and num2: %d", num1, num2);
	
	return 0;
}
