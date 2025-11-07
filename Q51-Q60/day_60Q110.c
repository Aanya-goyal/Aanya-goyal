//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each 
//subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
#include <stdlib.h>
void maxInSubarrays(int* arr, int arrSize, int k) {
    if (k > arrSize || k <= 0) return; // Invalid case

    for (int i = 0; i <= arrSize - k; i++) {
        int maxElem = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxElem) {
                maxElem = arr[i + j];
            }
        }
        printf("%d ", maxElem);
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k1 = 3;
    maxInSubarrays(arr1, 9, k1); // Output: 3 3 4 5 5 5 6

    int arr2[] = {5, 1, 3, 4, 2};
    int k2 = 1;
    maxInSubarrays(arr2, 5, k2); // Output: 5 1 3 4 2

    return 0;
}