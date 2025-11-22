#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (to find kth smallest element): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 1;
    }

    // Sort the array using qsort
    qsort(arr, n, sizeof(int), compare);

    // kth smallest element is at index k-1
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
