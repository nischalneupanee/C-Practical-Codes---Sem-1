#include<stdio.h>

void main()
{
    int r, pi=3.14,area,circum;
    printf("Enter the radius:\t");
    scanf("%d",&r);
    area = pi*r*r;
    circum = 2*pi*r;
    printf("The area of circle is: %d\n",area);
    printf("The circumference of circle is: %d",circum);
}