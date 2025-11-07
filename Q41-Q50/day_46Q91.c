//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
void removeVowels(char* str) {
    int i, j = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j++] = ch;
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    removeVowels(str);
    printf("String after removing vowels: %s\n", str);
    return 0;
}