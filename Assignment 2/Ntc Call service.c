
/*NTC charges the following rate for local calls from a customer:
First 30 calls: Free
31 to 60 calls: Rs. 0.50 per call
Above 60 calls: Rs. 1 per call Write a program to find the amount paid by the customer,
 if the total number of calls is given.
*/

#include<stdio.h>

int main() {
	int calls;
	float charge;
	printf("Enter the number of calls : ");
	scanf("%d", &calls);
	
	if(calls <= 30) {
		printf("You are in free call package.");
	} else if(calls > 30 && calls < 60) {
		charge = (calls-30) * 0.5;
		printf("Your total charge is Rs. %.2f.", charge);
	} else {
		charge = (calls-30);
		printf("Your total charge is Rs. %.2f.", charge);
	}
	return 0;
}
