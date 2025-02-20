// C program to find the normal of Matrix

#include <stdio.h>
#include <math.h>

int main()
{
    int Matrix[3][3] = {
        { 9, 8, 7 },
        { 5, 4, 6 },
        { 1, 2, 3 }
    };

    int i, j, normal = 0;

    printf("Matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf(" %d", Matrix[i][j]);

            normal = normal + (Matrix[i][j] * Matrix[i][j]);
            ;
        }
        printf("\n");
    }

    printf("Normal of matrix is: %f\n", sqrt(normal));

    return 0;
}
