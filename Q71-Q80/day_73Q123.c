/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of 
non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }
    }

    // If the file is not empty and does not end with a newline, count the last line
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    fclose(file);

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}