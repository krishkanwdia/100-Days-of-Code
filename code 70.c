#include <stdio.h>

// Function to reverse elements of the array between indices start and end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the right by k steps
void rightRotate(int arr[], int n, int k) {
    k = k % n;  // To handle if k > n

    // Reverse last k elements
    reverse(arr, n - k, n - 1);
    // Reverse first n-k elements
    reverse(arr, 0, n - k - 1);
    // Reverse whole array
    reverse(arr, 0, n - 1);
}

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    rightRotate(arr, n, k);

    printf("Array after right rotation by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
