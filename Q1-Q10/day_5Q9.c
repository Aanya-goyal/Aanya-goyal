//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include<stdio.h>
#include<math.h>
int main(){
    float rate,time,principal;
    float simpleinterest,compoundinterest;
     printf("enter the principal,rate,time :");
     scanf("%.2f %.2f %.2f",&principal,&rate,&time);
     simpleinterest=(rate*principal*time)/100;
     compoundinterest=principal * pow((1+rate/100),time)-principal;
     printf("Simple interest=%.2f",simpleinterest);
     printf("compound interest=%.2f",compoundinterest);
     return 0;
}