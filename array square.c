#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b = sizeof(a) / sizeof(a[0]);

    int i = 0;
    while (i < b) {
        int c = a[i] * a[i];
        printf("Square of %d is %d", a[i], c);
        i++;
    }

    return 0;
}