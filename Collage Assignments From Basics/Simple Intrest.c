
// Program to find Simple Intrest
#include<stdio.h>

int main() {
	float p, t, r;
	printf("Enter the value of p(in Rs.), t(in year) and r(in percent) respectively : ");
	scanf("%f%f%f", &p, &t, &r);
	printf("The simple intrest is : Rs. %.2f", (p*t*r)/100);
	return 0;
}
