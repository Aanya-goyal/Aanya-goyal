//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int linear_search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    
    int result = linear_search(arr, n, key);
    
    if(result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }
    
    return 0;
}