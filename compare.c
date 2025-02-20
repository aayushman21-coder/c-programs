//C program to compare strings using strcmp() function.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }
    return 0;
}