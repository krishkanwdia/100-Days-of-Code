#include <stdio.h>

int findRepeated(int arr[], int n) {
    int freq[n];
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > 1) {
            return arr[i];
        }
    }
    return -1; // if no repeated element found (though problem states exactly one repeated)
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = findRepeated(arr, n);
    printf("Repeated element: %d\n", repeated);

    return 0;
}
