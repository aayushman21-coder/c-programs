
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr, i, n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Enter the elements: ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", arr + i);
            sum += *(arr + i);
        }
        printf("Sum of the elements: %d\n", sum);
        free(arr);
    }
    return 0;
}