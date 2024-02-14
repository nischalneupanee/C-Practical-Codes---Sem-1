//Program to check whether a number is even or odd.
#include<stdio.h>

void main()
{
    int num;
    printf("Enter The number: ");
    scanf("%d",&num);
    if (num%2 ==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}