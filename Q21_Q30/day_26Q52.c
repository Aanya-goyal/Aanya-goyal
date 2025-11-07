/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 && j == 1) || 
                (i == 2 && j == 1) || 
                (i == 3 && j == 1) || 
                (i == 4 && j == 1) || 
                (i == 5 && j == 1) || 
                (i == 5 && j == 2) || 
                (i == 5 && j == 3) || 
                (i == 4 && j == 3) || 
                (i == 3 && j == 3)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}