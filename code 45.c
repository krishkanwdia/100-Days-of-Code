#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;     // Numerator increments by 2 each term (2, 4, 6, ...)
        denominator += 4;   // Denominator increments by 4 each term (3, 7, 11, ...)
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}
