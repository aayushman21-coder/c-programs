#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float surfaceArea, volume, spaceDiagonal;
    printf("Enter the length of the first side of the cuboid: ");
    scanf("%f", &a);

    printf("Enter the length of the second side of the cuboid: ");
    scanf("%f", &b);

    printf("Enter the length of the third side of the cuboid: ");
    scanf("%f", &c);
    surfaceArea = 2 * (a * b + b * c + c * a);
    volume = a * b * c;
    spaceDiagonal = sqrt(a * a + b * b + c * c);
    printf("The surface area of the cuboid is: %.2f\n", surfaceArea);
    printf("The volume of the cuboid is: %.2f\n", volume);
    printf("The space diagonal of the cuboid is: %.2f\n", spaceDiagonal);

    return 0;
}

