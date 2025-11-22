#include <stdio.h>

int main() {
    long long number;
    int freq[10] = {0};
    int max_freq = 0, max_digit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    // Count the frequency of each digit
    while (number != 0) {
        int digit = number % 10;
        freq[digit]++;
        number /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_digit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", max_digit);

    return 0;
}
