#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate power
double power(double base, int exponent) {
    double result = 1.0;
    for(int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    double x, rad, sum, term;
    int n, i, j, sign;
    
    printf("Enter angle in degrees: ");
    scanf("%lf", &x);
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    // Convert degrees to radians
    rad = x * 3.14159265359 / 180;
    
    sum = rad;
    sign = -1;
    
    // Calculate sine series
    for(i = 2; i <= n; i++) {
        int exponent = 2 * i - 1;
        
        // Calculate power and factorial
        double powVal = power(rad, exponent);
        long long factVal = factorial(exponent);
        
        term = powVal / factVal;
        sum = sum + (sign * term);
        sign = -sign;
    }
    
    printf("\nsin(%.2f°) = %lf\n", x, sum);
    printf("Using library function: sin(%.2f°) = %lf\n", x, sin(rad));
    
    return 0;
}