#include <stdio.h>

int main() {
    int rows = 5, columns = 5;

    for (int i = 0; i < rows; i++) {       // loop for each row
        for (int j = 0; j < columns; j++) { // loop for each column in a row
            printf("*");
        }
        printf("\n"); // new line after each row
    }

    return 0;
}