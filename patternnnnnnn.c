/*
: Write a C program to print the following pattern:

1A2B3C4D5E
1A2B3C4D
1A2B3C
1A2B
1A

*/

#include <stdio.h>
int main()
{
    int i, j;
    char ch = 'A';
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d%c", j, ch++);
        }
        ch = 'A';
        printf("\n");
    }
    return 0;
}