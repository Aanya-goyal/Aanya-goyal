//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int main() {
    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int sum[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    // Read the number of rows and columns for the first matrix
    scanf("%d %d", &rows1, &cols1);

    // Read the first matrix elements
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read the number of rows and columns for the second matrix
    scanf("%d %d", &rows2, &cols2);

    // Read the second matrix elements
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if matrices can be added
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Error: Matrices dimensions do not match for addition.\n");
        return 1;
    }

    // Calculate the sum of the two matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum of the two matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}