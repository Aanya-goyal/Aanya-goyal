//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int sum = 0;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements and calculate the sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Print the sum of all elements
    printf("%d\n", sum);

    return 0;
}