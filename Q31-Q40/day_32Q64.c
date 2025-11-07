//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    long long number;
    int digit_count[10] = {0};
    int max_count = 0, most_frequent_digit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &number);

    while (number != 0) {
        int digit = number % 10;
        digit_count[digit]++;
        number /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > max_count) {
            max_count = digit_count[i];
            most_frequent_digit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", most_frequent_digit);

    return 0;
}