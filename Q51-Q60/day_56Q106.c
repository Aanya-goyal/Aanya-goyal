/*Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element 
for each element of the array in order of their appearance in the array. Next greater element of an element in the
 array is the nearest element on the right which is greater than the current element. If there does not exist next greater
 of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
#include <stdio.h>
void findNextGreaterElements(int* arr, int arrSize, int* result) {
    for (int i = 0; i < arrSize; i++) {
        result[i] = -1; // Default value if no greater element is found
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                break; // Stop at the first greater element found
            }
        }
    }
}
int main() {
    int arr1[] = {1, 3, 2, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1[size1];
    findNextGreaterElements(arr1, size1, result1);
    for (int i = 0; i < size1; i++) {
        printf("%d", result1[i]);
        if (i < size1 - 1) printf(", ");
    }
    printf("\n"); // Output: 3, 4, 4, -1

    int arr2[] = {6, 8, 0, 1, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2[size2];
    findNextGreaterElements(arr2, size2, result2);
    for (int i = 0; i < size2; i++) {
        printf("%d", result2[i]);
        if (i < size2 - 1) printf(", ");
    }
    printf("\n"); // Output: 8, -1, 1, 3, -1

    int arr3[] = {1, 2, 3, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int result3[size3];
    findNextGreaterElements(arr3, size3, result3);
    for (int i = 0; i < size3; i++) {
        printf("%d", result3[i]);
        if (i < size3 - 1) printf(", ");
    }
    printf("\n"); // Output: 2, 3, 5, -1

    int arr4[] = {5, 4, 3, 1};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int result4[size4];
    findNextGreaterElements(arr4, size4, result4);
    for (int i = 0; i < size4; i++) {
        printf("%d", result4[i]);
        if (i < size4 - 1) printf(", ");
    }
    printf("\n"); // Output: -1, -1, -1, -1

    return 0;
}
