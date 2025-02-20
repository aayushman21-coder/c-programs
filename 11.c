#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i;

    printf("Enter marks for five subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5;

    if (percentage >= 60) {
        printf("First Division\n");
    } else if (percentage >= 50) {
        printf("Second Division\n");
    } else if (percentage >= 40) {
        printf("Third Division\n");
    } else {
        printf("Fail\n");
    }
printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
