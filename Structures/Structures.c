#include<stdio.h>
#include<stdlib.h>

// Structures in C prgramming
// Structures appoints more space than the union

// Making an structure of student
typedef struct Students {
	char name[20];
	char section[5];
	int roll;
	long double phone;
	char email[30];
} Std;

int main() {
	int N, i, j;
	
	// Taking input the number of students
	printf("Enter the number of students : ");
	scanf("%d", &N);
	
	if(N<=0) {
		printf("Invalid Number ");
	}
	
	// Defining the structure to store the student data
	Std students[N];
	
	// Getting data of student using for loop
	for(i=0; i<N; i++) {
		printf("Enter student name : ");
		scanf("%s", &students[i].name);
		
		printf("Enter roll of student : ");
		scanf("%d", &students[i].roll);
		
		printf("Enter section of the student : ");
		scanf("%s", &students[i].section);
		
		printf("Enter phone number of the student : ");
		scanf("%ld", &students[i].phone);
		
		printf("Enter email of student : ");
		scanf("%s", &students[i].email);
	}
	
	// Printing the data of the student
	printf("\n---------------------------------- Student Data -----------------------------\n");
	printf("\t Name \t Roll \t\t Section \t\t\t Phone \t\t Email\n");
	for(i=0; i<N; i++) {
		printf("\t %s \t\t %d \t\t %s \t\t %ld \t\t %s", students[i].name, students[i].roll, students[i].section, students[i].phone, students[i].email);
	}
	return 0;
}
