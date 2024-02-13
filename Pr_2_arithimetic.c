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
    printf("The sum of %d and %d is %d\n",num1,num2,add);
    sub = num1 - num2;
    printf("The substraction of %d and %d is %d\n",num1,num2,sub);
    mul = num1 * num2;
    printf("The multiplication of %d and %d is %d\n",num1,num2,mul);
    div = num1 / num2;
    printf("The division of %d and %d is %f\n",num1,num2,div);
}