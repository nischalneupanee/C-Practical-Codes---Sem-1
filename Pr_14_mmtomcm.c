//Program to express a length given in millimeters in meters, centimeters, and millimeters.
#include<stdio.h>

void main()
{
    int m,cm,mm;
    printf("Enter length in milimeter: ");
    scanf("%d",&mm);
    m = mm/1000;
    mm=mm %1000;
    cm=mm/10;
    mm=mm %10;
    printf("%dm %dcm %dmm",m,cm,mm);
}