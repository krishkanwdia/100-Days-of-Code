#include <stdio.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct Person with name and gender enum
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person person;

    // Input person's name and gender
    printf("Enter name: ");
    scanf(" %[^\n]", person.name);

    int genderInput;
    printf("Enter gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    scanf("%d", &genderInput);
    if (genderInput < 0 || genderInput > 2) {
        printf("Invalid gender input.\n");
        return 1;
    }
    person.gender = (enum Gender)genderInput;

    // Print person's gender
    printf("Person: %s\n", person.name);
    printf("Gender: ");
    switch (person.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}

