/*Program to display first n natural numbers, their sum, and their average using all the three
looping statements.*/
#include<stdio.h>

void main()
{
    int n,count,sum = 0,average;
    printf("Enter the value of n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    count = n;
    while (count>0)
     {
        sum +=count;
        count --;
     }
     printf("Sum = %d\n",sum);
    
    average = sum / n;
    printf("Average =%d", average);
}