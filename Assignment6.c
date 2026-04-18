#include <stdio.h>

// Iterative (using loop)
int factIter(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

// Recursive (calls itself)
int factRecur(int n) {
    if(n <= 1) return 1;
    return n * factRecur(n - 1);
}

int main() {
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    if(n < 0) {
        printf("Error: Negative number!\n");
        return 1;
    }
    
    printf("Iterative: %d! = %d\n", n, factIter(n));
    printf("Recursive: %d! = %d\n", n, factRecur(n));
    
    return 0;
}