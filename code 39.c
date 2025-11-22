#include <stdio.h>

int main() {
    int num, temp, remainder;
    int product = 1;
    int foundOdd = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Extract digits and calculate product of odd digits
    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) { // Check if odd digit
            product *= remainder;
            foundOdd = 1;
        }
        temp /= 10;
    }

    if (foundOdd)
        printf("Product of odd digits of %d is %d\n", num, product);
    else
        printf("No odd digits found in %d\n", num);

    return 0;
}
