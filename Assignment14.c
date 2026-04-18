#include <stdio.h>

int main() {
    int binary, original;
    int decimal = 0;
    int base = 1;  // 2^0 = 1
    int lastDigit;
    
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    original = binary;  
    
   
    while (binary > 0) {
        lastDigit = binary % 10;  
        decimal = decimal + lastDigit * base;  
        base = base * 2;           
        binary = binary / 10;      
    }
    
    printf("Binary: %d = Decimal: %d\n", original, decimal);
    
    return 0;
}