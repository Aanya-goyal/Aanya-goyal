//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int size, element;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    int arr[size + 1]; 
    printf("Enter %d sorted integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    int i;
    for (i = size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; 
    }
    arr[i + 1] = element; 

    printf("Array after insertion: ");
    for (i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
