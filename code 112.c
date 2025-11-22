#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++) {
        if (max_ending_here < 0) {
            max_ending_here = arr[i];
        } else {
            max_ending_here += arr[i];
        }
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = maxSubarraySum(arr, n);
    printf("Maximum sum of contiguous subarray is: %d\n", result);

    return 0;
}
