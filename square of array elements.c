//C program to print the square of array elements
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The square of array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i] * arr[i]);
    }
    return 0;
}