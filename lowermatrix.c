#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
