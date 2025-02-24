#include <stdio.h>
#include <stdlib.h>  // Include for exit()

int main()
{
    FILE *fptr;
    char filename[30], userData[1000];

    printf("Enter the full file name with the file extension: ");
    scanf("%s", filename);  
    getchar(); // Consume the newline character left by scanf

    fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        printf("Failed to create a file\n");
        exit(1);
    }

    printf("Enter your paragraph data to add to the file: ");
    fgets(userData, sizeof(userData), stdin); // Read full line including spaces

    fputs(userData, fptr);
    fclose(fptr);

    printf("Data successfully written to the file!\n");

    return 0;
}

