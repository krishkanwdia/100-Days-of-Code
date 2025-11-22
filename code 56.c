#include <stdio.h>

int main() {
    int n, i;
    
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];  // Declare array of size n
    
    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print the elements of the array
    printf("Elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
