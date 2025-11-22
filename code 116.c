#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target integer: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n && !found; i++) {
        for (int j = i + 1; j < n && !found; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("-1 -1\n");
    }

    return 0;
}
