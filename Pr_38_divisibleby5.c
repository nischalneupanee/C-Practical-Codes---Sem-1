/*Program to find out sum of all numbers completely divisible by 5 among n numbers given 
by the user*/

#include<stdio.h>

void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%5 == 0)
        {
            sum += i;
        }
    }
     printf("The sum of numbers is %d",sum);
}