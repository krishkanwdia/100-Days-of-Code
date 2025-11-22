#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d elements (all numbers between 0 to %d except one missing): ", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Calculate sum of input array
    int arrSum = 0;
    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    int missingNumber = totalSum - arrSum;
    printf("Missing number: %d\n", missingNumber);

    return 0;
}
