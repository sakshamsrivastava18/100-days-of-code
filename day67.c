
#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];
    int c[m + n];

    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < n) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
