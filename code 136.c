#include <stdio.h>

// Define enum for menu choices
enum Operation { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    enum Operation choice;
    int a, b, result;

    // Display menu
    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Get two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform operation based on choice
    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;

        case SUBTRACT:
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;

        case MULTIPLY:
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;

        default
