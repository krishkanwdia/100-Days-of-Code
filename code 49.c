#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {      // Loop for each row
        int start = rows - i + 1;           // Starting number for each row
        for (int j = 0; j < i; j++) {
            printf("%d", start + j);       // Print numbers incrementing by 1
        }
        printf("\n");                      // New line after each row
    }

    return 0;
}
