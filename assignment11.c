#include <stdio.h>

int main()
{
    int n, i;
    int fact = 1;
    int isPrime = 1;
    float sqrt = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* Square root using simple loop */
    for(i = 1; i * i <= n; i++)
    {
        sqrt = i;
    }

    printf("Square root (approx) = %f\n", sqrt);
    printf("Square = %d\n", n * n);
    printf("Cube = %d\n", n * n * n);

    /* Prime check */
    
	int isPrime = 1;

for(i = 2; i < n; i++)
{
    if(n % i == 0)
    {
        isPrime = 0;
        break;
    }
}

if(isPrime)
    printf("Number is Prime");
else
    printf("Number is Not Prime");

    /* Factorial */
    for(i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial = %d\n", fact);

    /* Prime factors */
    printf("Prime factors are: ");

    for(i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }

    return 0;
}
