//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int size, position, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size + 1]; 
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d) and the element: ", size);
    scanf("%d %d", &position, &element);

    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i]; 
    }
    arr[position] = element; 

    printf("Array after insertion: ");
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
