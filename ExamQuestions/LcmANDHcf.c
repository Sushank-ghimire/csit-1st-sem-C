#include <stdio.h>

// Function to find HCF using Euclid's Algorithm
int findHCF(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// Function to find LCM using HCF
int findLCM(int a, int b)
{
  int hcf = findHCF(a, b);
  return (a * b) / hcf;
}

int main()
{
  int num1, num2, lcm, hcf;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  lcm = findLCM(num1, num2);
  hcf = findHCF(num1, num2);
  
  printf("The HCF of %d and %d is %d\n", num1, num2, hcf);

  printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

  return 0;
}
