#include <stdio.h>
#include <math.h>

int main() {
    float radius, height, slantHeight, surfaceArea, volume;
    printf("Enter the radius of the base of the cone: ");
    scanf("%f", &radius);

    printf("Enter the height of the cone: ");
    scanf("%f", &height);
    slantHeight = sqrt(radius * radius + height * height);
    surfaceArea = M_PI * radius * (radius + slantHeight);
    volume = (1.0/3.0) * M_PI * radius * radius * height;
    printf("The surface area of the cone is: %.2f\n", surfaceArea);
    printf("The volume of the cone is: %.2f\n", volume);

    return 0;
}

