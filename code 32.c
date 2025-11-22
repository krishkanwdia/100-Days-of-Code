#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Handle negative numbers
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;               // Get the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed
        num /= 10;                          // Remove last digit
    }

    if (isNegative) {
        reversed = -reversed; // Restore negative sign if original was negative
    }

    // Check if the number is a palindrome
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
