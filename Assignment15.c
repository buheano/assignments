#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNum, rangedRandomNum;
    
    srand(time(0));
    
    // Generate a random number
    randomNum = rand();
    printf("Random number: %d\n", randomNum);
    
    
    rangedRandomNum = rand() % 100;
    printf("Random number (0-99): %d\n", rangedRandomNum);
    
    
    printf("Random number (1-100): %d\n", (rand() % 100) + 1);
    
    
    int min = 10, max = 50;
    int customRange = (rand() % (max - min + 1)) + min;
    printf("Random number (%d-%d): %d\n", min, max, customRange);
    
    return 0;
}