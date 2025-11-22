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

    printf("First negative integers in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;  // 0 indicates no negative found
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }
        printf("%d", firstNegative);
        if (i != n - k) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}
