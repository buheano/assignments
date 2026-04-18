#include <stdio.h>

void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    
    printf("Original: x=%d, y=%d\n", x, y);
    
    swapWithoutPointers(x, y);
    printf("After swapWithoutPointers: x=%d, y=%d\n", x, y);
    
    swapWithPointers(&x, &y);
    printf("After swapWithPointers: x=%d, y=%d\n", x, y);
    
    return 0;
}