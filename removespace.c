#include <stdio.h>

int main() {
    char a[100], b[100];
    int c = 0, d = 0;

    gets(a);

    while (a[c] != '\0') {
        if (a[c] != ' ') {
            b[d] = a[c];
            d++;
        }
        c++;
    }
   

    printf("%s\n", b);

    return 0;
}
