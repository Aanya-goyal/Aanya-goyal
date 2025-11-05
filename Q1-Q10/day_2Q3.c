 /* Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
  #include<stdio.h>
int main()
{
    int lenght,breadth,perimeter,area;
    printf("enter the lenght and breadth of rectangle:");
    scanf("%d %d",&lenght,&breadth);
    area=lenght*breadth;
    perimeter=2*(lenght+breadth);
    printf("The area of rectangle=%d",area);
    printf("\nThe perimeter of rectangle=%d",perimeter);
    return 0;
}