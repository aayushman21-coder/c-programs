//C program to demonstrate example of global and local scope
#include<stdio.h>
int a = 10;
int main()
{
    int b = 20;
    printf("Global variable a = %d\n", a);
    printf("Local variable b = %d\n", b);
    return 0;
}
