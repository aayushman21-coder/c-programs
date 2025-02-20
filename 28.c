#include <stdio.h>

int main() {
    float basic_salary, employee_pf, employer_pf;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    employee_pf = 0.12 * basic_salary;
    employer_pf = 0.12 * basic_salary;
    printf("Employee PF contribution = %.2f\n", employee_pf);
    printf("Employer PF contribution = %.2f\n", employer_pf);

    return 0;
}

