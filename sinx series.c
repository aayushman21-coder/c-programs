
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float x, sum, t;
    printf("Enter the value of x : ");
    scanf("%f", &x);
    printf("Enter the value of n : ");
    scanf("%d", &n);
    x = x * (3.14159 / 180);
    t = x;
    sum = x;
    for (i = 1; i <= n; i++)
    {
        t = (t * (-1) * x * x) / (2 * i * (2 * i + 1));
        sum = sum + t;
    }
    printf("The value of sin(%f) = %.4f\n", x, sum);
    printf("The value of sin(%f) = %.4f\n", x, sin(x));
    return 0;
}