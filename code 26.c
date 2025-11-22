#include <stdio.h>

int main() {
    int n;

    // Input the upper limit
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
