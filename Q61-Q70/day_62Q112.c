//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous
// subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest 
//(least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>
#include <stdlib.h>
int maxSubarraySum(int* arr, int arrSize) {
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];

    for (int i = 1; i < arrSize; i++) {
        maxEndingHere = (arr[i] > maxEndingHere + arr[i]) ? arr[i] : maxEndingHere + arr[i];
        maxSoFar = (maxSoFar > maxEndingHere) ? maxSoFar : maxEndingHere;
    }

    return maxSoFar;
}
int main() {
    int arr1[] = {2, 3, -8, 7, -1, 2, 3};
    printf("%d\n", maxSubarraySum(arr1, 7)); // Output: 11

    int arr2[] = {-2, -4};
    printf("%d\n", maxSubarraySum(arr2, 2)); // Output: -2

    int arr3[] = {5, 4, 1, 7, 8};
    printf("%d\n", maxSubarraySum(arr3, 5)); // Output: 25

    return 0;
}