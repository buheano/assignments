#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char source[100], destination[100];
    char ch;
    
    // Get filenames
    printf("Enter source file: ");
    scanf("%s", source);
    printf("Enter destination file: ");
    scanf("%s", destination);
    
    // Open files
    src = fopen(source, "r");
    if(src == NULL) {
        printf("Error: Cannot open source file!\n");
        exit(1);
    }
    
    dest = fopen(destination, "w");
    if(dest == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(src);
        exit(1);
    }
    
    // Copy file character by character
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    
    printf("File copied successfully!\n");
    
    // Close files
    fclose(src);
    fclose(dest);
    
    return 0;
}