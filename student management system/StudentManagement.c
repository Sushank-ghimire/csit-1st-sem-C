#include <stdio.h>

// Define the Students union
typedef struct Students
{
	char name[20];
	char email[30];
	long phone;
	int roll;
	char section[2];
} Std;

// Function to print student details
void printStudentDetails(Std students[], int n)
{
	printf("\nStudent Details:\n");
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nStudent %d:\n", i + 1);
		printf("Name: %s\n", students[i].name);
		printf("Section: %s\n", students[i].section);
		printf("Roll: %d\n", students[i].roll);
		printf("Email: %s\n", students[i].email);
		printf("Phone: %ld\n", students[i].phone);
	}
}

int main()
{
	int n, i;
	FILE *f;

	// Prompt to enter the number of students
	printf("Enter the number of students: ");
	scanf("%d", &n);

	// Open the file in append mode
	f = fopen("student.txt", "a+");
	if (f == NULL)
	{
		printf("Unable to read the file.\n");
		return 0;
	}

	// Declare an array of students
	Std students[n];

	// Taking students' data input
	printf("\nEnter student details:\n");
	for (i = 0; i < n; i++)
	{
		printf("\nStudent %d:\n", i + 1);

		printf("Enter name: ");
		scanf("%s", students[i].name);

		printf("Enter section: ");
		scanf("%s", students[i].section);

		printf("Enter roll: ");
		scanf("%d", &students[i].roll);

		printf("Enter email: ");
		scanf("%s", students[i].email);

		printf("Enter phone number: ");
		scanf("%ld", &students[i].phone);
	}

	// Writing students' data to the file
	for (i = 0; i < n; i++)
	{
		fprintf(f, "Student %d:\n", i + 1);
		fprintf(f, "Name: %s\n", students[i].name);
		fprintf(f, "Section: %s\n", students[i].section);
		fprintf(f, "Roll: %d\n", students[i].roll);
		fprintf(f, "Email: %s\n", students[i].email);
		fprintf(f, "Phone: %ld\n\n", students[i].phone);
	}

	// Close the file
	fclose(f);

	// Print student details to the console
	printStudentDetails(students, n);

	return 0;
}
