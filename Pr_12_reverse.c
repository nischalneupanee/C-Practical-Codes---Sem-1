//Program to print a six digit integer in reverse order.
#include<stdio.h>

void main()
{
    int num,rev=0,remainder;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    printf("The reversed number is =%d",rev);
}