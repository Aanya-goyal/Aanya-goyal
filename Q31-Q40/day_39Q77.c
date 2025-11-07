//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int diagonal_elements[MAX_SIZE] = {0};
    int is_distinct = 1; // Assume diagonal elements are distinct

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < rows && i < cols; i++) {
        int diag_elem = matrix[i][i];
        // Check if this diagonal element has been seen before
        for (int k = 0; k < i; k++) {
            if (diagonal_elements[k] == diag_elem) {
                is_distinct = 0; // Found a duplicate
                break;
            }
        }
        if (!is_distinct) {
            break;
        }
        diagonal_elements[i] = diag_elem; // Store the diagonal element
    }

    // Print the result
    if (is_distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}