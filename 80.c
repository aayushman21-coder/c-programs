#include <stdio.h>
#include <math.h>

int main() {
    float radius, surfaceArea, volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    surfaceArea = 4 * M_PI * radius * radius;
    volume = (4.0/3.0) * M_PI * radius * radius * radius;
    printf("The surface area of the sphere is: %.2f\n", surfaceArea);
    printf("The volume of the sphere is: %.2f\n", volume);

    return 0;
}

