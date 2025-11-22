#include <stdio.h>

void mergeArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and pick smaller element at a time
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Store remaining elements of arr1
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // Store remaining elements of arr2
    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int m, n;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d sorted elements for first array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d sorted elements for second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    mergeArrays(arr1, m, arr2, n, merged);

    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
