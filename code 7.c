#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display values before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
