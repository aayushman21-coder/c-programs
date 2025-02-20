#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
            int b;
  b = sizeof(a) / sizeof(a[0]);

    int c = 0;
    while (c < b / 2) {
        int d = a[c];
        a[c] = a[b - c - 1];
        a[b - c - 1] = d;
        c++;
    }

    printf("reversed array ");
    int i = 0;
    while (i < b) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");

    return 0;
}