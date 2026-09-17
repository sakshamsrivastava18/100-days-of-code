#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}