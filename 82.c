#include <stdio.h>
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    long long result;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);
    result = permutation(n, r);

    printf("P(%d, %d) = %lld\n", n, r, result);

    return 0;
}

