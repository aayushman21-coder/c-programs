//C program to calculate the area of the rhombus
#include <stdio.h>
int main()
{
    float d1, d2, area;
    printf("Enter the diagonals of the rhombus: ");
    scanf("%f %f", &d1, &d2);
    area = 0.5 * d1 * d2;
    printf("Area of the rhombus: %f\n", area);
    return 0;
}
