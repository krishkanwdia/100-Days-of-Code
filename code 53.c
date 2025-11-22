#include <stdio.h>

int main() {
    int n = 5;  // Number of rows for the upper half of the diamond

    // Print upper half of the pattern (including middle line)
    for (int i = 1; i <= n; i++) {
        // Print stars: (2*i - 1) stars in ith row
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print stars: (2*i - 1) stars in ith row
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}