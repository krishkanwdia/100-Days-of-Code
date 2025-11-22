#include <stdio.h>

// Function to compute sum of first k natural numbers
int sumNatural(int k) {
    return k * (k + 1) / 2;
}

int findPivot(int n) {
    int totalSum = sumNatural(n);

    for (int x = 1; x <= n; x++) {
        int leftSum = sumNatural(x);
        int rightSum = totalSum - sumNatural(x - 1); // includes x

        if (leftSum == rightSum) {
            return x;
        }
    }

    return -1;
}

int main() {
    int n;
    printf("Enter positive integer n: ");
    scanf("%d", &n);

    int pivot = findPivot(n);

    printf("%d\n", pivot);

    return 0;
}
