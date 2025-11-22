#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;  // Extract last digit
        sum += remainder;      // Add to sum
        num /= 10;             // Remove last digit
    }

    // Output the sum
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
