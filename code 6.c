#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display values before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
