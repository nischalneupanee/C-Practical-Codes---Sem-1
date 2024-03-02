// Program to display your name 10 times using all the three looping statements.
#include<stdio.h>

void main()
{
    int count=10;
    for (int i = 0; i < 10; i++)
    {
        printf("Nischal Neupane\t");
    }
    printf("\n");

    while(count>=0)
    {
        printf("Nischal Neupane\t");
        count--;
    }
    printf("\n");
    count =10;
    do
    {
        printf("Nischal Neupane\t");
        count --;
    } while (count>0);
    

    
}