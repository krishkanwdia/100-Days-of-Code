#include <stdio.h>
#define MAX 100

int main() {
    int matrix[MAX][MAX];
    int n, i, j, distinct = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check distinctness of diagonal elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
