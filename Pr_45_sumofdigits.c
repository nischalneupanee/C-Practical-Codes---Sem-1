//Program that computes the sum of the digits of the given integer number
#include<stdio.h>

void main()
{
    int num,temp,count=0,sum=0,rem;
    printf("Enter the number");
    scanf("%d",num);
    temp = num;
    while (temp>0)
    {
        temp = temp/10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        rem = num %10;
        sum+=rem;
        num /=10;
    }
    printf("Sum =%d",sum);
    
}