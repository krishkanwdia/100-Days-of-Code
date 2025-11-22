#include <stdio.h>

int main() {
    int arr[100], n, element, pos, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the element (1 to %d): ", n+1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right from the end to position
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the given position
    arr[pos - 1] = element;
    n++; // Increase array size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
