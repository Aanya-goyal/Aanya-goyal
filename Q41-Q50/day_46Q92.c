//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
char firstRepeatingLowercase(char* str) {
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                return ch; // Return the first repeating lowercase character
            }
        }
    }
    return '\0'; // Return null character if no repeating character found
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    char result = firstRepeatingLowercase(str);
    if (result != '\0') {
        printf("First repeating lowercase alphabet: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}