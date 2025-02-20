//252.	C program to find the sum of the Harmonic Progression (H.P.) series
#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0;
    printf("Enter the number of terms of the H.P. series: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("The sum of the H.P. series is: %.2f\n", sum);
    return 0;
}