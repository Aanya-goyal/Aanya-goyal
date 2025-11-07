//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
void reverseWord(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char sentence[1024];
    
    // Read the input sentence
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = 0;
    
    char* wordStart = sentence;
    char* ptr = sentence;
    
    while (*ptr) {
        if (*ptr == ' ') {
            reverseWord(wordStart, ptr - 1);
            wordStart = ptr + 1;
        }
        ptr++;
    }
    // Reverse the last word
    reverseWord(wordStart, ptr - 1);
    
    // Print the modified sentence
    printf("%s\n", sentence);
    
    return 0;
}