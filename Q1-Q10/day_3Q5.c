/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/
#include<stdio.h>
int main(){
    int C,F;
    printf("Enter the temperature in celsius=");
    scanf("%d",&C);
    F=(C*(9/5)+32);
    printf("The temperture in Farhenhiet=%.d",F);
    return 0;

}