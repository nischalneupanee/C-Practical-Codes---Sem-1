//Write a program to compare two numbers
#include<stdio.h>

void main()
{
    int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    if (num1 > num2)
    {
        printf("num1 is greater than num2");
    }
    else if (num1 < num2)
    {
        printf("num1 is smaller than num2");
    }
    else {
        printf("num1 and num2 are equal");
    }
}