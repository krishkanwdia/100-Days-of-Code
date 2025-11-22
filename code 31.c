#include <stdio.h>

int main() {
    int decimal, remainder, i = 0;
    int binary[32]; // supports up to 32-bit number

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Edge case for zero
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i++] = decimal % 2; // Store remainder
        decimal /= 2;              // Divide by 2
    }

    // Print binary in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
