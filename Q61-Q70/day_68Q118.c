//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one.
// Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int findMissingNumber(int* nums, int size) {
    int total = size * (size + 1) / 2; // Sum of first n natural numbers
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }
    return total - sum; // The missing number
}
int main() {
    int nums[MAX_SIZE];
    int size;
    
    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    // Read the elements of the array
    printf("Enter the elements of the array (0 to %d, one missing): ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Find and print the missing number
    int missingNumber = findMissingNumber(nums, size);
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}