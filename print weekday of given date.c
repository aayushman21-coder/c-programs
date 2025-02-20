//127.	C program to print weekday of given date.
#include <stdio.h>
#include <stdlib.h> // For exit(0)

int main()
{
    int day, month, year, total_days, weekday;
    const char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter the date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (day < 1 || day > 31 || month < 1 || month > 12)
    {
        printf("Invalid date.\n");
        exit(0);
    }

    total_days = (year - 1900) * 365 + (year - 1900) / 4; // Number of days from 1/1/1900 to 1/1/year
    switch (month - 1)
    {
    case 11:
        total_days += 30;
    case 10:
        total_days += 31;
    case 9:
        total_days += 30;
    case 8:
        total_days += 31;
    case 7:
        total_days += 31;
    case 6:
        total_days += 30;
    case 5:
        total_days += 31;
    case 4:
        total_days += 30;
    case 3:
        total_days += 31;
    case 2:
        total_days += 28;
    case 1:
        total_days += 31;
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        if (month > 2)
            total_days += 1;
    }

    total_days += day - 1;

    weekday = total_days % 7;
    printf("The weekday is: %s\n", weekdays[weekday]);

    return 0;
}