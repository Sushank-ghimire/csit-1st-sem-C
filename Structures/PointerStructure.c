#include <stdio.h>

typedef struct Employees
{
    int salary;
    int age;
    char address[20];
    char name[20];
} Employee;

int main()
{
    Employee *ptr, employee;
    ptr = &employee;
    printf("Enter the name of the employee : ");
    scanf("%s", ptr->name);
    printf("Enter the address of the employee : ");
    scanf("%s", ptr->address);
    printf("Enter the age of the employee : ");
    scanf("%d", &ptr->age);
    printf("Enter the salary of the employee : ");
    scanf("%d", &ptr->salary);

    printf("The details of the employee are : \n");
    printf("Name : %s Age : %d Salary : %d Address : %s", employee.name, employee.age, employee.salary, employee.address);
    return 0;
}
