//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int isStrongNumber(int num) {
    int originalNum = num;
    int sumOfFactorials = 0;

    while (num > 0) {
        int digit = num % 10;
        sumOfFactorials += factorial(digit);
        num /= 10;
    }

    return sumOfFactorials == originalNum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isStrongNumber(number)) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
