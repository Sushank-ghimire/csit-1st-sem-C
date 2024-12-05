
/*NTC charges the following rate for local calls from a customer:
First 30 calls: Free
31 to 60 calls: Rs. 0.50 per call
Above 60 calls: Rs. 1 per call Write a program to find the amount paid by the customer,
 if the total number of calls is given.
*/
#include <stdio.h>

int main()
{
	int calls;
	float amount = 0;

	// Input the total number of calls
	printf("Enter the total number of calls: ");
	scanf("%d", &calls);

	// Calculate the charge based on the number of calls
	if (calls <= 30)
	{
		amount = 0; // First 30 calls are free
	}
	else if (calls <= 60)
	{
		amount = (calls - 30) * 0.50; // Next 31 to 60 calls cost Rs. 0.50 per call
	}
	else
	{
		amount = (30 * 0.50) + ((calls - 60) * 1); // First 31 to 60 calls + calls above 60
	}

	printf("The total amount to be paid is: Rs. %.2f\n", amount);

	return 0;
}
