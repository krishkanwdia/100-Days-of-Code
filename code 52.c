#include <stdio.h>

int main() {
    int rows[] = {1, 4, 5, 3, 1};  // Number of stars in each group
    int n = sizeof(rows) / sizeof(rows[0]);

    for (int i = 0; i < n; i++) {
        // Print stars in a group
        for (int j = 0; j < rows[i]; j++) {
            printf("*");
        }
        printf("\n\n"); // Blank line after each group
    }

    return 0;
}
