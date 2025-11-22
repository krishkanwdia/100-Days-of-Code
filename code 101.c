#include <stdio.h>

// Function to find first occurrence of target using binary search
int findFirstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;  // Move left to find earlier occurrence
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find last occurrence of target using binary search
int findLastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;  // Move right to find later occurrence
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements (possible duplicates): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target to find: ");
    scanf("%d", &target);

    int first = findFirstOccurrence(arr, n, target);
    int last = findLastOccurrence(arr, n, target);

    if (first == -1) {
        printf("-1 -1\n");
    } else {
        printf("%d %d\n", first, last);
    }

    return 0;
}
