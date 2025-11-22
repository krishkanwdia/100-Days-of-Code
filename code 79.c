#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal traversal of the matrix:\n");

    for (int line = 1; line <= (m + n - 1); line++) {
        int start_col = (line <= n) ? 0 : (line - n);
        int count = (line <= n) ? line : (n + m - line);

        for (int j = 0; j < count; j++) {
            int row = (line <= n) ? j : (start_col + j);
            int col = (line <= n) ? (line - j - 1) : (n - j - 1);
            printf("%d ", matrix[row][col]);
        }
    }

    printf("\n");
    return 0;
}
