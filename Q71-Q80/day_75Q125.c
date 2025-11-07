/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without
 overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char newLine[256];
    printf("Enter a line of text to append: ");
    // Clear the input buffer before taking new line input
    getchar();
    fgets(newLine, sizeof(newLine), stdin);

    // Append the new line to the file
    fputs(newLine, file);

    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}