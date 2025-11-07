//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 1000
void toSentenceCase(char* str) {
    int i = 0;
    int newWord = 1; // Flag to indicate the start of a new word

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            newWord = 1; // Next character will be the start of a new word
        } else {
            if (newWord) {
                str[i] = toupper(str[i]); // Capitalize the first letter of the word
                newWord = 0; // Reset the flag
            } else {
                str[i] = tolower(str[i]); // Convert other letters to lowercase
            }
        }
        i++;
    }
}
int main() {
    char str[MAX_LENGTH];
    
    // Read the input string
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);
    
    // Convert to sentence case
    toSentenceCase(str);
    
    // Print the modified string
    printf("String in sentence case: %s", str);
    
    return 0;
}