#include <stdio.h>
#include <string.h>

int main() {
    char binary[65]; // To store binary input, max 64 bits

    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Compute 1's complement by flipping each bit
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            // Invalid character handling
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    // Output the 1's complement
    printf("1's complement: %s\n", binary);

    return 0;
}
