#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Use long long for bigger product

    // Input number n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Print the product
    if (product == 1) {
        printf("No even numbers in the given range.\n");
    } else {
        printf("Product of even numbers from 1 to %d is %lld\n", n, product);
    }

    return 0;
}
