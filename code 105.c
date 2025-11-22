#include <stdio.h>

// Function to find candidate for majority element
int findCandidate(int arr[], int n) {
    int count = 0;
    int candidate = -1;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

// Function to check if candidate is actually majority element
int isMajority(int arr[], int n, int candidate) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    return (count > n / 2);
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int candidate = findCandidate(arr, n);

    if (isMajority(arr, n, candidate)) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
