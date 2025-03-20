#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j;
#define MAX_STUDENTS 100
#define FILENAME "students.dat"
#define ADMIN_PASSWORD "System@123"

typedef struct {
    char student_id[20];
    char name[50];
    int age;
    char course[50];
    float grades;
    int attendance;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

void saveToFile() {
    FILE *file = fopen(FILENAME, "wb");
    if (file == NULL) {
        printf("Error saving student data!\n");
        return;
    }
    fwrite(students, sizeof(Student), student_count, file);
    fclose(file);
}

void loadFromFile() {
    FILE *file = fopen(FILENAME, "rb");
    if (file != NULL) {
        student_count = fread(students, sizeof(Student), MAX_STUDENTS, file);
        fclose(file);
    }
}

int authenticateAdmin() {
    char password[20];
    printf("Enter Admin Password: ");
    scanf("%s", password);
    if (strcmp(password, ADMIN_PASSWORD) == 0) {
        return 1;
    } else {
        printf("Incorrect Password! Returning to main menu.\n");
        return 0;
    }
}

void registerStudent() {
    if (student_count >= MAX_STUDENTS) {
        printf("Student limit reached!\n");
        return;
    }

    Student s;
    printf("Enter Student ID: ");
    scanf("%s", s.student_id);
    getchar();

    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Enter Age: ");
    scanf("%d", &s.age);
    getchar();

    printf("Enter Course: ");
    fgets(s.course, sizeof(s.course), stdin);
    s.course[strcspn(s.course, "\n")] = 0;

    s.grades = 0.0;
    s.attendance = 0;

    students[student_count++] = s;
    saveToFile();
    printf("Student registered successfully!\n");
}

void markAttendance() {
    if (!authenticateAdmin()) return;
    char id[20];
    printf("Enter Student ID to mark attendance: ");
    scanf("%s", id);

    for (i=0; i < student_count; i++) {
        if (strcmp(students[i].student_id, id) == 0) {
            students[i].attendance++;
            saveToFile();
            printf("Attendance marked for %s. Total attendance: %d\n", students[i].name, students[i].attendance);
            return;
        }
    }
    printf("Student not found!\n");
}

void enterGrades() {
    if (!authenticateAdmin()) return;
    char id[20];
    float grade;
    printf("Enter Student ID to enter grades: ");
    scanf("%s", id);
    
    for (i=0; i < student_count; i++) {
        if (strcmp(students[i].student_id, id) == 0) {
            printf("Enter new grade: ");
            scanf("%f", &grade);
            students[i].grades = grade;
            saveToFile();
            printf("Grade updated for %s.\n", students[i].name);
            return;
        }
    }
    printf("Student not found!\n");
}

void viewStudentDetails() {
    char id[20];
    printf("Enter Student ID to view details: ");
    scanf("%s", id);
    
    for (i=0; i < student_count; i++) {
        if (strcmp(students[i].student_id, id) == 0) {
            printf("\nStudent ID: %s\nName: %s\nAge: %d\nCourse: %s\nGrades: %.2f\nAttendance: %d\n",
                   students[i].student_id, students[i].name, students[i].age, students[i].course, students[i].grades, students[i].attendance);
            return;
        }
    }
    printf("Student not found!\n");
}

void adminPanel() {
    if (!authenticateAdmin()) return;
    printf("\n==================== Admin Panel ====================\n");
    for (i=0; i < student_count; i++) {
        printf("Student ID: %s | Name: %s | Course: %s | Grades: %.2f | Attendance: %d\n",
               students[i].student_id, students[i].name, students[i].course, students[i].grades, students[i].attendance);
    }
    printf("====================================================\n");
}

void mainMenu() {
    int choice;
    while (1) {
        printf("\n1. Register Student\n2. Mark Attendance\n3. Enter Grades\n4. View Student Details\n5. Admin Panel\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: registerStudent(); break;
            case 2: markAttendance(); break;
            case 3: enterGrades(); break;
            case 4: viewStudentDetails(); break;
            case 5: adminPanel(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}

int main() {
    loadFromFile();
    mainMenu();
    return 0;
}

