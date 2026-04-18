#include <stdio.h>
#include <string.h>

// Function to calculate string length
int stringLength(char str[]) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to reverse a string
void stringReverse(char str[], char reversed[]) {
    int len = stringLength(str);
    for(int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
}

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            return 0;  // Not equal
        }
        i++;
    }
    // Check if both strings ended
    if(str1[i] == '\0' && str2[i] == '\0') {
        return 1;  // Equal
    }
    return 0;  // Not equal
}

// Function to check palindrome
int isPalindrome(char str[]) {
    int len = stringLength(str);
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len - 1 - i]) {
            return 0;  // Not palindrome
        }
    }
    return 1;  // Palindrome
}

// Function to check substring
int isSubstring(char str1[], char str2[]) {
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);
    
    for(int i = 0; i <= len1 - len2; i++) {
        int j;
        for(j = 0; j < len2; j++) {
            if(str1[i + j] != str2[j]) {
                break;
            }
        }
        if(j == len2) {
            return 1;  // Substring found
        }
    }
    return 0;  // Substring not found
}

int main() {
    char str1[100], str2[100], reversed[100];
    int choice;
    
    printf("===== STRING OPERATIONS MENU =====\n");
    printf("1. Calculate Length\n");
    printf("2. String Reversal\n");
    printf("3. Equality Check\n");
    printf("4. Check Palindrome\n");
    printf("5. Check Substring\n");
    printf("6. All Operations\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();  // Clear newline from buffer
    
    switch(choice){
    case 1:
        printf("Enter a string: ");
        fgets(str1, 100, stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Length: %d\n", stringLength(str1));
        break;
        
    case 2:
        printf("Enter a string: ");
        fgets(str1, 100, stdin);
        str1[strcspn(str1, "\n")] = '\0';
        stringReverse(str1, reversed);
        printf("Original: %s\nReversed: %s\n", str1, reversed);
        break;
        
    case 3:
        printf("Enter first string: ");
        fgets(str1, 100, stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Enter second string: ");
        fgets(str2, 100, stdin);
        str2[strcspn(str2, "\n")] = '\0';
        printf("Strings are %s\n", stringCompare(str1, str2) ? "EQUAL" : "NOT EQUAL");
        break;
        
    case 4:
        printf("Enter a string: ");
        fgets(str1, 100, stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("\"%s\" is %s\n", str1, isPalindrome(str1) ? "a PALINDROME" : "NOT a palindrome");
        break;
        
    case 5:
        printf("Enter main string: ");
        fgets(str1, 100, stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Enter substring: ");
        fgets(str2, 100, stdin);
        str2[strcspn(str2, "\n")] = '\0';
        printf("\"%s\" is %s substring\n", str2, isSubstring(str1, str2) ? "a" : "NOT a");
        break;
        
    case 6:
        printf("Enter first string: ");
        fgets(str1, 100, stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Enter second string: ");
        fgets(str2, 100, stdin);
        str2[strcspn(str2, "\n")] = '\0';
        
        printf("\n--- RESULTS ---\n");
        printf("Length: %d, %d\n", stringLength(str1), stringLength(str2));
        stringReverse(str1, reversed);
        printf("Reverse: %s\n", reversed);
        printf("Equal: %s\n", stringCompare(str1, str2) ? "YES" : "NO");
        printf("Palindrome: %s\n", isPalindrome(str1) ? "YES" : "NO");
        printf("Substring: %s\n", isSubstring(str1, str2) ? "YES" : "NO");
        break;
        
    default:
        printf("Invalid choice!\n");
}



