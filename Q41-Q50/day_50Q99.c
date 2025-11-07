//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main() {
    char date[11]; // Format: dd/04/yyyy
    char month[] = "Apr";
    
    // Read the input date
    fgets(date, sizeof(date), stdin);
    
    // Remove the newline character if present
    date[strcspn(date, "\n")] = 0;
    
    // Replace '/' with '-' and change month to "Apr"
    date[2] = '-';
    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';
    date[6] = '-';
    
    // Print the modified date
    printf("%s\n", date);
    
    return 0;
}
