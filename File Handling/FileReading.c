#include <stdio.h>

int main()
{
	FILE *fptr;
    
    char fileData[1000], filename[20];
    
    printf("Enter the name of the file to read : ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");
    
    if (fptr == NULL)
    {
        printf("Failed to create a file");
        exit(0);
    }
    fgets(fileData, sizeof(fileData), fptr);
    
    printf("File Data is given below : \n");
    
    printf("%s", fileData);
    return 0;
}
