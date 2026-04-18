#include <stdio.h>

int main() {
    int N, i;
    int evenCount = 0, oddCount = 0;
    
    printf("Enter the number of integers: ");
    scanf("%d", &N);
 
    int arr[N], even[N], odd[N];
    
    // Input N integers
    printf("Enter %d integers: ", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < N; i++) {
        if(arr[i] % 2 == 0) {
            even[evenCount] = arr[i];
            evenCount++;
        } else {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }
    
    
    printf("\nEven numbers: ");
    if(evenCount == 0) {
        printf("None");
    } else {
        for(i = 0; i < evenCount; i++) {
            printf("%d ", even[i]);
        }
    }
    
    
    printf("\nOdd numbers: ");
    if(oddCount == 0) {
        printf("None");
    } else {
        for(i = 0; i < oddCount; i++) {
            printf("%d ", odd[i]);
        }
    }
    
    printf("\n");
    return 0;
}