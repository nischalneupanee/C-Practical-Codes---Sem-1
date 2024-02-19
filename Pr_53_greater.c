//Program to find greater number between two numbers using function
#include<stdio.h>

int greater(int num1,int num2)
{
    if (num1>num2)
    {
        return num1;
    }

    else
    {
        return num2;
    }
    
}

void main()
{
    int num1,num2,greatest;
    printf("Enter the number: ");
    scanf("%d %d",&num1,&num2);
    greatest = greater(num1,num2);
    printf("The  Greater number is %d",greatest);
}