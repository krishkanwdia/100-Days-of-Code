#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to print a Student struct
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student;

    printf("Enter name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");
    printStudent(student);

    return 0;
}
