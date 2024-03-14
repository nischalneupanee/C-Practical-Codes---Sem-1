/*Program to find product of first n natural numbers using recursive function.*/
#include<stdio.h>

int firstnprdct(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else
    {
        return num * firstnprdct(num-1);
    }
}

void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The product of %d natural numbers is %d",n,firstnprdct(n));
}