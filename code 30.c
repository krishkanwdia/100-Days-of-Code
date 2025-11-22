#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // To handle negative numbers
    int originalNum = num;
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;              // Extract last digit
        reversed = reversed * 10 + remainder; // Append last digit
        num /= 10;                        // Remove last digit
    }

    if (isNegative) {
        reversed = -reversed;             // Restore negative sign if needed
    }

    printf("Reversed number of %d is %d\n", originalNum, reversed);

    return 0;
}
