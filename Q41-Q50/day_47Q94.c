//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
void findLongestWord(char* sentence, char* longestWord) {
    int maxLength = 0;
    char* token = strtok(sentence, " ");
    
    while (token != NULL) {
        int len = strlen(token);
        if (len > maxLength) {
            maxLength = len;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " ");
    }
}
int main() {
    char sentence[256];
    char longestWord[256] = "";
    
    // Read the input sentence
    fgets(sentence, sizeof(sentence), stdin);
    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = 0;
    
    findLongestWord(sentence, longestWord);
    
    printf("%s\n", longestWord);
    
    return 0;
}