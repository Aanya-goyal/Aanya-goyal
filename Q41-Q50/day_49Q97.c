//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

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
    for (int i = 0; i < len; i++) {
        // Print the first character of each word
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            printf("%c.", name[i]);
        }
    }
    printf("\n");
    
    return 0;
}
