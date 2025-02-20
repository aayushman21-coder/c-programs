#include <stdio.h>

struct distance {
    int feet;
    float inches;
};

int main() {
    struct distance d1, d2, sum;

    printf("enter first distance (feet inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);

    printf("enter second distance (feet inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if (sum.inches >= 12) {
        sum.feet++;
        sum.inches -= 12;
    }

    printf("sum: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}