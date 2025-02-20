//74.	C program to calculate the area of the parallelogram
#include <stdio.h>
int main()
{
    float b, h, area;
    printf("Enter the base and height of the parallelogram: ");
    scanf("%f %f", &b, &h);
    area = b * h;
    printf("Area of the parallelogram: %f\n", area);
    return 0;
}