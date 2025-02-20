//C program to calculate the addition of two complex numbers
#include <stdio.h>
struct complex
{
    float real;
    float imag;
};  
int main()
{
    struct complex num1, num2, sum;
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &num2.real, &num2.imag);
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    if ( sum.imag >= 0 )
        printf("Sum of two complex numbers = %.2f + %.2fi\n", sum.real, sum.imag);
    else
        printf("Sum of two complex numbers = %.2f %.2fi\n", sum.real, sum.imag);
    return 0;
}