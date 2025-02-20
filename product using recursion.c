//237.	C program to calculate the product of two numbers using recursion.
#include <stdio.h>
int product(int a, int b);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product of %d and %d is %d\n", a, b, product(a, b));
    return 0;
}
int product(int a, int b)
{
    if (b == 1)
        return a;
    else
        return a + product(a, b - 1);
}