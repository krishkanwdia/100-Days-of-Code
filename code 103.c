#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    // Calculate total sum of array elements
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Iterate over array to find pivot index
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];  // Now totalSum is right sum for index i

        if (leftSum == totalSum) {
            return i;  // Pivot index found
        }

        leftSum += arr[i];  // Update leftSum for next index
    }

    return -1;  // No pivot index found
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivot = findPivotIndex(arr, n);

    printf("%d\n", pivot);

    return 0;
}
