#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 50

int main() {
    FILE *file;
    char name[MAX_NAME_LEN];
    int roll;
    float marks;
    char choice;
    
    // Open file for writing (overwrite existing)
    file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Input multiple student records
    do {
        printf("Enter name: ");
        scanf(" %[^\n]", name); // read string with spaces until newline
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        // Write record to file
        fprintf(file, "%s %d %.2f\n", name, roll, marks);

        printf("Add another student? (y/n): ");
        scanf(" %c", &choice);
