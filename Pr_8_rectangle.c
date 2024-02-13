#include<stdio.h>

void main()
{
    int length, breadth, perimeter, area;
    printf("Enter the length : ");
    scanf("%d",&length);
    printf("Enter the breadth : ");
    scanf("%d",&breadth);
    perimeter = 2*(length+breadth),
    area = length*breadth;
    printf("The perimeter of rectangle is= %d\n",perimeter);
    printf("The area of rectangle is= %d",area);
}