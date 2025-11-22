#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[100];  // Assuming max size 100 for simplicity
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find the position to insert the element
    pos = n;  // By default insert at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space at pos
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;
    n++;  // Increase the size as array now has one more element

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
