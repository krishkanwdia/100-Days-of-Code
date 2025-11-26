#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student;

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);  // fgets includes newline
    printf("Roll number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
