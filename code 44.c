#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;

        sum += (double) numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}
