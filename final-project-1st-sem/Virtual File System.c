#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME 50
#define MAX_CONTENT 1024

// File structure
typedef struct File
{
    char name[MAX_FILENAME];
    char content[MAX_CONTENT];
    int size;
    struct File *next;
} File;

// Root of the file system
File *root = NULL;

// Function to create a new file
void createFile(const char *filename, const char *content)
{
    File *newFile = (File *)malloc(sizeof(File));
    if (!newFile)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    strcpy(newFile->name, filename);
    strcpy(newFile->content, content);
    newFile->size = strlen(content);
    newFile->next = NULL;

    // Insert at the end of the list
    if (!root)
    {
        root = newFile;
    }
    else
    {
        File *temp = root;
        while (temp->next)
            temp = temp->next;
        temp->next = newFile;
    }

    printf("File '%s' created successfully!\n", filename);
}

// Function to read a file
void readFile(const char *filename)
{
    File *temp = root;
    while (temp)
    {
        if (strcmp(temp->name, filename) == 0)
        {
            printf("File: %s\nSize: %d bytes\nContent:\n%s\n", temp->name, temp->size, temp->content);
            return;
        }
        temp = temp->next;
    }
    printf("Error: File '%s' not found!\n", filename);
}

// Function to write (append) data to a file
void writeFile(const char *filename, const char *newContent)
{
    File *temp = root;
    while (temp)
    {
        if (strcmp(temp->name, filename) == 0)
        {
            if (strlen(temp->content) + strlen(newContent) < MAX_CONTENT)
            {
                strcat(temp->content, newContent);
                temp->size = strlen(temp->content);
                printf("Data written to file '%s' successfully!\n", filename);
            }
            else
            {
                printf("Error: File size limit exceeded!\n");
            }
            return;
        }
        temp = temp->next;
    }
    printf("Error: File '%s' not found!\n", filename);
}

// Function to delete a file
void deleteFile(const char *filename)
{
    File *temp = root;
    File *prev = NULL;

    while (temp)
    {
        if (strcmp(temp->name, filename) == 0)
        {
            if (prev)
            {
                prev->next = temp->next;
            }
            else
            {
                root = temp->next;
            }
            free(temp);
            printf("File '%s' deleted successfully!\n", filename);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("Error: File '%s' not found!\n", filename);
}

// Function to list all files
void listFiles()
{
    if (!root)
    {
        printf("No files available in the Virtual File System.\n");
        return;
    }

    printf("Files in Virtual File System:\n");
    File *temp = root;
    while (temp)
    {
        printf("- %s (Size: %d bytes)\n", temp->name, temp->size);
        temp = temp->next;
    }
}

// Function to search for a file
void searchFile(const char *filename)
{
    File *temp = root;
    while (temp)
    {
        if (strcmp(temp->name, filename) == 0)
        {
            printf("File '%s' exists in the Virtual File System.\n", filename);
            return;
        }
        temp = temp->next;
    }
    printf("File '%s' not found.\n", filename);
}

// Main function
int main()
{
    int choice;
    char filename[MAX_FILENAME], content[MAX_CONTENT];

    while (1)
    {
        printf("\n--- Virtual File System (VFS) ---\n");
        printf("1. Create File\n");
        printf("2. Read File\n");
        printf("3. Write to File\n");
        printf("4. Delete File\n");
        printf("5. List Files\n");
        printf("6. Search File\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // To handle newline

        switch (choice)
        {
        case 1:
            printf("Enter filename: ");
            fgets(filename, MAX_FILENAME, stdin);
            filename[strcspn(filename, "\n")] = '\0'; // Remove newline

            printf("Enter file content: ");
            fgets(content, MAX_CONTENT, stdin);
            content[strcspn(content, "\n")] = '\0'; // Remove newline

            createFile(filename, content);
            break;
        case 2:
            printf("Enter filename: ");
            fgets(filename, MAX_FILENAME, stdin);
            filename[strcspn(filename, "\n")] = '\0';
            readFile(filename);
            break;
        case 3:
            printf("Enter filename: ");
            fgets(filename, MAX_FILENAME, stdin);
            filename[strcspn(filename, "\n")] = '\0';

            printf("Enter content to append: ");
            fgets(content, MAX_CONTENT, stdin);
            content[strcspn(content, "\n")] = '\0';

            writeFile(filename, content);
            break;
        case 4:
            printf("Enter filename: ");
            fgets(filename, MAX_FILENAME, stdin);
            filename[strcspn(filename, "\n")] = '\0';
            deleteFile(filename);
            break;
        case 5:
            listFiles();
            break;
        case 6:
            printf("Enter filename to search: ");
            fgets(filename, MAX_FILENAME, stdin);
            filename[strcspn(filename, "\n")] = '\0';
            searchFile(filename);
            break;
        case 7:
            printf("Exiting Virtual File System. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
