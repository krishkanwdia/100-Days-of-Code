#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the subarray size k: ");
    scanf("%d", &k);

    printf("Maximum elements in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        // Print max with a space separator; no trailing space after last element
        if (i == n - k) {
            printf("%d\n", max);
        } else {
            printf("%d ", max);
        }
    }

    return 0;
}
