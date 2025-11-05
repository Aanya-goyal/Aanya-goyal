/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main(){
    int a,b,sum=0,product=0,difference=0,quotient=0;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    printf("sum=%d,difference=%d,product=%d,quotient=%d",sum,difference,product,quotient);
    return 0;
}