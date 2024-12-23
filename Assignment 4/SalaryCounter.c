
// Program to get input salary of n employees and find the salary ranged between 10000 to 15000
#include <stdio.h>

int main()
{
    int n, i, count = 0;
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    int salary[n];

    printf("\nEnter the salary of %d employees : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &salary[i]);

        if (salary[i] >= 10000 && salary[i] <= 15000)
        {
            count++;
        }
    }

    printf("\nThe number of employees whose salary is between 10000 and 15000 is %d.", count);

    return 0;
}