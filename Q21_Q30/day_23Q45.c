//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>
float sumOfSeries(int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        int numerator = 2 * (i + 1);
        int denominator = 4 * i + 3;
        sum += (float)numerator / denominator;
    }
    return sum;
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    float result = sumOfSeries(terms);
    printf("Approximate sum: %.2f\n", result);

    return 0;
}