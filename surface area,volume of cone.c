
#include <stdio.h>
#include <math.h>
int main()
{
    float r, h, sa, volume;
    printf("Enter the radius and height of the cone: ");
    scanf("%f %f", &r, &h);
    sa = 3.14 * r * (r + sqrt(r * r + h * h));
    volume = 1.0 / 3.0 * 3.14 * r * r * h;
    printf("Surface area of the cone: %f\n", sa);
    printf("Volume of the cone: %f\n", volume);
    return 0;
}