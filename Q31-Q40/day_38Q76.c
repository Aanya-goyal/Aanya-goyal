//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int is_symmetric = 1; // Assume the matrix is symmetric

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    if (rows != cols) {
        is_symmetric = 0; // A non-square matrix cannot be symmetric
    } else {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    is_symmetric = 0; // Found a mismatch
                    break;
                }
            }
            if (!is_symmetric) {
                break;
            }
        }
    }

    // Print the result
    if (is_symmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}