# C Programming Documentation

## Table of Contents
- [Introduction](#introduction)
- [Data Types](#data-types)
- [Variables](#variables)
- [Constants](#constants)
- [Operators](#operators)
- [Control Flow](#control-flow)
  - [Conditional Statements](#conditional-statements)
  - [Loops](#loops)
- [Functions](#functions)
- [Arrays](#arrays)
- [Pointers](#pointers)
- [Strings](#strings)
- [Structures](#structures)
- [File I/O](#file-io)

---

## Introduction
C is a powerful general-purpose programming language that is widely used for system programming, embedded systems, and developing low-level applications. It was developed by Dennis Ritchie in the early 1970s at Bell Labs.

---

## Data Types
C supports several data types categorized into:

### 1. Basic Data Types
| Data Type | Size (in bytes) | Description                      |
|-----------|-----------------|----------------------------------|
| `int`     | 2 or 4         | Integer values (whole numbers)   |
| `float`   | 4             | Floating-point numbers (single precision) |
| `double`  | 8             | Floating-point numbers (double precision) |
| `char`    | 1             | Character type (stores ASCII values) |
| `void`    | 0             | Represents absence of value       |

### 2. Derived Data Types
- **Arrays**
- **Pointers**
- **Structures**
- **Unions**

### 3. Enumeration
```c
enum days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
```

### 4. Type Modifiers
| Modifier     | Description                                  |
|--------------|----------------------------------------------|
| `short`      | Shorter range than `int`                     |
| `long`       | Longer range than `int`                      |
| `signed`     | Can store both positive and negative values  |
| `unsigned`   | Can store only positive values               |

---

## Variables
Variables are used to store data in memory. Variable declaration syntax:
```c
int age;
float salary;
char grade;
```

### Initialization
```c
int age = 25;
float salary = 50000.50;
char grade = 'A';
```

---

## Constants
Constants are fixed values that cannot be altered during program execution.
- **`#define` Preprocessor Directive**:
  ```c
  #define PI 3.14
  ```
- **`const` Keyword**:
  ```c
  const int MAX = 100;
  ```

---

## Operators
### 1. Arithmetic Operators
`+`, `-`, `*`, `/`, `%`

### 2. Relational Operators
`==`, `!=`, `>`, `<`, `>=`, `<=`

### 3. Logical Operators
`&&`, `||`, `!`

### 4. Bitwise Operators
`&`, `|`, `^`, `~`, `<<`, `>>`

### 5. Assignment Operators
`=`, `+=`, `-=`, `*=`, `/=`, `%=` 

### 6. Increment/Decrement Operators
`++`, `--`

---

## Control Flow

### Conditional Statements
#### `if`, `else if`, `else`
```c
if (x > 0) {
    printf("Positive number");
} else {
    printf("Negative number");
}
```

#### `switch` Statement
```c
switch (choice) {
    case 1: printf("One"); break;
    case 2: printf("Two"); break;
    default: printf("Invalid choice");
}
```

### Loops
#### `for` Loop
```c
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}
```

#### `while` Loop
```c
int i = 0;
while (i < 5) {
    printf("%d ", i);
    i++;
}
```

#### `do-while` Loop
```c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 5);
```

---

## Functions
Functions are reusable blocks of code.
```c
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    printf("Sum: %d", result);
    return 0;
}
```

### Function Prototypes
```c
void greet(void);
int add(int, int);
```

---

## Arrays
Arrays are collections of elements of the same data type.
```c
int numbers[5] = {1, 2, 3, 4, 5};
```

### Multi-dimensional Arrays
```c
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

---

## Pointers
Pointers store the address of a variable.
```c
int x = 10;
int *ptr = &x;
printf("Address of x: %p", ptr);
printf("Value of x: %d", *ptr);
```

---

## Strings
Strings in C are arrays of characters terminated by a null character (`\0`).
```c
char str[20] = "Hello, World!";
printf("%s", str);
```

### String Functions (from `<string.h>`)
- `strlen()`, `strcpy()`, `strcat()`, `strcmp()`

---

## Structures
Structures are user-defined data types that group variables of different types.
```c
struct Person {
    char name[50];
    int age;
    float salary;
};

struct Person p1 = {"John", 30, 75000.0};
printf("Name: %s, Age: %d", p1.name, p1.age);
```

---

## File I/O
C provides functions to read and write files.
```c
FILE *fp = fopen("file.txt", "w");
fprintf(fp, "Hello, World!");
fclose(fp);
```

### Reading from a File
```c
FILE *fp = fopen("file.txt", "r");
char str[100];
fgets(str, 100, fp);
printf("%s", str);
fclose(fp);
```

---

## Conclusion
This documentation provides a basic overview of important concepts in C programming. For more details, refer to the official C documentation or additional resources.
