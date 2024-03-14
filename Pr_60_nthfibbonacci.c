/*Program to find nth Fibonacci number using recursive function.*/
#include<stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void main()
{
    int num;
    printf("Enter the value of n: ");
    scanf("%d",&num);
    int result = fibonacci(num);
    printf("%d",result);
}