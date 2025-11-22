#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (n < k) {
        return -1; // Not enough elements for one subarray of size k
    }

    int maxSum = 0, windowSum = 0;

    // Calculate sum of first window of size k
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    // Slide the window from start to end of array
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; // Add new element and remove the first element of previous window
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() {
    int n, k;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int result = maxSubarraySum(arr, n, k);

    printf("Maximum sum of subarrays of size %d is %d\n", k, result);

    return 0;
}
