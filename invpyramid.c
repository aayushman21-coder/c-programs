#include <stdio.h>

int main() {
    int i,j,k,n = 5;

    for  (i = 0; i < n; i++) {

        for (j= 0; j < 2 * i; j++)
            printf(" ");

        for (k = 0; k < 2 * (n - i) - 1; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
}

