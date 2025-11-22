#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix1[m][n], matrix2[m][n], sum[m][n];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix2[i][j]);

    // Adding the two matrices
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    return 0;
}
