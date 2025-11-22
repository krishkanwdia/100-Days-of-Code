#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime numbers
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
