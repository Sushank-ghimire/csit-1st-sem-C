#include <stdio.h>

int fibonacci(int num)
{
  if (num == 0)
  {
    return 0;
  }
  else if (num == 1)
  {
    return 1;
  }
  return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
  int num, i = 0, a = 0, b = 1, c;

  printf("Enter a number to find the Fibonacci to that number: ");
  scanf("%d", &num);

  printf("Fibonacci series up to %d terms:\n", num);

  while (i < num)
  {
    printf(" %d ", a);
    c = a + b;
    a = b;
    b = c;
    i++;
  }
  printf("\n");
  printf("Using recursive function : \n");
  for(i =0; i<num; i++) {
  	printf(" %d ", fibonacci(i));
  }
  return 0;
}
