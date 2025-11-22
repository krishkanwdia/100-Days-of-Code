#include <stdio.h>

int main() {
    int m, n, sum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements in the matrix = %d\n", sum);
    return 0;
}
