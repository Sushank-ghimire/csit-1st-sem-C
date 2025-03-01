// Lab Sheet 7 - File Handling Solutions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j;

// Function Prototypes
void question1()
{
    // Question 1: Create a file named test.txt and write text to it
    FILE *file;
    file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("Failed to create file. ");
        return;
    }
    fprintf(file, "Welcome to my college");
    fclose(file);
    printf("File test.txt created and text written successfully. ");
}

void question2()
{
    // Question 2: Read and display content from test.txt
    FILE *file;
    char ch;
    file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("Failed to open file test.txt.");
        return;
    }
    printf("Content of test.txt: ");
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    fclose(file);
}

void question3()
{
    // Question 3: Write and read string using character I/O
    FILE *file;
    char str[100];

    file = fopen("charIO.txt", "w");
    if (file == NULL)
    {
        printf("Failed to create file charIO.txt. ");
        return;
    }
    printf("Enter a string to write to charIO.txt: ");
    scanf("%s", str);
    for (i = 0; str[i] != NULL; i++)
    {

        fputc(str[i], file);
    }

    fclose(file);
    printf("String written to charIO.txt successfully. ");

    file = fopen("charIO.txt", "r");
    if (file == NULL)
    {
        printf("Failed to open charIO.txt. ");
        return;
    }
    printf("Reading from charIO.txt: ");
    while ((str[0] = fgetc(file)) != EOF)
    {
        putchar(str[0]);
    }
    fclose(file);
}

void question4()
{
    // Question 4: Append text to a file (name from user)
    FILE *file;
    char filename[50], text[100];

    printf("Enter filename to append text: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Failed to open file %s.", filename);
        return;
    }
    printf("Enter text to append: ");
    scanf(" %[^]s", text); // Read full line including spaces
    fprintf(file, "%s", text);
    fclose(file);
    printf("Text appended to %s successfully.", filename);
}

void question5()
{
    // Question 5: Create student.txt and write name, roll, address, marks
    FILE *file;
    char name[50], address[100];
    int roll;
    float marks;

    file = fopen("student.txt", "w");
    if (file == NULL)
    {
        printf("Failed to create student.txt.");
        return;
    }

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Roll: ");
    scanf("%d", &roll);
    printf("Enter Address: ");
    scanf("%s", address);
    printf("Enter Marks: ");
    scanf("%f", &marks);

    fprintf(file, "Name: %s Roll: %d Address: %s Marks: %.2f ", name, roll, address, marks);
    fclose(file);
    printf("Data written to student.txt successfully.");
}

void question6()
{
    // Question 6: Read name, address, and telephone; save to file and display
    FILE *file;
    char name[50], address[100], telephone[15];

    file = fopen("contact.txt", "w");
    if (file == NULL)
    {
        printf("Failed to create contact.txt. ");
        return;
    }

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Address: ");
    scanf("%s", address);
    printf("Enter Telephone: ");
    scanf("%s", telephone);

    fprintf(file, "Name: %s Address: %s Telephone: %s", name, address, telephone);
    fclose(file);

    printf("Data saved to contact.txt. Displaying the content: ");
    file = fopen("contact.txt", "r");
    if (file == NULL)
    {
        printf("Failed to read contact.txt.");
        return;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    fclose(file);
}

void question7()
{
    // Question 7: Store string to new1.dat and display it
    FILE *file;
    char str[100];

    file = fopen("new1.dat", "w");
    if (file == NULL)
    {
        printf("Failed to create new1.dat. ");
        return;
    }

    printf("Enter a string to store in new1.dat: ");
    scanf(" %[^]s", str); // Read full line including spaces
    fprintf(file, "%s", str);
    fclose(file);

    printf("String saved to new1.dat. Displaying the content: ");
    file = fopen("new1.dat", "r");
    if (file == NULL)
    {
        printf("Failed to read new1.dat.");
        return;
    }
    while (fgets(str, sizeof(str), file))
    {
        printf("%s", str);
    }
    fclose(file);
}

void question8()
{
    // Question 8: Write and read even numbers between 10 and 50 to evennumbers.txt
    FILE *file;
    file = fopen("evennumbers.txt", "w");
    if (file == NULL)
    {
        printf("Failed to create evennumbers.txt.");
        return;
    }

    printf("Writing even numbers between 10 and 50 to evennumbers.txt...");
    for (i = 10; i <= 50; i += 2)
    {
        fprintf(file, "%d", i);
    }
    fclose(file);

    printf("Reading from evennumbers.txt: ");
    file = fopen("evennumbers.txt", "r");
    if (file == NULL)
    {
        printf("Failed to read evennumbers.txt. ");
        return;
    }
    int num;
    while (fscanf(file, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }
    printf("    ");
    fclose(file);
}

void question9()
{
    // Question 9: Write natural numbers 1 to 20 and display twice the numbers
    FILE *file;
    file = fopen("naturalNumbers.txt", "w");
    if (file == NULL)
    {
        printf("Failed to create naturalNumbers.txt. ");
        return;
    }

    printf("Writing natural numbers 1 to 20 to naturalNumbers.txt...");
    for (i = 1; i <= 20; i++)
    {
        fprintf(file, "%d", i);
    }
    fclose(file);

    printf("Reading from naturalNumbers.txt and displaying twice the numbers: ");
    file = fopen("naturalNumbers.txt", "r");
    if (file == NULL)
    {
        printf("Failed to read naturalNumbers.txt.");
        return;
    }
    int num;
    while (fscanf(file, "%d", &num) != EOF)
    {
        printf("%d ", num * 2);
    }
    printf("    ");
    fclose(file);
}

void question10()
{
    // Question 10: Store 10 numbers in an array, write to file, and display
    FILE *file;
    int numbers[10];

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    file = fopen("numbers.txt", "w");
    if (file == NULL)
    {
        printf("Failed to create numbers.txt.");
        return;
    }
    for (i = 0; i < 10; i++)
    {
        fprintf(file, "%d", numbers[i]);
    }
    fclose(file);

    printf("Numbers written to numbers.txt. Displaying the content: ");
    file = fopen("numbers.txt", "r");
    if (file == NULL)
    {
        printf("Failed to read numbers.txt.");
        return;
    }
    int num;
    while (fscanf(file, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }
    printf("    ");
    fclose(file);
}

int main()
{
    // Call all functions sequentially
//    question1();
//    question2();
//    question3();
//    question4();
//    question5();
    question6();
//    question7();
//    question8();
//    question9();
//    question10();

    return 0;
}
