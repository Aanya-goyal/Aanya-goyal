#include<stdio.h>
int main(){
    int lenght,breadth, perimeter;
    printf("enter the lenght of the rectangle:");
    scanf("%d",&lenght);
    printf("enter the breadth of the rectangle:");
    scanf("%d",&breadth);
    perimeter=2*(lenght+breadth);
    printf("the perimeter of the rectangle: %d",perimeter);
    return 0;

}