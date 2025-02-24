#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Students
{
    int roll;
    char name[50];
    int age;
    char email[50];
} Std;

void addStudent(char *filename);
void viewStudents(char *filename);
void removeStudent(char *filename);

int main()
{
    int choice;
    char filename[20];

    printf("\n---------------Student Management System-------------------\n");
    printf("Enter filename to store student data: ");
    scanf("%s", filename);
    getchar(); // Skip the newline after filename input

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Remove Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To skip the newline content after choice input

        switch (choice)
        {
        case 1:
            addStudent(filename);
            break;
        case 2:
            viewStudents(filename);
            break;
        case 3:
            removeStudent(filename);
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

// Function to add student records to the file
void addStudent(char *filename)
{
    FILE *fptr = fopen(filename, "a");
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    Std s;
    printf("\nEnter Student Details:\n");

    printf("Roll: ");
    scanf("%d", &s.roll);
    getchar(); // Skip the newline character

    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0; // Removing the newline character

    printf("Age: ");
    scanf("%d", &s.age);
    getchar(); // Skip the newline

    printf("Email: ");
    scanf("%s", s.email);

    // Using "|" to read the data for the further making easy use in reading process
    fprintf(fptr, "%d|%s|%d|%s\n", s.roll, s.name, s.age, s.email);
    fclose(fptr);

    printf("Student record added successfully!\n");
}

// Function to view all student records from the file
void viewStudents(char *filename)
{
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("No student records found!\n");
        return;
    }

    Std s;
    char line[150]; // Buffer to read a full line

    printf("\nStudent Records:\n");
    printf("----------------------------------------------------\n");
    while (fgets(line, sizeof(line), fptr))
    {
        // Use "|" as a delimiter to properly extract data
        if (sscanf(line, "%d|%49[^|]|%d|%49s", &s.roll, s.name, &s.age, s.email) == 4)
        {
            printf("Roll: %d\n", s.roll);
            printf("Name: %s\n", s.name);
            printf("Age: %d\n", s.age);
            printf("Email: %s\n", s.email);
            printf("----------------------------------------------------\n");
        }
        else
        {
            printf("Error reading student data. Check file format.\n");
        }
    }

    fclose(fptr);
}

// Function to remove a student record based on roll number
void removeStudent(char *filename)
{
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("No student records found!\n");
        return;
    }

    int rollToDelete;
    printf("\nEnter Roll Number to Remove: ");
    scanf("%d", &rollToDelete);

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL)
    {
        printf("Error creating temporary file!\n");
        fclose(fptr);
        return;
    }

    Std s;
    char line[150];
    int found = 0;

    while (fgets(line, sizeof(line), fptr))
    {
        sscanf(line, "%d|%49[^|]|%d|%49s", &s.roll, s.name, &s.age, s.email);
        if (s.roll == rollToDelete)
        {
            found = 1;
            continue;
        }
        fprintf(tempFile, "%d|%s|%d|%s\n", s.roll, s.name, s.age, s.email);
    }

    fclose(fptr);
    fclose(tempFile);

    if (found)
    {
        remove(filename);
        rename("temp.txt", filename);
        printf("Student with Roll No %d removed successfully!\n", rollToDelete);
    }
    else
    {
        printf("Student with Roll No %d not found!\n", rollToDelete);
        remove("temp.txt");
    }
}
