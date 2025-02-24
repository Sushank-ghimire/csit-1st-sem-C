#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("file.txt", "w");

    if (fptr == NULL)
    {
        printf("Failed to create a file");
        exit(0);
    }
    else
    {
        printf("File opened successfully.\n");
    }

    fputs("This is the basic example of file handing in c programming.\n", fptr);
    fclose(fptr);

    return 0;
}
