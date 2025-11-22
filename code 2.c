#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Display results
    printf("Sum = %.2f\n", num1 + num2);
    printf("Difference = %.2f\n", num1 - num2);
    printf("Product = %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient = %.2f\n", num1 / num2);
    } else {
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }

    return 0;
}
