//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSums[MAX_ROWS] = {0};
    int rows, cols;

    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    // Print the sum of each row
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    return 0;
}