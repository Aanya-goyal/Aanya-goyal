//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    
    // Read input string
    fgets(str, sizeof(str), stdin);
    
    // Initialize counters
    int space_count = 0;
    int digit_count = 0;
    int special_count = 0;
    
    // Count spaces, digits, and special characters
    for (size_t i = 0; i < strlen(str); i++) {
        if (isspace((unsigned char)str[i])) {
            space_count++;
        } else if (isdigit((unsigned char)str[i])) {
            digit_count++;
        } else if (!isalnum((unsigned char)str[i]) && str[i] != '\n') {
            special_count++;
        }
    }
    
    // Print the results
    printf("Spaces=%d, Digits=%d, Special=%d\n", space_count, digit_count, special_count);
    
    return 0;
}