#include <stdio.h>
#include <string.h>

// Define a union called 'Data' that can hold different types of data
union Data {
    int i;
    float f;
    char str[20];
};

// Define a structure that contains the union 'Data' and other fields
struct Info {
    int id;
    union Data data;  // Union 'data' that can store an int, float, or string
};

// Function to display the content of union Data
void display(struct Info *info) {
    printf("ID: %d\n", info->id);

    // We will show the type of data that is currently stored in the union
    // Union shares the same memory space, so only one of its members can be used at a time
    if (info->id == 1) {
        printf("Integer: %d\n", info->data.i);
    } else if (info->id == 2) {
        printf("Float: %.2f\n", info->data.f);
    } else if (info->id == 3) {
        printf("String: %s\n", info->data.str);
    }
}

int main() {
    // Create an instance of struct Info
    struct Info info1, info2, info3;

    // Assign integer data to info1
    info1.id = 1;
    info1.data.i = 100;

    // Assign float data to info2
    info2.id = 2;
    info2.data.f = 3.14;

    // Assign string data to info3
    info3.id = 3;
    strcpy(info3.data.str, "Hello, Union!");

    // Display the contents of each instance
    printf("Info 1:\n");
    display(&info1);
    printf("\n");

    printf("Info 2:\n");
    display(&info2);
    printf("\n");

    printf("Info 3:\n");
    display(&info3);
    printf("\n");

    return 0;
}

