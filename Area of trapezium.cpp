//C program to calculate the area of Trapezium
#include <stdio.h>
int main()
{
    float a, b, h, area;
    printf("Enter the two bases and height of the trapezium: ");
    scanf("%f %f %f", &a, &b, &h);
    area = 0.5 * (a + b) * h;
    printf("Area of the trapezium: %f\n", area);
    return 0;
}
