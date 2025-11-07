//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    
    // Read the input string
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;
    
    int len = strlen(str);
    
    // Generate and print all substrings
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            if (i != len - 1 || j != len - 1) {
                putchar(','); // Print comma between substrings
            }
        }
    }
    
    putchar('\n'); // New line at the end
    return 0;
}
