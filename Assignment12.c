#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int smallest = -1;

    for (int i = 2; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            smallest = i;
            break;
        }
    }

    if (smallest == -1)
    {
        printf("No common divisor other than 1.\n");
    }
    else
    {
        printf("Smallest Common Divisor: %d\n", smallest);
    }

    printf("GCD: %d\n", gcd(num1, num2));
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}