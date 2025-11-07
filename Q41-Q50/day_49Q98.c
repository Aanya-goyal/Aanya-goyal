//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[1024];
    
    // Read the input name
    fgets(name, sizeof(name), stdin);
    
    // Remove the newline character if present
    name[strcspn(name, "\n")] = 0;
    
    int len = strlen(name);
    int i = 0;
    
    // Print initials for all but the last word
    while (i < len) {
        // Print the first character of each word
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            // Check if it's the last word
            int j = i;
            while (j < len && name[j] != ' ') j++;
            if (j == len) {
                // Last word, print in full
                printf("%s\n", &name[i]);
                break;
            } else {
                // Not the last word, print initial
                printf("%c.", name[i]);
            }
        }
        i++;
    }
    
    return 0;
}