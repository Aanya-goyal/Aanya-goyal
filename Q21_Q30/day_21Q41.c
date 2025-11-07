//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int swapFirstAndLastDigit(int num) {
   
    if (num < 10) {
        return num;
    }

    int firstDigit = num;
    int lastDigit = num % 10;
    int numDigits = 0;
    int temp = num;

    while (temp >= 10) {
        temp /= 10;
        numDigits++;
    }
    firstDigit = temp;

    int placeValue = 1;
    for (int i = 0; i < numDigits; i++) {
        placeValue *= 10;
    }

    int middlePart = (num % placeValue) / 10;

    int swappedNum = lastDigit * placeValue + middlePart * 10 + firstDigit;

    return swappedNum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = swapFirstAndLastDigit(number);
    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}