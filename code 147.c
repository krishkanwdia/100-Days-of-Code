#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    FILE *file;

    // Input employee details
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Write employee data to binary file
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    // Read employee data from binary file
    struct Employee emp_read;
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    fread(&emp_read, sizeof(struct Employee), 1, file);
    fclose(file);

    // Print read employee data
    printf("\nEmployee Details (from file):\n");
    printf("Name: %s\n", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp_read.joiningDate.day, emp_read.joiningDate.month, emp_read.joiningDate.year);

    return 0;
}
