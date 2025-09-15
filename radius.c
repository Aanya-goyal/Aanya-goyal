#include<stdio.h>
int main(){
    float radius, pie;
    printf("enter radius of circle:");
    scanf("%f",&radius);
    double area;
    pie=3.14;
    area=pie*(radius*radius);
    printf("area of circle:%lf",area);
    return 0;
}