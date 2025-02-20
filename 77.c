#include <stdio.h>
#include <math.h>

int main() {
    float radius, height, surfaceArea, volume;
    printf("Enter the radius of the base of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    surfaceArea = 2 * M_PI * radius * (radius + height);
    volume = M_PI * radius * radius * height;
    printf("The surface area of the cylinder is: %.2f\n", surfaceArea);
    printf("The volume of the cylinder is: %.2f\n", volume);

    return 0;
}

