//36.	C program to find sum of all numbers from 0 to N without using loop
#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum of all numbers from 0 to %d is %d\n", n, sum);
    return 0;
}