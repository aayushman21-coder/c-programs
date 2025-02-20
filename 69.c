#include <stdio.h>
int findHCF(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int findLCM(int a, int b) {
    int hcf = findHCF(a, b);
    return (a * b) / hcf;
}

int main() {
    int num1, num2, lcm;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    lcm = findLCM(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

