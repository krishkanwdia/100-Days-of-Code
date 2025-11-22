#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Return index if element found
        }
    }
    return -1; // Return -1 if element not found
}

int main() {
    int n, x;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int result = linearSearch(arr, n, x);
    if (result != -1)
        printf("Element %d found at index %d\n", x, result);
    else
        printf("Element %d not found in the array\n", x);

    return 0;
}
