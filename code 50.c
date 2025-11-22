#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars in decreasing order
        for (int k = rows; k > i; k--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
