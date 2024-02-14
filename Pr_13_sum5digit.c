//Program to sum the digits of a positive integer which is 5 digits long.
#include<stdio.h>

void main()
{
    int num,remainder,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i;i<5;i++)
    {
        remainder = num%10;
        sum = sum + remainder;
        num /=10;
    }
    printf("The sum of number is %d",sum);
}