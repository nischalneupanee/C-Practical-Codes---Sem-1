//Program to display all the leap years starting from 1900 to 2000.
#include<stdio.h>

void main()
{
    printf("Leap Years:\n");
    for (int year = 1900; year <= 2000; year++)
    {
       if ((year%4 == 0 && year%100!=0)|| year%400 == 0)
       {
        printf("%d\t",year);
       }
       
    }
    
}