#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {        // Loop for each row
        for (int j = 1; j <= i; j++) {       // Print numbers from 1 to i in each row
            printf("%d", j);
        }
        printf("\n");                         // New line after each row
    }

    return 0;
}
