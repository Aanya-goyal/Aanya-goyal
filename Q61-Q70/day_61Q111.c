//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative 
//integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window.
// Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
#include <stdlib.h>
void firstNegativeInSubarrays(int* arr, int arrSize, int k) {
    if (k > arrSize || k <= 0) return; // Invalid case

    for (int i = 0; i <= arrSize - k; i++) {
        int foundNegative = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                foundNegative = 1;
                break;
            }
        }
        if (!foundNegative) {
            printf("0 ");
        }
    }
    printf("\n");
}
int main() {
    int arr1[] = {-8, 2, 3, -6, 10};
    int k1 = 2;
    firstNegativeInSubarrays(arr1, 5, k1); // Output: -8 0 -6 -6

    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int k2 = 3;
    firstNegativeInSubarrays(arr2, 8, k2); // Output: -1 -1 -7 -15 -15 0

    int arr3[] = {12, 1, 3, 5};
    int k3 = 3;
    firstNegativeInSubarrays(arr3, 4, k3); // Output: 0 0

    return 0;
}
