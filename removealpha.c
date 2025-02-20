#include <stdio.h>

int main() {
    char a[100], b[100];
    int c = 0, d = 0;

    gets(a);

    while (a[c] != '\0') {
        if (!(a[c] >= 'a' && a[c] <= 'z') && !(a[c] >= 'A' && a[c] <= 'Z')) {
            b[d] = a[c];
            d++;
        }
        c++;
    }
    b[d] = '\0';

    printf("%s\n", b);

    return 0;
}
