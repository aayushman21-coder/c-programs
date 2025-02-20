#include <stdio.h>

int main() {
    char a[100];
    int c = 0;

    gets(a);

    if (a[c] >= 'a' && a[c] <= 'z') {
        a[c] = a[c] - 32;
    }
    c++;

    while (a[c] != '\0') {
        if (a[c] >= 'A' && a[c] <= 'Z') {
            a[c] = a[c] + 32;
        }
        c++;
    }

    printf("%s\n", a);

    return 0;
}
