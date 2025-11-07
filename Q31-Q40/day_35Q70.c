//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
void rotateArray(int arr[], int n, int k) {
    k = k % n; // In case k is greater than n
    int temp[100];

    // Copy last k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the rest of the elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    // Copy the k elements from temp to the front of arr
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int n, k, arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    rotateArray(arr, n, k);

    printf("The rotated array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
