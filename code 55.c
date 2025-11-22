#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    if (num == 2)
        return 1;
    if (num % 2 == 0)
        return 0;
    
    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
