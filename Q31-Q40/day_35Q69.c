//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int findSecondLargest(int arr[], int n) {
    int first, second;
    first = second = -2147483648;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}
int main() {
    int n, arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
    return 0;
}