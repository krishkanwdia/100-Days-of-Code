#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Iterate from 1 to num and check for factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
