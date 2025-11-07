//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}
int main() {
    int size, target;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d sorted integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target integer to search: ");
    scanf("%d", &target);

    int result = binary_search(arr, size, target);
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}