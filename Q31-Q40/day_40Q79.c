//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
#define MAX 100
void diagonalTraversal(int matrix[MAX][MAX], int rows, int cols) {
    for (int line = 1; line <= (rows + cols - 1); line++) {
        int start_col = (line < cols) ? 0 : line - cols + 1;
        int count = (line < cols) ? line : cols - start_col;
        
        for (int j = 0; j < count; j++) {
            int row = (line < cols) ? j : line - cols + 1 + j;
            int col = start_col + j;
            printf("%d ", matrix[row][col]);
        }
    }
    printf("\n");
}
int main() {
    int matrix[MAX][MAX];
    int rows, cols;
    
    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);
    
    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Perform diagonal traversal
    diagonalTraversal(matrix, rows, cols);
    
    return 0;
}