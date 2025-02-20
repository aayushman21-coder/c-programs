//325.	C Program to Read and Print a RxC Matrix, R and C must be input by the User
#include <stdio.h>
int main()
{
    int arr[100][100], r, c, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}