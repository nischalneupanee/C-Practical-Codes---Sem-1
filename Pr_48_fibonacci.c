//Program to obtain the first 25 numbers of Fibonacci series
#include<stdio.h>

void main()
{
    int num,num1,num2;
    printf("Enter the number: ");
    scanf("%d",&num);
    num1 = 0;
    num2 =1;
    for (int i = 0; i < num-5; i++)
    {
        printf("%d\t",num1);
        printf("%d\t",num2);
        num1 = num1 + num2;
        num2 = num2 + num1;
    }
    
    
}