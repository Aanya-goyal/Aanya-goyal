//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
void merge_arrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    for(int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(int j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }
}
int main() {
    int n1, n2;
    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int merged[n1 + n2];
    merge_arrays(arr1, n1, arr2, n2, merged);
    
    printf("Merged array: ");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}