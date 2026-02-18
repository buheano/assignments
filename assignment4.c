#include <stdio.h>

int main()
{
    float basic, hra, ta, gross, tax, net;

    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;
    ta  = 0.05 * basic;

    gross = basic + hra + ta;

    tax = 0.02 * gross;

    net = gross - tax;

    printf("\nGross Salary = %.2f", gross);
    printf("\nNet Salary = %.2f", net);

    return 0;
}
