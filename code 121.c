#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline character from fgets if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *fptr = fopen("info.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    fclose(fptr);

    printf("Data saved successfully to info.txt\n");

    return 0;
}
