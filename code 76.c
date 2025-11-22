#include <stdio.h>
#define MAX 100

int main() {
    int matrix[MAX][MAX];
    int n, i, j, symmetric = 1;

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry by comparing matrix[i][j] with matrix[j][i]
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
