#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}
