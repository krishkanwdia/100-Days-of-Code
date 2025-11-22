#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for the largest number using if-else
    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is the largest number.\n", b);
    }
    else {
        printf("%d is the largest number.\n", c);
    }

    return 0;
}
