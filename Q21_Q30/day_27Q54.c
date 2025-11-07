/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main() {
    int i, j, space;
    int n = 4; // Number of layers in the upper part

    // Print the upper part of the pattern
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= (n - i); space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower part of the pattern
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= (n - i); space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}