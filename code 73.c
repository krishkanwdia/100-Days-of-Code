#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    int rowSum[m];  // Array to store sum of each row

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        rowSum[i] = sum;
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < m; i++) {
        printf("Row %d sum = %d\n", i, rowSum[i]);
    }

    return 0;
}
