//119.	C program to validate date (Check date is valid or not).
#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Enter the date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    if (year >= 1900 && year <= 9999)
    {
        if (month >= 1 && month <= 12)
        {
            if (day >= 1 && day <= 31)
            {
                if (month == 2)
                {
                    if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && day <= 29)
                    {
                        printf("Date is valid\n");
                    }
                    else if (day <= 28)
                    {
                        printf("Date is valid\n");
                    }
                    else
                    {
                        printf("Day is invalid\n");
                    }
                }
                else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
                {
                    printf("Date is valid\n");
                }
                else if (day <= 31)
                {
                    printf("Date is valid\n");
                }
                else
                {
                    printf("Day is invalid\n");
                }
            }
            else
            {
                printf("Day is invalid\n");
            }
        }
        else
        {
            printf("Month is invalid\n");
        }
    }
    else
    {
        printf("Year is invalid\n");
    }
    return 0;
}