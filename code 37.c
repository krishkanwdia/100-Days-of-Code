#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, gcdValue, lcm;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD first
    gcdValue = gcd(num1, num2);

    // Calculate LCM using formula: LCM * GCD = num1 * num2
    lcm = (num1 / gcdValue) * num2;

    // Display the LCM
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
