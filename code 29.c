#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using for loop
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}
