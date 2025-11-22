#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate sum of divisors excluding the number itself
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if sum equals the number
    if (sum == num && num != 0)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
