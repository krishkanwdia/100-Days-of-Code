#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {       // loop for each row
        for (int j = 1; j <= i; j++) {      // print i stars in the ith row
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
