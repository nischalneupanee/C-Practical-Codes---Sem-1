//Program to add, subtract, multiply, and divide two whole numbers.
#include<stdio.h>

void main()
{
    int num1,num2,add,sub,mul;
    float div;
    printf("Enter the first number:\t");
    scanf("%d",&num1);
    printf("Enter the second number:\t");
    scanf("%d",&num2);
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    printf("Addition = %d\n Subtactrion =%d\n Multiplication = %d\n Division = %f",add,sub,mul,div);
}