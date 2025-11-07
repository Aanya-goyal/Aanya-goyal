//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int isPerfectNumber(int num) {
    if (num <= 1) {
        return 0; // Not a perfect number
    }

    int sumOfDivisors = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sumOfDivisors += i;
        }
    }

    return sumOfDivisors == num;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfectNumber(number)) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}