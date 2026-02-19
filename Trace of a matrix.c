#include <stdio.h>

int main() {
    int a[50][50], rows, cols, i, j, trace = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Trace is only defined for square matrices.\n");
        return 0;
    }

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate trace (sum of diagonal elements)
    for (i = 0; i < rows; i++) {
        trace += a[i][i];
    }

    printf("Trace of the matrix = %d\n", trace);

    return 0;
}
