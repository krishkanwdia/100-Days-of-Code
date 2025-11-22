#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces to right-align the pattern
        for (int space = rows - i; space > 0; space--) {
            printf(" ");
        }
        // Print numbers starting from rows - i + 1 up to 5
        for (int num = rows - i + 1; num <= rows; num++) {
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}
