/*Program to calculate factorial of a number using recursive function and the same program without using recursive function.*/
#include<stdio.h>

int factorial(int n)
{
    int fact = 1;
    while (n>0)
    {
        fact *= n;
        n = n-1;
    }
    return fact;
    
}

int recfactorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    return (n*recfactorial(n-1));
    
}

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result =factorial(num);
    printf("%d\n",result);
    result =recfactorial(num);
    printf("%d",result);
}