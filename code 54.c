#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the upper half (excluding middle line)

    // Print upper half including middle line
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars (2*i - 1)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars (2*i - 1)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
