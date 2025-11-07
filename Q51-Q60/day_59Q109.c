//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int maxSumSubarray(int* arr, int arrSize, int k) {
    if (k > arrSize) return -1; // Invalid case

    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int windowSum = maxSum;
    for (int i = k; i < arrSize; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}
int main() {
    int arr1[] = {100, 200, 300, 400};
    int k1 = 2;
    printf("%d\n", maxSumSubarray(arr1, 4, k1)); // Output: 700

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    printf("%d\n", maxSumSubarray(arr2, 9, k2)); // Output: 39

    int arr3[] = {100, 200, 300, 400};
    int k3 = 1;
    printf("%d\n", maxSumSubarray(arr3, 4, k3)); // Output: 400

    return 0;
}