//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
#define MAX 100
void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int colFirst, int rowSecond, int colSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colFirst; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}
int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int rowFirst, colFirst, rowSecond, colSecond;
    
    // Input dimensions of first matrix
    scanf("%d %d", &rowFirst, &colFirst);
    
    // Input elements of first matrix
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colFirst; j++) {
            scanf("%d", &first[i][j]);
        }
    }
    
    // Input dimensions of second matrix
    scanf("%d %d", &rowSecond, &colSecond);
    
    // Input elements of second matrix
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < colSecond; j++) {
            scanf("%d", &second[i][j]);
        }
    }
    
    // Check if multiplication is possible
    if (colFirst != rowSecond) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    
    // Multiply the matrices
    multiplyMatrices(first, second, result, rowFirst, colFirst, rowSecond, colSecond);
    
    // Print the result matrix
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}