#include <stdio.h>
#include <string.h>

// Function Prototypes
void question1()
{
    // Question 1: Display data using structure
    struct Student
    {
        char name[20];
        int totalMarks;
        char grade;
    } students[] = {
        {"Ram", 100, 'C'},
        {"Sita", 120, 'B'},
        {"Gita", 130, 'B'},
        {"Gopal", 150, 'A'}};

    printf("
Name	Total Marks	Grade
");
    for (int i = 0; i < 4; i++) {
        printf("%s	%d		%c
", students[i].name, students[i].totalMarks, students[i].grade);
    }
}

void question2()
{
    // Question 2: Create a structure for student and read/display data
    struct Student
    {
        char name[50];
        int roll;
        float marks;
        char remarks[100];
    } s;

    printf("
Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Roll: ");
    scanf("%d", &s.roll);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    printf("Enter Remarks: ");
    scanf("%s", s.remarks);

    printf("
Student Details:
");
    printf("Name: %s
Roll: %d
Marks: %.2f
Remarks: %s
", s.name, s.roll, s.marks, s.remarks);
}

void question3()
{
    // Question 3: Array of structure for 5 students with marks > 50
    struct Student
    {
        char name[50];
        int roll;
        float marks;
    } students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("
Enter Name of Student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter Roll: ");
        scanf("%d", &students[i].roll);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("
Students with marks greater than 50:
");
    for (int i = 0; i < 5; i++) {
        if (students[i].marks > 50)
        {
            printf("Name: %s, Roll: %d
", students[i].name, students[i].roll);
        }
    }
}

void question4()
{
    // Question 4: Array of structure for 5 employees sorted by name
    struct Employee
    {
        char name[50];
        char address[100];
        float salary;
    } employees[5], temp;

    for (int i = 0; i < 5; i++)
    {
        printf("
Enter Name of Employee %d: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter Address: ");
        scanf("%s", employees[i].address);
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Sorting by name
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(employees[i].name, employees[j].name) > 0)
            {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("
Employees in Ascending Order of Name:
");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Address: %s, Salary: %.2f
", employees[i].name, employees[i].address, employees[i].salary);
    }
}

void question5()
{
    // Question 5: Sort names in alphabetical order using structure
    struct Person
    {
        char name[50];
        char address[100];
    } people[5], temp;

    for (int i = 0; i < 5; i++)
    {
        printf("
Enter Name of Person %d: ", i + 1);
        scanf("%s", people[i].name);
        printf("Enter Address: ");
        scanf("%s", people[i].address);
    }

    // Sorting names alphabetically
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(people[i].name, people[j].name) > 0)
            {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }

    printf("
Names in Alphabetical Order:
");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Address: %s
", people[i].name, people[i].address);
    }
}

void question6()
{
    // Question 6: Pointer to structure to access book details
    struct Book
    {
        char name[50];
        int pages;
        float price;
    } b, *ptr;

    ptr = &b;

    printf("
Enter Book Name: ");
    scanf("%s", ptr->name);
    printf("Enter Number of Pages: ");
    scanf("%d", &ptr->pages);
    printf("Enter Price: ");
    scanf("%f", &ptr->price);

    printf("
Book Details:
");
    printf("Name: %s
Pages: %d
Price: %.2f
", ptr->name, ptr->pages, ptr->price);
}
void question7()
{
    // Question 7: Array of structure to find most expensive book
    struct Book
    {
        char name[50];
        int pages;
        float price;
    } books[5];

    for (int i = 0; i < 5; i++)
    {
        printf("
Enter Book Name %d: ", i + 1);
        scanf("%s", books[i].name);
        printf("Enter Number of Pages: ");
        scanf("%d", &books[i].pages);
        printf("Enter Price: ");
        scanf("%f", &books[i].price);
    }

    // Find most expensive book
    int maxIndex = 0;
    for (int i = 1; i < 5; i++)
    {
        if (books[i].price > books[maxIndex].price)
        {
            maxIndex = i;
        }
    }

    printf("
Most Expensive Book:
");
    printf("Name: %s
Pages: %d
Price: %.2f
", books[maxIndex].name, books[maxIndex].pages, books[maxIndex].price);
}

void question8()
{
    // Question 8: Union to display roll and marks one at a time
    union Student
    {
        int roll;
        float marks;
    } s;

    // Assign and display roll number
    s.roll = 101;
    printf("
Roll Number: %d
", s.roll);

    // Assign and display marks
    s.marks = 85.5;
    printf("Marks: %.2f
", s.marks);
}

void question9()
{
    // Question 9: Structure Date initialized to Feb 25, 1957
    struct Date
    {
        int day;
        char month[10];
        int year;
    } date1 = {25, "February", 1957};

    printf("
Date: %s %d, %d
", date1.month, date1.day, date1.year);
}

void question10()
{
    // Question 10: Structure to enter and print date
    struct Date
    {
        int day;
        int month;
        int year;
    } date;

    printf("
Enter Day: ");
    scanf("%d", &date.day);
    printf("Enter Month: ");
    scanf("%d", &date.month);
    printf("Enter Year: ");
    scanf("%d", &date.year);

    printf("
Date: %02d/%02d/%d
", date.day, date.month, date.year);
}

void question11()
{
    // Question 11: Structure for student registration system
    struct Student
    {
        char username[9];
        char idNumber[10];
        int pin;
    } student;

    printf("
Enter Username (8 chars): ");
    scanf("%s", student.username);
    printf("Enter ID Number (9 chars): ");
    scanf("%s", student.idNumber);
    printf("Enter 5-digit PIN: ");
    scanf("%d", &student.pin);

    printf("
Student Registration Details:
");
    printf("Username: %s
ID Number: %s
PIN: %d
", student.username, student.idNumber, student.pin);
}

void question12()
{
    // Question 12: Structure to calculate difference between two dates
    struct Date
    {
        int day;
        int month;
        int year;
    } date1, date2;

    printf("
Enter First Date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter Second Date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int dayDiff = date2.day - date1.day;
    int monthDiff = date2.month - date1.month;
    int yearDiff = date2.year - date1.year;

    if (dayDiff < 0) {
        dayDiff += 30;
        monthDiff--;
    }
    if (monthDiff < 0) {
        monthDiff += 12;
        yearDiff--;
    }

    printf("
Difference: %d Years, %d Months, %d Days
", yearDiff, monthDiff, dayDiff);
}

void question13()
{
    // Question 13: Structure for airline data
    struct Airline
    {
        int flightNumber;
        char origin[4];
        char destination[4];
        char startTime[6];
        char arrivalTime[6];
    } flight;

    printf("
Enter Flight Number: ");
    scanf("%d", &flight.flightNumber);
    printf("Enter Origin Airport Code: ");
    scanf("%s", flight.origin);
    printf("Enter Destination Airport Code: ");
    scanf("%s", flight.destination);
    printf("Enter Start Time (HH:MM): ");
    scanf("%s", flight.startTime);
    printf("Enter Arrival Time (HH:MM): ");
    scanf("%s", flight.arrivalTime);

    printf("
Flight Information:
");
    printf("Flight Number: %d
Origin: %s
Destination: %s
Start Time: %s
Arrival Time: %s
",
           flight.flightNumber, flight.origin, flight.destination, flight.startTime, flight.arrivalTime);
}

void question14()
{
    // Question 14: Print flight info for specific airport
    struct Airline
    {
        int flightNumber;
        char origin[4];
        char destination[4];
        char startTime[6];
        char arrivalTime[6];
    } flights[3];

    for (int i = 0; i < 3; i++)
    {
        printf("
Enter Flight Number: ");
        scanf("%d", &flights[i].flightNumber);
        printf("Enter Origin Airport Code: ");
        scanf("%s", flights[i].origin);
        printf("Enter Destination Airport Code: ");
        scanf("%s", flights[i].destination);
        printf("Enter Start Time (HH:MM): ");
        scanf("%s", flights[i].startTime);
        printf("Enter Arrival Time (HH:MM): ");
        scanf("%s", flights[i].arrivalTime);
    }

    char airportCode[4];
    printf("
Enter Airport Code to Search: ");
    scanf("%s", airportCode);

    printf("
Flights for Airport %s:
", airportCode);
    for (int i = 0; i < 3; i++) {
        if (strcmp(flights[i].origin, airportCode) == 0 || strcmp(flights[i].destination, airportCode) == 0)
        {
            printf("Flight Number: %d, Origin: %s, Destination: %s, Start: %s, Arrival: %s
                   ",
                   flights[i]
                       .flightNumber,
                   flights[i].origin, flights[i].destination, flights[i].startTime, flights[i].arrivalTime);
        }
    }
}

void question15()
{
    // Question 15: Structure with nested structure
    struct Date
    {
        int day;
        char month[10];
        int year;
    } hireDate = {10, "March", 2001};

    struct Employee
    {
        char name[50];
        float salary;
        struct Date hireDate;
    } person1 = {"Hari", 50000.0, hireDate};

    printf("
Employee Details:
");
    printf("Name: %s
Salary: $%.2f
Hire Date: %s %d, %d
",
           person1.name, person1.salary, person1.hireDate.month, person1.hireDate.day, person1.hireDate.year);
}

int main()
{
    question1();
    // question2();
    // question3();
    // question4();
    // question5();
    // question6();
    // question7();
    // question8();
    // question9();
    // question10();
    // question11();
    // question12();
    // question13();
    // question14();
    // question15();

    return 0;
}
