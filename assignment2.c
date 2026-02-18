#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Result = %.2f", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
