// Program to get input marks of student and count the number of students who have scored mark between 60 and 80.

#include <stdio.h>

int main()
{
    int n, count = 0, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of students: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] >= 60 && marks[i] <= 80)
        {
            count++;
        }
    }
    printf("Number of students who scored marks between 60 and 80: %d\n", count);
    return 0;
}
