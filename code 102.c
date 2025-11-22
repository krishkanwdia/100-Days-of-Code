#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int res = -1;  // Store result index

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            res = mid;      // Possible ceil found
            high = mid - 1; // Search on left part for smaller index
        } else {
            low = mid + 1;  // Move right to find greater element
        }
    }

    return res;
}

int main() {
    int n, x;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target integer x: ");
    scanf("%d", &x);

    int index = ceilIndex(arr, n, x);

    if (index == -1) {
        printf("-1\n");  // No ceil present
    } else {
        printf("Index of ceil of %d: %d\n", x, index);
    }

    return 0;
}
