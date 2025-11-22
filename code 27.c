#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input how many odd numbers to sum
    printf("Enter the number of odd numbers to sum: ");
    scanf("%d", &n);

    // Sum of first n odd numbers calculation
    for(int i = 1; i <= (2*n - 1); i += 2) {
        sum += i;
    }

    // Output the result
    printf("Sum of the first %d odd numbers is %d\n", n, sum);

    return 0;
}
